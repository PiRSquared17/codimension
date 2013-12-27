Name: codimension
Version: 1.3
Release: 1
License: GPLv3+
Group: Development/Tools/IDE
Summary: Python IDE with emphasis on graphical representation
BuildArch: noarch

Source0: %{name}-%{version}.tar.gz
Source1: %{name}.png
Source2: %{name}.sharedmimeinfo
Source3: %{name}.desktop

Requires: python2
Requires: codimension-parser >= 1.3
Requires: PyQt4 qscintilla-python
Requires: pylint python-chardet graphviz

BuildRequires: desktop-file-utils

%description
Codimension is an experimental Python IDE based on QT, QScintilla,
and a custom Python parser.

Features:

* Hierarchical file/class/function/global variable browsers
* Docstrings as item tooltips in browsers
* Filtering in browsers
* Jump to a module import/symbol definition using a hot key
* Navigation history within a file and between files
* Syntax highlighting in the source code editor
* Pixmap viewer
* Skin support
* Diagram of imports for a file, directory, or the whole project
* Search in files
* Incremental search/replace in a file
* Search for a file/class/function/global variable in the project
* One-click intgration of external tools (pylint, pymetrics)
* Simple line counter
* McCabe cyclomatic complexity for a file or many files
* New file templates

%prep
%setup -q -n %{name}-%{version}

%build

%install
mkdir -p $RPM_BUILD_ROOT/%{_datadir}
cp -pr src $RPM_BUILD_ROOT%{_datadir}/%{name}
cp -pr thirdparty $RPM_BUILD_ROOT%{_datadir}/%{name}/
mkdir -p $RPM_BUILD_ROOT/%{_bindir}
ln -s ../share/codimension/codimension.py $RPM_BUILD_ROOT/%{_bindir}/%{name}
mkdir -p $RPM_BUILD_ROOT%{_datadir}/pixmaps
cp -p %{SOURCE1} $RPM_BUILD_ROOT%{_datadir}/pixmaps/%{name}.png
mkdir -p $RPM_BUILD_ROOT%{_datadir}/mime/packages
cp -p %{SOURCE2} $RPM_BUILD_ROOT%{_datadir}/mime/packages/%{name}.xml
desktop-file-install --dir $RPM_BUILD_ROOT%{_datadir}/applications %{SOURCE3}

%post
update-mime-database %{_datadir}/mime
update-desktop-database -q

%postun
update-mime-database %{_datadir}/mime
update-desktop-database -q

%files
%defattr(-,root,root,-)
%{_bindir}/*
%{_datadir}/%{name}
%{_datadir}/applications/*.desktop
%{_datadir}/mime/packages/*.xml
%{_datadir}/pixmaps/*.png

%changelog
* Thu Dec 15 2011 Dmitry Kazimirov <dk@revl.org> - 1.3-1
- New upstream version with lots of bug fixes and new features:
- Bug fix: correct tooltips for search results in the HTML
  files. Issue #188.
- Bug fix: prevent NUL characters from appearing in the text
  editor.  Issue #203.
- New feature: automatically trim empty lines when the cursor
  moves.  Issue #294.
- New feature: Ctrl+N iterates over highlighted words if the
  current word matches the one previously highlighted. Ctrl+, or
  Ctrl+. iterates over the highlighted words regardless of what
  word the cursor is on. Issue #303.
- New feature: double click on the status bar path label copies
  the file pathname to the clipboard.
- New feature: detection of files changes outside of
  Codimension.
- Bug fix: loading a project from the file system browser checks
  if all currently open files have no modifications. Issue #295.
- Some fixes in the replace implementation.
- Bug fix: incorrect interpretation of the search pattern in
  'Find in files'.  Issue #301.
- Ctrl+C/Ctrl+Insert to copy the current line if there is no
  selection.  Issue #304.
- New editor setting: automatic removal of trailing spaces on
  saving.  Issue #300.
- New configuration setting: whether HOME should move the cursor
  to the first column or to the first non space character.
  Issue #302.
- The 'find' and 'replace' search histories are shared now.
  Issue #298.
- Incremental find/replace now makes the match a text selection.
  Issue #297.
- Bug fix in the replace implementation: adding separate button
  'replace and move'. Issue #277.
- Ctrl+F and Ctrl+R select the text to search even if the
  widget has already been displayed. Issue #291.
- Ctrl+X is now a synonym to Shift+Del. Issue #290.
- Bug fix: F3 and Shift+F3 now work for the find/replace search
  string depending of what dialog was shown last. Issue #289.
- The help and welcome screens have been updated. Issue #281,
  Issue #279.
- Shift+Home/Shift+End now select to the beginning/end of the
  current line.  Issue #286.
- Support for Alt+Shift+Left/Right - select a part of a
  "CamelCased" word.  Issue #287.
- Alt+Shift+Up/Down now select to the beginning/end of a
  paragraph. Issue #288.
- Support for Shift+Del - copy to the buffer and delete a
  selection (if there's any) or the current line otherwise.
  Issue #285.
- HOME and END now jump to the beginning/end of the visible
  line. Issue #284.
- Support for the Alt+Up and Alt+Down hot keys.
- The history hot keys have been changed to Alt+PgDown
  and Alt+PgUp.
- Support for Alt+Left and Alt+Right hot keys (jump over a part
  of a "CamelCased" word).
- Bug fix: check that all the modified files are saved before
  letting a new project to be created. Issue #273.
- Move the focus to the text editor if the focus was not in the
  editor and the currently active tab is clicked. Issue #264.

* Wed Oct 19 2011 Dmitry Kazimirov <dk@revl.org> - 1.2-1
- New upstream version with a significant bug fix:
  exception during checking for a newer version
  is properly handled.
- Minor bug fix: 'remove recent project' toolbar
  button is enabled properly now.
- Brace highlighting can now be switched on and off.
- New feature: block/line commenting/uncommenting
  with Ctrl-M.
- Better file modification indicator.
- Autoindent is switched on by default now.

* Tue Sep 13 2011 Dmitry Kazimirov <dk@revl.org> - 1.1-1
- New upstream version, which provides a hint message for
  pymetrics failures.
- Syntax error exception in the file browser is now
  correctly handled.

* Mon Sep 05 2011 Dmitry Kazimirov <dk@revl.org> - 1.0-1
- Initial release.