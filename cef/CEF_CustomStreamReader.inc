
//constructor
function CefCustomStreamReader_Create(stream: TStream; owned: LongBool): TCefCustomStreamReader; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomStreamReader.Create(stream, owned);
  handleExceptionEnd
end;

//constructor
function CefCustomStreamReader_Create1(const filename: PChar): TCefCustomStreamReader; extdecl;
begin
  handleExceptionBegin
  Result := TCefCustomStreamReader.Create(filename);
  handleExceptionEnd
end;


exports
  CefCustomStreamReader_Create,
  CefCustomStreamReader_Create1;