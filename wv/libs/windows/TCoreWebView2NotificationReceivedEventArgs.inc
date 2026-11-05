// constructor
function TCoreWebView2NotificationReceivedEventArgs_Create(const aArgs: ICoreWebView2NotificationReceivedEventArgs): TCoreWebView2NotificationReceivedEventArgs; extdecl;
begin
  {$define handleExceptionID := 8200}
  handleExceptionBegin
  Result := TCoreWebView2NotificationReceivedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2NotificationReceivedEventArgs_Initialized(AObj: TCoreWebView2NotificationReceivedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 8201}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NotificationReceivedEventArgs_BaseIntf(AObj: TCoreWebView2NotificationReceivedEventArgs; var Result: ICoreWebView2NotificationReceivedEventArgs); extdecl;
begin
  {$define handleExceptionID := 8202}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NotificationReceivedEventArgs_SenderOrigin(AObj: TCoreWebView2NotificationReceivedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8203}
  handleExceptionBegin
  StringBufferCreate(AObj.SenderOrigin, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NotificationReceivedEventArgs_Notification(AObj: TCoreWebView2NotificationReceivedEventArgs; var Result: ICoreWebView2Notification); extdecl;
begin
  {$define handleExceptionID := 8204}
  handleExceptionBegin
  Result := AObj.Notification;
  handleExceptionEnd
end;

// property
function TCoreWebView2NotificationReceivedEventArgs_Handled(ASet: LongBool; AObj: TCoreWebView2NotificationReceivedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handled := AValue
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NotificationReceivedEventArgs_Deferral(AObj: TCoreWebView2NotificationReceivedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 8206}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2NotificationReceivedEventArgs_Create,
  TCoreWebView2NotificationReceivedEventArgs_Initialized,
  TCoreWebView2NotificationReceivedEventArgs_BaseIntf,
  TCoreWebView2NotificationReceivedEventArgs_SenderOrigin,
  TCoreWebView2NotificationReceivedEventArgs_Notification,
  TCoreWebView2NotificationReceivedEventArgs_Handled,
  TCoreWebView2NotificationReceivedEventArgs_Deferral;