// constructor
function TCoreWebView2ContextMenuTarget_Create(const aBaseIntf: ICoreWebView2ContextMenuTarget): TCoreWebView2ContextMenuTarget; extdecl;
begin
  {$define handleExceptionID := 6600}
  handleExceptionBegin
  Result := TCoreWebView2ContextMenuTarget.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuTarget_Initialized(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  {$define handleExceptionID := 6601}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuTarget_BaseIntf(AObj: TCoreWebView2ContextMenuTarget; var Result: ICoreWebView2ContextMenuTarget); extdecl;
begin
  {$define handleExceptionID := 6602}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuTarget_Kind(AObj: TCoreWebView2ContextMenuTarget): TWVMenuTargetKind; extdecl;
begin
  {$define handleExceptionID := 6603}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuTarget_IsEditable(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  {$define handleExceptionID := 6604}
  handleExceptionBegin
  Result := AObj.IsEditable;
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuTarget_IsRequestedForMainFrame(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  {$define handleExceptionID := 6605}
  handleExceptionBegin
  Result := AObj.IsRequestedForMainFrame;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuTarget_PageUri(AObj: TCoreWebView2ContextMenuTarget; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6606}
  handleExceptionBegin
  StringBufferCreate(AObj.PageUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuTarget_FrameUri(AObj: TCoreWebView2ContextMenuTarget; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6607}
  handleExceptionBegin
  StringBufferCreate(AObj.FrameUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuTarget_HasLinkUri(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  {$define handleExceptionID := 6608}
  handleExceptionBegin
  Result := AObj.HasLinkUri;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuTarget_LinkUri(AObj: TCoreWebView2ContextMenuTarget; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6609}
  handleExceptionBegin
  StringBufferCreate(AObj.LinkUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuTarget_HasLinkText(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  {$define handleExceptionID := 6610}
  handleExceptionBegin
  Result := AObj.HasLinkText;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuTarget_LinkText(AObj: TCoreWebView2ContextMenuTarget; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6611}
  handleExceptionBegin
  StringBufferCreate(AObj.LinkText, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuTarget_HasSourceUri(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  {$define handleExceptionID := 6612}
  handleExceptionBegin
  Result := AObj.HasSourceUri;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuTarget_SourceUri(AObj: TCoreWebView2ContextMenuTarget; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6613}
  handleExceptionBegin
  StringBufferCreate(AObj.SourceUri, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2ContextMenuTarget_HasSelection(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  {$define handleExceptionID := 6614}
  handleExceptionBegin
  Result := AObj.HasSelection;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ContextMenuTarget_SelectionText(AObj: TCoreWebView2ContextMenuTarget; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 6615}
  handleExceptionBegin
  StringBufferCreate(AObj.SelectionText, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2ContextMenuTarget_Create,
  TCoreWebView2ContextMenuTarget_Initialized,
  TCoreWebView2ContextMenuTarget_BaseIntf,
  TCoreWebView2ContextMenuTarget_Kind,
  TCoreWebView2ContextMenuTarget_IsEditable,
  TCoreWebView2ContextMenuTarget_IsRequestedForMainFrame,
  TCoreWebView2ContextMenuTarget_PageUri,
  TCoreWebView2ContextMenuTarget_FrameUri,
  TCoreWebView2ContextMenuTarget_HasLinkUri,
  TCoreWebView2ContextMenuTarget_LinkUri,
  TCoreWebView2ContextMenuTarget_HasLinkText,
  TCoreWebView2ContextMenuTarget_LinkText,
  TCoreWebView2ContextMenuTarget_HasSourceUri,
  TCoreWebView2ContextMenuTarget_SourceUri,
  TCoreWebView2ContextMenuTarget_HasSelection,
  TCoreWebView2ContextMenuTarget_SelectionText;