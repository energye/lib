
//constructor
function ScrollingWinControl_Create(TheOwner: TComponent): TScrollingWinControl; extdecl;
begin
  handleExceptionBegin
  Result := TScrollingWinControl.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ScrollingWinControl_HorzScrollBar(AIsSet: LongBool; AObj: TScrollingWinControl; AValue: TControlScrollBar): TControlScrollBar; extdecl;
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
function ScrollingWinControl_VertScrollBar(AIsSet: LongBool; AObj: TScrollingWinControl; AValue: TControlScrollBar): TControlScrollBar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VertScrollBar := AValue;
  end else
    Result := AObj.VertScrollBar;
  handleExceptionEnd
end;

//function
function ScrollingWinControl_Class(): TClass; extdecl;
begin
  Result := TScrollingWinControl;
end;

//procedure
procedure ScrollingWinControl_UpdateScrollbars(AObj: TScrollingWinControl); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateScrollbars();
  handleExceptionEnd
end;

//procedure
procedure ScrollingWinControl_ScrollInView(AObj: TScrollingWinControl; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.ScrollInView(AControl);
  handleExceptionEnd
end;


exports
  ScrollingWinControl_Create,
  ScrollingWinControl_HorzScrollBar,
  ScrollingWinControl_VertScrollBar,
  ScrollingWinControl_Class,
  ScrollingWinControl_UpdateScrollbars,
  ScrollingWinControl_ScrollInView;