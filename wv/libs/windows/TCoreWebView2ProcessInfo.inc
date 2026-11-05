// constructor
function TCoreWebView2ProcessInfo_Create(const aBaseIntf: ICoreWebView2ProcessInfo): TCoreWebView2ProcessInfo; extdecl;
begin
  {$define handleExceptionID := 5200}
  handleExceptionBegin
  Result := TCoreWebView2ProcessInfo.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessInfo_Initialized(AObj: TCoreWebView2ProcessInfo): LongBool; extdecl;
begin
  {$define handleExceptionID := 5201}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessInfo_BaseIntf(ASet: LongBool; AObj: TCoreWebView2ProcessInfo; AValue: ICoreWebView2ProcessInfo; var Result: ICoreWebView2ProcessInfo); extdecl;
begin
  {$define handleExceptionID := 5202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessInfo_Kind(AObj: TCoreWebView2ProcessInfo): TWVProcessKind; extdecl;
begin
  {$define handleExceptionID := 5203}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessInfo_KindStr(AObj: TCoreWebView2ProcessInfo; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5204}
  handleExceptionBegin
  StringBufferCreate(AObj.KindStr, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessInfo_ProcessId(AObj: TCoreWebView2ProcessInfo): integer; extdecl;
begin
  {$define handleExceptionID := 5205}
  handleExceptionBegin
  Result := AObj.ProcessId;
  handleExceptionEnd
end;

exports
  TCoreWebView2ProcessInfo_Create,
  TCoreWebView2ProcessInfo_Initialized,
  TCoreWebView2ProcessInfo_BaseIntf,
  TCoreWebView2ProcessInfo_Kind,
  TCoreWebView2ProcessInfo_KindStr,
  TCoreWebView2ProcessInfo_ProcessId;