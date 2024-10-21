//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

procedure TString_Create(out Result: TString); extdecl;
begin
  {$define handleExceptionFuncName :='TString_Create'}
  handleExceptionBegin
  Result := TString.Create;
  handleExceptionEnd
end;

procedure TString_Free(var TObj: TString); extdecl;
begin
  {$define handleExceptionFuncName :='TString_Free'}
  handleExceptionBegin
  TObj.Destroy;
  TObj := nil;
  handleExceptionEnd
end;

procedure TString_SetValue(const TObj: TString; const Value: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='TString_SetValue'}
  handleExceptionBegin
  TObj.SetValue(StrPas(Value));
  handleExceptionEnd
end;

function TString_GetValue(const TObj: TString; out Value: PChar): NativeInt; extdecl;
begin
  {$define handleExceptionFuncName :='TString_GetValue'}
  handleExceptionBegin
  Value := PChar(TObj.GetValue());
  Result := TObj.GetSize();
  handleExceptionEnd
end;

exports
  TString_Create,
  TString_Free,
  TString_SetValue,
  TString_GetValue;
