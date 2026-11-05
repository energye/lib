// constructor
function TWkLoader_Create(aOwner: TComponent): TWkLoader; extdecl;
begin
  {$define handleExceptionID := 4100}
  handleExceptionBegin
  Result := TWkLoader.Create(aOwner);
  handleExceptionEnd
end;

// function
function TWkLoader_StartWebKit2(AObj: TWkLoader): LongBool; extdecl;
begin
  {$define handleExceptionID := 4101}
  handleExceptionBegin
  Result := AObj.StartWebKit2();
  handleExceptionEnd
end;

// property
function TWkLoader_Webkit2Version(ASet: LongBool; AObj: TWkLoader; AValue: TWebkit2Version): TWebkit2Version; extdecl;
begin
  {$define handleExceptionID := 4102}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Webkit2Version := AValue
  end else
    Result := AObj.Webkit2Version;
  handleExceptionEnd
end;

// property
procedure TWkLoader_LoaderWebKit2DllPath(ASet: LongBool; AObj: TWkLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LoaderWebKit2DllPath := AValue
  end else
    StringBufferCreate(AObj.LoaderWebKit2DllPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWkLoader_LoaderJavascriptCoreDllPath(ASet: LongBool; AObj: TWkLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LoaderJavascriptCoreDllPath := AValue
  end else
    StringBufferCreate(AObj.LoaderJavascriptCoreDllPath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWkLoader_LoaderSoupDllPath(ASet: LongBool; AObj: TWkLoader; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LoaderSoupDllPath := AValue
  end else
    StringBufferCreate(AObj.LoaderSoupDllPath, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TWkLoader_Create,
  TWkLoader_StartWebKit2,
  TWkLoader_Webkit2Version,
  TWkLoader_LoaderWebKit2DllPath,
  TWkLoader_LoaderJavascriptCoreDllPath,
  TWkLoader_LoaderSoupDllPath;