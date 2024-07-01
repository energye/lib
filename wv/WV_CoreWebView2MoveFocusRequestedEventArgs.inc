
//constructor
function CoreWebView2MoveFocusRequestedEventArgs_Create(const aArgs: ICoreWebView2MoveFocusRequestedEventArgs): TCoreWebView2MoveFocusRequestedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2MoveFocusRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2MoveFocusRequestedEventArgs_Initialized(AObj: TCoreWebView2MoveFocusRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2MoveFocusRequestedEventArgs_BaseIntf(AObj: TCoreWebView2MoveFocusRequestedEventArgs; var Result: ICoreWebView2MoveFocusRequestedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2MoveFocusRequestedEventArgs_Reason(AObj: TCoreWebView2MoveFocusRequestedEventArgs): TWVMoveFocusReason; extdecl;
begin
  {$define handleExceptionFuncName :='Reason'}
  handleExceptionBegin
  Result := AObj.Reason;
  handleExceptionEnd
end;

//property
function CoreWebView2MoveFocusRequestedEventArgs_Handled(AIsSet: LongBool; AObj: TCoreWebView2MoveFocusRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Handled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handled := AValue;
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;


exports
  CoreWebView2MoveFocusRequestedEventArgs_Create,
  CoreWebView2MoveFocusRequestedEventArgs_Initialized,
  CoreWebView2MoveFocusRequestedEventArgs_BaseIntf,
  CoreWebView2MoveFocusRequestedEventArgs_Reason,
  CoreWebView2MoveFocusRequestedEventArgs_Handled;