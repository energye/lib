// constructor
function TCustomCookieAccessFilter_Create(const events: IChromiumEvents; out IntfCookieAccessFilter: ICefCookieAccessFilter): TCustomCookieAccessFilter; extdecl;
begin
  {$define handleExceptionID := 5800}
  handleExceptionBegin
  Result := TCustomCookieAccessFilter.Create(events);
  IntfCookieAccessFilter := Result as ICefCookieAccessFilter;
  handleExceptionEnd
end;

// procedure
procedure TCustomCookieAccessFilter_RemoveReferences(AObj: TCustomCookieAccessFilter); extdecl;
begin
  {$define handleExceptionID := 5801}
  handleExceptionBegin
  AObj.RemoveReferences();
  handleExceptionEnd
end;

exports
  TCustomCookieAccessFilter_Create,
  TCustomCookieAccessFilter_RemoveReferences;