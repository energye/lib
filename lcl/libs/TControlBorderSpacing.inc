// constructor
function TControlBorderSpacing_Create(OwnerControl: TControl; ADefault: TControlBorderSpacingDefaultPtr): TControlBorderSpacing; extdecl;
var
  InADefault: TControlBorderSpacingDefault;
begin
  {$define handleExceptionID := 22300}
  handleExceptionBegin
  InADefault := TControlBorderSpacingDefaultToPas(ADefault);
  Result := TControlBorderSpacing.Create(OwnerControl, @InADefault);
  handleExceptionEnd
end;

// function
function TControlBorderSpacing_IsEqual(AObj: TControlBorderSpacing; Spacing: TControlBorderSpacing): LongBool; extdecl;
begin
  {$define handleExceptionID := 22301}
  handleExceptionBegin
  Result := AObj.IsEqual(Spacing);
  handleExceptionEnd
end;

// function
function TControlBorderSpacing_GetSideSpace(AObj: TControlBorderSpacing; Kind: TAnchorKind): Integer; extdecl;
begin
  {$define handleExceptionID := 22302}
  handleExceptionBegin
  Result := AObj.GetSideSpace(Kind);
  handleExceptionEnd
end;

// function
function TControlBorderSpacing_GetSpace(AObj: TControlBorderSpacing; Kind: TAnchorKind): Integer; extdecl;
begin
  {$define handleExceptionID := 22303}
  handleExceptionBegin
  Result := AObj.GetSpace(Kind);
  handleExceptionEnd
end;

// procedure
procedure TControlBorderSpacing_AssignTo(AObj: TControlBorderSpacing; Dest: TPersistent); extdecl;
begin
  {$define handleExceptionID := 22304}
  handleExceptionBegin
  AObj.AssignTo(Dest);
  handleExceptionEnd
end;

// procedure
procedure TControlBorderSpacing_GetSpaceAround(AObj: TControlBorderSpacing; var SpaceAround: TRect); extdecl;
var
  OutSpaceAround: TRect;
begin
  {$define handleExceptionID := 22305}
  handleExceptionBegin
  OutSpaceAround := SpaceAround;
  AObj.GetSpaceAround(OutSpaceAround);
  SpaceAround := OutSpaceAround;
  handleExceptionEnd
end;

// procedure
procedure TControlBorderSpacing_AutoAdjustLayout(AObj: TControlBorderSpacing; var AXProportion: Double; var AYProportion: Double); extdecl;
begin
  {$define handleExceptionID := 22306}
  handleExceptionBegin
  AObj.AutoAdjustLayout(AXProportion, AYProportion);
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_Control(AObj: TControlBorderSpacing): TControl; extdecl;
begin
  {$define handleExceptionID := 22307}
  handleExceptionBegin
  Result := AObj.Control;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_Space(ASet: LongBool; AObj: TControlBorderSpacing; Kind: TAnchorKind; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Space[Kind] := AValue
  end else
    Result := AObj.Space[Kind];
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_AroundLeft(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22309}
  handleExceptionBegin
  Result := AObj.AroundLeft;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_AroundTop(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22310}
  handleExceptionBegin
  Result := AObj.AroundTop;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_AroundRight(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22311}
  handleExceptionBegin
  Result := AObj.AroundRight;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_AroundBottom(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22312}
  handleExceptionBegin
  Result := AObj.AroundBottom;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_ControlLeft(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22313}
  handleExceptionBegin
  Result := AObj.ControlLeft;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_ControlTop(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22314}
  handleExceptionBegin
  Result := AObj.ControlTop;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_ControlWidth(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22315}
  handleExceptionBegin
  Result := AObj.ControlWidth;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_ControlHeight(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22316}
  handleExceptionBegin
  Result := AObj.ControlHeight;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_ControlRight(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22317}
  handleExceptionBegin
  Result := AObj.ControlRight;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_ControlBottom(AObj: TControlBorderSpacing): Integer; extdecl;
begin
  {$define handleExceptionID := 22318}
  handleExceptionBegin
  Result := AObj.ControlBottom;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_Left(ASet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionID := 22319}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Left := AValue
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_Top(ASet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionID := 22320}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Top := AValue
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_Right(ASet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionID := 22321}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Right := AValue
  end else
    Result := AObj.Right;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_Bottom(ASet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionID := 22322}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bottom := AValue
  end else
    Result := AObj.Bottom;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_Around(ASet: LongBool; AObj: TControlBorderSpacing; AValue: TSpacingSize): TSpacingSize; extdecl;
begin
  {$define handleExceptionID := 22323}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Around := AValue
  end else
    Result := AObj.Around;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_InnerBorder(ASet: LongBool; AObj: TControlBorderSpacing; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 22324}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InnerBorder := AValue
  end else
    Result := AObj.InnerBorder;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_CellAlignHorizontal(ASet: LongBool; AObj: TControlBorderSpacing; AValue: TControlCellAlign): TControlCellAlign; extdecl;
begin
  {$define handleExceptionID := 22325}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CellAlignHorizontal := AValue
  end else
    Result := AObj.CellAlignHorizontal;
  handleExceptionEnd
end;

// property
function TControlBorderSpacing_CellAlignVertical(ASet: LongBool; AObj: TControlBorderSpacing; AValue: TControlCellAlign): TControlCellAlign; extdecl;
begin
  {$define handleExceptionID := 22326}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CellAlignVertical := AValue
  end else
    Result := AObj.CellAlignVertical;
  handleExceptionEnd
end;

// event
procedure TControlBorderSpacing_OnChange(AObj: TControlBorderSpacing; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnChange}
  LCLEventMethodCode
end;

exports
  TControlBorderSpacing_Create,
  TControlBorderSpacing_IsEqual,
  TControlBorderSpacing_GetSideSpace,
  TControlBorderSpacing_GetSpace,
  TControlBorderSpacing_AssignTo,
  TControlBorderSpacing_GetSpaceAround,
  TControlBorderSpacing_AutoAdjustLayout,
  TControlBorderSpacing_Control,
  TControlBorderSpacing_Space,
  TControlBorderSpacing_AroundLeft,
  TControlBorderSpacing_AroundTop,
  TControlBorderSpacing_AroundRight,
  TControlBorderSpacing_AroundBottom,
  TControlBorderSpacing_ControlLeft,
  TControlBorderSpacing_ControlTop,
  TControlBorderSpacing_ControlWidth,
  TControlBorderSpacing_ControlHeight,
  TControlBorderSpacing_ControlRight,
  TControlBorderSpacing_ControlBottom,
  TControlBorderSpacing_Left,
  TControlBorderSpacing_Top,
  TControlBorderSpacing_Right,
  TControlBorderSpacing_Bottom,
  TControlBorderSpacing_Around,
  TControlBorderSpacing_InnerBorder,
  TControlBorderSpacing_CellAlignHorizontal,
  TControlBorderSpacing_CellAlignVertical,
  TControlBorderSpacing_OnChange;