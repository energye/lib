
//constructor
function CoreWebView2FrameInfo_Create(const aBaseIntf: ICoreWebView2FrameInfo): TCoreWebView2FrameInfo; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2FrameInfo.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2FrameInfo_Initialized(AObj: TCoreWebView2FrameInfo): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2FrameInfo_BaseIntf(AIsSet: LongBool; AObj: TCoreWebView2FrameInfo; AValue: ICoreWebView2FrameInfo; var Result: ICoreWebView2FrameInfo); extdecl;
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
function CoreWebView2FrameInfo_Name(AObj: TCoreWebView2FrameInfo): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
function CoreWebView2FrameInfo_Source(AObj: TCoreWebView2FrameInfo): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Source);
  handleExceptionEnd
end;

//property
procedure CoreWebView2FrameInfo_ParentFrameInfo(AObj: TCoreWebView2FrameInfo; var Result: ICoreWebView2FrameInfo); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ParentFrameInfo;
  handleExceptionEnd
end;

//property
function CoreWebView2FrameInfo_FrameId(AObj: TCoreWebView2FrameInfo): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FrameId;
  handleExceptionEnd
end;

//property
function CoreWebView2FrameInfo_FrameKind(AObj: TCoreWebView2FrameInfo): TWVFrameKind; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FrameKind;
  handleExceptionEnd
end;

//property
function CoreWebView2FrameInfo_FrameKindStr(AObj: TCoreWebView2FrameInfo): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.FrameKindStr);
  handleExceptionEnd
end;


exports
  CoreWebView2FrameInfo_Create,
  CoreWebView2FrameInfo_Initialized,
  CoreWebView2FrameInfo_BaseIntf,
  CoreWebView2FrameInfo_Name,
  CoreWebView2FrameInfo_Source,
  CoreWebView2FrameInfo_ParentFrameInfo,
  CoreWebView2FrameInfo_FrameId,
  CoreWebView2FrameInfo_FrameKind,
  CoreWebView2FrameInfo_FrameKindStr;