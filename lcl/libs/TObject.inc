// constructor
function TObject_Create(): TObject; extdecl;
begin
  {$define handleExceptionID := 100}
  handleExceptionBegin
  Result := TObject.Create();
  handleExceptionEnd
end;

// function
function TObject_Equals(AObj: TObject; Obj: TObject): LongBool; extdecl;
begin
  {$define handleExceptionID := 101}
  handleExceptionBegin
  Result := AObj.Equals(Obj);
  handleExceptionEnd
end;

// function
procedure TObject_ToString(AObj: TObject;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 102}
  handleExceptionBegin
  StringBufferCreate(AObj.ToString(), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TObject_Free(AObj: TObject); extdecl;
begin
  {$define handleExceptionID := 103}
  handleExceptionBegin
  AObj.Free();
  handleExceptionEnd
end;

// procedure
procedure TObject_Dispatch(AObj: TObject; var message: Pointer); extdecl;
var
  Outmessage: PPointer;
begin
  {$define handleExceptionID := 104}
  handleExceptionBegin
  Outmessage := message;
  AObj.Dispatch(Outmessage^);
  message := Outmessage;
  handleExceptionEnd
end;

exports
  TObject_Create,
  TObject_Equals,
  TObject_ToString,
  TObject_Free,
  TObject_Dispatch;