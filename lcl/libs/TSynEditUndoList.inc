// constructor
function TSynEditUndoList_Create(): TSynEditUndoList; extdecl;
begin
  {$define handleExceptionID := 39600}
  handleExceptionBegin
  Result := TSynEditUndoList.Create();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_GetLastChange(AObj: TSynEditUndoList): TSynEditUndoItem; extdecl;
begin
  {$define handleExceptionID := 39601}
  handleExceptionBegin
  Result := AObj.GetLastChange();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_PopLastChange(AObj: TSynEditUndoList): TSynEditUndoItem; extdecl;
begin
  {$define handleExceptionID := 39602}
  handleExceptionBegin
  Result := AObj.PopLastChange();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_PopItem(AObj: TSynEditUndoList): TSynEditUndoGroup; extdecl;
begin
  {$define handleExceptionID := 39603}
  handleExceptionBegin
  Result := AObj.PopItem();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_PeekItem(AObj: TSynEditUndoList): TSynEditUndoGroup; extdecl;
begin
  {$define handleExceptionID := 39604}
  handleExceptionBegin
  Result := AObj.PeekItem();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_IsLocked(AObj: TSynEditUndoList): LongBool; extdecl;
begin
  {$define handleExceptionID := 39605}
  handleExceptionBegin
  Result := AObj.IsLocked();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_RealCount(AObj: TSynEditUndoList): Integer; extdecl;
begin
  {$define handleExceptionID := 39606}
  handleExceptionBegin
  Result := AObj.RealCount();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_IsTopMarkedAsUnmodified(AObj: TSynEditUndoList): LongBool; extdecl;
begin
  {$define handleExceptionID := 39607}
  handleExceptionBegin
  Result := AObj.IsTopMarkedAsUnmodified();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_UnModifiedMarkerExists(AObj: TSynEditUndoList): LongBool; extdecl;
begin
  {$define handleExceptionID := 39608}
  handleExceptionBegin
  Result := AObj.UnModifiedMarkerExists();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_IsTopMarkedAsSaved(AObj: TSynEditUndoList): LongBool; extdecl;
begin
  {$define handleExceptionID := 39609}
  handleExceptionBegin
  Result := AObj.IsTopMarkedAsSaved();
  handleExceptionEnd
end;

// function
function TSynEditUndoList_SavedMarkerExists(AObj: TSynEditUndoList): LongBool; extdecl;
begin
  {$define handleExceptionID := 39610}
  handleExceptionBegin
  Result := AObj.SavedMarkerExists();
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_AddChange(AObj: TSynEditUndoList; AChange: TSynEditUndoItem; AForceLocked: LongBool); extdecl;
begin
  {$define handleExceptionID := 39611}
  handleExceptionBegin
  AObj.AddChange(AChange, AForceLocked);
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_AppendToLastChange(AObj: TSynEditUndoList; AChange: TSynEditUndoItem); extdecl;
begin
  {$define handleExceptionID := 39612}
  handleExceptionBegin
  AObj.AppendToLastChange(AChange);
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_BeginBlock(AObj: TSynEditUndoList); extdecl;
begin
  {$define handleExceptionID := 39613}
  handleExceptionBegin
  AObj.BeginBlock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_EndBlock(AObj: TSynEditUndoList); extdecl;
begin
  {$define handleExceptionID := 39614}
  handleExceptionBegin
  AObj.EndBlock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_Clear(AObj: TSynEditUndoList); extdecl;
begin
  {$define handleExceptionID := 39615}
  handleExceptionBegin
  AObj.Clear();
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_Lock(AObj: TSynEditUndoList); extdecl;
begin
  {$define handleExceptionID := 39616}
  handleExceptionBegin
  AObj.Lock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_Unlock(AObj: TSynEditUndoList); extdecl;
begin
  {$define handleExceptionID := 39617}
  handleExceptionBegin
  AObj.Unlock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_MarkTopAsUnmodified(AObj: TSynEditUndoList); extdecl;
begin
  {$define handleExceptionID := 39618}
  handleExceptionBegin
  AObj.MarkTopAsUnmodified();
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_MarkTopAsSaved(AObj: TSynEditUndoList); extdecl;
begin
  {$define handleExceptionID := 39619}
  handleExceptionBegin
  AObj.MarkTopAsSaved();
  handleExceptionEnd
end;

// procedure
procedure TSynEditUndoList_ForceGroupEnd(AObj: TSynEditUndoList); extdecl;
begin
  {$define handleExceptionID := 39620}
  handleExceptionBegin
  AObj.ForceGroupEnd();
  handleExceptionEnd
end;

// property
function TSynEditUndoList_CanUndo(AObj: TSynEditUndoList): LongBool; extdecl;
begin
  {$define handleExceptionID := 39621}
  handleExceptionBegin
  Result := AObj.CanUndo;
  handleExceptionEnd
end;

// property
function TSynEditUndoList_FullUndoImpossible(AObj: TSynEditUndoList): LongBool; extdecl;
begin
  {$define handleExceptionID := 39622}
  handleExceptionBegin
  Result := AObj.FullUndoImpossible;
  handleExceptionEnd
end;

// property
function TSynEditUndoList_ItemCount(AObj: TSynEditUndoList): integer; extdecl;
begin
  {$define handleExceptionID := 39623}
  handleExceptionBegin
  Result := AObj.ItemCount;
  handleExceptionEnd
end;

// property
function TSynEditUndoList_MaxUndoActions(ASet: LongBool; AObj: TSynEditUndoList; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 39624}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MaxUndoActions := AValue
  end else
    Result := AObj.MaxUndoActions;
  handleExceptionEnd
end;

// property
function TSynEditUndoList_IsInsideRedo(ASet: LongBool; AObj: TSynEditUndoList; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 39625}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsInsideRedo := AValue
  end else
    Result := AObj.IsInsideRedo;
  handleExceptionEnd
end;

// property
function TSynEditUndoList_GroupUndo(ASet: LongBool; AObj: TSynEditUndoList; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 39626}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GroupUndo := AValue
  end else
    Result := AObj.GroupUndo;
  handleExceptionEnd
end;

// property
function TSynEditUndoList_CurrentGroup(AObj: TSynEditUndoList): TSynEditUndoGroup; extdecl;
begin
  {$define handleExceptionID := 39627}
  handleExceptionBegin
  Result := AObj.CurrentGroup;
  handleExceptionEnd
end;

// property
function TSynEditUndoList_CurrentReason(ASet: LongBool; AObj: TSynEditUndoList; AValue: TSynEditorCommand): TSynEditorCommand; extdecl;
begin
  {$define handleExceptionID := 39628}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CurrentReason := AValue
  end else
    Result := AObj.CurrentReason;
  handleExceptionEnd
end;

// event
procedure TSynEditUndoList_OnAddedUndo(AObj: TSynEditUndoList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnAddedUndo}
  LCLEventMethodCode
end;

// event
procedure TSynEditUndoList_OnNeedCaretUndo(AObj: TSynEditUndoList; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynGetCaretUndoProc}
  {$DEFINE EventName := OnNeedCaretUndo}
  LCLEventMethodCode
end;

exports
  TSynEditUndoList_Create,
  TSynEditUndoList_GetLastChange,
  TSynEditUndoList_PopLastChange,
  TSynEditUndoList_PopItem,
  TSynEditUndoList_PeekItem,
  TSynEditUndoList_IsLocked,
  TSynEditUndoList_RealCount,
  TSynEditUndoList_IsTopMarkedAsUnmodified,
  TSynEditUndoList_UnModifiedMarkerExists,
  TSynEditUndoList_IsTopMarkedAsSaved,
  TSynEditUndoList_SavedMarkerExists,
  TSynEditUndoList_AddChange,
  TSynEditUndoList_AppendToLastChange,
  TSynEditUndoList_BeginBlock,
  TSynEditUndoList_EndBlock,
  TSynEditUndoList_Clear,
  TSynEditUndoList_Lock,
  TSynEditUndoList_Unlock,
  TSynEditUndoList_MarkTopAsUnmodified,
  TSynEditUndoList_MarkTopAsSaved,
  TSynEditUndoList_ForceGroupEnd,
  TSynEditUndoList_CanUndo,
  TSynEditUndoList_FullUndoImpossible,
  TSynEditUndoList_ItemCount,
  TSynEditUndoList_MaxUndoActions,
  TSynEditUndoList_IsInsideRedo,
  TSynEditUndoList_GroupUndo,
  TSynEditUndoList_CurrentGroup,
  TSynEditUndoList_CurrentReason,
  TSynEditUndoList_OnAddedUndo,
  TSynEditUndoList_OnNeedCaretUndo;