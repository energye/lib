// constructor
function TScrollingWinControl_Create(TheOwner: TComponent): TScrollingWinControl; extdecl;
begin
  {$define handleExceptionID := 1000}
  handleExceptionBegin
  Result := TScrollingWinControl.Create(TheOwner);
  handleExceptionEnd
end;

// function static
procedure TScrollingWinControl_GetControlClassDefaultSize(var Result: TSize); extdecl;
begin
  Result := TScrollingWinControl.GetControlClassDefaultSize();
end;

// procedure
procedure TScrollingWinControl_UpdateScrollbars(AObj: TScrollingWinControl); extdecl;
begin
  {$define handleExceptionID := 1001}
  handleExceptionBegin
  AObj.UpdateScrollbars();
  handleExceptionEnd
end;

// procedure
procedure TScrollingWinControl_ScrollInView(AObj: TScrollingWinControl; AControl: TControl); extdecl;
begin
  {$define handleExceptionID := 1002}
  handleExceptionBegin
  AObj.ScrollInView(AControl);
  handleExceptionEnd
end;

// property
function TScrollingWinControl_HorzScrollBar(ASet: LongBool; AObj: TScrollingWinControl; AValue: TControlScrollBar): TControlScrollBar; extdecl;
begin
  {$define handleExceptionID := 1003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HorzScrollBar := AValue
  end else
    Result := AObj.HorzScrollBar;
  handleExceptionEnd
end;

// property
function TScrollingWinControl_VertScrollBar(ASet: LongBool; AObj: TScrollingWinControl; AValue: TControlScrollBar): TControlScrollBar; extdecl;
begin
  {$define handleExceptionID := 1004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VertScrollBar := AValue
  end else
    Result := AObj.VertScrollBar;
  handleExceptionEnd
end;

function TScrollingWinControl_TClass(): TClass; extdecl;
begin
  Result := TScrollingWinControl;
end;

exports
  TScrollingWinControl_Create,
  TScrollingWinControl_GetControlClassDefaultSize,
  TScrollingWinControl_UpdateScrollbars,
  TScrollingWinControl_ScrollInView,
  TScrollingWinControl_HorzScrollBar,
  TScrollingWinControl_VertScrollBar,
  TScrollingWinControl_TClass;