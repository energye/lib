
//constructor
function WkCookieList_Create(aList: PList): TWkCookieList; extdecl;
begin
  handleExceptionBegin
  Result := TWkCookieList.Create(aList);
  handleExceptionEnd
end;

//function
function WkCookieList_Length(AObj: TWkCookieList): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Length();
  handleExceptionEnd
end;

//function
function WkCookieList_GetCookie(AObj: TWkCookieList; index: integer): PSoupCookie; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetCookie(index);
  handleExceptionEnd
end;


exports
  WkCookieList_Create,
  WkCookieList_Length,
  WkCookieList_GetCookie;