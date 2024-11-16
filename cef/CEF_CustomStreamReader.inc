
//constructor
function CefCustomStreamReader_Create(stream: TStream; owned: LongBool): TCefCustomStreamReader; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCefCustomStreamReader.Create(stream, owned);
  handleExceptionEnd
end;

//constructor
function CefCustomStreamReader_Create1(const filename: PChar): TCefCustomStreamReader; extdecl;
begin
  {$define handleExceptionFuncName :='Create1'}
  handleExceptionBegin
  Result := TCefCustomStreamReader.Create(filename);
  handleExceptionEnd
end;

//procedure
procedure CefCustomStreamReader_AsInterface(AObj: TCefCustomStreamReader; var Result: ICefCustomStreamReader); extdecl;
begin
  Result := AObj as ICefCustomStreamReader;
end;


exports
  CefCustomStreamReader_Create,
  CefCustomStreamReader_Create1,
  CefCustomStreamReader_AsInterface;