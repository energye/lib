//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

// LCL 组件单元
{$IFDEF WINDOWS}
Windows, MultiMon, ShlObj, ComObj, ActiveX, Win32Int, win32proc, CommCtrl, LazUTF8,
{$ENDIF}
Types, LCLType, TypInfo, LCLProc, LCLIntf, LCLStrConsts,
Messages, LMessages, DateUtils, IniFiles, Registry,
Forms, lazcontrols, datetimectrls, printer4lazarus,
StdCtrls, Dialogs, ExtCtrls, Graphics, Controls, Buttons, ButtonPanel, CalcForm,
ComCtrls, ToolWin, ImgList, ExtDlgs, ActnList, ColorBox, PairSplitter, PopupNotifier,
ExtendedNotebook, CheckBoxThemed, ListFilterEdit, laz.VTHeaderPopup,
PrintersDlgs, DateTimePicker, Calendar, Menus, Clipbrd, CheckLst,
MaskEdit, Grids, ValEdit, Spin, Printers, ComboEx, EditBtn,
LResources, GraphType, Themes, LCLClasses, FileCtrl, ShellCtrls, TreeFilterEdit,
WSLCLClasses, GroupedEdit, CustApp, CustomTimer,
FPCanvas, FPImage, FPReadJPEG, IntfGraphics, DividerBevel,
LDockTree, laz.VirtualTrees, LazarusPackageIntf,
Classes, SysUtils, LCLVersion, LazUtilities, lcltranslator, Translations,
OpenGLContext,
SynEdit, SynEditPointClasses, SynEditMouseCmds, SynEditMarkup, SynEditMiscClasses,
SynEditMarks, SynEditKeyCmds, SynEditTypes, SynEditHighlighter, SynEditTextTrimmer,
SynBeautifier, SynGutter, SynEditMarkupBracket, SynEditTextTabExpander, SynEditTextBase, LazSynEditText,
SynGutterBase, SynTextDrawer, SynGutterLineNumber, SynGutterCodeFolding, SynGutterChanges, SynGutterMarks,
SynGutterLineOverview, SynEditMarkupSpecialLine, LazSynTextArea, SynEditHighlighterFoldBase, SynMacroRecorder,
SynEditPlugins, SynHighlighterAny, SynCompletion, SynHighlighterCpp, SynHighlighterCss, SynEditHighlighterXMLBase,
SynHighlighterHTML, SynHighlighterJScript, SynHighlighterJava, SynHighlighterMulti, SynPluginSyncronizedEditBase,
SynPluginSyncroEdit, SynPopupMenu, SynHighlighterPython, SynHighlighterSQL, SynHighlighterXML,
StdActns,
// 3rd
{ATGauge, ATFlatThemes, RichMemo, uRichEdit, uGauge, }
// common
uEngDesigningComponent, uLazVTEditLink,
uImageButton, uCustomGraphicControl, uCustomSynMacroEvent, uLinkLabel, uXButton, uRawImageWrap, uVirtualNodeWrap, uVirtualNodeEnumeratorWrap, uScaledImageListResolutionWrap,
uEngTypes, uArrayWrap, uInjectionCallbackWrap, uArgumentsEventDelegate,
uEngForm, uControlPatchs, uDesigner, {$IFDEF LCLCocoa}uMacOSPatchs,{$ENDIF}{$IFDEF LINUX}uLinuxPatchs,{$ENDIF}
uExceptionHandle, uTools, uStringWrap, uI18n,
uRunMainThread,
// LCL Auto Generate
uLCLRecordStruct, uLCLEventCallback
