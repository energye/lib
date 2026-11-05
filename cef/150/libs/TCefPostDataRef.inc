// constructor
function TCefPostDataRef_Create(data: Pointer; out IntfPostData: ICefPostData): TCefPostDataRef; extdecl;
begin
  {$define handleExceptionID := 20100}
  handleExceptionBegin
  Result := TCefPostDataRef.Create(data);
  IntfPostData := Result as ICefPostData;
  handleExceptionEnd
end;

// function
function TCefPostDataRef_IsReadOnly(AObj: ICefPostData): LongBool; extdecl;
begin
  {$define handleExceptionID := 20101}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
function TCefPostDataRef_HasExcludedElements(AObj: ICefPostData): LongBool; extdecl;
begin
  {$define handleExceptionID := 20102}
  handleExceptionBegin
  Result := AObj.HasExcludedElements();
  handleExceptionEnd
end;

// function
function TCefPostDataRef_GetElementCount(AObj: ICefPostData): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 20103}
  handleExceptionBegin
  Result := AObj.GetElementCount();
  handleExceptionEnd
end;

// function
function TCefPostDataRef_RemoveElement(AObj: ICefPostData; const element: ICefPostDataElement): LongBool; extdecl;
begin
  {$define handleExceptionID := 20104}
  handleExceptionBegin
  Result := AObj.RemoveElement(element);
  handleExceptionEnd
end;

// function
function TCefPostDataRef_AddElement(AObj: ICefPostData; const element: ICefPostDataElement): LongBool; extdecl;
begin
  {$define handleExceptionID := 20105}
  handleExceptionBegin
  Result := AObj.AddElement(element);
  handleExceptionEnd
end;

// function static
procedure TCefPostDataRef_UnWrap(data: Pointer; var Result: ICefPostData); extdecl;
begin
  Result := TCefPostDataRef.UnWrap(data);
end;

// function static
procedure TCefPostDataRef_New(var Result: ICefPostData); extdecl;
begin
  Result := TCefPostDataRef.New();
end;

// procedure
procedure TCefPostDataRef_GetElements(AObj: ICefPostData; elementsCount: NativeUInt; var elements: TCefPostDataElementArray); extdecl;
var
  Outelements: TCefPostDataElementArray = nil;
begin
  {$define handleExceptionID := 20106}
  handleExceptionBegin
  AObj.GetElements(elementsCount, Outelements);
  elementsCount := Length(Outelements);
  elements := Outelements;
  handleExceptionEnd
end;

// procedure
procedure TCefPostDataRef_RemoveElements(AObj: ICefPostData); extdecl;
begin
  {$define handleExceptionID := 20107}
  handleExceptionBegin
  AObj.RemoveElements();
  handleExceptionEnd
end;

exports
  TCefPostDataRef_Create,
  TCefPostDataRef_IsReadOnly,
  TCefPostDataRef_HasExcludedElements,
  TCefPostDataRef_GetElementCount,
  TCefPostDataRef_RemoveElement,
  TCefPostDataRef_AddElement,
  TCefPostDataRef_UnWrap,
  TCefPostDataRef_New,
  TCefPostDataRef_GetElements,
  TCefPostDataRef_RemoveElements;