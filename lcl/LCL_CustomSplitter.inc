
//constructor
function CustomSplitter_Create(TheOwner: TComponent): TCustomSplitter; extdecl;
begin
  handleExceptionBegin
  Result := TCustomSplitter.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomSplitter_ResizeControl(AIsSet: LongBool; AObj: TCustomSplitter; AValue: TControl): TControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ResizeControl := AValue;
  end else
    Result := AObj.ResizeControl;
  handleExceptionEnd
end;

//property
function CustomSplitter_AutoSnap(AIsSet: LongBool; AObj: TCustomSplitter; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoSnap := AValue;
  end else
    Result := AObj.AutoSnap;
  handleExceptionEnd
end;

//property
function CustomSplitter_Beveled(AIsSet: LongBool; AObj: TCustomSplitter; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Beveled := AValue;
  end else
    Result := AObj.Beveled;
  handleExceptionEnd
end;

//property
function CustomSplitter_MinSize(AIsSet: LongBool; AObj: TCustomSplitter; AValue: integer): integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinSize := AValue;
  end else
    Result := AObj.MinSize;
  handleExceptionEnd
end;

//property
function CustomSplitter_ResizeAnchor(AIsSet: LongBool; AObj: TCustomSplitter; AValue: TAnchorKind): TAnchorKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ResizeAnchor := AValue;
  end else
    Result := AObj.ResizeAnchor;
  handleExceptionEnd
end;

//property
function CustomSplitter_ResizeStyle(AIsSet: LongBool; AObj: TCustomSplitter; AValue: TResizeStyle): TResizeStyle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ResizeStyle := AValue;
  end else
    Result := AObj.ResizeStyle;
  handleExceptionEnd
end;

//function
function CustomSplitter_GetOtherResizeControl(AObj: TCustomSplitter): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOtherResizeControl();
  handleExceptionEnd
end;

//function
function CustomSplitter_GetSplitterPosition(AObj: TCustomSplitter): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSplitterPosition();
  handleExceptionEnd
end;

//function
function CustomSplitter_Class(): TClass; extdecl;
begin
  Result := TCustomSplitter;
end;

//procedure
procedure CustomSplitter_AnchorSplitter(AObj: TCustomSplitter; Kind: TAnchorKind; AControl: TControl); extdecl;
begin
  handleExceptionBegin
  AObj.AnchorSplitter(Kind, AControl);
  handleExceptionEnd
end;

//procedure
procedure CustomSplitter_MoveSplitter(AObj: TCustomSplitter; Offset: integer); extdecl;
begin
  handleExceptionBegin
  AObj.MoveSplitter(Offset);
  handleExceptionEnd
end;

//procedure
procedure CustomSplitter_SetSplitterPosition(AObj: TCustomSplitter; NewPosition: integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetSplitterPosition(NewPosition);
  handleExceptionEnd
end;

//property event
procedure CustomSplitter_SetOnCanOffset(AObj: TCustomSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCanOffsetEvent}
  {$DEFINE EventName := OnCanOffset}
  EventMethodCode
end;

//property event
procedure CustomSplitter_SetOnCanResize(AObj: TCustomSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCanResizeEvent}
  {$DEFINE EventName := OnCanResize}
  EventMethodCode
end;

//property event
procedure CustomSplitter_SetOnMoved(AObj: TCustomSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMoved}
  EventMethodCode
end;


exports
  CustomSplitter_Create,
  CustomSplitter_ResizeControl,
  CustomSplitter_AutoSnap,
  CustomSplitter_Beveled,
  CustomSplitter_MinSize,
  CustomSplitter_ResizeAnchor,
  CustomSplitter_ResizeStyle,
  CustomSplitter_GetOtherResizeControl,
  CustomSplitter_GetSplitterPosition,
  CustomSplitter_Class,
  CustomSplitter_AnchorSplitter,
  CustomSplitter_MoveSplitter,
  CustomSplitter_SetSplitterPosition,
  CustomSplitter_SetOnCanOffset,
  CustomSplitter_SetOnCanResize,
  CustomSplitter_SetOnMoved;