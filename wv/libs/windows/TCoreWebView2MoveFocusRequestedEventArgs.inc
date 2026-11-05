// constructor
function TCoreWebView2MoveFocusRequestedEventArgs_Create(const aArgs: ICoreWebView2MoveFocusRequestedEventArgs): TCoreWebView2MoveFocusRequestedEventArgs; extdecl;
begin
  {$define handleExceptionID := 1500}
  handleExceptionBegin
  Result := TCoreWebView2MoveFocusRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2MoveFocusRequestedEventArgs_Initialized(AObj: TCoreWebView2MoveFocusRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1501}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2MoveFocusRequestedEventArgs_BaseIntf(AObj: TCoreWebView2MoveFocusRequestedEventArgs; var Result: ICoreWebView2MoveFocusRequestedEventArgs); extdecl;
begin
  {$define handleExceptionID := 1502}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2MoveFocusRequestedEventArgs_Reason(AObj: TCoreWebView2MoveFocusRequestedEventArgs): TWVMoveFocusReason; extdecl;
begin
  {$define handleExceptionID := 1503}
  handleExceptionBegin
  Result := AObj.Reason;
  handleExceptionEnd
end;

// property
function TCoreWebView2MoveFocusRequestedEventArgs_Handled(ASet: LongBool; AObj: TCoreWebView2MoveFocusRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handled := AValue
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

exports
  TCoreWebView2MoveFocusRequestedEventArgs_Create,
  TCoreWebView2MoveFocusRequestedEventArgs_Initialized,
  TCoreWebView2MoveFocusRequestedEventArgs_BaseIntf,
  TCoreWebView2MoveFocusRequestedEventArgs_Reason,
  TCoreWebView2MoveFocusRequestedEventArgs_Handled;