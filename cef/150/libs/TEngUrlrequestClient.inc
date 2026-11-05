// constructor
function TEngUrlrequestClient_Create(out IntfUrlrequestClient: ICefUrlrequestClient): TEngUrlrequestClient; extdecl;
begin
  {$define handleExceptionID := 14800}
  handleExceptionBegin
  Result := TEngUrlrequestClient.Create();
  IntfUrlrequestClient := Result as ICefUrlrequestClient;
  handleExceptionEnd
end;

// event
procedure TEngUrlrequestClient_OnUrlrequestClientGetAuthCredentials(AObj: TEngUrlrequestClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngUrlrequestClient_TOnUrlrequestClientGetAuthCredentialsEvent}
  {$DEFINE EventName := OnUrlrequestClientGetAuthCredentials}
  CEFEventMethodCode
end;

// event
procedure TEngUrlrequestClient_OnUrlrequestClientRequestComplete(AObj: TEngUrlrequestClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngUrlrequestClient_TOnUrlrequestClientRequestCompleteEvent}
  {$DEFINE EventName := OnUrlrequestClientRequestComplete}
  CEFEventMethodCode
end;

// event
procedure TEngUrlrequestClient_OnUrlrequestClientUploadProgress(AObj: TEngUrlrequestClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngUrlrequestClient_TOnUrlrequestClientUploadProgressEvent}
  {$DEFINE EventName := OnUrlrequestClientUploadProgress}
  CEFEventMethodCode
end;

// event
procedure TEngUrlrequestClient_OnUrlrequestClientDownloadProgress(AObj: TEngUrlrequestClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngUrlrequestClient_TOnUrlrequestClientDownloadProgressEvent}
  {$DEFINE EventName := OnUrlrequestClientDownloadProgress}
  CEFEventMethodCode
end;

// event
procedure TEngUrlrequestClient_OnUrlrequestClientDownloadData(AObj: TEngUrlrequestClient; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngUrlrequestClient_TOnUrlrequestClientDownloadDataEvent}
  {$DEFINE EventName := OnUrlrequestClientDownloadData}
  CEFEventMethodCode
end;

exports
  TEngUrlrequestClient_Create,
  TEngUrlrequestClient_OnUrlrequestClientGetAuthCredentials,
  TEngUrlrequestClient_OnUrlrequestClientRequestComplete,
  TEngUrlrequestClient_OnUrlrequestClientUploadProgress,
  TEngUrlrequestClient_OnUrlrequestClientDownloadProgress,
  TEngUrlrequestClient_OnUrlrequestClientDownloadData;