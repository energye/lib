//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

procedure Misc_WindowInfoAsChild(var windowInfo : TCefWindowInfoPtr; const windowParent: {$ifdef MSWINDOWS}TCEFWindowParent{$else}TCEFLinkedWindowParent{$endif}; const PWindowName: PChar{$ifdef MSWINDOWS}; aExStyle : DWORD{$endif}); extdecl;
var
  TmpWindowInfo: TCefWindowInfo;
begin
  {$define handleExceptionID := 50000}
  handleExceptionBegin
  TmpWindowInfo := TCefWindowInfoToPas(windowInfo);
  {$ifdef MSWINDOWS}
  WindowInfoAsChild(TmpWindowInfo, windowParent.Handle, windowParent.ClientRect, PCharToUStr(PWindowName), aExStyle);
  {$else}
  WindowInfoAsChild(TmpWindowInfo, windowParent.Handle, windowParent.ClientRect, PCharToUStr(PWindowName));
  {$endif}
  windowInfo := TCefWindowInfoToGo(TmpWindowInfo);
  handleExceptionEnd
end;

procedure Misc_WindowInfoAsPopUp(var windowInfo : TCefWindowInfoPtr; const windowParent: {$ifdef MSWINDOWS}TCEFWindowParent{$else}TCEFLinkedWindowParent{$endif}; const PWindowName: PChar{$ifdef MSWINDOWS}; aExStyle : DWORD{$endif}); extdecl;
var
  TmpWindowInfo: TCefWindowInfo;
begin
  {$define handleExceptionID := 50001}
  handleExceptionBegin
  TmpWindowInfo := TCefWindowInfoToPas(windowInfo);
  {$ifdef MSWINDOWS}
  WindowInfoAsPopUp(TmpWindowInfo, windowParent.Handle, PCharToUStr(PWindowName), aExStyle);
  {$else}
  WindowInfoAsPopUp(TmpWindowInfo, windowParent.Handle, PCharToUStr(PWindowName));
  {$endif}
  windowInfo := TCefWindowInfoToGo(TmpWindowInfo);
  handleExceptionEnd
end;

procedure Misc_WindowInfoAsWindowless(var windowInfo : TCefWindowInfoPtr; const windowParent: {$ifdef MSWINDOWS}TCEFWindowParent{$else}TCEFLinkedWindowParent{$endif}; const PWindowName: PChar{$ifdef MSWINDOWS}; aExStyle : DWORD{$endif}); extdecl;
var
  TmpWindowInfo: TCefWindowInfo;
begin
  {$define handleExceptionID := 50002}
  handleExceptionBegin
  TmpWindowInfo := TCefWindowInfoToPas(windowInfo);
  {$ifdef MSWINDOWS}
  WindowInfoAsWindowless(TmpWindowInfo, windowParent.Handle, PCharToUStr(PWindowName), aExStyle);
  {$else}
  WindowInfoAsWindowless(TmpWindowInfo, windowParent.Handle, PCharToUStr(PWindowName));
  {$endif}
  windowInfo := TCefWindowInfoToGo(TmpWindowInfo);
  handleExceptionEnd
end;

exports
  Misc_WindowInfoAsChild,
  Misc_WindowInfoAsPopUp,
  Misc_WindowInfoAsWindowless;
