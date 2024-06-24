
//constructor
function CoreWebView2AcceleratorKeyPressedEventArgs_Create(const aArgs: ICoreWebView2AcceleratorKeyPressedEventArgs): TCoreWebView2AcceleratorKeyPressedEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2AcceleratorKeyPressedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_Initialized(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2AcceleratorKeyPressedEventArgs_BaseIntf(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs; var Result: ICoreWebView2AcceleratorKeyPressedEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_KeyEventKind(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): TWVKeyEventKind; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyEventKind;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_VirtualKey(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongWord; extdecl;
begin
  handleExceptionBegin
  Result := AObj.VirtualKey;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_KeyEventLParam(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.KeyEventLParam;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_RepeatCount(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongWord; extdecl;
begin
  handleExceptionBegin
  Result := AObj.RepeatCount;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_ScanCode(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongWord; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ScanCode;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_IsExtendedKey(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsExtendedKey;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_IsMenuKeyDown(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsMenuKeyDown;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_WasKeyDown(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.WasKeyDown;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_IsKeyReleased(AObj: TCoreWebView2AcceleratorKeyPressedEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsKeyReleased;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_Handled(AIsSet: LongBool; AObj: TCoreWebView2AcceleratorKeyPressedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handled := AValue;
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

//property
function CoreWebView2AcceleratorKeyPressedEventArgs_IsBrowserAcceleratorKeyEnabled(AIsSet: LongBool; AObj: TCoreWebView2AcceleratorKeyPressedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsBrowserAcceleratorKeyEnabled := AValue;
  end else
    Result := AObj.IsBrowserAcceleratorKeyEnabled;
  handleExceptionEnd
end;


exports
  CoreWebView2AcceleratorKeyPressedEventArgs_Create,
  CoreWebView2AcceleratorKeyPressedEventArgs_Initialized,
  CoreWebView2AcceleratorKeyPressedEventArgs_BaseIntf,
  CoreWebView2AcceleratorKeyPressedEventArgs_KeyEventKind,
  CoreWebView2AcceleratorKeyPressedEventArgs_VirtualKey,
  CoreWebView2AcceleratorKeyPressedEventArgs_KeyEventLParam,
  CoreWebView2AcceleratorKeyPressedEventArgs_RepeatCount,
  CoreWebView2AcceleratorKeyPressedEventArgs_ScanCode,
  CoreWebView2AcceleratorKeyPressedEventArgs_IsExtendedKey,
  CoreWebView2AcceleratorKeyPressedEventArgs_IsMenuKeyDown,
  CoreWebView2AcceleratorKeyPressedEventArgs_WasKeyDown,
  CoreWebView2AcceleratorKeyPressedEventArgs_IsKeyReleased,
  CoreWebView2AcceleratorKeyPressedEventArgs_Handled,
  CoreWebView2AcceleratorKeyPressedEventArgs_IsBrowserAcceleratorKeyEnabled;