// constructor
function TCustomImageListResolutionEnumerator_Create(AImgList: TCustomImageList; ADesc: LongBool): TCustomImageListResolutionEnumerator; extdecl;
begin
  {$define handleExceptionID := 26600}
  handleExceptionBegin
  Result := TCustomImageListResolutionEnumerator.Create(AImgList, ADesc);
  handleExceptionEnd
end;

// function
function TCustomImageListResolutionEnumerator_GetEnumerator(AObj: TCustomImageListResolutionEnumerator): TCustomImageListResolutionEnumerator; extdecl;
begin
  {$define handleExceptionID := 26601}
  handleExceptionBegin
  Result := AObj.GetEnumerator();
  handleExceptionEnd
end;

// function
function TCustomImageListResolutionEnumerator_MoveNext(AObj: TCustomImageListResolutionEnumerator): LongBool; extdecl;
begin
  {$define handleExceptionID := 26602}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TCustomImageListResolutionEnumerator_Current(AObj: TCustomImageListResolutionEnumerator): TCustomImageListResolution; extdecl;
begin
  {$define handleExceptionID := 26603}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TCustomImageListResolutionEnumerator_Create,
  TCustomImageListResolutionEnumerator_GetEnumerator,
  TCustomImageListResolutionEnumerator_MoveNext,
  TCustomImageListResolutionEnumerator_Current;