// constructor
function TWkCookieList_Create(aList: PList): TWkCookieList; extdecl;
begin
  {$define handleExceptionID := 4000}
  handleExceptionBegin
  Result := TWkCookieList.Create(aList);
  handleExceptionEnd
end;

// function
function TWkCookieList_Data(AObj: TWkCookieList): PList; extdecl;
begin
  {$define handleExceptionID := 4001}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkCookieList_Length(AObj: TWkCookieList): integer; extdecl;
begin
  {$define handleExceptionID := 4002}
  handleExceptionBegin
  Result := AObj.Length();
  handleExceptionEnd
end;

// function
function TWkCookieList_GetCookie(AObj: TWkCookieList; index: integer): PSoupCookie; extdecl;
begin
  {$define handleExceptionID := 4003}
  handleExceptionBegin
  Result := AObj.GetCookie(index);
  handleExceptionEnd
end;

exports
  TWkCookieList_Create,
  TWkCookieList_Data,
  TWkCookieList_Length,
  TWkCookieList_GetCookie;