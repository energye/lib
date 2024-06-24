
//constructor
function PopupMenu_Create(AOwner: TComponent): TPopupMenu; extdecl;
begin
  handleExceptionBegin
  Result := TPopupMenu.Create(AOwner);
  handleExceptionEnd
end;

//property
function PopupMenu_PopupComponent(AIsSet: LongBool; AObj: TPopupMenu; AValue: TComponent): TComponent; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PopupComponent := AValue;
  end else
    Result := AObj.PopupComponent;
  handleExceptionEnd
end;

//property
procedure PopupMenu_PopupPoint(AObj: TPopupMenu; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.PopupPoint;
  handleExceptionEnd
end;

//property
function PopupMenu_Alignment(AIsSet: LongBool; AObj: TPopupMenu; AValue: TPopupAlignment): TPopupAlignment; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Alignment := AValue;
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

//property
function PopupMenu_AutoPopup(AIsSet: LongBool; AObj: TPopupMenu; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoPopup := AValue;
  end else
    Result := AObj.AutoPopup;
  handleExceptionEnd
end;

//property
function PopupMenu_HelpContext(AIsSet: LongBool; AObj: TPopupMenu; AValue: THelpContext): THelpContext; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpContext := AValue;
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

//property
function PopupMenu_TrackButton(AIsSet: LongBool; AObj: TPopupMenu; AValue: TTrackButton): TTrackButton; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TrackButton := AValue;
  end else
    Result := AObj.TrackButton;
  handleExceptionEnd
end;

//function
function PopupMenu_Class(): TClass; extdecl;
begin
  Result := TPopupMenu;
end;

//procedure
procedure PopupMenu_PopUp(AObj: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.PopUp();
  handleExceptionEnd
end;

//procedure
procedure PopupMenu_PopUp1(AObj: TPopupMenu; X, Y: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.PopUp(X, Y);
  handleExceptionEnd
end;

//procedure
procedure PopupMenu_Close(AObj: TPopupMenu); extdecl;
begin
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

//property event
procedure PopupMenu_SetOnPopup(AObj: TPopupMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnPopup}
  EventMethodCode
end;

//property event
procedure PopupMenu_SetOnClose(AObj: TPopupMenu; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClose}
  EventMethodCode
end;


exports
  PopupMenu_Create,
  PopupMenu_PopupComponent,
  PopupMenu_PopupPoint,
  PopupMenu_Alignment,
  PopupMenu_AutoPopup,
  PopupMenu_HelpContext,
  PopupMenu_TrackButton,
  PopupMenu_Class,
  PopupMenu_PopUp,
  PopupMenu_PopUp1,
  PopupMenu_Close,
  PopupMenu_SetOnPopup,
  PopupMenu_SetOnClose;