// constructor
function TCEFUrlRequestClientComponent_Create(AOwner: TComponent; out IntfUrlRequestClientEvents: ICEFUrlRequestClientEvents): TCEFUrlRequestClientComponent; extdecl;
begin
  {$define handleExceptionID := 5600}
  handleExceptionBegin
  Result := TCEFUrlRequestClientComponent.Create(AOwner);
  IntfUrlRequestClientEvents := Result as ICEFUrlRequestClientEvents;
  handleExceptionEnd
end;

// procedure
procedure TCEFUrlRequestClientComponent_AddURLRequest(AObj: TCEFUrlRequestClientComponent); extdecl;
begin
  {$define handleExceptionID := 5601}
  handleExceptionBegin
  AObj.AddURLRequest();
  handleExceptionEnd
end;

// property
procedure TCEFUrlRequestClientComponent_Client(AObj: TCEFUrlRequestClientComponent; var Result: ICefUrlrequestClient); extdecl;
begin
  {$define handleExceptionID := 5602}
  handleExceptionBegin
  Result := AObj.Client;
  handleExceptionEnd
end;

// property
function TCEFUrlRequestClientComponent_ThreadID(ASet: LongBool; AObj: TCEFUrlRequestClientComponent; AValue: TCefThreadId): TCefThreadId; extdecl;
begin
  {$define handleExceptionID := 5603}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ThreadID := AValue
  end else
    Result := AObj.ThreadID;
  handleExceptionEnd
end;

// event
procedure TCEFUrlRequestClientComponent_OnRequestComplete(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFUrlRequestClientComponent_TOnRequestComplete}
  {$DEFINE EventName := OnRequestComplete}
  CEFEventMethodCode
end;

// event
procedure TCEFUrlRequestClientComponent_OnUploadProgress(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFUrlRequestClientComponent_TOnUploadProgress}
  {$DEFINE EventName := OnUploadProgress}
  CEFEventMethodCode
end;

// event
procedure TCEFUrlRequestClientComponent_OnDownloadProgress(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFUrlRequestClientComponent_TOnDownloadProgress}
  {$DEFINE EventName := OnDownloadProgress}
  CEFEventMethodCode
end;

// event
procedure TCEFUrlRequestClientComponent_OnDownloadData(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFUrlRequestClientComponent_TOnDownloadData}
  {$DEFINE EventName := OnDownloadData}
  CEFEventMethodCode
end;

// event
procedure TCEFUrlRequestClientComponent_OnGetAuthCredentials(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFUrlRequestClientComponent_TOnGetAuthCredentials}
  {$DEFINE EventName := OnGetAuthCredentials}
  CEFEventMethodCode
end;

// event
procedure TCEFUrlRequestClientComponent_OnCreateURLRequest(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFUrlRequestClientComponent_TNotifyEvent}
  {$DEFINE EventName := OnCreateURLRequest}
  CEFEventMethodCode
end;

exports
  TCEFUrlRequestClientComponent_Create,
  TCEFUrlRequestClientComponent_AddURLRequest,
  TCEFUrlRequestClientComponent_Client,
  TCEFUrlRequestClientComponent_ThreadID,
  TCEFUrlRequestClientComponent_OnRequestComplete,
  TCEFUrlRequestClientComponent_OnUploadProgress,
  TCEFUrlRequestClientComponent_OnDownloadProgress,
  TCEFUrlRequestClientComponent_OnDownloadData,
  TCEFUrlRequestClientComponent_OnGetAuthCredentials,
  TCEFUrlRequestClientComponent_OnCreateURLRequest;