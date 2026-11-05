// constructor
function TCoreWebView2ScriptDialogOpeningEventArgs_Create(const aArgs: ICoreWebView2ScriptDialogOpeningEventArgs): TCoreWebView2ScriptDialogOpeningEventArgs; extdecl;
begin
  {$define handleExceptionID := 2300}
  handleExceptionBegin
  Result := TCoreWebView2ScriptDialogOpeningEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// function
function TCoreWebView2ScriptDialogOpeningEventArgs_Accept(AObj: TCoreWebView2ScriptDialogOpeningEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2301}
  handleExceptionBegin
  Result := AObj.Accept();
  handleExceptionEnd
end;

// property
function TCoreWebView2ScriptDialogOpeningEventArgs_Initialized(AObj: TCoreWebView2ScriptDialogOpeningEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2302}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScriptDialogOpeningEventArgs_BaseIntf(AObj: TCoreWebView2ScriptDialogOpeningEventArgs; var Result: ICoreWebView2ScriptDialogOpeningEventArgs); extdecl;
begin
  {$define handleExceptionID := 2303}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScriptDialogOpeningEventArgs_URI(AObj: TCoreWebView2ScriptDialogOpeningEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2304}
  handleExceptionBegin
  StringBufferCreate(AObj.URI, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ScriptDialogOpeningEventArgs_Kind(AObj: TCoreWebView2ScriptDialogOpeningEventArgs): TWVScriptDialogKind; extdecl;
begin
  {$define handleExceptionID := 2305}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScriptDialogOpeningEventArgs_Message_(AObj: TCoreWebView2ScriptDialogOpeningEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2306}
  handleExceptionBegin
  StringBufferCreate(AObj.Message_, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScriptDialogOpeningEventArgs_DefaultText(AObj: TCoreWebView2ScriptDialogOpeningEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2307}
  handleExceptionBegin
  StringBufferCreate(AObj.DefaultText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScriptDialogOpeningEventArgs_ResultText(ASet: LongBool; AObj: TCoreWebView2ScriptDialogOpeningEventArgs; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ResultText := AValue
  end else
    StringBufferCreate(AObj.ResultText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ScriptDialogOpeningEventArgs_Deferral(AObj: TCoreWebView2ScriptDialogOpeningEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 2309}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2ScriptDialogOpeningEventArgs_Create,
  TCoreWebView2ScriptDialogOpeningEventArgs_Accept,
  TCoreWebView2ScriptDialogOpeningEventArgs_Initialized,
  TCoreWebView2ScriptDialogOpeningEventArgs_BaseIntf,
  TCoreWebView2ScriptDialogOpeningEventArgs_URI,
  TCoreWebView2ScriptDialogOpeningEventArgs_Kind,
  TCoreWebView2ScriptDialogOpeningEventArgs_Message_,
  TCoreWebView2ScriptDialogOpeningEventArgs_DefaultText,
  TCoreWebView2ScriptDialogOpeningEventArgs_ResultText,
  TCoreWebView2ScriptDialogOpeningEventArgs_Deferral;