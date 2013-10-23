#
# -*- coding: utf-8 -*-
#
# codimension - graphics python two-way code editor and analyzer
# Copyright (C) 2010  Sergey Satskiy sergey.satskiy@gmail.com
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
# $Id: outlinebrowser.py 1595 2013-07-11 15:27:58Z sergey.satskiy@gmail.com $
#

" File outline browser and its model "


from PyQt4.QtGui import QTreeView, QPalette
from PyQt4.QtCore import QVariant
from utils.globals import GlobalData
from browsermodelbase import BrowserModelBase
from utils.pixmapcache import PixmapCache
from filesbrowserbase import FilesBrowser
from viewitems import ( DirectoryItemType, SysPathItemType, GlobalsItemType,
                        ImportsItemType, FunctionsItemType, ClassesItemType,
                        StaticAttributesItemType, InstanceAttributesItemType,
                        CodingItemType, ImportItemType, FunctionItemType,
                        ClassItemType, DecoratorItemType, AttributeItemType,
                        GlobalItemType, ImportWhatItemType, TreeViewCodingItem,
                        TreeViewGlobalsItem, TreeViewImportsItem,
                        TreeViewFunctionsItem, TreeViewClassesItem )
from utils.settings import Settings
from autocomplete.bufferutils import getItemForDisplayPath



class OutlineBrowserModel( BrowserModelBase ):
    " Class implementing the file outline browser model "

    def __init__( self, shortName, info, parent = None ):
        BrowserModelBase.__init__( self, QVariant( shortName ), parent )
        self.populateModel( info )
        self.setTooltips( Settings().outlineTooltips )
        return

    def populateModel( self, info ):
        " Populates the browser model "
        self.clear()
        if info.encoding is not None:
            self.addItem( TreeViewCodingItem( self.rootItem, info.encoding ) )
        if info.imports:
            self.addItem( TreeViewImportsItem( self.rootItem, info ) )
        if info.globals:
            self.addItem( TreeViewGlobalsItem( self.rootItem, info ) )
        if info.functions:
            self.addItem( TreeViewFunctionsItem( self.rootItem, info ) )
        if info.classes:
            self.addItem( TreeViewClassesItem( self.rootItem, info ) )
        return


class OutlineBrowser( FilesBrowser ):
    " File outline browser "

    def __init__( self, uuid, shortName, info, parent = None ):

        FilesBrowser.__init__( self, OutlineBrowserModel( shortName, info ),
                               False, parent )

        self.__bufferUUID = uuid
        self.__bufferBroken = False

        self.header().setAutoFillBackground( True )
        self.__origHeaderBackground = self.__getOriginalHeaderBackground()
        self.__brokenHeaderBackground = self.__getBrokenHeaderBackground()
        self.setHeaderHighlight( False )

        self.setWindowTitle( 'File outline' )
        self.setWindowIcon( PixmapCache().getIcon( 'icon.png' ) )
        return

    @staticmethod
    def __converttohex( value ):
        " Converts to a 2 digits representation "
        result = hex( value ).replace( "0x", "" )
        if len( result ) == 1:
            return "0" + result
        return result

    def __getOriginalHeaderBackground( self ):
        " Retrieves the original header color as a string useful for CSS "
        headerPalette = self.header().palette()
        backgroundColor = headerPalette.color( QPalette.Background )
        r, g, b, a = backgroundColor.getRgb()
        return "#" + self.__converttohex( r ) + self.__converttohex( g ) + \
                     self.__converttohex( b )

    def __getBrokenHeaderBackground( self ):
        " Returns thr broken header background color as a string useful for CSS "
        r, g, b, a = GlobalData().skin.outdatedOutlineColor.getRgb()
        return "#" + self.__converttohex( r ) + self.__converttohex( g ) + \
                     self.__converttohex( b )

    def setHeaderHighlight( self, on ):
        " Sets or removes the header highlight "
        if on:
            color = self.__brokenHeaderBackground
            self.__bufferBroken = True
        else:
            color = self.__origHeaderBackground
            self.__bufferBroken = False

        self.header().setStyleSheet(
            'QHeaderView[highlightHeader="true"] '
            '{ background-color: ' + color + ' }' )
        self.header().setProperty( "highlightHeader", True )
        self.header().style().unpolish( self.header() )
        self.header().style().polish( self.header() )
        return

    def setTooltips( self, switchOn ):
        " Sets the tooltip mode "
        self.model().sourceModel().setTooltips( switchOn )
        return

    def reload( self ):
        " Reloads the filesystem view "
        self.model().sourceModel().populateModel()
        self.model().reset()
        self.layoutDisplay()
        return

    def mouseDoubleClickEvent( self, mouseEvent ):
        """
        Reimplemented to disable expanding/collapsing of items when
        double-clicking. Instead the double-clicked entry is opened.
        """

        index = self.indexAt( mouseEvent.pos() )
        if not index.isValid():
            return

        item = self.model().item( index )
        if item.itemType in [ GlobalsItemType,
                              ImportsItemType, FunctionsItemType,
                              ClassesItemType, StaticAttributesItemType,
                              InstanceAttributesItemType,
                              DirectoryItemType, SysPathItemType ]:
            QTreeView.mouseDoubleClickEvent( self, mouseEvent )
        else:
            self.openItem( item )
        return

    def openItem( self, item ):
        " Handles the case when an item is activated "
        if item.itemType in [ GlobalsItemType,
                              ImportsItemType, FunctionsItemType,
                              ClassesItemType, StaticAttributesItemType,
                              InstanceAttributesItemType ]:
            return

        if item.itemType in [ CodingItemType, ImportItemType, FunctionItemType,
                              ClassItemType, DecoratorItemType,
                              AttributeItemType, GlobalItemType,
                              ImportWhatItemType ]:
            # Check if the used info has no errors
            if not self.__bufferBroken:
                GlobalData().mainWindow.gotoInBuffer( self.__bufferUUID,
                                                      item.sourceObj.line )
                return

            # The info has errors, try to reparse the current buffer and see
            # if an item has changed the position
            currentInfo = self.parent().getCurrentBufferInfo()
            displayPath = item.getDisplayDataPath()
            infoItem = getItemForDisplayPath( currentInfo, displayPath )
            if infoItem is None:
                # Not found, try luck with the old info
                GlobalData().mainWindow.gotoInBuffer( self.__bufferUUID,
                                                      item.sourceObj.line )
                return
            # Found in the new parsed info - use the new line
            GlobalData().mainWindow.gotoInBuffer( self.__bufferUUID,
                                                  infoItem.line )

        return
