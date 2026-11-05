// constructor
function TCoreWebView2BasicAuthenticationRequestedEventArgs_Create(const aArgs: ICoreWebView2BasicAuthenticationRequestedEventArgs): TCoreWebView2BasicAuthenticationRequestedEventArgs; extdecl;
begin
  {$define handleExceptionID := 3300}
  handleExceptionBegin
  Result := TCoreWebView2BasicAuthenticationRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2BasicAuthenticationRequestedEventArgs_Initialized(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 3301}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BasicAuthenticationRequestedEventArgs_BaseIntf(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; var Result: ICoreWebView2BasicAuthenticationRequestedEventArgs); extdecl;
begin
  {$define handleExceptionID := 3302}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BasicAuthenticationRequestedEventArgs_Uri(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3303}
  handleExceptionBegin
  StringBufferCreate(AObj.Uri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BasicAuthenticationRequestedEventArgs_Challenge(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3304}
  handleExceptionBegin
  StringBufferCreate(AObj.Challenge, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BasicAuthenticationRequestedEventArgs_Response(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; var Result: ICoreWebView2BasicAuthenticationResponse); extdecl;
begin
  {$define handleExceptionID := 3305}
  handleExceptionBegin
  Result := AObj.Response;
  handleExceptionEnd
end;

// property
function TCoreWebView2BasicAuthenticationRequestedEventArgs_Cancel(ASet: LongBool; AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 3306}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cancel := AValue
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2BasicAuthenticationRequestedEventArgs_Deferral(AObj: TCoreWebView2BasicAuthenticationRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 3307}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2BasicAuthenticationRequestedEventArgs_Create,
  TCoreWebView2BasicAuthenticationRequestedEventArgs_Initialized,
  TCoreWebView2BasicAuthenticationRequestedEventArgs_BaseIntf,
  TCoreWebView2BasicAuthenticationRequestedEventArgs_Uri,
  TCoreWebView2BasicAuthenticationRequestedEventArgs_Challenge,
  TCoreWebView2BasicAuthenticationRequestedEventArgs_Response,
  TCoreWebView2BasicAuthenticationRequestedEventArgs_Cancel,
  TCoreWebView2BasicAuthenticationRequestedEventArgs_Deferral;