// constructor
function TCefDomDocumentRef_Create(data: Pointer; out IntfDomDocument: ICefDomDocument): TCefDomDocumentRef; extdecl;
begin
  {$define handleExceptionID := 18900}
  handleExceptionBegin
  Result := TCefDomDocumentRef.Create(data);
  IntfDomDocument := Result as ICefDomDocument;
  handleExceptionEnd
end;

// function
function TCefDomDocumentRef_GetType(AObj: ICefDomDocument): TCefDomDocumentType; extdecl;
begin
  {$define handleExceptionID := 18901}
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetDocument(AObj: ICefDomDocument; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18902}
  handleExceptionBegin
  Result := AObj.GetDocument();
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetBody(AObj: ICefDomDocument; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18903}
  handleExceptionBegin
  Result := AObj.GetBody();
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetHead(AObj: ICefDomDocument; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18904}
  handleExceptionBegin
  Result := AObj.GetHead();
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetTitle(AObj: ICefDomDocument;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18905}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetTitle()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetElementById(AObj: ICefDomDocument; const id: PChar; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18906}
  handleExceptionBegin
  Result := AObj.GetElementById(PCharToUStr(id));
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetFocusedNode(AObj: ICefDomDocument; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18907}
  handleExceptionBegin
  Result := AObj.GetFocusedNode();
  handleExceptionEnd
end;

// function
function TCefDomDocumentRef_HasSelection(AObj: ICefDomDocument): LongBool; extdecl;
begin
  {$define handleExceptionID := 18908}
  handleExceptionBegin
  Result := AObj.HasSelection();
  handleExceptionEnd
end;

// function
function TCefDomDocumentRef_GetSelectionStartOffset(AObj: ICefDomDocument): Integer; extdecl;
begin
  {$define handleExceptionID := 18909}
  handleExceptionBegin
  Result := AObj.GetSelectionStartOffset();
  handleExceptionEnd
end;

// function
function TCefDomDocumentRef_GetSelectionEndOffset(AObj: ICefDomDocument): Integer; extdecl;
begin
  {$define handleExceptionID := 18910}
  handleExceptionBegin
  Result := AObj.GetSelectionEndOffset();
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetSelectionAsMarkup(AObj: ICefDomDocument;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18911}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSelectionAsMarkup()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetSelectionAsText(AObj: ICefDomDocument;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18912}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSelectionAsText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetBaseUrl(AObj: ICefDomDocument;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18913}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetBaseUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomDocumentRef_GetCompleteUrl(AObj: ICefDomDocument; const partialURL: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18914}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetCompleteUrl(PCharToUStr(partialURL))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function static
procedure TCefDomDocumentRef_UnWrap(data: Pointer; var Result: ICefDomDocument); extdecl;
begin
  Result := TCefDomDocumentRef.UnWrap(data);
end;

exports
  TCefDomDocumentRef_Create,
  TCefDomDocumentRef_GetType,
  TCefDomDocumentRef_GetDocument,
  TCefDomDocumentRef_GetBody,
  TCefDomDocumentRef_GetHead,
  TCefDomDocumentRef_GetTitle,
  TCefDomDocumentRef_GetElementById,
  TCefDomDocumentRef_GetFocusedNode,
  TCefDomDocumentRef_HasSelection,
  TCefDomDocumentRef_GetSelectionStartOffset,
  TCefDomDocumentRef_GetSelectionEndOffset,
  TCefDomDocumentRef_GetSelectionAsMarkup,
  TCefDomDocumentRef_GetSelectionAsText,
  TCefDomDocumentRef_GetBaseUrl,
  TCefDomDocumentRef_GetCompleteUrl,
  TCefDomDocumentRef_UnWrap;