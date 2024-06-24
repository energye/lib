
//constructor
function CoreWebView2ContextMenuTarget_Create(const aBaseIntf: ICoreWebView2ContextMenuTarget): TCoreWebView2ContextMenuTarget; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2ContextMenuTarget.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_Initialized(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ContextMenuTarget_BaseIntf(AObj: TCoreWebView2ContextMenuTarget; var Result: ICoreWebView2ContextMenuTarget); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_Kind(AObj: TCoreWebView2ContextMenuTarget): TWVMenuTargetKind; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_IsEditable(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEditable;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_IsRequestedForMainFrame(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsRequestedForMainFrame;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_PageUri(AObj: TCoreWebView2ContextMenuTarget): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.PageUri);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_FrameUri(AObj: TCoreWebView2ContextMenuTarget): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.FrameUri);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_HasLinkUri(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasLinkUri;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_LinkUri(AObj: TCoreWebView2ContextMenuTarget): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.LinkUri);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_HasLinkText(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasLinkText;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_LinkText(AObj: TCoreWebView2ContextMenuTarget): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.LinkText);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_HasSourceUri(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasSourceUri;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_SourceUri(AObj: TCoreWebView2ContextMenuTarget): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.SourceUri);
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_HasSelection(AObj: TCoreWebView2ContextMenuTarget): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasSelection;
  handleExceptionEnd
end;

//property
function CoreWebView2ContextMenuTarget_SelectionText(AObj: TCoreWebView2ContextMenuTarget): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.SelectionText);
  handleExceptionEnd
end;


exports
  CoreWebView2ContextMenuTarget_Create,
  CoreWebView2ContextMenuTarget_Initialized,
  CoreWebView2ContextMenuTarget_BaseIntf,
  CoreWebView2ContextMenuTarget_Kind,
  CoreWebView2ContextMenuTarget_IsEditable,
  CoreWebView2ContextMenuTarget_IsRequestedForMainFrame,
  CoreWebView2ContextMenuTarget_PageUri,
  CoreWebView2ContextMenuTarget_FrameUri,
  CoreWebView2ContextMenuTarget_HasLinkUri,
  CoreWebView2ContextMenuTarget_LinkUri,
  CoreWebView2ContextMenuTarget_HasLinkText,
  CoreWebView2ContextMenuTarget_LinkText,
  CoreWebView2ContextMenuTarget_HasSourceUri,
  CoreWebView2ContextMenuTarget_SourceUri,
  CoreWebView2ContextMenuTarget_HasSelection,
  CoreWebView2ContextMenuTarget_SelectionText;