
//constructor
function ParaAttributes_Create(AOwner: TRichMemo): TParaAttributes; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TParaAttributes.Create(AOwner);
  handleExceptionEnd
end;

//property
function ParaAttributes_Alignment(AIsSet: LongBool; AObj: TParaAttributes; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionFuncName :='Alignment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function ParaAttributes_FirstIndent(AIsSet: LongBool; AObj: TParaAttributes; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='FirstIndent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FirstIndent := AValue;
  end else
    Result := AObj.FirstIndent;
  handleExceptionEnd
end;

//property
function ParaAttributes_LeftIndent(AIsSet: LongBool; AObj: TParaAttributes; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='LeftIndent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LeftIndent := AValue;
  end else
    Result := AObj.LeftIndent;
  handleExceptionEnd
end;

//property
function ParaAttributes_RightIndent(AIsSet: LongBool; AObj: TParaAttributes; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='RightIndent'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RightIndent := AValue;
  end else
    Result := AObj.RightIndent;
  handleExceptionEnd
end;

//property
function ParaAttributes_Numbering(AIsSet: LongBool; AObj: TParaAttributes; AValue: TNumberingStyle): TNumberingStyle; extdecl;
begin
  {$define handleExceptionFuncName :='Numbering'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Numbering := AValue;
  end else
    Result := AObj.Numbering;
  handleExceptionEnd
end;

//property
function ParaAttributes_TabCount(AIsSet: LongBool; AObj: TParaAttributes; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='TabCount'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabCount := AValue;
  end else
    Result := AObj.TabCount;
  handleExceptionEnd
end;

//property
function ParaAttributes_Tab(AIsSet: LongBool; AObj: TParaAttributes; Index: Byte; AValue: LongInt): LongInt; extdecl;
begin
  {$define handleExceptionFuncName :='Tab'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Tab[Index] := AValue;
  end else
    Result := AObj.Tab[Index];
  handleExceptionEnd
end;

//function
function ParaAttributes_Class(): TClass; extdecl;
begin
  Result := TParaAttributes;
end;


exports
  ParaAttributes_Create,
  ParaAttributes_Alignment,
  ParaAttributes_FirstIndent,
  ParaAttributes_LeftIndent,
  ParaAttributes_RightIndent,
  ParaAttributes_Numbering,
  ParaAttributes_TabCount,
  ParaAttributes_Tab,
  ParaAttributes_Class;