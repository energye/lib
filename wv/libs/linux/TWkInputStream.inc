// constructor
function TWkInputStream_Create(aInputStream: PInputStream): TWkInputStream; extdecl;
begin
  {$define handleExceptionID := 2400}
  handleExceptionBegin
  Result := TWkInputStream.Create(aInputStream);
  handleExceptionEnd
end;

// function
function TWkInputStream_Data(AObj: TWkInputStream): PInputStream; extdecl;
begin
  {$define handleExceptionID := 2401}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkInputStream_New(const aBuf: Pointer; var aStreamLength: int64): TWkInputStream; extdecl;
begin
  Result := TWkInputStream.New(aBuf, aStreamLength);
end;

// procedure
procedure TWkInputStream_Read(AObj: TWkInputStream; const buf: Pointer; bufSize: integer; var readCount: integer; var errorMsg: PChar); extdecl;
var
  OutreadCount: integer;
  OuterrorMsg: string;
begin
  {$define handleExceptionID := 2402}
  handleExceptionBegin
  OutreadCount := readCount;
  OuterrorMsg := errorMsg;
  AObj.Read(buf, bufSize, OutreadCount, OuterrorMsg);
  readCount := OutreadCount;
  errorMsg := ToPChar(OuterrorMsg);
  handleExceptionEnd
end;

// procedure
procedure TWkInputStream_Close(AObj: TWkInputStream); extdecl;
begin
  {$define handleExceptionID := 2403}
  handleExceptionBegin
  AObj.Close();
  handleExceptionEnd
end;

exports
  TWkInputStream_Create,
  TWkInputStream_Data,
  TWkInputStream_New,
  TWkInputStream_Read,
  TWkInputStream_Close;