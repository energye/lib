// constructor
function TControlChildSizing_Create(OwnerControl: TWinControl): TControlChildSizing; extdecl;
begin
  {$define handleExceptionID := 22400}
  handleExceptionBegin
  Result := TControlChildSizing.Create(OwnerControl);
  handleExceptionEnd
end;

// function
function TControlChildSizing_IsEqual(AObj: TControlChildSizing; Sizing: TControlChildSizing): LongBool; extdecl;
begin
  {$define handleExceptionID := 22401}
  handleExceptionBegin
  Result := AObj.IsEqual(Sizing);
  handleExceptionEnd
end;

// procedure
procedure TControlChildSizing_AssignTo(AObj: TControlChildSizing; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionID := 22402}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

// procedure
procedure TControlChildSizing_SetGridSpacing(AObj: TControlChildSizing; Spacing: Integer); extdecl;
begin
  {$define handleExceptionID := 22403}
  handleExceptionBegin
  AObj.SetGridSpacing(Spacing);
  handleExceptionEnd
end;

// property
function TControlChildSizing_Control(AObj: TControlChildSizing): TWinControl; extdecl;
begin
  {$define handleExceptionID := 22404}
  handleExceptionBegin
  Result := AObj.Control;
  handleExceptionEnd
end;

// property
function TControlChildSizing_LeftRightSpacing(ASet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LeftRightSpacing := AValue
  end else
    Result := AObj.LeftRightSpacing;
  handleExceptionEnd
end;

// property
function TControlChildSizing_TopBottomSpacing(ASet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TopBottomSpacing := AValue
  end else
    Result := AObj.TopBottomSpacing;
  handleExceptionEnd
end;

// property
function TControlChildSizing_HorizontalSpacing(ASet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HorizontalSpacing := AValue
  end else
    Result := AObj.HorizontalSpacing;
  handleExceptionEnd
end;

// property
function TControlChildSizing_VerticalSpacing(ASet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.VerticalSpacing := AValue
  end else
    Result := AObj.VerticalSpacing;
  handleExceptionEnd
end;

// property
function TControlChildSizing_EnlargeHorizontal(ASet: LongBool; AObj: TControlChildSizing; AValue: TChildControlResizeStyle): TChildControlResizeStyle; extdecl;
begin
  {$define handleExceptionID := 22409}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnlargeHorizontal := AValue
  end else
    Result := AObj.EnlargeHorizontal;
  handleExceptionEnd
end;

// property
function TControlChildSizing_EnlargeVertical(ASet: LongBool; AObj: TControlChildSizing; AValue: TChildControlResizeStyle): TChildControlResizeStyle; extdecl;
begin
  {$define handleExceptionID := 22410}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EnlargeVertical := AValue
  end else
    Result := AObj.EnlargeVertical;
  handleExceptionEnd
end;

// property
function TControlChildSizing_ShrinkHorizontal(ASet: LongBool; AObj: TControlChildSizing; AValue: TChildControlResizeStyle): TChildControlResizeStyle; extdecl;
begin
  {$define handleExceptionID := 22411}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShrinkHorizontal := AValue
  end else
    Result := AObj.ShrinkHorizontal;
  handleExceptionEnd
end;

// property
function TControlChildSizing_ShrinkVertical(ASet: LongBool; AObj: TControlChildSizing; AValue: TChildControlResizeStyle): TChildControlResizeStyle; extdecl;
begin
  {$define handleExceptionID := 22412}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShrinkVertical := AValue
  end else
    Result := AObj.ShrinkVertical;
  handleExceptionEnd
end;

// property
function TControlChildSizing_Layout(ASet: LongBool; AObj: TControlChildSizing; AValue: TControlChildrenLayout): TControlChildrenLayout; extdecl;
begin
  {$define handleExceptionID := 22413}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Layout := AValue
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

// property
function TControlChildSizing_ControlsPerLine(ASet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22414}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ControlsPerLine := AValue
  end else
    Result := AObj.ControlsPerLine;
  handleExceptionEnd
end;

// event
procedure TControlChildSizing_OnChange(AObj: TControlChildSizing; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TControlChildSizing_Create,
  TControlChildSizing_IsEqual,
  TControlChildSizing_AssignTo,
  TControlChildSizing_SetGridSpacing,
  TControlChildSizing_Control,
  TControlChildSizing_LeftRightSpacing,
  TControlChildSizing_TopBottomSpacing,
  TControlChildSizing_HorizontalSpacing,
  TControlChildSizing_VerticalSpacing,
  TControlChildSizing_EnlargeHorizontal,
  TControlChildSizing_EnlargeVertical,
  TControlChildSizing_ShrinkHorizontal,
  TControlChildSizing_ShrinkVertical,
  TControlChildSizing_Layout,
  TControlChildSizing_ControlsPerLine,
  TControlChildSizing_OnChange;