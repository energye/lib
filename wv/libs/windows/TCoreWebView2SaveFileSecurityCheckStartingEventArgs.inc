// constructor
function TCoreWebView2SaveFileSecurityCheckStartingEventArgs_Create(const aArgs: ICoreWebView2SaveFileSecurityCheckStartingEventArgs): TCoreWebView2SaveFileSecurityCheckStartingEventArgs; extdecl;
begin
  {$define handleExceptionID := 8400}
  handleExceptionBegin
  Result := TCoreWebView2SaveFileSecurityCheckStartingEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2SaveFileSecurityCheckStartingEventArgs_Initialized(AObj: TCoreWebView2SaveFileSecurityCheckStartingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 8401}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SaveFileSecurityCheckStartingEventArgs_BaseIntf(AObj: TCoreWebView2SaveFileSecurityCheckStartingEventArgs; var Result: ICoreWebView2SaveFileSecurityCheckStartingEventArgs); extdecl;
begin
  {$define handleExceptionID := 8402}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2SaveFileSecurityCheckStartingEventArgs_CancelSave(ASet: LongBool; AObj: TCoreWebView2SaveFileSecurityCheckStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CancelSave := AValue
  end else
    Result := AObj.CancelSave;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SaveFileSecurityCheckStartingEventArgs_DocumentOriginUri(AObj: TCoreWebView2SaveFileSecurityCheckStartingEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8404}
  handleExceptionBegin
  StringBufferCreate(AObj.DocumentOriginUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SaveFileSecurityCheckStartingEventArgs_FileExtension(AObj: TCoreWebView2SaveFileSecurityCheckStartingEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8405}
  handleExceptionBegin
  StringBufferCreate(AObj.FileExtension, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SaveFileSecurityCheckStartingEventArgs_FilePath(AObj: TCoreWebView2SaveFileSecurityCheckStartingEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8406}
  handleExceptionBegin
  StringBufferCreate(AObj.FilePath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2SaveFileSecurityCheckStartingEventArgs_SuppressDefaultPolicy(ASet: LongBool; AObj: TCoreWebView2SaveFileSecurityCheckStartingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SuppressDefaultPolicy := AValue
  end else
    Result := AObj.SuppressDefaultPolicy;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SaveFileSecurityCheckStartingEventArgs_Deferral(AObj: TCoreWebView2SaveFileSecurityCheckStartingEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 8408}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

exports
  TCoreWebView2SaveFileSecurityCheckStartingEventArgs_Create,
  TCoreWebView2SaveFileSecurityCheckStartingEventArgs_Initialized,
  TCoreWebView2SaveFileSecurityCheckStartingEventArgs_BaseIntf,
  TCoreWebView2SaveFileSecurityCheckStartingEventArgs_CancelSave,
  TCoreWebView2SaveFileSecurityCheckStartingEventArgs_DocumentOriginUri,
  TCoreWebView2SaveFileSecurityCheckStartingEventArgs_FileExtension,
  TCoreWebView2SaveFileSecurityCheckStartingEventArgs_FilePath,
  TCoreWebView2SaveFileSecurityCheckStartingEventArgs_SuppressDefaultPolicy,
  TCoreWebView2SaveFileSecurityCheckStartingEventArgs_Deferral;