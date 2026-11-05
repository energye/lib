// constructor
function TCoreWebView2ObjectCollection_Create(const aBaseIntf: ICoreWebView2ObjectCollectionView): TCoreWebView2ObjectCollection; extdecl;
begin
  {$define handleExceptionID := 7500}
  handleExceptionBegin
  Result := TCoreWebView2ObjectCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2ObjectCollection_RemoveValueAtIndex(AObj: TCoreWebView2ObjectCollection; index: cardinal): LongBool; extdecl;
begin
  {$define handleExceptionID := 7501}
  handleExceptionBegin
  Result := AObj.RemoveValueAtIndex(index);
  handleExceptionEnd
end;

// function
function TCoreWebView2ObjectCollection_InsertValueAtIndex(AObj: TCoreWebView2ObjectCollection; index: cardinal; const value: IUnknown): LongBool; extdecl;
begin
  {$define handleExceptionID := 7502}
  handleExceptionBegin
  Result := AObj.InsertValueAtIndex(index, value);
  handleExceptionEnd
end;

exports
  TCoreWebView2ObjectCollection_Create,
  TCoreWebView2ObjectCollection_RemoveValueAtIndex,
  TCoreWebView2ObjectCollection_InsertValueAtIndex;