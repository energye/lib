// constructor
function TCoreWebView2Cookie_Create(const aBaseIntf: ICoreWebView2Cookie): TCoreWebView2Cookie; extdecl;
begin
  {$define handleExceptionID := 6200}
  handleExceptionBegin
  Result := TCoreWebView2Cookie.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2Cookie_Initialized(AObj: TCoreWebView2Cookie): LongBool; extdecl;
begin
  {$define handleExceptionID := 6201}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Cookie_BaseIntf(ASet: LongBool; AObj: TCoreWebView2Cookie; AValue: ICoreWebView2Cookie; var Result: ICoreWebView2Cookie); extdecl;
begin
  {$define handleExceptionID := 6202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Cookie_Name(AObj: TCoreWebView2Cookie; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6203}
  handleExceptionBegin
  StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Cookie_Value(ASet: LongBool; AObj: TCoreWebView2Cookie; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Value := AValue
  end else
    StringBufferCreate(AObj.Value, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Cookie_Domain(AObj: TCoreWebView2Cookie; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6205}
  handleExceptionBegin
  StringBufferCreate(AObj.Domain, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Cookie_Path(AObj: TCoreWebView2Cookie; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6206}
  handleExceptionBegin
  StringBufferCreate(AObj.Path, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Cookie_Expires(ASet: LongBool; AObj: TCoreWebView2Cookie; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 6207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Expires := AValue
  end else
    Result := AObj.Expires;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Cookie_ExpiresDate(ASet: LongBool; AObj: TCoreWebView2Cookie; var AValue: Double; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 6208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExpiresDate := AValue
  end else
    Result := AObj.ExpiresDate;
  handleExceptionEnd
end;

// property
function TCoreWebView2Cookie_IsHttpOnly(ASet: LongBool; AObj: TCoreWebView2Cookie; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6209}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsHttpOnly := AValue
  end else
    Result := AObj.IsHttpOnly;
  handleExceptionEnd
end;

// property
function TCoreWebView2Cookie_SameSite(ASet: LongBool; AObj: TCoreWebView2Cookie; AValue: TWVCookieSameSiteKind): TWVCookieSameSiteKind; extdecl;
begin
  {$define handleExceptionID := 6210}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SameSite := AValue
  end else
    Result := AObj.SameSite;
  handleExceptionEnd
end;

// property
function TCoreWebView2Cookie_IsSecure(ASet: LongBool; AObj: TCoreWebView2Cookie; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6211}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsSecure := AValue
  end else
    Result := AObj.IsSecure;
  handleExceptionEnd
end;

// property
function TCoreWebView2Cookie_IsSession(AObj: TCoreWebView2Cookie): LongBool; extdecl;
begin
  {$define handleExceptionID := 6212}
  handleExceptionBegin
  Result := AObj.IsSession;
  handleExceptionEnd
end;

exports
  TCoreWebView2Cookie_Create,
  TCoreWebView2Cookie_Initialized,
  TCoreWebView2Cookie_BaseIntf,
  TCoreWebView2Cookie_Name,
  TCoreWebView2Cookie_Value,
  TCoreWebView2Cookie_Domain,
  TCoreWebView2Cookie_Path,
  TCoreWebView2Cookie_Expires,
  TCoreWebView2Cookie_ExpiresDate,
  TCoreWebView2Cookie_IsHttpOnly,
  TCoreWebView2Cookie_SameSite,
  TCoreWebView2Cookie_IsSecure,
  TCoreWebView2Cookie_IsSession;