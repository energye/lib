
//constructor
function NSProgress_Create(aData: NSProgress): TNSProgress; extdecl;
begin
  handleExceptionBegin
  Result := TNSProgress.Create(aData);
  handleExceptionEnd
end;

//function
function NSProgress_CurrentProgress(): TNSProgress; extdecl;
begin
  Result := TNSProgress.CurrentProgress();
end;

//function
function NSProgress_ProgressWithTotalUnitCount(var aCount: int64): TNSProgress; extdecl;
begin
  Result := TNSProgress.ProgressWithTotalUnitCount(aCount);
end;

//function
function NSProgress_Data(AObj: TNSProgress): NSProgress; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
procedure NSProgress_TotalUnitCount(AObj: TNSProgress; var Result: int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.TotalUnitCount();
  handleExceptionEnd
end;

//function
procedure NSProgress_CompletedUnitCount(AObj: TNSProgress; var Result: int64); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CompletedUnitCount();
  handleExceptionEnd
end;

//function
function NSProgress_LocalizedDescription(AObj: TNSProgress): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.LocalizedDescription());
  handleExceptionEnd
end;

//function
function NSProgress_LocalizedAdditionalDescription(AObj: TNSProgress): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.LocalizedAdditionalDescription());
  handleExceptionEnd
end;

//function
function NSProgress_IsCancellable(AObj: TNSProgress): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsCancellable();
  handleExceptionEnd
end;

//function
function NSProgress_IsPausable(AObj: TNSProgress): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsPausable();
  handleExceptionEnd
end;

//function
function NSProgress_IsCancelled(AObj: TNSProgress): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsCancelled();
  handleExceptionEnd
end;

//function
function NSProgress_IsPaused(AObj: TNSProgress): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsPaused();
  handleExceptionEnd
end;

//function
function NSProgress_CancellationHandler(AObj: TNSProgress): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.CancellationHandler();
  handleExceptionEnd
end;

//function
function NSProgress_PausingHandler(AObj: TNSProgress): Pointer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.PausingHandler();
  handleExceptionEnd
end;

//function
function NSProgress_IsIndeterminate(AObj: TNSProgress): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsIndeterminate();
  handleExceptionEnd
end;

//function
procedure NSProgress_FractionCompleted(AObj: TNSProgress; var Result: double); extdecl;
begin
  handleExceptionBegin
  Result := AObj.FractionCompleted();
  handleExceptionEnd
end;

//procedure
procedure NSProgress_SetTotalUnitCount(AObj: TNSProgress; var aValue: int64); extdecl;
begin
  handleExceptionBegin
  AObj.SetTotalUnitCount(aValue);
  handleExceptionEnd
end;

//procedure
procedure NSProgress_SetCompletedUnitCount(AObj: TNSProgress; var aValue: int64); extdecl;
begin
  handleExceptionBegin
  AObj.SetCompletedUnitCount(aValue);
  handleExceptionEnd
end;

//procedure
procedure NSProgress_SetLocalizedDescription(AObj: TNSProgress; aValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetLocalizedDescription(aValue);
  handleExceptionEnd
end;

//procedure
procedure NSProgress_SetLocalizedAdditionalDescription(AObj: TNSProgress; aValue: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.SetLocalizedAdditionalDescription(aValue);
  handleExceptionEnd
end;

//procedure
procedure NSProgress_SetCancellable(AObj: TNSProgress; aValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetCancellable(aValue);
  handleExceptionEnd
end;

//procedure
procedure NSProgress_SetPausable(AObj: TNSProgress; aValue: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetPausable(aValue);
  handleExceptionEnd
end;

//procedure
procedure NSProgress_SetCancellationHandler(AObj: TNSProgress; aValue: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.SetCancellationHandler(aValue);
  handleExceptionEnd
end;

//procedure
procedure NSProgress_SetPausingHandler(AObj: TNSProgress; aValue: Pointer); extdecl;
begin
  handleExceptionBegin
  AObj.SetPausingHandler(aValue);
  handleExceptionEnd
end;

//procedure
procedure NSProgress_Cancel(AObj: TNSProgress); extdecl;
begin
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

//procedure
procedure NSProgress_Pause(AObj: TNSProgress); extdecl;
begin
  handleExceptionBegin
  AObj.Pause();
  handleExceptionEnd
end;

//procedure
procedure NSProgress_Publish(AObj: TNSProgress); extdecl;
begin
  handleExceptionBegin
  AObj.Publish();
  handleExceptionEnd
end;

//procedure
procedure NSProgress_Unpublish(AObj: TNSProgress); extdecl;
begin
  handleExceptionBegin
  AObj.Unpublish();
  handleExceptionEnd
end;


exports
  NSProgress_Create,
  NSProgress_CurrentProgress,
  NSProgress_ProgressWithTotalUnitCount,
  NSProgress_Data,
  NSProgress_TotalUnitCount,
  NSProgress_CompletedUnitCount,
  NSProgress_LocalizedDescription,
  NSProgress_LocalizedAdditionalDescription,
  NSProgress_IsCancellable,
  NSProgress_IsPausable,
  NSProgress_IsCancelled,
  NSProgress_IsPaused,
  NSProgress_CancellationHandler,
  NSProgress_PausingHandler,
  NSProgress_IsIndeterminate,
  NSProgress_FractionCompleted,
  NSProgress_SetTotalUnitCount,
  NSProgress_SetCompletedUnitCount,
  NSProgress_SetLocalizedDescription,
  NSProgress_SetLocalizedAdditionalDescription,
  NSProgress_SetCancellable,
  NSProgress_SetPausable,
  NSProgress_SetCancellationHandler,
  NSProgress_SetPausingHandler,
  NSProgress_Cancel,
  NSProgress_Pause,
  NSProgress_Publish,
  NSProgress_Unpublish;