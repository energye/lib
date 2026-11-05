// constructor
function TCoreWebView2CustomSchemeRegistration_Create(var aCustomSchemeInfo: TWVCustomSchemeInfoPtr; out IntfCustomSchemeRegistration: ICoreWebView2CustomSchemeRegistration): TCoreWebView2CustomSchemeRegistration; extdecl;
var
  InaCustomSchemeInfo: TWVCustomSchemeInfo;
begin
  {$define handleExceptionID := 8800}
  handleExceptionBegin
  InaCustomSchemeInfo := TWVCustomSchemeInfoToPas(aCustomSchemeInfo);
  Result := TCoreWebView2CustomSchemeRegistration.Create(InaCustomSchemeInfo);
  IntfCustomSchemeRegistration := Result as ICoreWebView2CustomSchemeRegistration;
  handleExceptionEnd
end;

// constructor
function TCoreWebView2CustomSchemeRegistration_CreateWithStrX2BoolX2(const aSchemeName: PChar; const aAllowedDomains: PChar; aTreatAsSecure: LongBool; aHasAuthorityComponent: LongBool; out IntfCustomSchemeRegistration: ICoreWebView2CustomSchemeRegistration): TCoreWebView2CustomSchemeRegistration; extdecl;
begin
  {$define handleExceptionID := 8801}
  handleExceptionBegin
  Result := TCoreWebView2CustomSchemeRegistration.Create(aSchemeName, aAllowedDomains, aTreatAsSecure, aHasAuthorityComponent);
  IntfCustomSchemeRegistration := Result as ICoreWebView2CustomSchemeRegistration;
  handleExceptionEnd
end;

// function
function TCoreWebView2CustomSchemeRegistration_Get_SchemeName(AObj: ICoreWebView2CustomSchemeRegistration; var SchemeName: PChar): HResult; extdecl;
var
  OutSchemeName: PWideChar;
begin
  {$define handleExceptionID := 8802}
  handleExceptionBegin
  Result := AObj.Get_SchemeName(OutSchemeName);
  SchemeName := ToPChar(OutSchemeName);
  handleExceptionEnd
end;

// function
function TCoreWebView2CustomSchemeRegistration_Get_TreatAsSecure(AObj: ICoreWebView2CustomSchemeRegistration; var TreatAsSecure: Integer): HResult; extdecl;
var
  OutTreatAsSecure: Integer;
begin
  {$define handleExceptionID := 8803}
  handleExceptionBegin
  Result := AObj.Get_TreatAsSecure(OutTreatAsSecure);
  TreatAsSecure := OutTreatAsSecure;
  handleExceptionEnd
end;

// function
function TCoreWebView2CustomSchemeRegistration_Set_TreatAsSecure(AObj: ICoreWebView2CustomSchemeRegistration; TreatAsSecure: Integer): HResult; extdecl;
begin
  {$define handleExceptionID := 8804}
  handleExceptionBegin
  Result := AObj.Set_TreatAsSecure(TreatAsSecure);
  handleExceptionEnd
end;

// function
function TCoreWebView2CustomSchemeRegistration_GetAllowedOrigins(AObj: ICoreWebView2CustomSchemeRegistration; var allowedOriginsCount: SYSUINT; var allowedOrigins: PPWideChar): HResult; extdecl;
var
  OutallowedOriginsCount: SYSUINT;
  OutallowedOrigins: PPWideChar;
begin
  {$define handleExceptionID := 8805}
  handleExceptionBegin
  Result := AObj.GetAllowedOrigins(OutallowedOriginsCount, OutallowedOrigins);
  allowedOriginsCount := OutallowedOriginsCount;
  allowedOrigins := OutallowedOrigins;
  handleExceptionEnd
end;

// function
function TCoreWebView2CustomSchemeRegistration_SetAllowedOrigins(AObj: ICoreWebView2CustomSchemeRegistration; allowedOriginsCount: SYSUINT; allowedOrigins: PPWideChar): HResult; extdecl;
begin
  {$define handleExceptionID := 8806}
  handleExceptionBegin
  Result := AObj.SetAllowedOrigins(allowedOriginsCount, allowedOrigins);
  handleExceptionEnd
end;

// function
function TCoreWebView2CustomSchemeRegistration_Get_HasAuthorityComponent(AObj: ICoreWebView2CustomSchemeRegistration; var HasAuthorityComponent: Integer): HResult; extdecl;
var
  OutHasAuthorityComponent: Integer;
begin
  {$define handleExceptionID := 8807}
  handleExceptionBegin
  Result := AObj.Get_HasAuthorityComponent(OutHasAuthorityComponent);
  HasAuthorityComponent := OutHasAuthorityComponent;
  handleExceptionEnd
end;

// function
function TCoreWebView2CustomSchemeRegistration_Set_HasAuthorityComponent(AObj: ICoreWebView2CustomSchemeRegistration; HasAuthorityComponent: Integer): HResult; extdecl;
begin
  {$define handleExceptionID := 8808}
  handleExceptionBegin
  Result := AObj.Set_HasAuthorityComponent(HasAuthorityComponent);
  handleExceptionEnd
end;

exports
  TCoreWebView2CustomSchemeRegistration_Create,
  TCoreWebView2CustomSchemeRegistration_CreateWithStrX2BoolX2,
  TCoreWebView2CustomSchemeRegistration_Get_SchemeName,
  TCoreWebView2CustomSchemeRegistration_Get_TreatAsSecure,
  TCoreWebView2CustomSchemeRegistration_Set_TreatAsSecure,
  TCoreWebView2CustomSchemeRegistration_GetAllowedOrigins,
  TCoreWebView2CustomSchemeRegistration_SetAllowedOrigins,
  TCoreWebView2CustomSchemeRegistration_Get_HasAuthorityComponent,
  TCoreWebView2CustomSchemeRegistration_Set_HasAuthorityComponent;