// constructor
function TCustomMemo_Create(AOwner: TComponent): TCustomMemo; extdecl;
begin
  {$define handleExceptionID := 3000}
  handleExceptionBegin
  Result := TCustomMemo.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TCustomMemo_Append(AObj: TCustomMemo; const AValue: PChar); extdecl;
begin
  {$define handleExceptionID := 3001}
  handleExceptionBegin
  AObj.Append(AValue);
  handleExceptionEnd
end;

// property
function TCustomMemo_Lines(ASet: LongBool; AObj: TCustomMemo; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 3002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Lines := AValue
  end else
    Result := AObj.Lines;
  handleExceptionEnd
end;

// property
function TCustomMemo_HorzScrollBar(ASet: LongBool; AObj: TCustomMemo; AValue: TMemoScrollBar): TMemoScrollBar; extdecl;
begin
  {$define handleExceptionID := 3003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HorzScrollBar := AValue
  end else
    Result := AObj.HorzScrollBar;
  handleExceptionEnd
end;

// property
function TCustomMemo_VertScrollBar(ASet: LongBool; AObj: TCustomMemo; AValue: TMemoScrollBar): TMemoScrollBar; extdecl;
begin
  {$define handleExceptionID := 3004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VertScrollBar := AValue
  end else
    Result := AObj.VertScrollBar;
  handleExceptionEnd
end;

// property
function TCustomMemo_ScrollBars(ASet: LongBool; AObj: TCustomMemo; AValue: TScrollStyle): TScrollStyle; extdecl;
begin
  {$define handleExceptionID := 3005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScrollBars := AValue
  end else
    Result := AObj.ScrollBars;
  handleExceptionEnd
end;

// property
function TCustomMemo_WantReturns(ASet: LongBool; AObj: TCustomMemo; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WantReturns := AValue
  end else
    Result := AObj.WantReturns;
  handleExceptionEnd
end;

// property
function TCustomMemo_WantTabs(ASet: LongBool; AObj: TCustomMemo; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WantTabs := AValue
  end else
    Result := AObj.WantTabs;
  handleExceptionEnd
end;

// property
function TCustomMemo_WordWrap(ASet: LongBool; AObj: TCustomMemo; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WordWrap := AValue
  end else
    Result := AObj.WordWrap;
  handleExceptionEnd
end;

function TCustomMemo_TClass(): TClass; extdecl;
begin
  Result := TCustomMemo;
end;

exports
  TCustomMemo_Create,
  TCustomMemo_Append,
  TCustomMemo_Lines,
  TCustomMemo_HorzScrollBar,
  TCustomMemo_VertScrollBar,
  TCustomMemo_ScrollBars,
  TCustomMemo_WantReturns,
  TCustomMemo_WantTabs,
  TCustomMemo_WordWrap,
  TCustomMemo_TClass;