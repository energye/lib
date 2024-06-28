
//constructor
function ScrollingWinControl_Create(TheOwner: TComponent): TScrollingWinControl; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TScrollingWinControl.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ScrollingWinControl_HorzScrollBar(AIsSet: LongBool; AObj: TScrollingWinControl; AValue: TControlScrollBar): TControlScrollBar; extdecl;
begin
  {$define handleExceptionFuncName :='HorzScrollBar'}
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
  {$define handleExceptionFuncName :='VertScrollBar'}
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
  {$define handleExceptionFuncName :='UpdateScrollbars'}
  handleExceptionBegin
  AObj.UpdateScrollbars();
  handleExceptionEnd
end;

//procedure
procedure ScrollingWinControl_ScrollInView(AObj: TScrollingWinControl; AControl: TControl); extdecl;
begin
  {$define handleExceptionFuncName :='ScrollInView'}
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