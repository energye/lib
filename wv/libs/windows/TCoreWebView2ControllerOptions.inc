// constructor
function TCoreWebView2ControllerOptions_Create(const aBaseIntf: ICoreWebView2ControllerOptions): TCoreWebView2ControllerOptions; extdecl;
begin
  {$define handleExceptionID := 5700}
  handleExceptionBegin
  Result := TCoreWebView2ControllerOptions.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2ControllerOptions_Initialized(AObj: TCoreWebView2ControllerOptions): LongBool; extdecl;
begin
  {$define handleExceptionID := 5701}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ControllerOptions_BaseIntf(ASet: LongBool; AObj: TCoreWebView2ControllerOptions; AValue: ICoreWebView2ControllerOptions; var Result: ICoreWebView2ControllerOptions); extdecl;
begin
  {$define handleExceptionID := 5702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ControllerOptions_ProfileName(ASet: LongBool; AObj: TCoreWebView2ControllerOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ProfileName := AValue
  end else
    StringBufferCreate(AObj.ProfileName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ControllerOptions_IsInPrivateModeEnabled(ASet: LongBool; AObj: TCoreWebView2ControllerOptions; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 5704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsInPrivateModeEnabled := AValue
  end else
    Result := AObj.IsInPrivateModeEnabled;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ControllerOptions_ScriptLocale(ASet: LongBool; AObj: TCoreWebView2ControllerOptions; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ScriptLocale := AValue
  end else
    StringBufferCreate(AObj.ScriptLocale, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2ControllerOptions_Create,
  TCoreWebView2ControllerOptions_Initialized,
  TCoreWebView2ControllerOptions_BaseIntf,
  TCoreWebView2ControllerOptions_ProfileName,
  TCoreWebView2ControllerOptions_IsInPrivateModeEnabled,
  TCoreWebView2ControllerOptions_ScriptLocale;