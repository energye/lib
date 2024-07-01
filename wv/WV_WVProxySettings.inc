
//constructor
function WVProxySettings_Create(): TWVProxySettings; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TWVProxySettings.Create();
  handleExceptionEnd
end;

//property
function WVProxySettings_NoProxyServer(AIsSet: LongBool; AObj: TWVProxySettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='NoProxyServer'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NoProxyServer := AValue;
  end else
    Result := AObj.NoProxyServer;
  handleExceptionEnd
end;

//property
function WVProxySettings_AutoDetect(AIsSet: LongBool; AObj: TWVProxySettings; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AutoDetect'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AutoDetect := AValue;
  end else
    Result := AObj.AutoDetect;
  handleExceptionEnd
end;

//property
function WVProxySettings_ByPassList(AIsSet: LongBool; AObj: TWVProxySettings; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ByPassList'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ByPassList := AValue;
  end else
    Result := ToPChar(AObj.ByPassList);
  handleExceptionEnd
end;

//property
function WVProxySettings_PacUrl(AIsSet: LongBool; AObj: TWVProxySettings; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='PacUrl'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PacUrl := AValue;
  end else
    Result := ToPChar(AObj.PacUrl);
  handleExceptionEnd
end;

//property
function WVProxySettings_Server(AIsSet: LongBool; AObj: TWVProxySettings; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Server'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Server := AValue;
  end else
    Result := ToPChar(AObj.Server);
  handleExceptionEnd
end;


exports
  WVProxySettings_Create,
  WVProxySettings_NoProxyServer,
  WVProxySettings_AutoDetect,
  WVProxySettings_ByPassList,
  WVProxySettings_PacUrl,
  WVProxySettings_Server;