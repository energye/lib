// constructor
function TCustomTrayIcon_Create(TheOwner: TComponent): TCustomTrayIcon; extdecl;
begin
  {$define handleExceptionID := 24200}
  handleExceptionBegin
  Result := TCustomTrayIcon.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomTrayIcon_Hide(AObj: TCustomTrayIcon): LongBool; extdecl;
begin
  {$define handleExceptionID := 24201}
  handleExceptionBegin
  Result := AObj.Hide();
  handleExceptionEnd
end;

// function
function TCustomTrayIcon_Show(AObj: TCustomTrayIcon): LongBool; extdecl;
begin
  {$define handleExceptionID := 24202}
  handleExceptionBegin
  Result := AObj.Show();
  handleExceptionEnd
end;

// function
procedure TCustomTrayIcon_GetPosition(AObj: TCustomTrayIcon; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 24203}
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

// procedure
procedure TCustomTrayIcon_InternalUpdate(AObj: TCustomTrayIcon); extdecl;
begin
  {$define handleExceptionID := 24204}
  handleExceptionBegin
  AObj.InternalUpdate();
  handleExceptionEnd
end;

// procedure
procedure TCustomTrayIcon_ShowBalloonHint(AObj: TCustomTrayIcon); extdecl;
begin
  {$define handleExceptionID := 24205}
  handleExceptionBegin
  AObj.ShowBalloonHint();
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_Animate(ASet: LongBool; AObj: TCustomTrayIcon; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 24206}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Animate := AValue
  end else
    Result := AObj.Animate;
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_AnimateInterval(ASet: LongBool; AObj: TCustomTrayIcon; AValue: Cardinal): Cardinal; extdecl;
begin
  {$define handleExceptionID := 24207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AnimateInterval := AValue
  end else
    Result := AObj.AnimateInterval;
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_BalloonFlags(ASet: LongBool; AObj: TCustomTrayIcon; AValue: TBalloonFlags): TBalloonFlags; extdecl;
begin
  {$define handleExceptionID := 24208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BalloonFlags := AValue
  end else
    Result := AObj.BalloonFlags;
  handleExceptionEnd
end;

// property
procedure TCustomTrayIcon_BalloonHint(ASet: LongBool; AObj: TCustomTrayIcon; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 24209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BalloonHint := AValue
  end else
    StringBufferCreate(AObj.BalloonHint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_BalloonTimeout(ASet: LongBool; AObj: TCustomTrayIcon; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 24210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BalloonTimeout := AValue
  end else
    Result := AObj.BalloonTimeout;
  handleExceptionEnd
end;

// property
procedure TCustomTrayIcon_BalloonTitle(ASet: LongBool; AObj: TCustomTrayIcon; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 24211}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BalloonTitle := AValue
  end else
    StringBufferCreate(AObj.BalloonTitle, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_Canvas(AObj: TCustomTrayIcon): TCanvas; extdecl;
begin
  {$define handleExceptionID := 24212}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_PopUpMenu(ASet: LongBool; AObj: TCustomTrayIcon; AValue: TPopupMenu): TPopupMenu; extdecl;
begin
  {$define handleExceptionID := 24213}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PopUpMenu := AValue
  end else
    Result := AObj.PopUpMenu;
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_Icon(ASet: LongBool; AObj: TCustomTrayIcon; AValue: TIcon): TIcon; extdecl;
begin
  {$define handleExceptionID := 24214}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Icon := AValue
  end else
    Result := AObj.Icon;
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_Icons(ASet: LongBool; AObj: TCustomTrayIcon; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 24215}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Icons := AValue
  end else
    Result := AObj.Icons;
  handleExceptionEnd
end;

// property
procedure TCustomTrayIcon_Hint(ASet: LongBool; AObj: TCustomTrayIcon; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 24216}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Hint := AValue
  end else
    StringBufferCreate(AObj.Hint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_ShowIcon(ASet: LongBool; AObj: TCustomTrayIcon; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 24217}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowIcon := AValue
  end else
    Result := AObj.ShowIcon;
  handleExceptionEnd
end;

// property
function TCustomTrayIcon_Visible(ASet: LongBool; AObj: TCustomTrayIcon; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 24218}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// event
procedure TCustomTrayIcon_OnClick(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  LCLEventMethodCode
end;

// event
procedure TCustomTrayIcon_OnDblClick(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  LCLEventMethodCode
end;

// event
procedure TCustomTrayIcon_OnMouseDown(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  LCLEventMethodCode
end;

// event
procedure TCustomTrayIcon_OnMouseUp(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  LCLEventMethodCode
end;

// event
procedure TCustomTrayIcon_OnMouseMove(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  LCLEventMethodCode
end;

// event
procedure TCustomTrayIcon_OnPaint(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  LCLEventMethodCode
end;

function TCustomTrayIcon_TClass(): TClass; extdecl;
begin
  Result := TCustomTrayIcon;
end;

exports
  TCustomTrayIcon_Create,
  TCustomTrayIcon_Hide,
  TCustomTrayIcon_Show,
  TCustomTrayIcon_GetPosition,
  TCustomTrayIcon_InternalUpdate,
  TCustomTrayIcon_ShowBalloonHint,
  TCustomTrayIcon_Animate,
  TCustomTrayIcon_AnimateInterval,
  TCustomTrayIcon_BalloonFlags,
  TCustomTrayIcon_BalloonHint,
  TCustomTrayIcon_BalloonTimeout,
  TCustomTrayIcon_BalloonTitle,
  TCustomTrayIcon_Canvas,
  TCustomTrayIcon_PopUpMenu,
  TCustomTrayIcon_Icon,
  TCustomTrayIcon_Icons,
  TCustomTrayIcon_Hint,
  TCustomTrayIcon_ShowIcon,
  TCustomTrayIcon_Visible,
  TCustomTrayIcon_OnClick,
  TCustomTrayIcon_OnDblClick,
  TCustomTrayIcon_OnMouseDown,
  TCustomTrayIcon_OnMouseUp,
  TCustomTrayIcon_OnMouseMove,
  TCustomTrayIcon_OnPaint,
  TCustomTrayIcon_TClass;