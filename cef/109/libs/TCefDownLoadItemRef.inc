// constructor
function TCefDownLoadItemRef_Create(data: Pointer; out IntfDownloadItem: ICefDownloadItem): TCefDownLoadItemRef; extdecl;
begin
  {$define handleExceptionID := 18300}
  handleExceptionBegin
  Result := TCefDownLoadItemRef.Create(data);
  IntfDownloadItem := Result as ICefDownloadItem;
  handleExceptionEnd
end;

// function
function TCefDownLoadItemRef_IsValid(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 18301}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefDownLoadItemRef_IsInProgress(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 18302}
  handleExceptionBegin
  Result := AObj.IsInProgress();
  handleExceptionEnd
end;

// function
function TCefDownLoadItemRef_IsComplete(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 18303}
  handleExceptionBegin
  Result := AObj.IsComplete();
  handleExceptionEnd
end;

// function
function TCefDownLoadItemRef_IsCanceled(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 18304}
  handleExceptionBegin
  Result := AObj.IsCanceled();
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetCurrentSpeed(AObj: ICefDownloadItem; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 18305}
  handleExceptionBegin
  Result := AObj.GetCurrentSpeed();
  handleExceptionEnd
end;

// function
function TCefDownLoadItemRef_GetPercentComplete(AObj: ICefDownloadItem): Integer; extdecl;
begin
  {$define handleExceptionID := 18306}
  handleExceptionBegin
  Result := AObj.GetPercentComplete();
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetTotalBytes(AObj: ICefDownloadItem; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 18307}
  handleExceptionBegin
  Result := AObj.GetTotalBytes();
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetReceivedBytes(AObj: ICefDownloadItem; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 18308}
  handleExceptionBegin
  Result := AObj.GetReceivedBytes();
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetStartTime(AObj: ICefDownloadItem; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 18309}
  handleExceptionBegin
  Result := AObj.GetStartTime();
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetEndTime(AObj: ICefDownloadItem; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 18310}
  handleExceptionBegin
  Result := AObj.GetEndTime();
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetFullPath(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18311}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFullPath()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefDownLoadItemRef_GetId(AObj: ICefDownloadItem): Cardinal; extdecl;
begin
  {$define handleExceptionID := 18312}
  handleExceptionBegin
  Result := AObj.GetId();
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetUrl(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18313}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetOriginalUrl(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18314}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetOriginalUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetSuggestedFileName(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18315}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSuggestedFileName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetContentDisposition(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18316}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetContentDisposition()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDownLoadItemRef_GetMimeType(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18317}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetMimeType()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function static
procedure TCefDownLoadItemRef_UnWrap(data: Pointer; var Result: ICefDownLoadItem); extdecl;
begin
  Result := TCefDownLoadItemRef.UnWrap(data);
end;

exports
  TCefDownLoadItemRef_Create,
  TCefDownLoadItemRef_IsValid,
  TCefDownLoadItemRef_IsInProgress,
  TCefDownLoadItemRef_IsComplete,
  TCefDownLoadItemRef_IsCanceled,
  TCefDownLoadItemRef_GetCurrentSpeed,
  TCefDownLoadItemRef_GetPercentComplete,
  TCefDownLoadItemRef_GetTotalBytes,
  TCefDownLoadItemRef_GetReceivedBytes,
  TCefDownLoadItemRef_GetStartTime,
  TCefDownLoadItemRef_GetEndTime,
  TCefDownLoadItemRef_GetFullPath,
  TCefDownLoadItemRef_GetId,
  TCefDownLoadItemRef_GetUrl,
  TCefDownLoadItemRef_GetOriginalUrl,
  TCefDownLoadItemRef_GetSuggestedFileName,
  TCefDownLoadItemRef_GetContentDisposition,
  TCefDownLoadItemRef_GetMimeType,
  TCefDownLoadItemRef_UnWrap;