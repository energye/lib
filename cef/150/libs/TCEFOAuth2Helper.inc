// constructor
function TCEFOAuth2Helper_Create(): TCEFOAuth2Helper; extdecl;
begin
  {$define handleExceptionID := 7000}
  handleExceptionBegin
  Result := TCEFOAuth2Helper.Create();
  handleExceptionEnd
end;

// function
function TCEFOAuth2Helper_ParseTokenExchangeResponse(AObj: TCEFOAuth2Helper; const aResponse: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 7001}
  handleExceptionBegin
  Result := AObj.ParseTokenExchangeResponse(PCharToUStr(aResponse));
  handleExceptionEnd
end;

// function
function TCEFOAuth2Helper_ParseRefreshTokenResponse(AObj: TCEFOAuth2Helper; const aResponse: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 7002}
  handleExceptionBegin
  Result := AObj.ParseRefreshTokenResponse(PCharToUStr(aResponse));
  handleExceptionEnd
end;

// function
function TCEFOAuth2Helper_ParseCodeRequestResponse(AObj: TCEFOAuth2Helper; const aURL: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 7003}
  handleExceptionBegin
  Result := AObj.ParseCodeRequestResponse(PCharToUStr(aURL));
  handleExceptionEnd
end;

// procedure
procedure TCEFOAuth2Helper_Initialize(AObj: TCEFOAuth2Helper); extdecl;
begin
  {$define handleExceptionID := 7004}
  handleExceptionBegin
  AObj.Initialize();
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_AuthEndpoint(ASet: LongBool; AObj: TCEFOAuth2Helper; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AuthEndpoint := AValue
  end else
    StringBufferCreate(AObj.AuthEndpoint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_TokenEndpoint(ASet: LongBool; AObj: TCEFOAuth2Helper; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7006}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TokenEndpoint := AValue
  end else
    StringBufferCreate(AObj.TokenEndpoint, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_ClientID(ASet: LongBool; AObj: TCEFOAuth2Helper; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7007}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClientID := AValue
  end else
    StringBufferCreate(AObj.ClientID, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_ClientSecret(ASet: LongBool; AObj: TCEFOAuth2Helper; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7008}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ClientSecret := AValue
  end else
    StringBufferCreate(AObj.ClientSecret, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_RedirectHost(ASet: LongBool; AObj: TCEFOAuth2Helper; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7009}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RedirectHost := AValue
  end else
    StringBufferCreate(AObj.RedirectHost, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCEFOAuth2Helper_RedirectPort(ASet: LongBool; AObj: TCEFOAuth2Helper; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 7010}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RedirectPort := AValue
  end else
    Result := AObj.RedirectPort;
  handleExceptionEnd
end;

// property
function TCEFOAuth2Helper_ChallengeMethod(ASet: LongBool; AObj: TCEFOAuth2Helper; AValue: TOAuthChallengeMethod): TOAuthChallengeMethod; extdecl;
begin
  {$define handleExceptionID := 7011}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChallengeMethod := AValue
  end else
    Result := AObj.ChallengeMethod;
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_Scope(ASet: LongBool; AObj: TCEFOAuth2Helper; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7012}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Scope := AValue
  end else
    StringBufferCreate(AObj.Scope, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_Error(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7013}
  handleExceptionBegin
  StringBufferCreate(AObj.Error, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_ErrorDescription(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7014}
  handleExceptionBegin
  StringBufferCreate(AObj.ErrorDescription, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_AccessToken(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7015}
  handleExceptionBegin
  StringBufferCreate(AObj.AccessToken, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_IDToken(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7016}
  handleExceptionBegin
  StringBufferCreate(AObj.IDToken, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_RefreshToken(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7017}
  handleExceptionBegin
  StringBufferCreate(AObj.RefreshToken, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCEFOAuth2Helper_TokenExpiry(AObj: TCEFOAuth2Helper): integer; extdecl;
begin
  {$define handleExceptionID := 7018}
  handleExceptionBegin
  Result := AObj.TokenExpiry;
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_TokenType(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7019}
  handleExceptionBegin
  StringBufferCreate(AObj.TokenType, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_CodeVerifier(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7020}
  handleExceptionBegin
  StringBufferCreate(AObj.CodeVerifier, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_CodeChallenge(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7021}
  handleExceptionBegin
  StringBufferCreate(AObj.CodeChallenge, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_RedirectURI(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7022}
  handleExceptionBegin
  StringBufferCreate(AObj.RedirectURI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_AuthCodeURI(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7023}
  handleExceptionBegin
  StringBufferCreate(AObj.AuthCodeURI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_TokeExchangeParams(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7024}
  handleExceptionBegin
  StringBufferCreate(AObj.TokeExchangeParams, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCEFOAuth2Helper_RefreshParams(AObj: TCEFOAuth2Helper; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 7025}
  handleExceptionBegin
  StringBufferCreate(AObj.RefreshParams, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCEFOAuth2Helper_ValidState(AObj: TCEFOAuth2Helper): LongBool; extdecl;
begin
  {$define handleExceptionID := 7026}
  handleExceptionBegin
  Result := AObj.ValidState;
  handleExceptionEnd
end;

exports
  TCEFOAuth2Helper_Create,
  TCEFOAuth2Helper_ParseTokenExchangeResponse,
  TCEFOAuth2Helper_ParseRefreshTokenResponse,
  TCEFOAuth2Helper_ParseCodeRequestResponse,
  TCEFOAuth2Helper_Initialize,
  TCEFOAuth2Helper_AuthEndpoint,
  TCEFOAuth2Helper_TokenEndpoint,
  TCEFOAuth2Helper_ClientID,
  TCEFOAuth2Helper_ClientSecret,
  TCEFOAuth2Helper_RedirectHost,
  TCEFOAuth2Helper_RedirectPort,
  TCEFOAuth2Helper_ChallengeMethod,
  TCEFOAuth2Helper_Scope,
  TCEFOAuth2Helper_Error,
  TCEFOAuth2Helper_ErrorDescription,
  TCEFOAuth2Helper_AccessToken,
  TCEFOAuth2Helper_IDToken,
  TCEFOAuth2Helper_RefreshToken,
  TCEFOAuth2Helper_TokenExpiry,
  TCEFOAuth2Helper_TokenType,
  TCEFOAuth2Helper_CodeVerifier,
  TCEFOAuth2Helper_CodeChallenge,
  TCEFOAuth2Helper_RedirectURI,
  TCEFOAuth2Helper_AuthCodeURI,
  TCEFOAuth2Helper_TokeExchangeParams,
  TCEFOAuth2Helper_RefreshParams,
  TCEFOAuth2Helper_ValidState;