// constructor
function TLazSynEditPlugin_Create(AOwner: TComponent): TLazSynEditPlugin; extdecl;
begin
  {$define handleExceptionID := 36600}
  handleExceptionBegin
  Result := TLazSynEditPlugin.Create(AOwner);
  handleExceptionEnd
end;

// property
function TLazSynEditPlugin_Editor(ASet: LongBool; AObj: TLazSynEditPlugin; AValue: TCustomSynEdit): TCustomSynEdit; extdecl;
begin
  {$define handleExceptionID := 36601}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Editor := AValue
  end else
    Result := AObj.Editor;
  handleExceptionEnd
end;

function TLazSynEditPlugin_TClass(): TClass; extdecl;
begin
  Result := TLazSynEditPlugin;
end;

exports
  TLazSynEditPlugin_Create,
  TLazSynEditPlugin_Editor,
  TLazSynEditPlugin_TClass;