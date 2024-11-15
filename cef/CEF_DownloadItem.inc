
//function
procedure CefDownloadItem_UnWrap(data: Pointer; var Result: ICefDownLoadItem); extdecl;
begin
  Result := TCefDownloadItemRef.UnWrap(data);
end;

//function
function CefDownloadItem_IsValid(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefDownloadItem_IsInProgress(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsInProgress'}
  handleExceptionBegin
  Result := AObj.IsInProgress();
  handleExceptionEnd
end;

//function
function CefDownloadItem_IsComplete(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsComplete'}
  handleExceptionBegin
  Result := AObj.IsComplete();
  handleExceptionEnd
end;

//function
function CefDownloadItem_IsCanceled(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsCanceled'}
  handleExceptionBegin
  Result := AObj.IsCanceled();
  handleExceptionEnd
end;

//function
procedure CefDownloadItem_GetCurrentSpeed(AObj: ICefDownloadItem; var Result: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='GetCurrentSpeed'}
  handleExceptionBegin
  Result := AObj.GetCurrentSpeed();
  handleExceptionEnd
end;

//function
function CefDownloadItem_GetPercentComplete(AObj: ICefDownloadItem): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetPercentComplete'}
  handleExceptionBegin
  Result := AObj.GetPercentComplete();
  handleExceptionEnd
end;

//function
procedure CefDownloadItem_GetTotalBytes(AObj: ICefDownloadItem; var Result: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='GetTotalBytes'}
  handleExceptionBegin
  Result := AObj.GetTotalBytes();
  handleExceptionEnd
end;

//function
procedure CefDownloadItem_GetReceivedBytes(AObj: ICefDownloadItem; var Result: Int64); extdecl;
begin
  {$define handleExceptionFuncName :='GetReceivedBytes'}
  handleExceptionBegin
  Result := AObj.GetReceivedBytes();
  handleExceptionEnd
end;

//function
procedure CefDownloadItem_GetStartTime(AObj: ICefDownloadItem; var Result: TDateTime); extdecl;
begin
  {$define handleExceptionFuncName :='GetStartTime'}
  handleExceptionBegin
  Result := AObj.GetStartTime();
  handleExceptionEnd
end;

//function
procedure CefDownloadItem_GetEndTime(AObj: ICefDownloadItem; var Result: TDateTime); extdecl;
begin
  {$define handleExceptionFuncName :='GetEndTime'}
  handleExceptionBegin
  Result := AObj.GetEndTime();
  handleExceptionEnd
end;

//function
function CefDownloadItem_GetFullPath(AObj: ICefDownloadItem): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetFullPath'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetFullPath());
  handleExceptionEnd
end;

//function
function CefDownloadItem_GetId(AObj: ICefDownloadItem): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='GetId'}
  handleExceptionBegin
  Result := AObj.GetId();
  handleExceptionEnd
end;

//function
function CefDownloadItem_GetUrl(AObj: ICefDownloadItem): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetUrl'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetUrl());
  handleExceptionEnd
end;

//function
function CefDownloadItem_GetOriginalUrl(AObj: ICefDownloadItem): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetOriginalUrl'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetOriginalUrl());
  handleExceptionEnd
end;

//function
function CefDownloadItem_GetSuggestedFileName(AObj: ICefDownloadItem): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetSuggestedFileName'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetSuggestedFileName());
  handleExceptionEnd
end;

//function
function CefDownloadItem_GetContentDisposition(AObj: ICefDownloadItem): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetContentDisposition'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetContentDisposition());
  handleExceptionEnd
end;

//function
function CefDownloadItem_GetMimeType(AObj: ICefDownloadItem): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetMimeType'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetMimeType());
  handleExceptionEnd
end;


exports
  CefDownloadItem_UnWrap,
  CefDownloadItem_IsValid,
  CefDownloadItem_IsInProgress,
  CefDownloadItem_IsComplete,
  CefDownloadItem_IsCanceled,
  CefDownloadItem_GetCurrentSpeed,
  CefDownloadItem_GetPercentComplete,
  CefDownloadItem_GetTotalBytes,
  CefDownloadItem_GetReceivedBytes,
  CefDownloadItem_GetStartTime,
  CefDownloadItem_GetEndTime,
  CefDownloadItem_GetFullPath,
  CefDownloadItem_GetId,
  CefDownloadItem_GetUrl,
  CefDownloadItem_GetOriginalUrl,
  CefDownloadItem_GetSuggestedFileName,
  CefDownloadItem_GetContentDisposition,
  CefDownloadItem_GetMimeType;