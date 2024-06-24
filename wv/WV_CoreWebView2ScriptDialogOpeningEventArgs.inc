
//constructor
function CoreWebView2ScriptDialogOpeningEventArgs_Create(const aArgs: ICoreWebView2ScriptDialogOpeningEventArgs): TCoreWebView2ScriptDialogOpeningEventArgs; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ScriptDialogOpeningEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptDialogOpeningEventArgs_Initialized(AObj: TCoreWebView2ScriptDialogOpeningEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ScriptDialogOpeningEventArgs_BaseIntf(AObj: TCoreWebView2ScriptDialogOpeningEventArgs; var Result: ICoreWebView2ScriptDialogOpeningEventArgs); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptDialogOpeningEventArgs_URI(AObj: TCoreWebView2ScriptDialogOpeningEventArgs): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.URI);
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptDialogOpeningEventArgs_Kind(AObj: TCoreWebView2ScriptDialogOpeningEventArgs): TWVScriptDialogKind; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptDialogOpeningEventArgs_Message(AObj: TCoreWebView2ScriptDialogOpeningEventArgs): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Message_);
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptDialogOpeningEventArgs_DefaultText(AObj: TCoreWebView2ScriptDialogOpeningEventArgs): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.DefaultText);
  handleExceptionEnd
end;

//property
function CoreWebView2ScriptDialogOpeningEventArgs_ResultText(AIsSet: LongBool; AObj: TCoreWebView2ScriptDialogOpeningEventArgs; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ResultText := AValue;
  end else
    Result := ToPChar(AObj.ResultText);
  handleExceptionEnd
end;

//property
procedure CoreWebView2ScriptDialogOpeningEventArgs_Deferral(AObj: TCoreWebView2ScriptDialogOpeningEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

//function
function CoreWebView2ScriptDialogOpeningEventArgs_Accept(AObj: TCoreWebView2ScriptDialogOpeningEventArgs): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Accept();
  handleExceptionEnd
end;


exports
  CoreWebView2ScriptDialogOpeningEventArgs_Create,
  CoreWebView2ScriptDialogOpeningEventArgs_Initialized,
  CoreWebView2ScriptDialogOpeningEventArgs_BaseIntf,
  CoreWebView2ScriptDialogOpeningEventArgs_URI,
  CoreWebView2ScriptDialogOpeningEventArgs_Kind,
  CoreWebView2ScriptDialogOpeningEventArgs_Message,
  CoreWebView2ScriptDialogOpeningEventArgs_DefaultText,
  CoreWebView2ScriptDialogOpeningEventArgs_ResultText,
  CoreWebView2ScriptDialogOpeningEventArgs_Deferral,
  CoreWebView2ScriptDialogOpeningEventArgs_Accept;