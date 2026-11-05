// constructor
function TCefDomNodeRef_Create(data: Pointer; out IntfDomNode: ICefDomNode): TCefDomNodeRef; extdecl;
begin
  {$define handleExceptionID := 19000}
  handleExceptionBegin
  Result := TCefDomNodeRef.Create(data);
  IntfDomNode := Result as ICefDomNode;
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_GetType(AObj: ICefDomNode): TCefDomNodeType; extdecl;
begin
  {$define handleExceptionID := 19001}
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsText(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 19002}
  handleExceptionBegin
  Result := AObj.IsText();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsElement(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 19003}
  handleExceptionBegin
  Result := AObj.IsElement();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsEditable(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 19004}
  handleExceptionBegin
  Result := AObj.IsEditable();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsFormControlElement(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 19005}
  handleExceptionBegin
  Result := AObj.IsFormControlElement();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_GetFormControlElementType(AObj: ICefDomNode): TCefDomFormControlType; extdecl;
begin
  {$define handleExceptionID := 19006}
  handleExceptionBegin
  Result := AObj.GetFormControlElementType();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsSame(AObj: ICefDomNode; const that: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 19007}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetName(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19008}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetValue(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19009}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetValue()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_SetValue(AObj: ICefDomNode; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19010}
  handleExceptionBegin
  Result := AObj.SetValue(PCharToUStr(value));
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetAsMarkup(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19011}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetAsMarkup()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetDocument(AObj: ICefDomNode; var Result: ICefDomDocument); extdecl;
begin
  {$define handleExceptionID := 19012}
  handleExceptionBegin
  Result := AObj.GetDocument();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetParent(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 19013}
  handleExceptionBegin
  Result := AObj.GetParent();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetPreviousSibling(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 19014}
  handleExceptionBegin
  Result := AObj.GetPreviousSibling();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetNextSibling(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 19015}
  handleExceptionBegin
  Result := AObj.GetNextSibling();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_HasChildren(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 19016}
  handleExceptionBegin
  Result := AObj.HasChildren();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetFirstChild(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 19017}
  handleExceptionBegin
  Result := AObj.GetFirstChild();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetLastChild(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 19018}
  handleExceptionBegin
  Result := AObj.GetLastChild();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetElementTagName(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19019}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetElementTagName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_HasElementAttributes(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 19020}
  handleExceptionBegin
  Result := AObj.HasElementAttributes();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_HasElementAttribute(AObj: ICefDomNode; const attrName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19021}
  handleExceptionBegin
  Result := AObj.HasElementAttribute(PCharToUStr(attrName));
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetElementAttribute(AObj: ICefDomNode; const attrName: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19022}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetElementAttribute(PCharToUStr(attrName))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_SetElementAttribute(AObj: ICefDomNode; const attrName: PChar; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 19023}
  handleExceptionBegin
  Result := AObj.SetElementAttribute(PCharToUStr(attrName), PCharToUStr(value));
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetElementInnerText(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19024}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetElementInnerText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetElementBounds(AObj: ICefDomNode; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 19025}
  handleExceptionBegin
  Result := AObj.GetElementBounds();
  handleExceptionEnd
end;

// function static
procedure TCefDomNodeRef_UnWrap(data: Pointer; var Result: ICefDomNode); extdecl;
begin
  Result := TCefDomNodeRef.UnWrap(data);
end;

// procedure
procedure TCefDomNodeRef_GetElementAttributes(AObj: ICefDomNode; const attrMap: ICefStringMap); extdecl;
begin
  {$define handleExceptionID := 19026}
  handleExceptionBegin
  AObj.GetElementAttributes(attrMap);
  handleExceptionEnd
end;

exports
  TCefDomNodeRef_Create,
  TCefDomNodeRef_GetType,
  TCefDomNodeRef_IsText,
  TCefDomNodeRef_IsElement,
  TCefDomNodeRef_IsEditable,
  TCefDomNodeRef_IsFormControlElement,
  TCefDomNodeRef_GetFormControlElementType,
  TCefDomNodeRef_IsSame,
  TCefDomNodeRef_GetName,
  TCefDomNodeRef_GetValue,
  TCefDomNodeRef_SetValue,
  TCefDomNodeRef_GetAsMarkup,
  TCefDomNodeRef_GetDocument,
  TCefDomNodeRef_GetParent,
  TCefDomNodeRef_GetPreviousSibling,
  TCefDomNodeRef_GetNextSibling,
  TCefDomNodeRef_HasChildren,
  TCefDomNodeRef_GetFirstChild,
  TCefDomNodeRef_GetLastChild,
  TCefDomNodeRef_GetElementTagName,
  TCefDomNodeRef_HasElementAttributes,
  TCefDomNodeRef_HasElementAttribute,
  TCefDomNodeRef_GetElementAttribute,
  TCefDomNodeRef_SetElementAttribute,
  TCefDomNodeRef_GetElementInnerText,
  TCefDomNodeRef_GetElementBounds,
  TCefDomNodeRef_UnWrap,
  TCefDomNodeRef_GetElementAttributes;