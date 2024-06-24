
//constructor
function CustomMemo_Create(AOwner: TComponent): TCustomMemo; extdecl;
begin
  handleExceptionBegin
  Result := TCustomMemo.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomMemo_Lines(AIsSet: LongBool; AObj: TCustomMemo; AValue: TStrings): TStrings; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Lines := AValue;
  end else
    Result := AObj.Lines;
  handleExceptionEnd
end;

//property
function CustomMemo_HorzScrollBar(AIsSet: LongBool; AObj: TCustomMemo; AValue: TMemoScrollBar): TMemoScrollBar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HorzScrollBar := AValue;
  end else
    Result := AObj.HorzScrollBar;
  handleExceptionEnd
end;

//property
function CustomMemo_VertScrollBar(AIsSet: LongBool; AObj: TCustomMemo; AValue: TMemoScrollBar): TMemoScrollBar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VertScrollBar := AValue;
  end else
    Result := AObj.VertScrollBar;
  handleExceptionEnd
end;

//property
function CustomMemo_ScrollBars(AIsSet: LongBool; AObj: TCustomMemo; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ScrollBars := AValue;
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

//property
function CustomMemo_WantReturns(AIsSet: LongBool; AObj: TCustomMemo; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WantReturns := AValue;
  end else
    Result := AObj.WantReturns;
  handleExceptionEnd
end;

//property
function CustomMemo_WantTabs(AIsSet: LongBool; AObj: TCustomMemo; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WantTabs := AValue;
  end else
    Result := AObj.WantTabs;
  handleExceptionEnd
end;

//property
function CustomMemo_WordWrap(AIsSet: LongBool; AObj: TCustomMemo; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WordWrap := AValue;
  end else
    Result := AObj.WordWrap;
  handleExceptionEnd
end;

//function
function CustomMemo_Class(): TClass; extdecl;
begin
  Result := TCustomMemo;
end;

//procedure
procedure CustomMemo_Append(AObj: TCustomMemo; const AValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Append(AValue);
  handleExceptionEnd
end;


exports
  CustomMemo_Create,
  CustomMemo_Lines,
  CustomMemo_HorzScrollBar,
  CustomMemo_VertScrollBar,
  CustomMemo_ScrollBars,
  CustomMemo_WantReturns,
  CustomMemo_WantTabs,
  CustomMemo_WordWrap,
  CustomMemo_Class,
  CustomMemo_Append;