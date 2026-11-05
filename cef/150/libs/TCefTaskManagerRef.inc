// constructor
function TCefTaskManagerRef_Create(data: Pointer; out IntfTaskManager: ICefTaskManager): TCefTaskManagerRef; extdecl;
begin
  {$define handleExceptionID := 26000}
  handleExceptionBegin
  Result := TCefTaskManagerRef.Create(data);
  IntfTaskManager := Result as ICefTaskManager;
  handleExceptionEnd
end;

// function
function TCefTaskManagerRef_GetTasksCount(AObj: ICefTaskManager): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 26001}
  handleExceptionBegin
  Result := AObj.GetTasksCount();
  handleExceptionEnd
end;

// function
function TCefTaskManagerRef_GetTaskIdsList(AObj: ICefTaskManager; var task_ids: TInt64ArrayWrap): LongBool; extdecl;
var
  Outtask_ids: TCefCustomInt64Array = nil;
begin
  {$define handleExceptionID := 26002}
  handleExceptionBegin
  Result := AObj.GetTaskIdsList(Outtask_ids);
  task_ids := TInt64ArrayWrap.Create(Outtask_ids);
  handleExceptionEnd
end;

// function
function TCefTaskManagerRef_GetTaskInfo(AObj: ICefTaskManager; var task_id: int64; var info: TCustomTaskInfoPtr): LongBool; extdecl;
var
  Outinfo: TCustomTaskInfo;
begin
  {$define handleExceptionID := 26003}
  handleExceptionBegin
  Outinfo := TCustomTaskInfoToPas(info);
  Result := AObj.GetTaskInfo(task_id, Outinfo);
  info := TCustomTaskInfoToGo(Outinfo);
  handleExceptionEnd
end;

// function
function TCefTaskManagerRef_KillTask(AObj: ICefTaskManager; var task_id: int64): LongBool; extdecl;
begin
  {$define handleExceptionID := 26004}
  handleExceptionBegin
  Result := AObj.KillTask(task_id);
  handleExceptionEnd
end;

// function
procedure TCefTaskManagerRef_GetTaskIdForBrowserId(AObj: ICefTaskManager; browser_id: Integer; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 26005}
  handleExceptionBegin
  Result := AObj.GetTaskIdForBrowserId(browser_id);
  handleExceptionEnd
end;

// function static
procedure TCefTaskManagerRef_UnWrap(data: Pointer; var Result: ICefTaskManager); extdecl;
begin
  Result := TCefTaskManagerRef.UnWrap(data);
end;

// function static
procedure TCefTaskManagerRef_New(var Result: ICefTaskManager); extdecl;
begin
  Result := TCefTaskManagerRef.New();
end;

exports
  TCefTaskManagerRef_Create,
  TCefTaskManagerRef_GetTasksCount,
  TCefTaskManagerRef_GetTaskIdsList,
  TCefTaskManagerRef_GetTaskInfo,
  TCefTaskManagerRef_KillTask,
  TCefTaskManagerRef_GetTaskIdForBrowserId,
  TCefTaskManagerRef_UnWrap,
  TCefTaskManagerRef_New;