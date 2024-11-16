
//function
procedure CefDomNode_UnWrap(data: Pointer; var Result: ICefDomNode); extdecl;
begin
  Result := TCefDomNodeRef.UnWrap(data);
end;

//function
function CefDomNode_GetType(AObj: ICefDomNode): TCefDomNodeType; extdecl;
begin
  {$define handleExceptionFuncName :='GetType'}
  handleExceptionBegin
  Result := AObj.GetType();
  handleExceptionEnd
end;

//function
function CefDomNode_IsText(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsText'}
  handleExceptionBegin
  Result := AObj.IsText();
  handleExceptionEnd
end;

//function
function CefDomNode_IsElement(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsElement'}
  handleExceptionBegin
  Result := AObj.IsElement();
  handleExceptionEnd
end;

//function
function CefDomNode_IsEditable(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEditable'}
  handleExceptionBegin
  Result := AObj.IsEditable();
  handleExceptionEnd
end;

//function
function CefDomNode_IsFormControlElement(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsFormControlElement'}
  handleExceptionBegin
  Result := AObj.IsFormControlElement();
  handleExceptionEnd
end;

//function
function CefDomNode_GetFormControlElementType(AObj: ICefDomNode): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetFormControlElementType'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetFormControlElementType());
  handleExceptionEnd
end;

//function
function CefDomNode_IsSame(AObj: ICefDomNode; const that: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefDomNode_GetName(AObj: ICefDomNode): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetName'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetName());
  handleExceptionEnd
end;

//function
function CefDomNode_GetValue(AObj: ICefDomNode): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetValue'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetValue());
  handleExceptionEnd
end;

//function
function CefDomNode_SetValue(AObj: ICefDomNode; const value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetValue'}
  handleExceptionBegin
  Result := AObj.SetValue(value);
  handleExceptionEnd
end;

//function
function CefDomNode_GetAsMarkup(AObj: ICefDomNode): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetAsMarkup'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetAsMarkup());
  handleExceptionEnd
end;

//function
procedure CefDomNode_GetDocument(AObj: ICefDomNode; var Result: ICefDomDocument); extdecl;
begin
  {$define handleExceptionFuncName :='GetDocument'}
  handleExceptionBegin
  Result := AObj.GetDocument();
  handleExceptionEnd
end;

//function
procedure CefDomNode_GetParent(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetParent'}
  handleExceptionBegin
  Result := AObj.GetParent();
  handleExceptionEnd
end;

//function
procedure CefDomNode_GetPreviousSibling(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetPreviousSibling'}
  handleExceptionBegin
  Result := AObj.GetPreviousSibling();
  handleExceptionEnd
end;

//function
procedure CefDomNode_GetNextSibling(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetNextSibling'}
  handleExceptionBegin
  Result := AObj.GetNextSibling();
  handleExceptionEnd
end;

//function
function CefDomNode_HasChildren(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasChildren'}
  handleExceptionBegin
  Result := AObj.HasChildren();
  handleExceptionEnd
end;

//function
procedure CefDomNode_GetFirstChild(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetFirstChild'}
  handleExceptionBegin
  Result := AObj.GetFirstChild();
  handleExceptionEnd
end;

//function
procedure CefDomNode_GetLastChild(AObj: ICefDomNode; var Result: ICefDomNode); extdecl;
begin
  {$define handleExceptionFuncName :='GetLastChild'}
  handleExceptionBegin
  Result := AObj.GetLastChild();
  handleExceptionEnd
end;

//function
function CefDomNode_GetElementTagName(AObj: ICefDomNode): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetElementTagName'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetElementTagName());
  handleExceptionEnd
end;

//function
function CefDomNode_HasElementAttributes(AObj: ICefDomNode): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasElementAttributes'}
  handleExceptionBegin
  Result := AObj.HasElementAttributes();
  handleExceptionEnd
end;

//function
function CefDomNode_HasElementAttribute(AObj: ICefDomNode; const attrName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasElementAttribute'}
  handleExceptionBegin
  Result := AObj.HasElementAttribute(attrName);
  handleExceptionEnd
end;

//function
function CefDomNode_GetElementAttribute(AObj: ICefDomNode; const attrName: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetElementAttribute'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetElementAttribute(attrName));
  handleExceptionEnd
end;

//function
function CefDomNode_SetElementAttribute(AObj: ICefDomNode; const attrName,  value: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='SetElementAttribute'}
  handleExceptionBegin
  Result := AObj.SetElementAttribute(attrName,  value);
  handleExceptionEnd
end;

//function
function CefDomNode_GetElementInnerText(AObj: ICefDomNode): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetElementInnerText'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetElementInnerText());
  handleExceptionEnd
end;

//function
procedure CefDomNode_GetElementBounds(AObj: ICefDomNode; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementBounds'}
  handleExceptionBegin
  Result := AObj.GetElementBounds();
  handleExceptionEnd
end;

//procedure
procedure CefDomNode_GetElementAttributes(AObj: ICefDomNode; const attrMap: ICefStringMap); extdecl;
begin
  {$define handleExceptionFuncName :='GetElementAttributes'}
  handleExceptionBegin
  AObj.GetElementAttributes(attrMap);
  handleExceptionEnd
end;

//procedure
procedure CefDomNode_GetElementAttributes1(AObj: ICefDomNode; var attrList: TStrings); extdecl;
var
  RetattrList: TStrings;
begin
  {$define handleExceptionFuncName :='GetElementAttributes1'}
  handleExceptionBegin
  RetattrList := TStringList.Create();
  AObj.GetElementAttributes(RetattrList);
  attrList := RetattrList;
  handleExceptionEnd
end;


exports
  CefDomNode_UnWrap,
  CefDomNode_GetType,
  CefDomNode_IsText,
  CefDomNode_IsElement,
  CefDomNode_IsEditable,
  CefDomNode_IsFormControlElement,
  CefDomNode_GetFormControlElementType,
  CefDomNode_IsSame,
  CefDomNode_GetName,
  CefDomNode_GetValue,
  CefDomNode_SetValue,
  CefDomNode_GetAsMarkup,
  CefDomNode_GetDocument,
  CefDomNode_GetParent,
  CefDomNode_GetPreviousSibling,
  CefDomNode_GetNextSibling,
  CefDomNode_HasChildren,
  CefDomNode_GetFirstChild,
  CefDomNode_GetLastChild,
  CefDomNode_GetElementTagName,
  CefDomNode_HasElementAttributes,
  CefDomNode_HasElementAttribute,
  CefDomNode_GetElementAttribute,
  CefDomNode_SetElementAttribute,
  CefDomNode_GetElementInnerText,
  CefDomNode_GetElementBounds,
  CefDomNode_GetElementAttributes,
  CefDomNode_GetElementAttributes1;