// constructor
function TCefXmlReaderRef_Create(data: Pointer; out IntfXmlReader: ICefXmlReader): TCefXmlReaderRef; extdecl;
begin
  {$define handleExceptionID := 22700}
  handleExceptionBegin
  Result := TCefXmlReaderRef.Create(data);
  IntfXmlReader := Result as ICefXmlReader;
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_MoveToNextNode(AObj: ICefXmlReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 22701}
  handleExceptionBegin
  Result := AObj.MoveToNextNode();
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_Close(AObj: ICefXmlReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 22702}
  handleExceptionBegin
  Result := AObj.Close();
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_HasError(AObj: ICefXmlReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 22703}
  handleExceptionBegin
  Result := AObj.HasError();
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetError(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22704}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetError()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_GetType(AObj: ICefXmlReader): TCefXmlNodeType; extdecl;
begin
  {$define handleExceptionID := 22705}
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_GetDepth(AObj: ICefXmlReader): Integer; extdecl;
begin
  {$define handleExceptionID := 22706}
  handleExceptionBegin
  Result := AObj.GetDepth();
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetLocalName(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22707}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetLocalName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetPrefix(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22708}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetPrefix()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetQualifiedName(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22709}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetQualifiedName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetNamespaceUri(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22710}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetNamespaceUri()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetBaseUri(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22711}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetBaseUri()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetXmlLang(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22712}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetXmlLang()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_IsEmptyElement(AObj: ICefXmlReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 22713}
  handleExceptionBegin
  Result := AObj.IsEmptyElement();
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_HasValue(AObj: ICefXmlReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 22714}
  handleExceptionBegin
  Result := AObj.HasValue();
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetValue(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22715}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetValue()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_HasAttributes(AObj: ICefXmlReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 22716}
  handleExceptionBegin
  Result := AObj.HasAttributes();
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_GetAttributeCount(AObj: ICefXmlReader): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 22717}
  handleExceptionBegin
  Result := AObj.GetAttributeCount();
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetAttributeByIndex(AObj: ICefXmlReader; index: Integer;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22718}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetAttributeByIndex(index)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetAttributeByQName(AObj: ICefXmlReader; const qualifiedName: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22719}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetAttributeByQName(PCharToUStr(qualifiedName))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetAttributeByLName(AObj: ICefXmlReader; const localName: PChar; const namespaceURI: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22720}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetAttributeByLName(PCharToUStr(localName), PCharToUStr(namespaceURI))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetInnerXml(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22721}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetInnerXml()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefXmlReaderRef_GetOuterXml(AObj: ICefXmlReader;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 22722}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetOuterXml()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_GetLineNumber(AObj: ICefXmlReader): Integer; extdecl;
begin
  {$define handleExceptionID := 22723}
  handleExceptionBegin
  Result := AObj.GetLineNumber();
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_MoveToAttributeByIndex(AObj: ICefXmlReader; index: Integer): LongBool; extdecl;
begin
  {$define handleExceptionID := 22724}
  handleExceptionBegin
  Result := AObj.MoveToAttributeByIndex(index);
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_MoveToAttributeByQName(AObj: ICefXmlReader; const qualifiedName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 22725}
  handleExceptionBegin
  Result := AObj.MoveToAttributeByQName(PCharToUStr(qualifiedName));
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_MoveToAttributeByLName(AObj: ICefXmlReader; const localName: PChar; const namespaceURI: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 22726}
  handleExceptionBegin
  Result := AObj.MoveToAttributeByLName(PCharToUStr(localName), PCharToUStr(namespaceURI));
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_MoveToFirstAttribute(AObj: ICefXmlReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 22727}
  handleExceptionBegin
  Result := AObj.MoveToFirstAttribute();
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_MoveToNextAttribute(AObj: ICefXmlReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 22728}
  handleExceptionBegin
  Result := AObj.MoveToNextAttribute();
  handleExceptionEnd
end;

// function
function TCefXmlReaderRef_MoveToCarryingElement(AObj: ICefXmlReader): LongBool; extdecl;
begin
  {$define handleExceptionID := 22729}
  handleExceptionBegin
  Result := AObj.MoveToCarryingElement();
  handleExceptionEnd
end;

// function static
procedure TCefXmlReaderRef_UnWrap(data: Pointer; var Result: ICefXmlReader); extdecl;
begin
  Result := TCefXmlReaderRef.UnWrap(data);
end;

// function static
procedure TCefXmlReaderRef_New(const stream: ICefStreamReader; encodingType: TCefXmlEncodingType; const URI: PChar; var Result: ICefXmlReader); extdecl;
begin
  Result := TCefXmlReaderRef.New(stream, encodingType, URI);
end;

exports
  TCefXmlReaderRef_Create,
  TCefXmlReaderRef_MoveToNextNode,
  TCefXmlReaderRef_Close,
  TCefXmlReaderRef_HasError,
  TCefXmlReaderRef_GetError,
  TCefXmlReaderRef_GetType,
  TCefXmlReaderRef_GetDepth,
  TCefXmlReaderRef_GetLocalName,
  TCefXmlReaderRef_GetPrefix,
  TCefXmlReaderRef_GetQualifiedName,
  TCefXmlReaderRef_GetNamespaceUri,
  TCefXmlReaderRef_GetBaseUri,
  TCefXmlReaderRef_GetXmlLang,
  TCefXmlReaderRef_IsEmptyElement,
  TCefXmlReaderRef_HasValue,
  TCefXmlReaderRef_GetValue,
  TCefXmlReaderRef_HasAttributes,
  TCefXmlReaderRef_GetAttributeCount,
  TCefXmlReaderRef_GetAttributeByIndex,
  TCefXmlReaderRef_GetAttributeByQName,
  TCefXmlReaderRef_GetAttributeByLName,
  TCefXmlReaderRef_GetInnerXml,
  TCefXmlReaderRef_GetOuterXml,
  TCefXmlReaderRef_GetLineNumber,
  TCefXmlReaderRef_MoveToAttributeByIndex,
  TCefXmlReaderRef_MoveToAttributeByQName,
  TCefXmlReaderRef_MoveToAttributeByLName,
  TCefXmlReaderRef_MoveToFirstAttribute,
  TCefXmlReaderRef_MoveToNextAttribute,
  TCefXmlReaderRef_MoveToCarryingElement,
  TCefXmlReaderRef_UnWrap,
  TCefXmlReaderRef_New;