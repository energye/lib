// constructor
function TSynAutoComplete_Create(AOwner: TComponent): TSynAutoComplete; extdecl;
begin
  {$define handleExceptionID := 41900}
  handleExceptionBegin
  Result := TSynAutoComplete.Create(AOwner);
  handleExceptionEnd
end;

// function
function TSynAutoComplete_EditorsCount(AObj: TSynAutoComplete): integer; extdecl;
begin
  {$define handleExceptionID := 41901}
  handleExceptionBegin
  Result := AObj.EditorsCount();
  handleExceptionEnd
end;

// function
procedure TSynAutoComplete_GetTokenList(AObj: TSynAutoComplete;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 41902}
  handleExceptionBegin
  StringBufferCreate(AObj.GetTokenList(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TSynAutoComplete_GetTokenValue(AObj: TSynAutoComplete; Token: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 41903}
  handleExceptionBegin
  StringBufferCreate(AObj.GetTokenValue(Token), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TSynAutoComplete_Execute(AObj: TSynAutoComplete; token: PChar; aEditor: TCustomSynEdit); extdecl;
begin
  {$define handleExceptionID := 41904}
  handleExceptionBegin
  AObj.Execute(token, aEditor);
  handleExceptionEnd
end;

// property
function TSynAutoComplete_AutoCompleteList(ASet: LongBool; AObj: TSynAutoComplete; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 41905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoCompleteList := AValue
  end else
    Result := AObj.AutoCompleteList;
  handleExceptionEnd
end;

// property
procedure TSynAutoComplete_EndOfTokenChr(ASet: LongBool; AObj: TSynAutoComplete; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 41906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EndOfTokenChr := AValue
  end else
    StringBufferCreate(AObj.EndOfTokenChr, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynAutoComplete_ShortCut(ASet: LongBool; AObj: TSynAutoComplete; AValue: TShortCut): TShortCut; extdecl;
begin
  {$define handleExceptionID := 41907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShortCut := AValue
  end else
    Result := AObj.ShortCut;
  handleExceptionEnd
end;

// property
function TSynAutoComplete_ExecCommandID(ASet: LongBool; AObj: TSynAutoComplete; AValue: TSynEditorCommand): TSynEditorCommand; extdecl;
begin
  {$define handleExceptionID := 41908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExecCommandID := AValue
  end else
    Result := AObj.ExecCommandID;
  handleExceptionEnd
end;

function TSynAutoComplete_TClass(): TClass; extdecl;
begin
  Result := TSynAutoComplete;
end;

exports
  TSynAutoComplete_Create,
  TSynAutoComplete_EditorsCount,
  TSynAutoComplete_GetTokenList,
  TSynAutoComplete_GetTokenValue,
  TSynAutoComplete_Execute,
  TSynAutoComplete_AutoCompleteList,
  TSynAutoComplete_EndOfTokenChr,
  TSynAutoComplete_ShortCut,
  TSynAutoComplete_ExecCommandID,
  TSynAutoComplete_TClass;