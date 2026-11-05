// constructor
function TCoreWebView2ProcessExtendedInfo_Create(const aBaseIntf: ICoreWebView2ProcessExtendedInfo): TCoreWebView2ProcessExtendedInfo; extdecl;
begin
  {$define handleExceptionID := 7000}
  handleExceptionBegin
  Result := TCoreWebView2ProcessExtendedInfo.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessExtendedInfo_Initialized(AObj: TCoreWebView2ProcessExtendedInfo): LongBool; extdecl;
begin
  {$define handleExceptionID := 7001}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessExtendedInfo_BaseIntf(ASet: LongBool; AObj: TCoreWebView2ProcessExtendedInfo; AValue: ICoreWebView2ProcessExtendedInfo; var Result: ICoreWebView2ProcessExtendedInfo); extdecl;
begin
  {$define handleExceptionID := 7002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessExtendedInfo_ProcessInfo(AObj: TCoreWebView2ProcessExtendedInfo; var Result: ICoreWebView2ProcessInfo); extdecl;
begin
  {$define handleExceptionID := 7003}
  handleExceptionBegin
  Result := AObj.ProcessInfo;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessExtendedInfo_AssociatedFrameInfos(AObj: TCoreWebView2ProcessExtendedInfo; var Result: ICoreWebView2FrameInfoCollection); extdecl;
begin
  {$define handleExceptionID := 7004}
  handleExceptionBegin
  Result := AObj.AssociatedFrameInfos;
  handleExceptionEnd
end;

exports
  TCoreWebView2ProcessExtendedInfo_Create,
  TCoreWebView2ProcessExtendedInfo_Initialized,
  TCoreWebView2ProcessExtendedInfo_BaseIntf,
  TCoreWebView2ProcessExtendedInfo_ProcessInfo,
  TCoreWebView2ProcessExtendedInfo_AssociatedFrameInfos;