// constructor
function TWVProxySettings_Create(): TWVProxySettings; extdecl;
begin
  {$define handleExceptionID := 200}
  handleExceptionBegin
  Result := TWVProxySettings.Create();
  handleExceptionEnd
end;

// property
function TWVProxySettings_NoProxyServer(ASet: LongBool; AObj: TWVProxySettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NoProxyServer := AValue
  end else
    Result := AObj.NoProxyServer;
  handleExceptionEnd
end;

// property
function TWVProxySettings_AutoDetect(ASet: LongBool; AObj: TWVProxySettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoDetect := AValue
  end else
    Result := AObj.AutoDetect;
  handleExceptionEnd
end;

// property
procedure TWVProxySettings_ByPassList(ASet: LongBool; AObj: TWVProxySettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 203}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ByPassList := AValue
  end else
    StringBufferCreate(AObj.ByPassList, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVProxySettings_PacUrl(ASet: LongBool; AObj: TWVProxySettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 204}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PacUrl := AValue
  end else
    StringBufferCreate(AObj.PacUrl, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TWVProxySettings_Server(ASet: LongBool; AObj: TWVProxySettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 205}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Server := AValue
  end else
    StringBufferCreate(AObj.Server, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TWVProxySettings_Create,
  TWVProxySettings_NoProxyServer,
  TWVProxySettings_AutoDetect,
  TWVProxySettings_ByPassList,
  TWVProxySettings_PacUrl,
  TWVProxySettings_Server;