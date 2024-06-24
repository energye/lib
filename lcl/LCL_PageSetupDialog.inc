
//constructor
function PageSetupDialog_Create(TheOwner: TComponent): TPageSetupDialog; extdecl;
begin
  handleExceptionBegin
  Result := TPageSetupDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function PageSetupDialog_AttachTo(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: TCustomForm): TCustomForm; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AttachTo := AValue;
  end else
    Result := AObj.AttachTo;
  handleExceptionEnd
end;

//property
function PageSetupDialog_PageWidth(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PageWidth := AValue;
  end else
    Result := AObj.PageWidth;
  handleExceptionEnd
end;

//property
function PageSetupDialog_PageHeight(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PageHeight := AValue;
  end else
    Result := AObj.PageHeight;
  handleExceptionEnd
end;

//property
function PageSetupDialog_MarginLeft(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginLeft := AValue;
  end else
    Result := AObj.MarginLeft;
  handleExceptionEnd
end;

//property
function PageSetupDialog_MarginTop(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginTop := AValue;
  end else
    Result := AObj.MarginTop;
  handleExceptionEnd
end;

//property
function PageSetupDialog_MarginRight(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginRight := AValue;
  end else
    Result := AObj.MarginRight;
  handleExceptionEnd
end;

//property
function PageSetupDialog_MarginBottom(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MarginBottom := AValue;
  end else
    Result := AObj.MarginBottom;
  handleExceptionEnd
end;

//property
function PageSetupDialog_MinMarginLeft(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinMarginLeft := AValue;
  end else
    Result := AObj.MinMarginLeft;
  handleExceptionEnd
end;

//property
function PageSetupDialog_MinMarginTop(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinMarginTop := AValue;
  end else
    Result := AObj.MinMarginTop;
  handleExceptionEnd
end;

//property
function PageSetupDialog_MinMarginRight(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinMarginRight := AValue;
  end else
    Result := AObj.MinMarginRight;
  handleExceptionEnd
end;

//property
function PageSetupDialog_MinMarginBottom(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinMarginBottom := AValue;
  end else
    Result := AObj.MinMarginBottom;
  handleExceptionEnd
end;

//property
function PageSetupDialog_Options(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: TPageSetupDialogOptions): TPageSetupDialogOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function PageSetupDialog_Units(AIsSet: LongBool; AObj: TPageSetupDialog; AValue: TPageMeasureUnits): TPageMeasureUnits; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Units := AValue;
  end else
    Result := AObj.Units;
  handleExceptionEnd
end;

//function
function PageSetupDialog_Class(): TClass; extdecl;
begin
  Result := TPageSetupDialog;
end;

//property event
procedure PageSetupDialog_SetOnDialogResult(AObj: TPageSetupDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDialogResultEvent}
  {$DEFINE EventName := OnDialogResult}
  EventMethodCode
end;


exports
  PageSetupDialog_Create,
  PageSetupDialog_AttachTo,
  PageSetupDialog_PageWidth,
  PageSetupDialog_PageHeight,
  PageSetupDialog_MarginLeft,
  PageSetupDialog_MarginTop,
  PageSetupDialog_MarginRight,
  PageSetupDialog_MarginBottom,
  PageSetupDialog_MinMarginLeft,
  PageSetupDialog_MinMarginTop,
  PageSetupDialog_MinMarginRight,
  PageSetupDialog_MinMarginBottom,
  PageSetupDialog_Options,
  PageSetupDialog_Units,
  PageSetupDialog_Class,
  PageSetupDialog_SetOnDialogResult;