
//constructor
function WkInputStream_Create(aInputStream: PInputStream): TWkInputStream; extdecl;
begin
  handleExceptionBegin
  Result := TWkInputStream.Create(aInputStream);
  handleExceptionEnd
end;

//constructor
function WkInputStream_New(const aBuf: Pointer; var aStreamLength: int64) : TWkInputStream ; extdecl;
begin
  handleExceptionBegin
  Result := TWkInputStream.New(aBuf, aStreamLength);
  handleExceptionEnd
end;

//function
function WkInputStream_Data(AObj: TWkInputStream): PInputStream; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//procedure
procedure WkInputStream_Read(AObj: TWkInputStream; const buf: Pointer; bufSize: integer; var readCount: integer; var errorMsg: PChar); extdecl;
var
  RetreadCount: integer;
  ReterrorMsg: string;
begin
  handleExceptionBegin
  RetreadCount := readCount;
  ReterrorMsg := errorMsg;
  AObj.Read(buf, bufSize, RetreadCount, ReterrorMsg);
  readCount := RetreadCount;
  errorMsg := ToPChar(ReterrorMsg);
  handleExceptionEnd
end;

//procedure
procedure WkInputStream_Close(AObj: TWkInputStream); extdecl;
begin
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;


exports
  WkInputStream_Create,
  WkInputStream_New,
  WkInputStream_Data,
  WkInputStream_Read,
  WkInputStream_Close;
