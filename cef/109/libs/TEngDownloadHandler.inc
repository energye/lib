// constructor
function TEngDownloadHandler_Create(out IntfDownloadHandler: ICefDownloadHandler): TEngDownloadHandler; extdecl;
begin
  {$define handleExceptionID := 11400}
  handleExceptionBegin
  Result := TEngDownloadHandler.Create();
  IntfDownloadHandler := Result as ICefDownloadHandler;
  handleExceptionEnd
end;

// event
procedure TEngDownloadHandler_OnDownloadCanDownload(AObj: TEngDownloadHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDownloadHandler_TOnDownloadCanDownloadEvent}
  {$DEFINE EventName := OnDownloadCanDownload}
  CEFEventMethodCode
end;

// event
procedure TEngDownloadHandler_OnDownloadBeforeDownload(AObj: TEngDownloadHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDownloadHandler_TOnDownloadBeforeDownloadEvent}
  {$DEFINE EventName := OnDownloadBeforeDownload}
  CEFEventMethodCode
end;

// event
procedure TEngDownloadHandler_OnDownloadDownloadUpdated(AObj: TEngDownloadHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngDownloadHandler_TOnDownloadDownloadUpdatedEvent}
  {$DEFINE EventName := OnDownloadDownloadUpdated}
  CEFEventMethodCode
end;

exports
  TEngDownloadHandler_Create,
  TEngDownloadHandler_OnDownloadCanDownload,
  TEngDownloadHandler_OnDownloadBeforeDownload,
  TEngDownloadHandler_OnDownloadDownloadUpdated;