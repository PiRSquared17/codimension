#
# -*- coding: utf-8 -*-
#
# codimension - graphics python two-way code editor and analyzer
# Copyright (C) 2010  Sergey Satskiy <sergey.satskiy@gmail.com>
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
# $Id$
#

#
# The file was taken from eric 4.4.3 and adopted for codimension.
# Original copyright:
# Copyright (c) 2007 - 2010 Detlev Offenbach <detlev@die-offenbachs.de>
#

""" Implementation of labels which can change its
    content to fit the label size """

from PyQt4.QtCore    import Qt, QString
from PyQt4.QtGui     import QLabel
from utils.fileutils import compactPath

class FitLabel( QLabel ):
    """ a label that squeezes its contents to fit it's size """

    def __init__( self, parent = None ):
        QLabel.__init__( self, parent )
        self.__text = ''
        return

    def paintEvent( self, event ):
        """ Called when painting is required """

        metric = self.fontMetrics()
        if metric.width( self.__text ) > self.contentsRect().width():
            QLabel.setText( self,
                            metric.elidedText( self.text(),
                                               Qt.ElideMiddle, self.width() ) )
        else:
            QLabel.setText( self, self.__text )

        QLabel.paintEvent( self, event )
        return

    def setText( self, txt ):
        """ Set the text to be shown """

        self.__text = txt
        QLabel.setText( self, txt )
        return


class FitPathLabel( QLabel ):
    """ a label showing a file path compacted to fit it's size """

    def __init__( self, parent = None ):
        QLabel.__init__( self, parent )

        self.__path = ''
        return

    def setPath( self, path ):
        """ Set the path to be shown """

        self.__path = path
        QLabel.setText( self, path )
        return

    def paintEvent( self, event ):
        """ Called when painting is required """

        metric = self.fontMetrics()
        if metric.width( self.__path ) > self.contentsRect().width():
            QLabel.setText( self,
                compactPath( self.__path,
                             self.contentsRect().width(),
                             self.length ) )
        else:
            QLabel.setText( self, self.__path )
        QLabel.paintEvent( self, event )
        return

    def length( self, txt ):
        """ Length of a text in pixels """

        return self.fontMetrics().width( txt )
