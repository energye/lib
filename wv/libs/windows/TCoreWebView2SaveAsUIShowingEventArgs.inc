// constructor
function TCoreWebView2SaveAsUIShowingEventArgs_Create(const aArgs: ICoreWebView2SaveAsUIShowingEventArgs): TCoreWebView2SaveAsUIShowingEventArgs; extdecl;
begin
  {$define handleExceptionID := 8300}
  handleExceptionBegin
  Result := TCoreWebView2SaveAsUIShowingEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2SaveAsUIShowingEventArgs_Initialized(AObj: TCoreWebView2SaveAsUIShowingEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 8301}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SaveAsUIShowingEventArgs_BaseIntf(AObj: TCoreWebView2SaveAsUIShowingEventArgs; var Result: ICoreWebView2SaveAsUIShowingEventArgs); extdecl;
begin
  {$define handleExceptionID := 8302}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SaveAsUIShowingEventArgs_ContentMimeType(AObj: TCoreWebView2SaveAsUIShowingEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8303}
  handleExceptionBegin
  StringBufferCreate(AObj.ContentMimeType, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2SaveAsUIShowingEventArgs_Cancel(ASet: LongBool; AObj: TCoreWebView2SaveAsUIShowingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8304}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Cancel := AValue
  end else
    Result := AObj.Cancel;
  handleExceptionEnd
end;

// property
function TCoreWebView2SaveAsUIShowingEventArgs_SuppressDefaultDialog(ASet: LongBool; AObj: TCoreWebView2SaveAsUIShowingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8305}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SuppressDefaultDialog := AValue
  end else
    Result := AObj.SuppressDefaultDialog;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SaveAsUIShowingEventArgs_Deferral(AObj: TCoreWebView2SaveAsUIShowingEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 8306}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SaveAsUIShowingEventArgs_SaveAsFilePath(ASet: LongBool; AObj: TCoreWebView2SaveAsUIShowingEventArgs; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8307}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SaveAsFilePath := AValue
  end else
    StringBufferCreate(AObj.SaveAsFilePath, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2SaveAsUIShowingEventArgs_AllowReplace(ASet: LongBool; AObj: TCoreWebView2SaveAsUIShowingEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8308}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowReplace := AValue
  end else
    Result := AObj.AllowReplace;
  handleExceptionEnd
end;

// property
function TCoreWebView2SaveAsUIShowingEventArgs_Kind(ASet: LongBool; AObj: TCoreWebView2SaveAsUIShowingEventArgs; AValue: TWVSaveAsKind): TWVSaveAsKind; extdecl;
begin
  {$define handleExceptionID := 8309}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Kind := AValue
  end else
    Result := AObj.Kind;
  handleExceptionEnd
end;

exports
  TCoreWebView2SaveAsUIShowingEventArgs_Create,
  TCoreWebView2SaveAsUIShowingEventArgs_Initialized,
  TCoreWebView2SaveAsUIShowingEventArgs_BaseIntf,
  TCoreWebView2SaveAsUIShowingEventArgs_ContentMimeType,
  TCoreWebView2SaveAsUIShowingEventArgs_Cancel,
  TCoreWebView2SaveAsUIShowingEventArgs_SuppressDefaultDialog,
  TCoreWebView2SaveAsUIShowingEventArgs_Deferral,
  TCoreWebView2SaveAsUIShowingEventArgs_SaveAsFilePath,
  TCoreWebView2SaveAsUIShowingEventArgs_AllowReplace,
  TCoreWebView2SaveAsUIShowingEventArgs_Kind;