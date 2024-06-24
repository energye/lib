
//constructor
function CoreWebView2ProcessInfo_Create(const aBaseIntf: ICoreWebView2ProcessInfo): TCoreWebView2ProcessInfo; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ProcessInfo.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessInfo_Initialized(AObj: TCoreWebView2ProcessInfo): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessInfo_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2ProcessInfo; AValue: ICoreWebView2ProcessInfo; var Result: ICoreWebView2ProcessInfo); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BaseIntf := AValue;
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessInfo_Kind(AObj: TCoreWebView2ProcessInfo): TWVProcessKind; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessInfo_KindStr(AObj: TCoreWebView2ProcessInfo): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.KindStr);
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessInfo_ProcessId(AObj: TCoreWebView2ProcessInfo): integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ProcessId;
  handleExceptionEnd
end;


exports
  CoreWebView2ProcessInfo_Create,
  CoreWebView2ProcessInfo_Initialized,
  CoreWebView2ProcessInfo_BaseIntf,
  CoreWebView2ProcessInfo_Kind,
  CoreWebView2ProcessInfo_KindStr,
  CoreWebView2ProcessInfo_ProcessId;