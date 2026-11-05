// constructor
function TLazSynMultiEditPlugin_Create(AOwner: TComponent): TLazSynMultiEditPlugin; extdecl;
begin
  {$define handleExceptionID := 41800}
  handleExceptionBegin
  Result := TLazSynMultiEditPlugin.Create(AOwner);
  handleExceptionEnd
end;

// function
function TLazSynMultiEditPlugin_AddEditor(AObj: TLazSynMultiEditPlugin; AValue: TCustomSynEdit): integer; extdecl;
begin
  {$define handleExceptionID := 41801}
  handleExceptionBegin
  Result := AObj.AddEditor(AValue);
  handleExceptionEnd
end;

// function
function TLazSynMultiEditPlugin_RemoveEditor(AObj: TLazSynMultiEditPlugin; AValue: TCustomSynEdit): integer; extdecl;
begin
  {$define handleExceptionID := 41802}
  handleExceptionBegin
  Result := AObj.RemoveEditor(AValue);
  handleExceptionEnd
end;

// property
function TLazSynMultiEditPlugin_Editors(AObj: TLazSynMultiEditPlugin; aIndex: integer): TCustomSynEdit; extdecl;
begin
  {$define handleExceptionID := 41803}
  handleExceptionBegin
  Result := AObj.Editors[aIndex];
  handleExceptionEnd
end;

// property
function TLazSynMultiEditPlugin_EditorCount(AObj: TLazSynMultiEditPlugin): integer; extdecl;
begin
  {$define handleExceptionID := 41804}
  handleExceptionBegin
  Result := AObj.EditorCount;
  handleExceptionEnd
end;

function TLazSynMultiEditPlugin_TClass(): TClass; extdecl;
begin
  Result := TLazSynMultiEditPlugin;
end;

exports
  TLazSynMultiEditPlugin_Create,
  TLazSynMultiEditPlugin_AddEditor,
  TLazSynMultiEditPlugin_RemoveEditor,
  TLazSynMultiEditPlugin_Editors,
  TLazSynMultiEditPlugin_EditorCount,
  TLazSynMultiEditPlugin_TClass;