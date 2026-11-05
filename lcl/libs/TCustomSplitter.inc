// constructor
function TCustomSplitter_Create(TheOwner: TComponent): TCustomSplitter; extdecl;
begin
  {$define handleExceptionID := 5600}
  handleExceptionBegin
  Result := TCustomSplitter.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomSplitter_GetOtherResizeControl(AObj: TCustomSplitter): TControl; extdecl;
begin
  {$define handleExceptionID := 5601}
  handleExceptionBegin
  Result := AObj.GetOtherResizeControl();
  handleExceptionEnd
end;

// function
function TCustomSplitter_GetSplitterPosition(AObj: TCustomSplitter): integer; extdecl;
begin
  {$define handleExceptionID := 5602}
  handleExceptionBegin
  Result := AObj.GetSplitterPosition();
  handleExceptionEnd
end;

// procedure
procedure TCustomSplitter_AnchorSplitter(AObj: TCustomSplitter; Kind: TAnchorKind; AControl: TControl); extdecl;
begin
  {$define handleExceptionID := 5603}
  handleExceptionBegin
  AObj.AnchorSplitter(Kind, AControl);
  handleExceptionEnd
end;

// procedure
procedure TCustomSplitter_MoveSplitter(AObj: TCustomSplitter; Offset: integer); extdecl;
begin
  {$define handleExceptionID := 5604}
  handleExceptionBegin
  AObj.MoveSplitter(Offset);
  handleExceptionEnd
end;

// procedure
procedure TCustomSplitter_SetSplitterPosition(AObj: TCustomSplitter; NewPosition: integer); extdecl;
begin
  {$define handleExceptionID := 5605}
  handleExceptionBegin
  AObj.SetSplitterPosition(NewPosition);
  handleExceptionEnd
end;

// property
function TCustomSplitter_ResizeControl(ASet: LongBool; AObj: TCustomSplitter; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 5606}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ResizeControl := AValue
  end else
    Result := AObj.ResizeControl;
  handleExceptionEnd
end;

// property
function TCustomSplitter_AutoSnap(ASet: LongBool; AObj: TCustomSplitter; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoSnap := AValue
  end else
    Result := AObj.AutoSnap;
  handleExceptionEnd
end;

// property
function TCustomSplitter_Beveled(ASet: LongBool; AObj: TCustomSplitter; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Beveled := AValue
  end else
    Result := AObj.Beveled;
  handleExceptionEnd
end;

// property
function TCustomSplitter_MinSize(ASet: LongBool; AObj: TCustomSplitter; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 5609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MinSize := AValue
  end else
    Result := AObj.MinSize;
  handleExceptionEnd
end;

// property
function TCustomSplitter_ResizeAnchor(ASet: LongBool; AObj: TCustomSplitter; AValue: TAnchorKind): TAnchorKind; extdecl;
begin
  {$define handleExceptionID := 5610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ResizeAnchor := AValue
  end else
    Result := AObj.ResizeAnchor;
  handleExceptionEnd
end;

// property
function TCustomSplitter_ResizeStyle(ASet: LongBool; AObj: TCustomSplitter; AValue: TResizeStyle): TResizeStyle; extdecl;
begin
  {$define handleExceptionID := 5611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ResizeStyle := AValue
  end else
    Result := AObj.ResizeStyle;
  handleExceptionEnd
end;

// event
procedure TCustomSplitter_OnCanOffset(AObj: TCustomSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCanOffsetEvent}
  {$DEFINE EventName := OnCanOffset}
  LCLEventMethodCode
end;

// event
procedure TCustomSplitter_OnCanResize(AObj: TCustomSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCanResizeEvent}
  {$DEFINE EventName := OnCanResize}
  LCLEventMethodCode
end;

// event
procedure TCustomSplitter_OnMoved(AObj: TCustomSplitter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMoved}
  LCLEventMethodCode
end;

function TCustomSplitter_TClass(): TClass; extdecl;
begin
  Result := TCustomSplitter;
end;

exports
  TCustomSplitter_Create,
  TCustomSplitter_GetOtherResizeControl,
  TCustomSplitter_GetSplitterPosition,
  TCustomSplitter_AnchorSplitter,
  TCustomSplitter_MoveSplitter,
  TCustomSplitter_SetSplitterPosition,
  TCustomSplitter_ResizeControl,
  TCustomSplitter_AutoSnap,
  TCustomSplitter_Beveled,
  TCustomSplitter_MinSize,
  TCustomSplitter_ResizeAnchor,
  TCustomSplitter_ResizeStyle,
  TCustomSplitter_OnCanOffset,
  TCustomSplitter_OnCanResize,
  TCustomSplitter_OnMoved,
  TCustomSplitter_TClass;