
//constructor
function CustomTrayIcon_Create(TheOwner: TComponent): TCustomTrayIcon; extdecl;
begin
  handleExceptionBegin
  Result := TCustomTrayIcon.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CustomTrayIcon_Animate(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Animate := AValue;
  end else
    Result := AObj.Animate;
  handleExceptionEnd
end;

//property
function CustomTrayIcon_AnimateInterval(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: uint32): uint32; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AnimateInterval := AValue;
  end else
    Result := AObj.AnimateInterval;
  handleExceptionEnd
end;

//property
function CustomTrayIcon_BalloonFlags(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: TBalloonFlags): TBalloonFlags; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BalloonFlags := AValue;
  end else
    Result := AObj.BalloonFlags;
  handleExceptionEnd
end;

//property
function CustomTrayIcon_BalloonHint(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BalloonHint := AValue;
  end else
    Result := ToPChar(AObj.BalloonHint);
  handleExceptionEnd
end;

//property
function CustomTrayIcon_BalloonTimeout(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BalloonTimeout := AValue;
  end else
    Result := AObj.BalloonTimeout;
  handleExceptionEnd
end;

//property
function CustomTrayIcon_BalloonTitle(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BalloonTitle := AValue;
  end else
    Result := ToPChar(AObj.BalloonTitle);
  handleExceptionEnd
end;

//property
function CustomTrayIcon_Canvas(AObj: TCustomTrayIcon): TCanvas; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//property
function CustomTrayIcon_PopUpMenu(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: TPopupMenu): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PopUpMenu := AValue;
  end else
    Result := AObj.PopUpMenu;
  handleExceptionEnd
end;

//property
function CustomTrayIcon_Icon(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: TIcon): TIcon; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Icon := AValue;
  end else
    Result := AObj.Icon;
  handleExceptionEnd
end;

//property
function CustomTrayIcon_Icons(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Icons := AValue;
  end else
    Result := AObj.Icons;
  handleExceptionEnd
end;

//property
function CustomTrayIcon_Hint(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Hint := AValue;
  end else
    Result := ToPChar(AObj.Hint);
  handleExceptionEnd
end;

//property
function CustomTrayIcon_ShowIcon(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShowIcon := AValue;
  end else
    Result := AObj.ShowIcon;
  handleExceptionEnd
end;

//property
function CustomTrayIcon_Visible(AIsSet: LongBool; AObj: TCustomTrayIcon; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//function
function CustomTrayIcon_Hide(AObj: TCustomTrayIcon): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Hide();
  handleExceptionEnd
end;

//function
function CustomTrayIcon_Show(AObj: TCustomTrayIcon): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Show();
  handleExceptionEnd
end;

//function
procedure CustomTrayIcon_GetPosition(AObj: TCustomTrayIcon; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

//function
function CustomTrayIcon_Class(): TClass; extdecl;
begin
  Result := TCustomTrayIcon;
end;

//procedure
procedure CustomTrayIcon_InternalUpdate(AObj: TCustomTrayIcon); extdecl;
begin
  handleExceptionBegin
  AObj.InternalUpdate();
  handleExceptionEnd
end;

//procedure
procedure CustomTrayIcon_ShowBalloonHint(AObj: TCustomTrayIcon); extdecl;
begin
  handleExceptionBegin
  AObj.ShowBalloonHint();
  handleExceptionEnd
end;

//property event
procedure CustomTrayIcon_SetOnClick(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClick}
  EventMethodCode
end;

//property event
procedure CustomTrayIcon_SetOnDblClick(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDblClick}
  EventMethodCode
end;

//property event
procedure CustomTrayIcon_SetOnMouseDown(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseDown}
  EventMethodCode
end;

//property event
procedure CustomTrayIcon_SetOnMouseUp(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseEvent}
  {$DEFINE EventName := OnMouseUp}
  EventMethodCode
end;

//property event
procedure CustomTrayIcon_SetOnMouseMove(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTMouseMoveEvent}
  {$DEFINE EventName := OnMouseMove}
  EventMethodCode
end;

//property event
procedure CustomTrayIcon_SetOnPaint(AObj: TCustomTrayIcon; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPaint}
  EventMethodCode
end;


exports
  CustomTrayIcon_Create,
  CustomTrayIcon_Animate,
  CustomTrayIcon_AnimateInterval,
  CustomTrayIcon_BalloonFlags,
  CustomTrayIcon_BalloonHint,
  CustomTrayIcon_BalloonTimeout,
  CustomTrayIcon_BalloonTitle,
  CustomTrayIcon_Canvas,
  CustomTrayIcon_PopUpMenu,
  CustomTrayIcon_Icon,
  CustomTrayIcon_Icons,
  CustomTrayIcon_Hint,
  CustomTrayIcon_ShowIcon,
  CustomTrayIcon_Visible,
  CustomTrayIcon_Hide,
  CustomTrayIcon_Show,
  CustomTrayIcon_GetPosition,
  CustomTrayIcon_Class,
  CustomTrayIcon_InternalUpdate,
  CustomTrayIcon_ShowBalloonHint,
  CustomTrayIcon_SetOnClick,
  CustomTrayIcon_SetOnDblClick,
  CustomTrayIcon_SetOnMouseDown,
  CustomTrayIcon_SetOnMouseUp,
  CustomTrayIcon_SetOnMouseMove,
  CustomTrayIcon_SetOnPaint;