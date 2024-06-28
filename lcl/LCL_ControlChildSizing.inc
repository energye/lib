
//constructor
function ControlChildSizing_Create(OwnerControl: TWinControl): TControlChildSizing; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TControlChildSizing.Create(OwnerControl);
  handleExceptionEnd
end;

//property
function ControlChildSizing_Control(AObj: TControlChildSizing): TWinControl; extdecl;
begin
  {$define handleExceptionFuncName :='Control'}
  handleExceptionBegin
  Result := AObj.Control;
  handleExceptionEnd
end;

//property
function ControlChildSizing_LeftRightSpacing(AIsSet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='LeftRightSpacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LeftRightSpacing := AValue;
  end else
    Result := AObj.LeftRightSpacing;
  handleExceptionEnd
end;

//property
function ControlChildSizing_TopBottomSpacing(AIsSet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='TopBottomSpacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TopBottomSpacing := AValue;
  end else
    Result := AObj.TopBottomSpacing;
  handleExceptionEnd
end;

//property
function ControlChildSizing_HorizontalSpacing(AIsSet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='HorizontalSpacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HorizontalSpacing := AValue;
  end else
    Result := AObj.HorizontalSpacing;
  handleExceptionEnd
end;

//property
function ControlChildSizing_VerticalSpacing(AIsSet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='VerticalSpacing'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.VerticalSpacing := AValue;
  end else
    Result := AObj.VerticalSpacing;
  handleExceptionEnd
end;

//property
function ControlChildSizing_EnlargeHorizontal(AIsSet: LongBool; AObj: TControlChildSizing; AValue: TChildControlResizeStyle): TChildControlResizeStyle; extdecl;
begin
  {$define handleExceptionFuncName :='EnlargeHorizontal'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnlargeHorizontal := AValue;
  end else
    Result := AObj.EnlargeHorizontal;
  handleExceptionEnd
end;

//property
function ControlChildSizing_EnlargeVertical(AIsSet: LongBool; AObj: TControlChildSizing; AValue: TChildControlResizeStyle): TChildControlResizeStyle; extdecl;
begin
  {$define handleExceptionFuncName :='EnlargeVertical'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EnlargeVertical := AValue;
  end else
    Result := AObj.EnlargeVertical;
  handleExceptionEnd
end;

//property
function ControlChildSizing_ShrinkHorizontal(AIsSet: LongBool; AObj: TControlChildSizing; AValue: TChildControlResizeStyle): TChildControlResizeStyle; extdecl;
begin
  {$define handleExceptionFuncName :='ShrinkHorizontal'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShrinkHorizontal := AValue;
  end else
    Result := AObj.ShrinkHorizontal;
  handleExceptionEnd
end;

//property
function ControlChildSizing_ShrinkVertical(AIsSet: LongBool; AObj: TControlChildSizing; AValue: TChildControlResizeStyle): TChildControlResizeStyle; extdecl;
begin
  {$define handleExceptionFuncName :='ShrinkVertical'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShrinkVertical := AValue;
  end else
    Result := AObj.ShrinkVertical;
  handleExceptionEnd
end;

//property
function ControlChildSizing_Layout(AIsSet: LongBool; AObj: TControlChildSizing; AValue: TControlChildrenLayout): TControlChildrenLayout; extdecl;
begin
  {$define handleExceptionFuncName :='Layout'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Layout := AValue;
  end else
    Result := AObj.Layout;
  handleExceptionEnd
end;

//property
function ControlChildSizing_ControlsPerLine(AIsSet: LongBool; AObj: TControlChildSizing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ControlsPerLine'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ControlsPerLine := AValue;
  end else
    Result := AObj.ControlsPerLine;
  handleExceptionEnd
end;

//function
function ControlChildSizing_IsEqual(AObj: TControlChildSizing; Sizing: TControlChildSizing): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEqual'}
  handleExceptionBegin
  Result := AObj.IsEqual(Sizing);
  handleExceptionEnd
end;

//function
function ControlChildSizing_Class(): TClass; extdecl;
begin
  Result := TControlChildSizing;
end;

//procedure
procedure ControlChildSizing_AssignTo(AObj: TControlChildSizing; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionFuncName :='AssignTo'}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

//procedure
procedure ControlChildSizing_SetGridSpacing(AObj: TControlChildSizing; Spacing: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetGridSpacing'}
  handleExceptionBegin
  AObj.SetGridSpacing(Spacing);
  handleExceptionEnd
end;

//property event
procedure ControlChildSizing_SetOnChange(AObj: TControlChildSizing; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  ControlChildSizing_Create,
  ControlChildSizing_Control,
  ControlChildSizing_LeftRightSpacing,
  ControlChildSizing_TopBottomSpacing,
  ControlChildSizing_HorizontalSpacing,
  ControlChildSizing_VerticalSpacing,
  ControlChildSizing_EnlargeHorizontal,
  ControlChildSizing_EnlargeVertical,
  ControlChildSizing_ShrinkHorizontal,
  ControlChildSizing_ShrinkVertical,
  ControlChildSizing_Layout,
  ControlChildSizing_ControlsPerLine,
  ControlChildSizing_IsEqual,
  ControlChildSizing_Class,
  ControlChildSizing_AssignTo,
  ControlChildSizing_SetGridSpacing,
  ControlChildSizing_SetOnChange;