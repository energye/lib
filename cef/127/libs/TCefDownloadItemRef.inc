// constructor
function TCefDownloadItemRef_Create(data: Pointer; out IntfDownloadItem: ICefDownloadItem): TCefDownloadItemRef; extdecl;
begin
  {$define handleExceptionID := 18900}
  handleExceptionBegin
  Result := TCefDownloadItemRef.Create(data);
  IntfDownloadItem := Result as ICefDownloadItem;
  handleExceptionEnd
end;

// function
function TCefDownloadItemRef_IsValid(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 18901}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefDownloadItemRef_IsInProgress(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 18902}
  handleExceptionBegin
  Result := AObj.IsInProgress();
  handleExceptionEnd
end;

// function
function TCefDownloadItemRef_IsComplete(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 18903}
  handleExceptionBegin
  Result := AObj.IsComplete();
  handleExceptionEnd
end;

// function
function TCefDownloadItemRef_IsCanceled(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 18904}
  handleExceptionBegin
  Result := AObj.IsCanceled();
  handleExceptionEnd
end;

// function
function TCefDownloadItemRef_IsInterrupted(AObj: ICefDownloadItem): LongBool; extdecl;
begin
  {$define handleExceptionID := 18905}
  handleExceptionBegin
  Result := AObj.IsInterrupted();
  handleExceptionEnd
end;

// function
function TCefDownloadItemRef_GetInterruptReason(AObj: ICefDownloadItem): TCefDownloadInterruptReason; extdecl;
begin
  {$define handleExceptionID := 18906}
  handleExceptionBegin
  Result := AObj.GetInterruptReason();
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetCurrentSpeed(AObj: ICefDownloadItem; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 18907}
  handleExceptionBegin
  Result := AObj.GetCurrentSpeed();
  handleExceptionEnd
end;

// function
function TCefDownloadItemRef_GetPercentComplete(AObj: ICefDownloadItem): Integer; extdecl;
begin
  {$define handleExceptionID := 18908}
  handleExceptionBegin
  Result := AObj.GetPercentComplete();
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetTotalBytes(AObj: ICefDownloadItem; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 18909}
  handleExceptionBegin
  Result := AObj.GetTotalBytes();
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetReceivedBytes(AObj: ICefDownloadItem; var Result: Int64); extdecl;
begin
  {$define handleExceptionID := 18910}
  handleExceptionBegin
  Result := AObj.GetReceivedBytes();
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetStartTime(AObj: ICefDownloadItem; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 18911}
  handleExceptionBegin
  Result := AObj.GetStartTime();
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetEndTime(AObj: ICefDownloadItem; var Result: Double); extdecl;
begin
  {$define handleExceptionID := 18912}
  handleExceptionBegin
  Result := AObj.GetEndTime();
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetFullPath(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18913}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetFullPath()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefDownloadItemRef_GetId(AObj: ICefDownloadItem): Cardinal; extdecl;
begin
  {$define handleExceptionID := 18914}
  handleExceptionBegin
  Result := AObj.GetId();
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetUrl(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18915}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetOriginalUrl(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18916}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetOriginalUrl()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetSuggestedFileName(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18917}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSuggestedFileName()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetContentDisposition(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18918}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetContentDisposition()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefDownloadItemRef_GetMimeType(AObj: ICefDownloadItem;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 18919}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetMimeType()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function static
procedure TCefDownloadItemRef_UnWrap(data: Pointer; var Result: ICefDownLoadItem); extdecl;
begin
  Result := TCefDownloadItemRef.UnWrap(data);
end;

exports
  TCefDownloadItemRef_Create,
  TCefDownloadItemRef_IsValid,
  TCefDownloadItemRef_IsInProgress,
  TCefDownloadItemRef_IsComplete,
  TCefDownloadItemRef_IsCanceled,
  TCefDownloadItemRef_IsInterrupted,
  TCefDownloadItemRef_GetInterruptReason,
  TCefDownloadItemRef_GetCurrentSpeed,
  TCefDownloadItemRef_GetPercentComplete,
  TCefDownloadItemRef_GetTotalBytes,
  TCefDownloadItemRef_GetReceivedBytes,
  TCefDownloadItemRef_GetStartTime,
  TCefDownloadItemRef_GetEndTime,
  TCefDownloadItemRef_GetFullPath,
  TCefDownloadItemRef_GetId,
  TCefDownloadItemRef_GetUrl,
  TCefDownloadItemRef_GetOriginalUrl,
  TCefDownloadItemRef_GetSuggestedFileName,
  TCefDownloadItemRef_GetContentDisposition,
  TCefDownloadItemRef_GetMimeType,
  TCefDownloadItemRef_UnWrap;