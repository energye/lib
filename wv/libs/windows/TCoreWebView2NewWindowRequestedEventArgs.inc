// constructor
function TCoreWebView2NewWindowRequestedEventArgs_Create(const aArgs: ICoreWebView2NewWindowRequestedEventArgs): TCoreWebView2NewWindowRequestedEventArgs; extdecl;
begin
  {$define handleExceptionID := 2100}
  handleExceptionBegin
  Result := TCoreWebView2NewWindowRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2NewWindowRequestedEventArgs_Initialized(AObj: TCoreWebView2NewWindowRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2101}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NewWindowRequestedEventArgs_BaseIntf(AObj: TCoreWebView2NewWindowRequestedEventArgs; var Result: ICoreWebView2NewWindowRequestedEventArgs); extdecl;
begin
  {$define handleExceptionID := 2102}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NewWindowRequestedEventArgs_URI(AObj: TCoreWebView2NewWindowRequestedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2103}
  handleExceptionBegin
  StringBufferCreate(AObj.URI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NewWindowRequestedEventArgs_NewWindow(ASet: LongBool; AObj: TCoreWebView2NewWindowRequestedEventArgs; AValue: ICoreWebView2; var Result: ICoreWebView2); extdecl;
begin
  {$define handleExceptionID := 2104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.NewWindow := AValue
  end else
    Result := AObj.NewWindow;
  handleExceptionEnd
end;

// property
function TCoreWebView2NewWindowRequestedEventArgs_Handled(ASet: LongBool; AObj: TCoreWebView2NewWindowRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 2105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handled := AValue
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

// property
function TCoreWebView2NewWindowRequestedEventArgs_IsUserInitiated(AObj: TCoreWebView2NewWindowRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2106}
  handleExceptionBegin
  Result := AObj.IsUserInitiated;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NewWindowRequestedEventArgs_Deferral(AObj: TCoreWebView2NewWindowRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 2107}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NewWindowRequestedEventArgs_WindowFeatures(AObj: TCoreWebView2NewWindowRequestedEventArgs; var Result: ICoreWebView2WindowFeatures); extdecl;
begin
  {$define handleExceptionID := 2108}
  handleExceptionBegin
  Result := AObj.WindowFeatures;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NewWindowRequestedEventArgs_Name(AObj: TCoreWebView2NewWindowRequestedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2109}
  handleExceptionBegin
  StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2NewWindowRequestedEventArgs_OriginalSourceFrameInfo(AObj: TCoreWebView2NewWindowRequestedEventArgs; var Result: ICoreWebView2FrameInfo); extdecl;
begin
  {$define handleExceptionID := 2110}
  handleExceptionBegin
  Result := AObj.OriginalSourceFrameInfo;
  handleExceptionEnd
end;

exports
  TCoreWebView2NewWindowRequestedEventArgs_Create,
  TCoreWebView2NewWindowRequestedEventArgs_Initialized,
  TCoreWebView2NewWindowRequestedEventArgs_BaseIntf,
  TCoreWebView2NewWindowRequestedEventArgs_URI,
  TCoreWebView2NewWindowRequestedEventArgs_NewWindow,
  TCoreWebView2NewWindowRequestedEventArgs_Handled,
  TCoreWebView2NewWindowRequestedEventArgs_IsUserInitiated,
  TCoreWebView2NewWindowRequestedEventArgs_Deferral,
  TCoreWebView2NewWindowRequestedEventArgs_WindowFeatures,
  TCoreWebView2NewWindowRequestedEventArgs_Name,
  TCoreWebView2NewWindowRequestedEventArgs_OriginalSourceFrameInfo;