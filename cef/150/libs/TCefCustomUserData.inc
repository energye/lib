// constructor
function TCefCustomUserData_Create(aUserDataType: Pointer; aUserData: Pointer; out IntfCustomUserData: ICefCustomUserData): TCefCustomUserData; extdecl;
begin
  {$define handleExceptionID := 26800}
  handleExceptionBegin
  Result := TCefCustomUserData.Create(aUserDataType, aUserData);
  IntfCustomUserData := Result as ICefCustomUserData;
  handleExceptionEnd
end;

// function
function TCefCustomUserData_GetUserDataType(AObj: ICefCustomUserData): Pointer; extdecl;
begin
  {$define handleExceptionID := 26801}
  handleExceptionBegin
  Result := AObj.GetUserDataType();
  handleExceptionEnd
end;

// function
function TCefCustomUserData_GetUserData(AObj: ICefCustomUserData): Pointer; extdecl;
begin
  {$define handleExceptionID := 26802}
  handleExceptionBegin
  Result := AObj.GetUserData();
  handleExceptionEnd
end;

// function static
procedure TCefCustomUserData_UnWrap(data: Pointer; var Result: ICefCustomUserData); extdecl;
begin
  Result := TCefCustomUserData.UnWrap(data);
end;

exports
  TCefCustomUserData_Create,
  TCefCustomUserData_GetUserDataType,
  TCefCustomUserData_GetUserData,
  TCefCustomUserData_UnWrap;