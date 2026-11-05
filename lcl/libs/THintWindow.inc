// constructor
function THintWindow_Create(AOwner: TComponent): THintWindow; extdecl;
begin
  {$define handleExceptionID := 35100}
  handleExceptionBegin
  Result := THintWindow.Create(AOwner);
  handleExceptionEnd
end;

// function
procedure THintWindow_CalcHintRect(AObj: THintWindow; MaxWidth: Integer; const AHint: PChar; AData: pointer; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 35101}
  handleExceptionBegin
  Result := AObj.CalcHintRect(MaxWidth, AHint, AData);
  handleExceptionEnd
end;

// function
function THintWindow_OffsetHintRect(AObj: THintWindow; var AOffset: TPoint; dy: Integer; KeepWidth: LongBool; KeepHeight: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35102}
  handleExceptionBegin
  Result := AObj.OffsetHintRect(AOffset, dy, KeepWidth, KeepHeight);
  handleExceptionEnd
end;

// function
function THintWindow_IsHintMsg(AObj: THintWindow; var Msg: LCLType.TMsg): LongBool; extdecl;
begin
  {$define handleExceptionID := 35103}
  handleExceptionBegin
  Result := AObj.IsHintMsg(Msg);
  handleExceptionEnd
end;

// procedure
procedure THintWindow_ActivateHintWithStr(AObj: THintWindow; const AHint: PChar); extdecl;
begin
  {$define handleExceptionID := 35104}
  handleExceptionBegin
  AObj.ActivateHint(AHint);
  handleExceptionEnd
end;

// procedure
procedure THintWindow_ActivateHintWithRectStr(AObj: THintWindow; var ARect: TRect; const AHint: PChar); extdecl;
begin
  {$define handleExceptionID := 35105}
  handleExceptionBegin
  AObj.ActivateHint(ARect, AHint);
  handleExceptionEnd
end;

// procedure
procedure THintWindow_ActivateWithBounds(AObj: THintWindow; var ARect: TRect; const AHint: PChar); extdecl;
begin
  {$define handleExceptionID := 35106}
  handleExceptionBegin
  AObj.ActivateWithBounds(ARect, AHint);
  handleExceptionEnd
end;

// procedure
procedure THintWindow_ActivateHintData(AObj: THintWindow; var ARect: TRect; const AHint: PChar; AData: pointer); extdecl;
begin
  {$define handleExceptionID := 35107}
  handleExceptionBegin
  AObj.ActivateHintData(ARect, AHint, AData);
  handleExceptionEnd
end;

// procedure
procedure THintWindow_InitializeWnd(AObj: THintWindow); extdecl;
begin
  {$define handleExceptionID := 35108}
  handleExceptionBegin
  AObj.InitializeWnd();
  handleExceptionEnd
end;

// procedure
procedure THintWindow_ReleaseHandle(AObj: THintWindow); extdecl;
begin
  {$define handleExceptionID := 35109}
  handleExceptionBegin
  AObj.ReleaseHandle();
  handleExceptionEnd
end;

// property
function THintWindow_Alignment(ASet: LongBool; AObj: THintWindow; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 35110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
procedure THintWindow_HintRect(ASet: LongBool; AObj: THintWindow; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 35111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintRect := AValue
  end else
    Result := AObj.HintRect;
  handleExceptionEnd
end;

// property
procedure THintWindow_HintRectAdjust(ASet: LongBool; AObj: THintWindow; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 35112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintRectAdjust := AValue
  end else
    Result := AObj.HintRectAdjust;
  handleExceptionEnd
end;

// property
function THintWindow_HintData(ASet: LongBool; AObj: THintWindow; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 35113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintData := AValue
  end else
    Result := AObj.HintData;
  handleExceptionEnd
end;

// property
function THintWindow_HintControl(ASet: LongBool; AObj: THintWindow; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 35114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HintControl := AValue
  end else
    Result := AObj.HintControl;
  handleExceptionEnd
end;

// property
function THintWindow_AutoHide(ASet: LongBool; AObj: THintWindow; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 35115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoHide := AValue
  end else
    Result := AObj.AutoHide;
  handleExceptionEnd
end;

// property
function THintWindow_HideInterval(ASet: LongBool; AObj: THintWindow; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 35116}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HideInterval := AValue
  end else
    Result := AObj.HideInterval;
  handleExceptionEnd
end;

// event
procedure THintWindow_OnMouseDown(AObj: THintWindow; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure THintWindow_OnMouseUp(AObj: THintWindow; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure THintWindow_OnMouseMove(AObj: THintWindow; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure THintWindow_OnMouseLeave(AObj: THintWindow; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnMouseLeave}
  LCLEventMethodCode
end;

function THintWindow_TClass(): TClass; extdecl;
begin
  Result := THintWindow;
end;

exports
  THintWindow_Create,
  THintWindow_CalcHintRect,
  THintWindow_OffsetHintRect,
  THintWindow_IsHintMsg,
  THintWindow_ActivateHintWithStr,
  THintWindow_ActivateHintWithRectStr,
  THintWindow_ActivateWithBounds,
  THintWindow_ActivateHintData,
  THintWindow_InitializeWnd,
  THintWindow_ReleaseHandle,
  THintWindow_Alignment,
  THintWindow_HintRect,
  THintWindow_HintRectAdjust,
  THintWindow_HintData,
  THintWindow_HintControl,
  THintWindow_AutoHide,
  THintWindow_HideInterval,
  THintWindow_OnMouseDown,
  THintWindow_OnMouseUp,
  THintWindow_OnMouseMove,
  THintWindow_OnMouseLeave,
  THintWindow_TClass;