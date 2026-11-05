// constructor
function TCommonDialog_Create(TheOwner: TComponent): TCommonDialog; extdecl;
begin
  {$define handleExceptionID := 6600}
  handleExceptionBegin
  Result := TCommonDialog.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCommonDialog_Execute(AObj: TCommonDialog): LongBool; extdecl;
begin
  {$define handleExceptionID := 6601}
  handleExceptionBegin
  Result := AObj.Execute();
  handleExceptionEnd
end;

// function
function TCommonDialog_HandleAllocated(AObj: TCommonDialog): LongBool; extdecl;
begin
  {$define handleExceptionID := 6602}
  handleExceptionBegin
  Result := AObj.HandleAllocated();
  handleExceptionEnd
end;

// procedure
procedure TCommonDialog_Close(AObj: TCommonDialog); extdecl;
begin
  {$define handleExceptionID := 6603}
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

// procedure
procedure TCommonDialog_DoShow(AObj: TCommonDialog); extdecl;
begin
  {$define handleExceptionID := 6604}
  handleExceptionBegin
  AObj.DoShow();
  handleExceptionEnd
end;

// procedure
procedure TCommonDialog_DoCanClose(AObj: TCommonDialog; var CanClose: LongBool); extdecl;
var
  OutCanClose: Boolean;
begin
  {$define handleExceptionID := 6605}
  handleExceptionBegin
  OutCanClose := CanClose;
  AObj.DoCanClose(OutCanClose);
  CanClose := OutCanClose;
  handleExceptionEnd
end;

// procedure
procedure TCommonDialog_DoClose(AObj: TCommonDialog); extdecl;
begin
  {$define handleExceptionID := 6606}
  handleExceptionBegin
  AObj.DoClose();
  handleExceptionEnd
end;

// property
function TCommonDialog_Handle(ASet: LongBool; AObj: TCommonDialog; AValue: TLCLHandle): TLCLHandle; extdecl;
begin
  {$define handleExceptionID := 6607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handle := AValue
  end else
    Result := AObj.Handle;
  handleExceptionEnd
end;

// property
function TCommonDialog_UserChoice(ASet: LongBool; AObj: TCommonDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.UserChoice := AValue
  end else
    Result := AObj.UserChoice;
  handleExceptionEnd
end;

// property
function TCommonDialog_Width(ASet: LongBool; AObj: TCommonDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6609}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TCommonDialog_Height(ASet: LongBool; AObj: TCommonDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 6610}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TCommonDialog_HelpContext(ASet: LongBool; AObj: TCommonDialog; AValue: THelpContext): THelpContext; extdecl;
begin
  {$define handleExceptionID := 6611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpContext := AValue
  end else
    Result := AObj.HelpContext;
  handleExceptionEnd
end;

// property
procedure TCommonDialog_Title(ASet: LongBool; AObj: TCommonDialog; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6612}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// event
procedure TCommonDialog_OnClose(AObj: TCommonDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnClose}
  LCLEventMethodCode
end;

// event
procedure TCommonDialog_OnCanClose(AObj: TCommonDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCloseQueryEvent}
  {$DEFINE EventName := OnCanClose}
  LCLEventMethodCode
end;

// event
procedure TCommonDialog_OnShow(AObj: TCommonDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnShow}
  LCLEventMethodCode
end;

function TCommonDialog_TClass(): TClass; extdecl;
begin
  Result := TCommonDialog;
end;

exports
  TCommonDialog_Create,
  TCommonDialog_Execute,
  TCommonDialog_HandleAllocated,
  TCommonDialog_Close,
  TCommonDialog_DoShow,
  TCommonDialog_DoCanClose,
  TCommonDialog_DoClose,
  TCommonDialog_Handle,
  TCommonDialog_UserChoice,
  TCommonDialog_Width,
  TCommonDialog_Height,
  TCommonDialog_HelpContext,
  TCommonDialog_Title,
  TCommonDialog_OnClose,
  TCommonDialog_OnCanClose,
  TCommonDialog_OnShow,
  TCommonDialog_TClass;