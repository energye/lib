
//constructor
function CoreWebView2ProcessExtendedInfo_Create(const aBaseIntf: ICoreWebView2ProcessExtendedInfo): TCoreWebView2ProcessExtendedInfo; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2ProcessExtendedInfo.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ProcessExtendedInfo_Initialized(AObj: TCoreWebView2ProcessExtendedInfo): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessExtendedInfo_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2ProcessExtendedInfo; AValue: ICoreWebView2ProcessExtendedInfo; var Result: ICoreWebView2ProcessExtendedInfo); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BaseIntf := AValue;
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessExtendedInfo_ProcessInfo(AObj: TCoreWebView2ProcessExtendedInfo; var Result: ICoreWebView2ProcessInfo); extdecl;
begin
  {$define handleExceptionFuncName :='ProcessInfo'}
  handleExceptionBegin
  Result := AObj.ProcessInfo;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ProcessExtendedInfo_AssociatedFrameInfos(AObj: TCoreWebView2ProcessExtendedInfo; var Result: ICoreWebView2FrameInfoCollection); extdecl;
begin
  {$define handleExceptionFuncName :='AssociatedFrameInfos'}
  handleExceptionBegin
  Result := AObj.AssociatedFrameInfos;
  handleExceptionEnd
end;


exports
  CoreWebView2ProcessExtendedInfo_Create,
  CoreWebView2ProcessExtendedInfo_Initialized,
  CoreWebView2ProcessExtendedInfo_BaseIntf,
  CoreWebView2ProcessExtendedInfo_ProcessInfo,
  CoreWebView2ProcessExtendedInfo_AssociatedFrameInfos;