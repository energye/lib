library liblcl;

{$mode delphi}

{$IFnDEF WINDOWS}
  {$define UseCThreads}
{$ENDIF}

uses
  {$IFDEF UNIX}{$IFDEF UseCThreads}cthreads,{$ENDIF}{$ENDIF}
    Interfaces, InterfaceBase
  // LCL Units
  ,{$I uLCLUnits.inc}
  // CEF Units
  {$IF defined(LCLWin32) or defined(LCLGTK2) or defined(LCLGTK3) or defined(LCLCocoa)}
  {$I ./cef/CEFUnits.inc}
  {$ENDIF}
  // Webview2 Units
  {$IFDEF LCLWin32}
  {$I uWVWindowsUnits.inc}
  {$ENDIF}
  // Webkit2 Units
  {$IFDEF LCLGTK3}
  {$I uWVLinuxUnits.inc}
  {$ENDIF}
  // Webkit2 Units
  {$IFDEF LCLCocoa}
  {$I uWVDarwinUnits.inc}
  {$ENDIF}
  // test
  //,testapi
;

{$IFDEF WINDOWS}
  //{$R *.res}
  {$SetPEFlags IMAGE_FILE_LARGE_ADDRESS_AWARE}
{$ENDIF}

{$I ExtDecl.inc}
{$I ./common/LazarusDef.inc}
{$I ./common/LCLMisc.inc}
{$I ./common/WidgetInterfaces.inc}

// Export API Auto Generate

{$I ./lcl/LCLImport.inc}

// CEF Auto Generate
{$IF defined(LCLWin32) or defined(LCLGTK2) or defined(LCLGTK3) or defined(LCLCocoa)}
{$I ./cef/CEFImports.inc}
{$ENDIF}

// Webview2 Auto Generate
{$IFDEF LCLWin32}
{$I ./wv/libs/WINDOWSImport.inc}
{$I ./wv/libs/WindowsPreDef.inc}
{$ENDIF}

// Webkit2 Auto Generate
{$IFDEF LCLGTK3}
{$I ./wv/libs/LINUXImport.inc}
{$ENDIF}

// Webkit2 Auto Generate
{$IFDEF LCLCocoa}
{$I ./wv/libs/DARWINImport.inc}
{$ENDIF}

// test
//{$I ./TestAPI.inc}



{$R *.res}

begin
  //TCrCocoaApplication.sharedApplication; // VF 需要？？
  // LazarusResources

  RequireDerivedFormResource := False;
  IsMultiThread := True;
end.

