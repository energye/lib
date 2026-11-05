// constructor
function TCefDomNodeRef_Create(data: Pointer; out IntfDomNode: ICefDomNode): TCefDomNodeRef; extdecl;
begin
  {$define handleExceptionID := 18800}
  handleExceptionBegin
  Result := TCefDomNodeRef.Create(data);
  IntfDomNode := Result as ICefDomNode;
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_GetType(AObj: ICefDomNode): TCefDomNodeType; extdecl;
begin
  {$define handleExceptionID := 18801}
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsText(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 18802}
  handleExceptionBegin
  Result := AObj.IsText();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsElement(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 18803}
  handleExceptionBegin
  Result := AObj.IsElement();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsEditable(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 18804}
  handleExceptionBegin
  Result := AObj.IsEditable();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsFormControlElement(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 18805}
  handleExceptionBegin
  Result := AObj.IsFormControlElement();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_GetFormControlElementType(AObj: ICefDomNode): TCefDomFormControlType; extdecl;
begin
  {$define handleExceptionID := 18806}
  handleExceptionBegin
  Result := AObj.GetFormControlElementType();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_IsSame(AObj: ICefDomNode; const that: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 18807}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetName(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18808}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetValue(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18809}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetValue()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_SetValue(AObj: ICefDomNode; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 18810}
  handleExceptionBegin
  Result := AObj.SetValue(PCharToUStr(value));
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetAsMarkup(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18811}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetAsMarkup()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetDocument(AObj: ICefDomNode; var Result: ICefDomDocument); extdecl;
begin
  {$define handleExceptionID := 18812}
  handleExceptionBegin
  Result := AObj.GetDocument();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetParent(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18813}
  handleExceptionBegin
  Result := AObj.GetParent();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetPreviousSibling(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18814}
  handleExceptionBegin
  Result := AObj.GetPreviousSibling();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetNextSibling(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18815}
  handleExceptionBegin
  Result := AObj.GetNextSibling();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_HasChildren(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 18816}
  handleExceptionBegin
  Result := AObj.HasChildren();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetFirstChild(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18817}
  handleExceptionBegin
  Result := AObj.GetFirstChild();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetLastChild(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionID := 18818}
  handleExceptionBegin
  Result := AObj.GetLastChild();
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetElementTagName(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18819}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetElementTagName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_HasElementAttributes(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionID := 18820}
  handleExceptionBegin
  Result := AObj.HasElementAttributes();
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_HasElementAttribute(AObj: ICefDomNode; const attrName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 18821}
  handleExceptionBegin
  Result := AObj.HasElementAttribute(PCharToUStr(attrName));
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetElementAttribute(AObj: ICefDomNode; const attrName: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18822}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetElementAttribute(PCharToUStr(attrName))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefDomNodeRef_SetElementAttribute(AObj: ICefDomNode; const attrName: PChar; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 18823}
  handleExceptionBegin
  Result := AObj.SetElementAttribute(PCharToUStr(attrName), PCharToUStr(value));
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetElementInnerText(AObj: ICefDomNode;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18824}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetElementInnerText()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDomNodeRef_GetElementBounds(AObj: ICefDomNode; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 18825}
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
  {$define handleExceptionID := 18826}
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