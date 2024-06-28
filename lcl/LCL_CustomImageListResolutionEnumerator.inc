
//constructor
function CustomImageListResolutionEnumerator_Create(AImgList: TCustomImageList; ADesc: LongBool): TCustomImageListResolutionEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomImageListResolutionEnumerator.Create(AImgList, ADesc);
  handleExceptionEnd
end;

//property
function CustomImageListResolutionEnumerator_Current(AObj: TCustomImageListResolutionEnumerator): TCustomImageListResolution; extdecl;
begin
  {$define handleExceptionFuncName :='Current'}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function CustomImageListResolutionEnumerator_GetEnumerator(AObj: TCustomImageListResolutionEnumerator): TCustomImageListResolutionEnumerator; extdecl;
begin
  {$define handleExceptionFuncName :='GetEnumerator'}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

//function
function CustomImageListResolutionEnumerator_MoveNext(AObj: TCustomImageListResolutionEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='MoveNext'}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

//function
function CustomImageListResolutionEnumerator_Class(): TClass; extdecl;
begin
  Result := TCustomImageListResolutionEnumerator;
end;


exports
  CustomImageListResolutionEnumerator_Create,
  CustomImageListResolutionEnumerator_Current,
  CustomImageListResolutionEnumerator_GetEnumerator,
  CustomImageListResolutionEnumerator_MoveNext,
  CustomImageListResolutionEnumerator_Class;