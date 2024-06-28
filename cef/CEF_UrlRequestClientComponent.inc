
//constructor
function CEFUrlRequestClientComponent_Create(aOwner: TComponent): TCEFUrlRequestClientComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFUrlRequestClientComponent.Create(aOwner);
  handleExceptionEnd
end;

//procedure
procedure CEFUrlRequestClientComponent_AsInterface(AObj: TCEFUrlRequestClientComponent; var Result: ICEFUrlRequestClientEvents); extdecl;
begin
  Result := AObj as ICEFUrlRequestClientEvents;
end;

//property
procedure CEFUrlRequestClientComponent_Client(AObj: TCEFUrlRequestClientComponent; var Result: ICefUrlrequestClient); extdecl;
begin
  {$define handleExceptionFuncName :='Client'}
  handleExceptionBegin
  Result := AObj.Client;
  handleExceptionEnd
end;

//property
function CEFUrlRequestClientComponent_ThreadID(AIsSet: LongBool; AObj: TCEFUrlRequestClientComponent; AValue: TCefThreadId): TCefThreadId; extdecl;
begin
  {$define handleExceptionFuncName :='ThreadID'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ThreadID := AValue;
  end else
    Result := AObj.ThreadID;
  handleExceptionEnd
end;

//procedure
procedure CEFUrlRequestClientComponent_AddURLRequest(AObj: TCEFUrlRequestClientComponent); extdecl;
begin
  {$define handleExceptionFuncName :='AddURLRequest'}
  handleExceptionBegin
  AObj.AddURLRequest();
  handleExceptionEnd
end;

//property event
procedure CEFUrlRequestClientComponent_SetOnRequestComplete(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := UrlRequestClientComponent_OnRequestComplete}
  {$DEFINE EventName := OnRequestComplete}
  CEFEventMethodCode
end;

//property event
procedure CEFUrlRequestClientComponent_SetOnUploadProgress(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := UrlRequestClientComponent_OnUploadProgress}
  {$DEFINE EventName := OnUploadProgress}
  CEFEventMethodCode
end;

//property event
procedure CEFUrlRequestClientComponent_SetOnDownloadProgress(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := UrlRequestClientComponent_OnDownloadProgress}
  {$DEFINE EventName := OnDownloadProgress}
  CEFEventMethodCode
end;

//property event
procedure CEFUrlRequestClientComponent_SetOnDownloadData(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := UrlRequestClientComponent_OnDownloadData}
  {$DEFINE EventName := OnDownloadData}
  CEFEventMethodCode
end;

//property event
procedure CEFUrlRequestClientComponent_SetOnGetAuthCredentials(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := UrlRequestClientComponent_OnGetAuthCredentials}
  {$DEFINE EventName := OnGetAuthCredentials}
  CEFEventMethodCode
end;

//property event
procedure CEFUrlRequestClientComponent_SetOnCreateURLRequest(AObj: TCEFUrlRequestClientComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := UrlRequestClientComponent_OnCreateURLRequest}
  {$DEFINE EventName := OnCreateURLRequest}
  CEFEventMethodCode
end;


exports
  CEFUrlRequestClientComponent_Create,
  CEFUrlRequestClientComponent_AsInterface,
  CEFUrlRequestClientComponent_Client,
  CEFUrlRequestClientComponent_ThreadID,
  CEFUrlRequestClientComponent_AddURLRequest,
  CEFUrlRequestClientComponent_SetOnRequestComplete,
  CEFUrlRequestClientComponent_SetOnUploadProgress,
  CEFUrlRequestClientComponent_SetOnDownloadProgress,
  CEFUrlRequestClientComponent_SetOnDownloadData,
  CEFUrlRequestClientComponent_SetOnGetAuthCredentials,
  CEFUrlRequestClientComponent_SetOnCreateURLRequest;