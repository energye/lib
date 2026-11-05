// constructor
function TCoreWebView2File_Create(const aBaseIntf: ICoreWebView2File): TCoreWebView2File; extdecl;
begin
  {$define handleExceptionID := 5400}
  handleExceptionBegin
  Result := TCoreWebView2File.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2File_Initialized(AObj: TCoreWebView2File): LongBool; extdecl;
begin
  {$define handleExceptionID := 5401}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2File_BaseIntf(ASet: LongBool; AObj: TCoreWebView2File; AValue: ICoreWebView2File; var Result: ICoreWebView2File); extdecl;
begin
  {$define handleExceptionID := 5402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BaseIntf := AValue
  end else
    Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2File_Path(AObj: TCoreWebView2File; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 5403}
  handleExceptionBegin
  StringBufferCreate(AObj.Path, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2File_Create,
  TCoreWebView2File_Initialized,
  TCoreWebView2File_BaseIntf,
  TCoreWebView2File_Path;