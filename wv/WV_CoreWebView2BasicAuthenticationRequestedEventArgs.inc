
//constructor
function CoreWebView2BasicAuthenticationRequestedEventArgs_Create(const aArgs: ICoreWebView2BasicAuthenticationRequestedEventArgs): TCoreWebView2BasicAuthenticationRequestedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2BasicAuthenticationRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2BasicAuthenticationRequestedEventArgs_Initialized(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2BasicAuthenticationRequestedEventArgs_BaseIntf(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; var Result: ICoreWebView2BasicAuthenticationRequestedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2BasicAuthenticationRequestedEventArgs_Uri(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Uri'}
  handleExceptionBegin
  Result := ToPChar(AObj.Uri);
  handleExceptionEnd
end;

//property
function CoreWebView2BasicAuthenticationRequestedEventArgs_Challenge(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Challenge'}
  handleExceptionBegin
  Result := ToPChar(AObj.Challenge);
  handleExceptionEnd
end;

//property
procedure CoreWebView2BasicAuthenticationRequestedEventArgs_Response(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; var Result: ICoreWebView2BasicAuthenticationResponse); extdecl;
begin
  {$define handleExceptionFuncName :='Response'}
  handleExceptionBegin
  Result := AObj.Response;
  handleExceptionEnd
end;

//property
function CoreWebView2BasicAuthenticationRequestedEventArgs_Cancel(AIsSet: LongBool; AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Cancel'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Cancel := AValue;
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

//property
procedure CoreWebView2BasicAuthenticationRequestedEventArgs_Deferral(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionFuncName :='Deferral'}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;


exports
  CoreWebView2BasicAuthenticationRequestedEventArgs_Create,
  CoreWebView2BasicAuthenticationRequestedEventArgs_Initialized,
  CoreWebView2BasicAuthenticationRequestedEventArgs_BaseIntf,
  CoreWebView2BasicAuthenticationRequestedEventArgs_Uri,
  CoreWebView2BasicAuthenticationRequestedEventArgs_Challenge,
  CoreWebView2BasicAuthenticationRequestedEventArgs_Response,
  CoreWebView2BasicAuthenticationRequestedEventArgs_Cancel,
  CoreWebView2BasicAuthenticationRequestedEventArgs_Deferral;