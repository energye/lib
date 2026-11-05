// constructor
function TWkNSProgress_Create(AData: NSProgress): TWkNSProgress; extdecl;
begin
  {$define handleExceptionID := 3600}
  handleExceptionBegin
  Result := TWkNSProgress.Create(AData);
  handleExceptionEnd
end;

// function
function TWkNSProgress_Data(AObj: TWkNSProgress): NSProgress; extdecl;
begin
  {$define handleExceptionID := 3601}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function static
function TWkNSProgress_CurrentProgress(): TWkNSProgress; extdecl;
begin
  Result := TWkNSProgress.CurrentProgress();
end;

// function static
function TWkNSProgress_ProgressWithTotalUnitCount(var aCount: int64): TWkNSProgress; extdecl;
begin
  Result := TWkNSProgress.ProgressWithTotalUnitCount(aCount);
end;

// function
procedure TWkNSProgress_TotalUnitCount(AObj: TWkNSProgress; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 3602}
  handleExceptionBegin
  Result := AObj.TotalUnitCount();
  handleExceptionEnd
end;

// function
procedure TWkNSProgress_CompletedUnitCount(AObj: TWkNSProgress; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 3603}
  handleExceptionBegin
  Result := AObj.CompletedUnitCount();
  handleExceptionEnd
end;

// function
procedure TWkNSProgress_LocalizedDescription(AObj: TWkNSProgress;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3604}
  handleExceptionBegin
  StringBufferCreate(AObj.LocalizedDescription(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TWkNSProgress_LocalizedAdditionalDescription(AObj: TWkNSProgress;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3605}
  handleExceptionBegin
  StringBufferCreate(AObj.LocalizedAdditionalDescription(), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TWkNSProgress_IsCancellable(AObj: TWkNSProgress): LongBool; extdecl;
begin
  {$define handleExceptionID := 3606}
  handleExceptionBegin
  Result := AObj.IsCancellable();
  handleExceptionEnd
end;

// function
function TWkNSProgress_IsPausable(AObj: TWkNSProgress): LongBool; extdecl;
begin
  {$define handleExceptionID := 3607}
  handleExceptionBegin
  Result := AObj.IsPausable();
  handleExceptionEnd
end;

// function
function TWkNSProgress_IsCancelled(AObj: TWkNSProgress): LongBool; extdecl;
begin
  {$define handleExceptionID := 3608}
  handleExceptionBegin
  Result := AObj.IsCancelled();
  handleExceptionEnd
end;

// function
function TWkNSProgress_IsPaused(AObj: TWkNSProgress): LongBool; extdecl;
begin
  {$define handleExceptionID := 3609}
  handleExceptionBegin
  Result := AObj.IsPaused();
  handleExceptionEnd
end;

// function
function TWkNSProgress_CancellationHandler(AObj: TWkNSProgress): Pointer; extdecl;
begin
  {$define handleExceptionID := 3610}
  handleExceptionBegin
  Result := AObj.CancellationHandler();
  handleExceptionEnd
end;

// function
function TWkNSProgress_PausingHandler(AObj: TWkNSProgress): Pointer; extdecl;
begin
  {$define handleExceptionID := 3611}
  handleExceptionBegin
  Result := AObj.PausingHandler();
  handleExceptionEnd
end;

// function
function TWkNSProgress_IsIndeterminate(AObj: TWkNSProgress): LongBool; extdecl;
begin
  {$define handleExceptionID := 3612}
  handleExceptionBegin
  Result := AObj.IsIndeterminate();
  handleExceptionEnd
end;

// function
procedure TWkNSProgress_FractionCompleted(AObj: TWkNSProgress; var Result: double); extdecl;
begin
  {$define handleExceptionID := 3613}
  handleExceptionBegin
  Result := AObj.FractionCompleted();
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_Release(AObj: TWkNSProgress); extdecl;
begin
  {$define handleExceptionID := 3614}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_SetTotalUnitCount(AObj: TWkNSProgress; var aValue: int64); extdecl;
begin
  {$define handleExceptionID := 3615}
  handleExceptionBegin
  AObj.SetTotalUnitCount(aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_SetCompletedUnitCount(AObj: TWkNSProgress; var aValue: int64); extdecl;
begin
  {$define handleExceptionID := 3616}
  handleExceptionBegin
  AObj.SetCompletedUnitCount(aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_SetLocalizedDescription(AObj: TWkNSProgress; aValue: PChar); extdecl;
begin
  {$define handleExceptionID := 3617}
  handleExceptionBegin
  AObj.SetLocalizedDescription(aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_SetLocalizedAdditionalDescription(AObj: TWkNSProgress; aValue: PChar); extdecl;
begin
  {$define handleExceptionID := 3618}
  handleExceptionBegin
  AObj.SetLocalizedAdditionalDescription(aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_SetCancellable(AObj: TWkNSProgress; aValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 3619}
  handleExceptionBegin
  AObj.SetCancellable(aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_SetPausable(AObj: TWkNSProgress; aValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 3620}
  handleExceptionBegin
  AObj.SetPausable(aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_SetCancellationHandler(AObj: TWkNSProgress; aValue: Pointer); extdecl;
begin
  {$define handleExceptionID := 3621}
  handleExceptionBegin
  AObj.SetCancellationHandler(aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_SetPausingHandler(AObj: TWkNSProgress; aValue: Pointer); extdecl;
begin
  {$define handleExceptionID := 3622}
  handleExceptionBegin
  AObj.SetPausingHandler(aValue);
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_Cancel(AObj: TWkNSProgress); extdecl;
begin
  {$define handleExceptionID := 3623}
  handleExceptionBegin
  AObj.Cancel();
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_Pause(AObj: TWkNSProgress); extdecl;
begin
  {$define handleExceptionID := 3624}
  handleExceptionBegin
  AObj.Pause();
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_Publish(AObj: TWkNSProgress); extdecl;
begin
  {$define handleExceptionID := 3625}
  handleExceptionBegin
  AObj.Publish();
  handleExceptionEnd
end;

// procedure
procedure TWkNSProgress_Unpublish(AObj: TWkNSProgress); extdecl;
begin
  {$define handleExceptionID := 3626}
  handleExceptionBegin
  AObj.Unpublish();
  handleExceptionEnd
end;

exports
  TWkNSProgress_Create,
  TWkNSProgress_Data,
  TWkNSProgress_CurrentProgress,
  TWkNSProgress_ProgressWithTotalUnitCount,
  TWkNSProgress_TotalUnitCount,
  TWkNSProgress_CompletedUnitCount,
  TWkNSProgress_LocalizedDescription,
  TWkNSProgress_LocalizedAdditionalDescription,
  TWkNSProgress_IsCancellable,
  TWkNSProgress_IsPausable,
  TWkNSProgress_IsCancelled,
  TWkNSProgress_IsPaused,
  TWkNSProgress_CancellationHandler,
  TWkNSProgress_PausingHandler,
  TWkNSProgress_IsIndeterminate,
  TWkNSProgress_FractionCompleted,
  TWkNSProgress_Release,
  TWkNSProgress_SetTotalUnitCount,
  TWkNSProgress_SetCompletedUnitCount,
  TWkNSProgress_SetLocalizedDescription,
  TWkNSProgress_SetLocalizedAdditionalDescription,
  TWkNSProgress_SetCancellable,
  TWkNSProgress_SetPausable,
  TWkNSProgress_SetCancellationHandler,
  TWkNSProgress_SetPausingHandler,
  TWkNSProgress_Cancel,
  TWkNSProgress_Pause,
  TWkNSProgress_Publish,
  TWkNSProgress_Unpublish;