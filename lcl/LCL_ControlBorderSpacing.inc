
//constructor
function ControlBorderSpacing_Create(OwnerControl: TControl; ADefault: PControlBorderSpacingDefault): TControlBorderSpacing; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TControlBorderSpacing.Create(OwnerControl, ADefault);
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_Control(AObj: TControlBorderSpacing): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='Control'}
  handleExceptionBegin
  Result := AObj.Control;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_Space(AIsSet: LongBool; AObj: TControlBorderSpacing; Kind: TAnchorKind; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Space'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Space[Kind] := AValue;
  end else
    Result := AObj.Space[Kind];
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_AroundLeft(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='AroundLeft'}
  handleExceptionBegin
  Result := AObj.AroundLeft;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_AroundTop(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='AroundTop'}
  handleExceptionBegin
  Result := AObj.AroundTop;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_AroundRight(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='AroundRight'}
  handleExceptionBegin
  Result := AObj.AroundRight;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_AroundBottom(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='AroundBottom'}
  handleExceptionBegin
  Result := AObj.AroundBottom;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_ControlLeft(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ControlLeft'}
  handleExceptionBegin
  Result := AObj.ControlLeft;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_ControlTop(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ControlTop'}
  handleExceptionBegin
  Result := AObj.ControlTop;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_ControlWidth(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ControlWidth'}
  handleExceptionBegin
  Result := AObj.ControlWidth;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_ControlHeight(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ControlHeight'}
  handleExceptionBegin
  Result := AObj.ControlHeight;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_ControlRight(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ControlRight'}
  handleExceptionBegin
  Result := AObj.ControlRight;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_ControlBottom(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ControlBottom'}
  handleExceptionBegin
  Result := AObj.ControlBottom;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_Left(AIsSet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionFuncName :='Left'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Left := AValue;
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_Top(AIsSet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionFuncName :='Top'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Top := AValue;
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_Right(AIsSet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionFuncName :='Right'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Right := AValue;
  end else
    Result := AObj.Right;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_Bottom(AIsSet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionFuncName :='Bottom'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bottom := AValue;
  end else
    Result := AObj.Bottom;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_Around(AIsSet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionFuncName :='Around'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Around := AValue;
  end else
    Result := AObj.Around;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_InnerBorder(AIsSet: LongBool; AObj: TControlBorderSpacing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='InnerBorder'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.InnerBorder := AValue;
  end else
    Result := AObj.InnerBorder;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_CellAlignHorizontal(AIsSet: LongBool; AObj: TControlBorderSpacing; AValue: TControlCellAlign): TControlCellAlign; extdecl;
begin
  {$define handleExceptionFuncName :='CellAlignHorizontal'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CellAlignHorizontal := AValue;
  end else
    Result := AObj.CellAlignHorizontal;
  handleExceptionEnd
end;

//property
function ControlBorderSpacing_CellAlignVertical(AIsSet: LongBool; AObj: TControlBorderSpacing; AValue: TControlCellAlign): TControlCellAlign; extdecl;
begin
  {$define handleExceptionFuncName :='CellAlignVertical'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CellAlignVertical := AValue;
  end else
    Result := AObj.CellAlignVertical;
  handleExceptionEnd
end;

//function
function ControlBorderSpacing_IsEqual(AObj: TControlBorderSpacing; Spacing: TControlBorderSpacing): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEqual'}
  handleExceptionBegin
  Result := AObj.IsEqual(Spacing);
  handleExceptionEnd
end;

//function
function ControlBorderSpacing_GetSideSpace(AObj: TControlBorderSpacing; Kind: TAnchorKind): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetSideSpace'}
  handleExceptionBegin
  Result := AObj.GetSideSpace(Kind);
  handleExceptionEnd
end;

//function
function ControlBorderSpacing_GetSpace1(AObj: TControlBorderSpacing; Kind: TAnchorKind): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetSpace1'}
  handleExceptionBegin
  Result := AObj.GetSpace(Kind);
  handleExceptionEnd
end;

//function
function ControlBorderSpacing_Class(): TClass; extdecl;
begin
  Result := TControlBorderSpacing;
end;

//procedure
procedure ControlBorderSpacing_AssignTo(AObj: TControlBorderSpacing; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionFuncName :='AssignTo'}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

//procedure
procedure ControlBorderSpacing_GetSpaceAround(AObj: TControlBorderSpacing; var SpaceAround: TRect); extdecl;
var
  RetSpaceAround: TRect;
begin
  {$define handleExceptionFuncName :='GetSpaceAround'}
  handleExceptionBegin
  RetSpaceAround := SpaceAround;
  AObj.GetSpaceAround(RetSpaceAround);
  SpaceAround := RetSpaceAround;
  handleExceptionEnd
end;

//procedure
procedure ControlBorderSpacing_AutoAdjustLayout(AObj: TControlBorderSpacing; var AXProportion, AYProportion: Double); extdecl;
begin
  {$define handleExceptionFuncName :='AutoAdjustLayout'}
  handleExceptionBegin
  AObj.AutoAdjustLayout(AXProportion, AYProportion);
  handleExceptionEnd
end;

//property event
procedure ControlBorderSpacing_SetOnChange(AObj: TControlBorderSpacing; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  EventMethodCode
end;


exports
  ControlBorderSpacing_Create,
  ControlBorderSpacing_Control,
  ControlBorderSpacing_Space,
  ControlBorderSpacing_AroundLeft,
  ControlBorderSpacing_AroundTop,
  ControlBorderSpacing_AroundRight,
  ControlBorderSpacing_AroundBottom,
  ControlBorderSpacing_ControlLeft,
  ControlBorderSpacing_ControlTop,
  ControlBorderSpacing_ControlWidth,
  ControlBorderSpacing_ControlHeight,
  ControlBorderSpacing_ControlRight,
  ControlBorderSpacing_ControlBottom,
  ControlBorderSpacing_Left,
  ControlBorderSpacing_Top,
  ControlBorderSpacing_Right,
  ControlBorderSpacing_Bottom,
  ControlBorderSpacing_Around,
  ControlBorderSpacing_InnerBorder,
  ControlBorderSpacing_CellAlignHorizontal,
  ControlBorderSpacing_CellAlignVertical,
  ControlBorderSpacing_IsEqual,
  ControlBorderSpacing_GetSideSpace,
  ControlBorderSpacing_GetSpace1,
  ControlBorderSpacing_Class,
  ControlBorderSpacing_AssignTo,
  ControlBorderSpacing_GetSpaceAround,
  ControlBorderSpacing_AutoAdjustLayout,
  ControlBorderSpacing_SetOnChange;