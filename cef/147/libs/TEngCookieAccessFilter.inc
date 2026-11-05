// constructor
function TEngCookieAccessFilter_Create(out IntfCookieAccessFilter: ICefCookieAccessFilter): TEngCookieAccessFilter; extdecl;
begin
  {$define handleExceptionID := 15400}
  handleExceptionBegin
  Result := TEngCookieAccessFilter.Create();
  IntfCookieAccessFilter := Result as ICefCookieAccessFilter;
  handleExceptionEnd
end;

// event
procedure TEngCookieAccessFilter_OnCookieAccessFilterCanSendCookie(AObj: TEngCookieAccessFilter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCookieAccessFilter_TOnCookieAccessFilterCanSendCookieEvent}
  {$DEFINE EventName := OnCookieAccessFilterCanSendCookie}
  CEFEventMethodCode
end;

// event
procedure TEngCookieAccessFilter_OnCookieAccessFilterCanSaveCookie(AObj: TEngCookieAccessFilter; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngCookieAccessFilter_TOnCookieAccessFilterCanSaveCookieEvent}
  {$DEFINE EventName := OnCookieAccessFilterCanSaveCookie}
  CEFEventMethodCode
end;

exports
  TEngCookieAccessFilter_Create,
  TEngCookieAccessFilter_OnCookieAccessFilterCanSendCookie,
  TEngCookieAccessFilter_OnCookieAccessFilterCanSaveCookie;