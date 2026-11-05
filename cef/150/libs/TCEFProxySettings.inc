// constructor
function TCEFProxySettings_Create(): TCEFProxySettings; extdecl;
begin
  {$define handleExceptionID := 11300}
  handleExceptionBegin
  Result := TCEFProxySettings.Create();
  handleExceptionEnd
end;

// property
function TCEFProxySettings_NoProxyServer(ASet: LongBool; AObj: TCEFProxySettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11301}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NoProxyServer := AValue
  end else
    Result := AObj.NoProxyServer;
  handleExceptionEnd
end;

// property
function TCEFProxySettings_AutoDetect(ASet: LongBool; AObj: TCEFProxySettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 11302}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoDetect := AValue
  end else
    Result := AObj.AutoDetect;
  handleExceptionEnd
end;

// property
procedure TCEFProxySettings_ByPassList(ASet: LongBool; AObj: TCEFProxySettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11303}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ByPassList := AValue
  end else
    StringBufferCreate(AObj.ByPassList, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFProxySettings_PacUrl(ASet: LongBool; AObj: TCEFProxySettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PacUrl := AValue
  end else
    StringBufferCreate(AObj.PacUrl, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFProxySettings_Server(ASet: LongBool; AObj: TCEFProxySettings; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 11305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Server := AValue
  end else
    StringBufferCreate(AObj.Server, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCEFProxySettings_Create,
  TCEFProxySettings_NoProxyServer,
  TCEFProxySettings_AutoDetect,
  TCEFProxySettings_ByPassList,
  TCEFProxySettings_PacUrl,
  TCEFProxySettings_Server;