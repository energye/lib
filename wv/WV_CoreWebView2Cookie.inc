
//constructor
function CoreWebView2Cookie_Create(const aBaseIntf: ICoreWebView2Cookie): TCoreWebView2Cookie; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2Cookie.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2Cookie_Initialized(AObj: TCoreWebView2Cookie): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Cookie_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2Cookie; AValue: ICoreWebView2Cookie; var Result: ICoreWebView2Cookie); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BaseIntf := AValue;
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2Cookie_Name(AObj: TCoreWebView2Cookie): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
function CoreWebView2Cookie_Value(AIsSet: LongBool; AObj: TCoreWebView2Cookie; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Value := AValue;
  end else
    Result := ToPChar(AObj.Value);
  handleExceptionEnd
end;

//property
function CoreWebView2Cookie_Domain(AObj: TCoreWebView2Cookie): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Domain);
  handleExceptionEnd
end;

//property
function CoreWebView2Cookie_Path(AObj: TCoreWebView2Cookie): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Path);
  handleExceptionEnd
end;

//property
procedure CoreWebView2Cookie_Expires(AIsSet: LongBool; AObj: TCoreWebView2Cookie; var AValue: double; var Result: double); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Expires := AValue;
  end else
    Result := AObj.Expires;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Cookie_ExpiresDate(AIsSet: LongBool; AObj: TCoreWebView2Cookie; var AValue: TDateTime; var Result: TDateTime); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExpiresDate := AValue;
  end else
    Result := AObj.ExpiresDate;
  handleExceptionEnd
end;

//property
function CoreWebView2Cookie_IsHttpOnly(AIsSet: LongBool; AObj: TCoreWebView2Cookie; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsHttpOnly := AValue;
  end else
    Result := AObj.IsHttpOnly;
  handleExceptionEnd
end;

//property
function CoreWebView2Cookie_SameSite(AIsSet: LongBool; AObj: TCoreWebView2Cookie; AValue: TWVCookieSameSiteKind): TWVCookieSameSiteKind; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.SameSite := AValue;
  end else
    Result := AObj.SameSite;
  handleExceptionEnd
end;

//property
function CoreWebView2Cookie_IsSecure(AIsSet: LongBool; AObj: TCoreWebView2Cookie; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsSecure := AValue;
  end else
    Result := AObj.IsSecure;
  handleExceptionEnd
end;

//property
function CoreWebView2Cookie_IsSession(AObj: TCoreWebView2Cookie): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSession;
  handleExceptionEnd
end;


exports
  CoreWebView2Cookie_Create,
  CoreWebView2Cookie_Initialized,
  CoreWebView2Cookie_BaseIntf,
  CoreWebView2Cookie_Name,
  CoreWebView2Cookie_Value,
  CoreWebView2Cookie_Domain,
  CoreWebView2Cookie_Path,
  CoreWebView2Cookie_Expires,
  CoreWebView2Cookie_ExpiresDate,
  CoreWebView2Cookie_IsHttpOnly,
  CoreWebView2Cookie_SameSite,
  CoreWebView2Cookie_IsSecure,
  CoreWebView2Cookie_IsSession;