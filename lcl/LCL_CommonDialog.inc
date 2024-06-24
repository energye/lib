
//constructor
function CommonDialog_Create(TheOwner: TComponent): TCommonDialog; extdecl;
begin
  handleExceptionBegin
  Result := TCommonDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function CommonDialog_Handle(AIsSet: LongBool; AObj: TCommonDialog; AValue: THandle): THandle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handle := AValue;
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

//property
function CommonDialog_UserChoice(AIsSet: LongBool; AObj: TCommonDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UserChoice := AValue;
  end else
    Result := AObj.UserChoice;
  handleExceptionEnd
end;

//property
function CommonDialog_Width(AIsSet: LongBool; AObj: TCommonDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Width := AValue;
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

//property
function CommonDialog_Height(AIsSet: LongBool; AObj: TCommonDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Height := AValue;
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

//property
function CommonDialog_HelpContext(AIsSet: LongBool; AObj: TCommonDialog; AValue: THelpContext): THelpContext; extdecl;
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
function CommonDialog_Title(AIsSet: LongBool; AObj: TCommonDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Title := AValue;
  end else
    Result := ToPChar(AObj.Title);
  handleExceptionEnd
end;

//function
function CommonDialog_Execute(AObj: TCommonDialog): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Execute();
  handleExceptionEnd
end;

//function
function CommonDialog_HandleAllocated(AObj: TCommonDialog): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

//function
function CommonDialog_Class(): TClass; extdecl;
begin
  Result := TCommonDialog;
end;

//procedure
procedure CommonDialog_Close(AObj: TCommonDialog); extdecl;
begin
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

//property event
procedure CommonDialog_SetOnClose(AObj: TCommonDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClose}
  EventMethodCode
end;

//property event
procedure CommonDialog_SetOnCanClose(AObj: TCommonDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCloseQueryEvent}
  {$DEFINE EventName := OnCanClose}
  EventMethodCode
end;

//property event
procedure CommonDialog_SetOnShow(AObj: TCommonDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShow}
  EventMethodCode
end;


exports
  CommonDialog_Create,
  CommonDialog_Handle,
  CommonDialog_UserChoice,
  CommonDialog_Width,
  CommonDialog_Height,
  CommonDialog_HelpContext,
  CommonDialog_Title,
  CommonDialog_Execute,
  CommonDialog_HandleAllocated,
  CommonDialog_Class,
  CommonDialog_Close,
  CommonDialog_SetOnClose,
  CommonDialog_SetOnCanClose,
  CommonDialog_SetOnShow;