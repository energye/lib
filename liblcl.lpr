//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

library liblcl;

{$mode delphi}

{$IFnDEF WINDOWS}
  {$define UseCThreads}
{$ENDIF}

uses
{$IFDEF UNIX}{$IFDEF UseCThreads}cthreads,{$ENDIF}{$ENDIF}
  Interfaces, InterfaceBase,
{$IFDEF WINDOWS}
  Windows, MultiMon, ShlObj, ComObj, ActiveX, Win32Int, win32proc, CommCtrl, LazUTF8,
{$ENDIF}
  Types, LCLType, typinfo, LCLProc, LCLIntf, LCLStrConsts,
  Messages, LMessages, DateUtils, IniFiles, Registry,
  Forms, lazcontrols, datetimectrls, printer4lazarus,
  StdCtrls, Dialogs, ExtCtrls, Graphics, Controls, Buttons,
  ComCtrls, ToolWin, ImgList, ExtDlgs, ActnList, ColorBox,
  PrintersDlgs, DateTimePicker, Calendar, Menus, Clipbrd, CheckLst,
  MaskEdit, Grids, ValEdit, Spin, Printers, ComboEx, EditBtn,
  LResources, GraphType, Themes, LCLClasses,
  WSLCLClasses, GroupedEdit, CustApp, RichMemo, CustomTimer,
  FPCanvas, FPImage, FPReadJPEG, IntfGraphics, DividerBevel,
  LDockTree, Laz_AVL_Tree, laz.VirtualTrees, LazarusPackageIntf,
  Classes, SysUtils, LCLVersion, OpenGLContext,
{$IFDEF LCLCocoa}
  uMacOSPatchs,
{$ENDIF}
{$IFDEF LINUX}
  uLinuxPatchs,
{$ENDIF}
  uControlPatchs,
  ATGauge, ATFlatThemes,
  uGoForm, uRichEdit, uGauge,
  uString, uRunMainThread,
  //uComponents, uFormDesignerFile,
  uLinkLabel, uImageButton, xButton,
  uExceptionHandle,
  uLCL_RecordStruct, uLCL_SortMethods,
  //LCL 事件回调
  uLCL_EventCallback,

// CEF unit's
{$I UnitsCEF.inc}

// Webview2 Windows units
{$IFDEF WINDOWS}
 ,{$I UnitsWV2.inc}
{$ENDIF}

// Webkit2 MacOS units
{$IFDEF LCLCocoa}
,{$I UnitsWK2MacOS.inc}
{$ENDIF}

// Webkit2 Linux GTK3 units
{$IFDEF LCLGTK3}
,{$I UnitsWK2Linux.inc}
{$ENDIF}
;

{$IFDEF WINDOWS}
  {$R *.res}
  {$SetPEFlags IMAGE_FILE_LARGE_ADDRESS_AWARE}
{$ENDIF}

{$I ExtDecl.inc}

{$I CustomWidgetInterfaces.inc}
{$I LazarusDef.inc}

// LibLCL 宏定义
{$I liblcl.inc}

// LCL
{$I ImportLCL.inc}

// CEF
{$I ImportCEF.inc}

// Webview2 Windows
{$IFDEF WINDOWS}
{$I ImportWV.inc}
{$ENDIF}

// Webkit2 MacOS
{$IFDEF LCLCocoa}
{$ENDIF}

// Webkit2 Linux GTK3
{$IFDEF LCLGTK3}
{$I ImportWKLinux.inc}
{$ENDIF}

begin
  RequireDerivedFormResource := False;
  IsMultiThread := True;
  InitLazarusDef;
end.

