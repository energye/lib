// constructor
function TCoreWebView2AcceleratorKeyPressedEventArgs_Create(const aArgs: ICoreWebView2AcceleratorKeyPressedEventArgs): TCoreWebView2AcceleratorKeyPressedEventArgs; extdecl;
begin
  {$define handleExceptionID := 1400}
  handleExceptionBegin
  Result := TCoreWebView2AcceleratorKeyPressedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_Initialized(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1401}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2AcceleratorKeyPressedEventArgs_BaseIntf(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs; var Result: ICoreWebView2AcceleratorKeyPressedEventArgs); extdecl;
begin
  {$define handleExceptionID := 1402}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_KeyEventKind(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): TWVKeyEventKind; extdecl;
begin
  {$define handleExceptionID := 1403}
  handleExceptionBegin
  Result := AObj.KeyEventKind;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_VirtualKey(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongWord; extdecl;
begin
  {$define handleExceptionID := 1404}
  handleExceptionBegin
  Result := AObj.VirtualKey;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_KeyEventLParam(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): integer; extdecl;
begin
  {$define handleExceptionID := 1405}
  handleExceptionBegin
  Result := AObj.KeyEventLParam;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_RepeatCount(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongWord; extdecl;
begin
  {$define handleExceptionID := 1406}
  handleExceptionBegin
  Result := AObj.RepeatCount;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_ScanCode(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongWord; extdecl;
begin
  {$define handleExceptionID := 1407}
  handleExceptionBegin
  Result := AObj.ScanCode;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_IsExtendedKey(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1408}
  handleExceptionBegin
  Result := AObj.IsExtendedKey;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_IsMenuKeyDown(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1409}
  handleExceptionBegin
  Result := AObj.IsMenuKeyDown;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_WasKeyDown(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1410}
  handleExceptionBegin
  Result := AObj.WasKeyDown;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_IsKeyReleased(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1411}
  handleExceptionBegin
  Result := AObj.IsKeyReleased;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_Handled(ASet: LongBool; AObj: TCoreWebView2AcceleratorKeyPressedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1412}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Handled := AValue
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

// property
function TCoreWebView2AcceleratorKeyPressedEventArgs_IsBrowserAcceleratorKeyEnabled(ASet: LongBool; AObj: TCoreWebView2AcceleratorKeyPressedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1413}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsBrowserAcceleratorKeyEnabled := AValue
  end else
    Result := AObj.IsBrowserAcceleratorKeyEnabled;
  handleExceptionEnd
end;

exports
  TCoreWebView2AcceleratorKeyPressedEventArgs_Create,
  TCoreWebView2AcceleratorKeyPressedEventArgs_Initialized,
  TCoreWebView2AcceleratorKeyPressedEventArgs_BaseIntf,
  TCoreWebView2AcceleratorKeyPressedEventArgs_KeyEventKind,
  TCoreWebView2AcceleratorKeyPressedEventArgs_VirtualKey,
  TCoreWebView2AcceleratorKeyPressedEventArgs_KeyEventLParam,
  TCoreWebView2AcceleratorKeyPressedEventArgs_RepeatCount,
  TCoreWebView2AcceleratorKeyPressedEventArgs_ScanCode,
  TCoreWebView2AcceleratorKeyPressedEventArgs_IsExtendedKey,
  TCoreWebView2AcceleratorKeyPressedEventArgs_IsMenuKeyDown,
  TCoreWebView2AcceleratorKeyPressedEventArgs_WasKeyDown,
  TCoreWebView2AcceleratorKeyPressedEventArgs_IsKeyReleased,
  TCoreWebView2AcceleratorKeyPressedEventArgs_Handled,
  TCoreWebView2AcceleratorKeyPressedEventArgs_IsBrowserAcceleratorKeyEnabled;