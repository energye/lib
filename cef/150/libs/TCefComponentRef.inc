// constructor
function TCefComponentRef_Create(data: Pointer; out IntfComponent: ICefComponent): TCefComponentRef; extdecl;
begin
  {$define handleExceptionID := 26900}
  handleExceptionBegin
  Result := TCefComponentRef.Create(data);
  IntfComponent := Result as ICefComponent;
  handleExceptionEnd
end;

// function
procedure TCefComponentRef_GetId(AObj: ICefComponent;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 26901}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetId()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefComponentRef_GetName(AObj: ICefComponent;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 26902}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefComponentRef_GetVersion(AObj: ICefComponent;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 26903}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetVersion()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefComponentRef_GetState(AObj: ICefComponent): TCefComponentState; extdecl;
begin
  {$define handleExceptionID := 26904}
  handleExceptionBegin
  Result := AObj.GetState();
  handleExceptionEnd
end;

// function static
procedure TCefComponentRef_UnWrap(data: Pointer; var Result: ICefComponent); extdecl;
begin
  Result := TCefComponentRef.UnWrap(data);
end;

exports
  TCefComponentRef_Create,
  TCefComponentRef_GetId,
  TCefComponentRef_GetName,
  TCefComponentRef_GetVersion,
  TCefComponentRef_GetState,
  TCefComponentRef_UnWrap;