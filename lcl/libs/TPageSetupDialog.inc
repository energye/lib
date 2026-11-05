// constructor
function TPageSetupDialog_Create(TheOwner: TComponent): TPageSetupDialog; extdecl;
begin
  {$define handleExceptionID := 18200}
  handleExceptionBegin
  Result := TPageSetupDialog.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TPageSetupDialog_AttachTo(ASet: LongBool; AObj: TPageSetupDialog; AValue: TCustomForm): TCustomForm; extdecl;
begin
  {$define handleExceptionID := 18201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AttachTo := AValue
  end else
    Result := AObj.AttachTo;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_PageWidth(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageWidth := AValue
  end else
    Result := AObj.PageWidth;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_PageHeight(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PageHeight := AValue
  end else
    Result := AObj.PageHeight;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_MarginLeft(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginLeft := AValue
  end else
    Result := AObj.MarginLeft;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_MarginTop(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginTop := AValue
  end else
    Result := AObj.MarginTop;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_MarginRight(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginRight := AValue
  end else
    Result := AObj.MarginRight;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_MarginBottom(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MarginBottom := AValue
  end else
    Result := AObj.MarginBottom;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_MinMarginLeft(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinMarginLeft := AValue
  end else
    Result := AObj.MinMarginLeft;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_MinMarginTop(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinMarginTop := AValue
  end else
    Result := AObj.MinMarginTop;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_MinMarginRight(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinMarginRight := AValue
  end else
    Result := AObj.MinMarginRight;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_MinMarginBottom(ASet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 18211}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinMarginBottom := AValue
  end else
    Result := AObj.MinMarginBottom;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_Options(ASet: LongBool; AObj: TPageSetupDialog; AValue: TPageSetupDialogOptions): TPageSetupDialogOptions; extdecl;
begin
  {$define handleExceptionID := 18212}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

// property
function TPageSetupDialog_Units(ASet: LongBool; AObj: TPageSetupDialog; AValue: TPageMeasureUnits): TPageMeasureUnits; extdecl;
begin
  {$define handleExceptionID := 18213}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Units := AValue
  end else
    Result := AObj.Units;
  handleExceptionEnd
end;

// event
procedure TPageSetupDialog_OnDialogResult(AObj: TPageSetupDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDialogResultEvent}
  {$DEFINE EventName := OnDialogResult}
  LCLEventMethodCode
end;

function TPageSetupDialog_TClass(): TClass; extdecl;
begin
  Result := TPageSetupDialog;
end;

exports
  TPageSetupDialog_Create,
  TPageSetupDialog_AttachTo,
  TPageSetupDialog_PageWidth,
  TPageSetupDialog_PageHeight,
  TPageSetupDialog_MarginLeft,
  TPageSetupDialog_MarginTop,
  TPageSetupDialog_MarginRight,
  TPageSetupDialog_MarginBottom,
  TPageSetupDialog_MinMarginLeft,
  TPageSetupDialog_MinMarginTop,
  TPageSetupDialog_MinMarginRight,
  TPageSetupDialog_MinMarginBottom,
  TPageSetupDialog_Options,
  TPageSetupDialog_Units,
  TPageSetupDialog_OnDialogResult,
  TPageSetupDialog_TClass;