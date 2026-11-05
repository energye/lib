// constructor
function TCoreWebView2FrameInfo_Create(const aBaseIntf: ICoreWebView2FrameInfo): TCoreWebView2FrameInfo; extdecl;
begin
  {$define handleExceptionID := 6900}
  handleExceptionBegin
  Result := TCoreWebView2FrameInfo.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2FrameInfo_Initialized(AObj: TCoreWebView2FrameInfo): LongBool; extdecl;
begin
  {$define handleExceptionID := 6901}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameInfo_BaseIntf(ASet: LongBool; AObj: TCoreWebView2FrameInfo; AValue: ICoreWebView2FrameInfo; var Result: ICoreWebView2FrameInfo); extdecl;
begin
  {$define handleExceptionID := 6902}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameInfo_Name(AObj: TCoreWebView2FrameInfo; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6903}
  handleExceptionBegin
  StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameInfo_Source(AObj: TCoreWebView2FrameInfo; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6904}
  handleExceptionBegin
  StringBufferCreate(AObj.Source, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameInfo_ParentFrameInfo(AObj: TCoreWebView2FrameInfo; var Result: ICoreWebView2FrameInfo); extdecl;
begin
  {$define handleExceptionID := 6905}
  handleExceptionBegin
  Result := AObj.ParentFrameInfo;
  handleExceptionEnd
end;

// property
function TCoreWebView2FrameInfo_FrameId(AObj: TCoreWebView2FrameInfo): cardinal; extdecl;
begin
  {$define handleExceptionID := 6906}
  handleExceptionBegin
  Result := AObj.FrameId;
  handleExceptionEnd
end;

// property
function TCoreWebView2FrameInfo_FrameKind(AObj: TCoreWebView2FrameInfo): TWVFrameKind; extdecl;
begin
  {$define handleExceptionID := 6907}
  handleExceptionBegin
  Result := AObj.FrameKind;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameInfo_FrameKindStr(AObj: TCoreWebView2FrameInfo; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6908}
  handleExceptionBegin
  StringBufferCreate(AObj.FrameKindStr, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2FrameInfo_Create,
  TCoreWebView2FrameInfo_Initialized,
  TCoreWebView2FrameInfo_BaseIntf,
  TCoreWebView2FrameInfo_Name,
  TCoreWebView2FrameInfo_Source,
  TCoreWebView2FrameInfo_ParentFrameInfo,
  TCoreWebView2FrameInfo_FrameId,
  TCoreWebView2FrameInfo_FrameKind,
  TCoreWebView2FrameInfo_FrameKindStr;