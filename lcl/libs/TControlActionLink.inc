// constructor
function TControlActionLink_Create(AClient: TObject): TControlActionLink; extdecl;
begin
  {$define handleExceptionID := 32800}
  handleExceptionBegin
  Result := TControlActionLink.Create(AClient);
  handleExceptionEnd
end;

exports
  TControlActionLink_Create;
