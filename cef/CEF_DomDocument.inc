
//function
procedure CefDomDocument_UnWrap(data: Pointer; var Result: ICefDomDocument); extdecl;
begin
  Result := TCefDomDocumentRef.UnWrap(data);
end;

//function
function CefDomDocument_GetType(AObj: ICefDomDocument): TCefDomDocumentType; extdecl;
begin
  {$define handleExceptionFuncName :='GetType'}
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

//function
procedure CefDomDocument_GetDocument(AObj: ICefDomDocument; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetDocument'}
  handleExceptionBegin
  Result := AObj.GetDocument();
  handleExceptionEnd
end;

//function
procedure CefDomDocument_GetBody(AObj: ICefDomDocument; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetBody'}
  handleExceptionBegin
  Result := AObj.GetBody();
  handleExceptionEnd
end;

//function
procedure CefDomDocument_GetHead(AObj: ICefDomDocument; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetHead'}
  handleExceptionBegin
  Result := AObj.GetHead();
  handleExceptionEnd
end;

//function
function CefDomDocument_GetTitle(AObj: ICefDomDocument): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetTitle'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetTitle());
  handleExceptionEnd
end;

//function
procedure CefDomDocument_GetElementById(AObj: ICefDomDocument; const id: PChar; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementById'}
  handleExceptionBegin
  Result := AObj.GetElementById(id);
  handleExceptionEnd
end;

//function
procedure CefDomDocument_GetFocusedNode(AObj: ICefDomDocument; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetFocusedNode'}
  handleExceptionBegin
  Result := AObj.GetFocusedNode();
  handleExceptionEnd
end;

//function
function CefDomDocument_HasSelection(AObj: ICefDomDocument): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasSelection'}
  handleExceptionBegin
  Result := AObj.HasSelection();
  handleExceptionEnd
end;

//function
function CefDomDocument_GetSelectionStartOffset(AObj: ICefDomDocument): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetSelectionStartOffset'}
  handleExceptionBegin
  Result := AObj.GetSelectionStartOffset();
  handleExceptionEnd
end;

//function
function CefDomDocument_GetSelectionEndOffset(AObj: ICefDomDocument): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetSelectionEndOffset'}
  handleExceptionBegin
  Result := AObj.GetSelectionEndOffset();
  handleExceptionEnd
end;

//function
function CefDomDocument_GetSelectionAsMarkup(AObj: ICefDomDocument): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetSelectionAsMarkup'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetSelectionAsMarkup());
  handleExceptionEnd
end;

//function
function CefDomDocument_GetSelectionAsText(AObj: ICefDomDocument): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetSelectionAsText'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetSelectionAsText());
  handleExceptionEnd
end;

//function
function CefDomDocument_GetBaseUrl(AObj: ICefDomDocument): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetBaseUrl'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetBaseUrl());
  handleExceptionEnd
end;

//function
function CefDomDocument_GetCompleteUrl(AObj: ICefDomDocument; const partialURL: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetCompleteUrl'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetCompleteUrl(partialURL));
  handleExceptionEnd
end;


exports
  CefDomDocument_UnWrap,
  CefDomDocument_GetType,
  CefDomDocument_GetDocument,
  CefDomDocument_GetBody,
  CefDomDocument_GetHead,
  CefDomDocument_GetTitle,
  CefDomDocument_GetElementById,
  CefDomDocument_GetFocusedNode,
  CefDomDocument_HasSelection,
  CefDomDocument_GetSelectionStartOffset,
  CefDomDocument_GetSelectionEndOffset,
  CefDomDocument_GetSelectionAsMarkup,
  CefDomDocument_GetSelectionAsText,
  CefDomDocument_GetBaseUrl,
  CefDomDocument_GetCompleteUrl;