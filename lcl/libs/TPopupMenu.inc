// constructor
function TPopupMenu_Create(AOwner: TComponent): TPopupMenu; extdecl;
begin
  {$define handleExceptionID := 2900}
  handleExceptionBegin
  Result := TPopupMenu.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TPopupMenu_PopUp(AObj: TPopupMenu); extdecl;
begin
  {$define handleExceptionID := 2901}
  handleExceptionBegin
  AObj.PopUp();
  handleExceptionEnd
end;

// procedure
procedure TPopupMenu_PopUpWithIntX2(AObj: TPopupMenu; X: Integer; Y: Integer); extdecl;
begin
  {$define handleExceptionID := 2902}
  handleExceptionBegin
  AObj.PopUp(X, Y);
  handleExceptionEnd
end;

// procedure
procedure TPopupMenu_Close(AObj: TPopupMenu); extdecl;
begin
  {$define handleExceptionID := 2903}
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

// property
function TPopupMenu_PopupComponent(ASet: LongBool; AObj: TPopupMenu; AValue: TComponent): TComponent; extdecl;
begin
  {$define handleExceptionID := 2904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PopupComponent := AValue
  end else
    Result := AObj.PopupComponent;
  handleExceptionEnd
end;

// property
procedure TPopupMenu_PopupPoint(ASet: LongBool; AObj: TPopupMenu; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 2905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PopupPoint := AValue
  end else
    Result := AObj.PopupPoint;
  handleExceptionEnd
end;

// property
function TPopupMenu_Alignment(ASet: LongBool; AObj: TPopupMenu; AValue: TPopupAlignment): TPopupAlignment; extdecl;
begin
  {$define handleExceptionID := 2906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TPopupMenu_AutoPopup(ASet: LongBool; AObj: TPopupMenu; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoPopup := AValue
  end else
    Result := AObj.AutoPopup;
  handleExceptionEnd
end;

// property
function TPopupMenu_HelpContext(ASet: LongBool; AObj: TPopupMenu; AValue: THelpContext): THelpContext; extdecl;
begin
  {$define handleExceptionID := 2908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpContext := AValue
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

// property
function TPopupMenu_TrackButton(ASet: LongBool; AObj: TPopupMenu; AValue: TTrackButton): TTrackButton; extdecl;
begin
  {$define handleExceptionID := 2909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TrackButton := AValue
  end else
    Result := AObj.TrackButton;
  handleExceptionEnd
end;

// event
procedure TPopupMenu_OnPopup(AObj: TPopupMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPopup}
  LCLEventMethodCode
end;

// event
procedure TPopupMenu_OnClose(AObj: TPopupMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClose}
  LCLEventMethodCode
end;

function TPopupMenu_TClass(): TClass; extdecl;
begin
  Result := TPopupMenu;
end;

exports
  TPopupMenu_Create,
  TPopupMenu_PopUp,
  TPopupMenu_PopUpWithIntX2,
  TPopupMenu_Close,
  TPopupMenu_PopupComponent,
  TPopupMenu_PopupPoint,
  TPopupMenu_Alignment,
  TPopupMenu_AutoPopup,
  TPopupMenu_HelpContext,
  TPopupMenu_TrackButton,
  TPopupMenu_OnPopup,
  TPopupMenu_OnClose,
  TPopupMenu_TClass;