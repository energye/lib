//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

procedure Misc_WindowInfoAsChild(var windowInfo : TCefWindowInfo; const windowParent: {$ifdef MSWINDOWS}TCEFWindowParent{$else}TCEFLinkedWindowParent{$endif}; const PWindowName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='WindowInfoAsChild'}
  handleExceptionBegin
  WindowInfoAsChild(windowInfo, windowParent.Handle, windowParent.ClientRect, PCharToUStr(PWindowName));
  handleExceptionEnd
end;

procedure Misc_WindowInfoAsPopUp(var windowInfo : TCefWindowInfo; const windowParent: {$ifdef MSWINDOWS}TCEFWindowParent{$else}TCEFLinkedWindowParent{$endif}; const PWindowName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='WindowInfoAsPopUp'}
  handleExceptionBegin
  WindowInfoAsPopUp(windowInfo, windowParent.Handle, PCharToUStr(PWindowName));
  handleExceptionEnd
end;

procedure Misc_WindowInfoAsWindowless(var windowInfo : TCefWindowInfo; const windowParent: {$ifdef MSWINDOWS}TCEFWindowParent{$else}TCEFLinkedWindowParent{$endif}; const PWindowName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='WindowInfoAsWindowless'}
  handleExceptionBegin
  WindowInfoAsWindowless(windowInfo, windowParent.Handle, PCharToUStr(PWindowName));
  handleExceptionEnd
end;

function Misc_CefRegisterExtension(const name, code: PChar; const Handler: ICefv8Handler): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CefRegisterExtension'}
  handleExceptionBegin
  Result := CefRegisterExtension(PCharToUStr(name), PCharToUStr(code), Handler);
  handleExceptionEnd
end;

function Misc_CheckSubprocessPath(const aSubprocessPath: PChar; var aMissingFiles: PChar) : LongBool; extdecl;
var
  MissingFiles: string;
begin
  {$define handleExceptionFuncName :='CheckSubprocessPath'}
  handleExceptionBegin
  Result := CheckSubprocessPath(StrPas(aSubprocessPath), MissingFiles);
  aMissingFiles := PChar(MissingFiles);
  handleExceptionEnd
end;

function Misc_CheckLocales(const aLocalesDirPath: PChar; var aMissingFiles: PChar; const aLocalesRequired: PChar) : LongBool; extdecl;
var
  MissingFiles: string;
begin
  {$define handleExceptionFuncName :='CheckLocales'}
  handleExceptionBegin
  Result := CheckLocales(StrPas(aLocalesDirPath), MissingFiles, StrPas(aLocalesRequired));
  aMissingFiles := PChar(MissingFiles);
  handleExceptionEnd
end;

function Misc_CheckResources(const aResourcesDirPath: PChar; var aMissingFiles: PChar) : LongBool; extdecl;
var
  MissingFiles: string;
begin
  {$define handleExceptionFuncName :='CheckResources'}
  handleExceptionBegin
  Result := CheckResources(StrPas(aResourcesDirPath), MissingFiles);
  aMissingFiles := PChar(MissingFiles);
  handleExceptionEnd
end;

function Misc_CheckDLLs(const aFrameworkDirPath: PChar; var aMissingFiles: PChar) : LongBool; extdecl;
var
  MissingFiles: string;
begin
  {$define handleExceptionFuncName :='CheckDLLs'}
  handleExceptionBegin
  Result := CheckDLLs(StrPas(aFrameworkDirPath), MissingFiles);
  aMissingFiles := PChar(MissingFiles);
  handleExceptionEnd
end;

function Misc_CefRegisterSchemeHandlerFactory(const SchemeName, DomainName : PChar; const handler: TCefResourceHandlerClass): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CefRegisterSchemeHandlerFactory'}
  handleExceptionBegin
  Result := CefRegisterSchemeHandlerFactory(PCharToUStr(SchemeName), PCharToUStr(DomainName), handler);
  handleExceptionEnd
end;

function Misc_CefClearSchemeHandlerFactories : LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CefClearSchemeHandlerFactories'}
  handleExceptionBegin
  Result := CefClearSchemeHandlerFactories();
  handleExceptionEnd
end;

function Misc_CefGetMimeType(const extension: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='CefGetMimeType'}
  handleExceptionBegin
  Result := PChar(string(CefGetMimeType(PCharToUStr(extension))));
  handleExceptionEnd
end;

function Misc_DeviceToLogicalInt32(aValue : integer; const aDeviceScaleFactor : PDouble) : integer; extdecl;
begin
  {$define handleExceptionFuncName :='DeviceToLogical'}
  handleExceptionBegin
  Result := DeviceToLogical(aValue, Double(aDeviceScaleFactor^));
  handleExceptionEnd
end;

procedure  Misc_DeviceToLogicalFloat32(aValue : PSingle; const aDeviceScaleFactor : PDouble; out Result: Single); extdecl;
begin
  {$define handleExceptionFuncName :='DeviceToLogical'}
  handleExceptionBegin
  Result := DeviceToLogical(Single(aValue^), Double(aDeviceScaleFactor^));
  handleExceptionEnd
end;

procedure Misc_DeviceToLogicalMouse(var aEvent : TCEFMouseEvent; const aDeviceScaleFactor : PDouble); extdecl;
begin
  {$define handleExceptionFuncName :='DeviceToLogical'}
  handleExceptionBegin
  DeviceToLogical(aEvent, Double(aDeviceScaleFactor^));
  handleExceptionEnd
end;

procedure Misc_DeviceToLogicalTouch(var aEvent : TCefTouchEvent; const aDeviceScaleFactor : PDouble); extdecl;
begin
  {$define handleExceptionFuncName :='DeviceToLogical'}
  handleExceptionBegin
  DeviceToLogical(aEvent, Double(aDeviceScaleFactor^));
  handleExceptionEnd
end;

procedure Misc_DeviceToLogicalPoint(var aPoint : TPoint; const aDeviceScaleFactor : PDouble); extdecl;
begin
  {$define handleExceptionFuncName :='DeviceToLogical'}
  handleExceptionBegin
  DeviceToLogical(aPoint, Double(aDeviceScaleFactor^));
  handleExceptionEnd
end;

function  Misc_LogicalToDeviceInt32(aValue : integer; const aDeviceScaleFactor : PDouble) : integer; extdecl;
begin
  {$define handleExceptionFuncName :='LogicalToDevice'}
  handleExceptionBegin
  Result := LogicalToDevice(aValue, Double(aDeviceScaleFactor^));
  handleExceptionEnd
end;

procedure Misc_LogicalToDeviceRect(var aRect : TCEFRect; const aDeviceScaleFactor : PDouble); extdecl;
begin
  {$define handleExceptionFuncName :='LogicalToDevice'}
  handleExceptionBegin
  LogicalToDevice(aRect, Double(aDeviceScaleFactor^));
  handleExceptionEnd
end;

procedure Misc_InitializeWindowHandle(var Result: TCefWindowHandle); extdecl;
begin
  {$define handleExceptionFuncName :='InitializeWindowHandle'}
  handleExceptionBegin
  InitializeWindowHandle(Result);
  handleExceptionEnd
end;

function Misc_ValidCefWindowHandle(aHandle: TCefWindowHandle): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ValidCefWindowHandle'}
  handleExceptionBegin
  Result := ValidCefWindowHandle(aHandle);
  handleExceptionEnd
end;

function Misc_GetScreenDPI(): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetScreenDPI'}
  handleExceptionBegin
  Result := GetScreenDPI();
  handleExceptionEnd
end;

procedure Misc_GetDeviceScaleFactor(var Result: single); extdecl;
begin
  {$define handleExceptionFuncName :='GetDeviceScaleFactor'}
  handleExceptionBegin
  Result := GetDeviceScaleFactor();
  handleExceptionEnd
end;

function Misc_CefPostTask(aThreadId : TCefThreadId; const aTask: ICefTask) : LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CefPostTask'}
  handleExceptionBegin
  Result := CefPostTask(aThreadId, aTask);
  handleExceptionEnd
end;

function Misc_CefPostDelayedTask(aThreadId : TCefThreadId; const aTask : ICefTask; var aDelayMs : Int64) : LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CefPostDelayedTask'}
  handleExceptionBegin
  Result := CefPostDelayedTask(aThreadId, aTask, aDelayMs);
  handleExceptionEnd
end;

function Misc_CefCurrentlyOn(aThreadId : TCefThreadId) : LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CefCurrentlyOn'}
  handleExceptionBegin
  Result := CefCurrentlyOn(aThreadId);
  handleExceptionEnd
end;

exports
  Misc_WindowInfoAsChild,
  Misc_WindowInfoAsPopUp,
  Misc_WindowInfoAsWindowless,
  Misc_CefRegisterExtension,
  Misc_CheckSubprocessPath,
  Misc_CheckLocales,
  Misc_CheckResources,
  Misc_CheckDLLs,
  Misc_CefRegisterSchemeHandlerFactory,
  Misc_CefClearSchemeHandlerFactories,
  Misc_CefGetMimeType,
  Misc_DeviceToLogicalInt32,
  Misc_DeviceToLogicalFloat32,
  Misc_DeviceToLogicalMouse,
  Misc_DeviceToLogicalTouch,
  Misc_DeviceToLogicalPoint,
  Misc_LogicalToDeviceInt32,
  Misc_LogicalToDeviceRect,
  Misc_InitializeWindowHandle,
  Misc_ValidCefWindowHandle,
  Misc_GetScreenDPI,
  Misc_GetDeviceScaleFactor,
  Misc_CefPostTask,
  Misc_CefPostDelayedTask,
  Misc_CefCurrentlyOn;
