// constructor
function TVTDragManager_Create(AOwner: TBaseVirtualTree; out IntfVTDragManager: IVTDragManager): TVTDragManager; extdecl;
begin
  {$define handleExceptionID := 31600}
  handleExceptionBegin
  Result := TVTDragManager.Create(AOwner);
  IntfVTDragManager := Result as IVTDragManager;
  handleExceptionEnd
end;

// function
function TVTDragManager_DragLeave(AObj: TVTDragManager): HResult; extdecl;
begin
  {$define handleExceptionID := 31601}
  handleExceptionBegin
  Result := AObj.DragLeave();
  handleExceptionEnd
end;

// function
function TVTDragManager_DragOver(AObj: TVTDragManager; KeyState: LongWord; var Pt: TPoint; var Effect: LongWord): HResult; extdecl;
var
  OutEffect: LongWord;
begin
  {$define handleExceptionID := 31602}
  handleExceptionBegin
  OutEffect := Effect;
  Result := AObj.DragOver(KeyState, Pt, OutEffect);
  Effect := OutEffect;
  handleExceptionEnd
end;

// function
function TVTDragManager_GiveFeedback(AObj: TVTDragManager; Effect: LongWord): HResult; extdecl;
begin
  {$define handleExceptionID := 31603}
  handleExceptionBegin
  Result := AObj.GiveFeedback(Effect);
  handleExceptionEnd
end;

// function
function TVTDragManager_QueryContinueDrag(AObj: TVTDragManager; EscapePressed: BOOL; KeyState: LongWord): HResult; extdecl;
begin
  {$define handleExceptionID := 31604}
  handleExceptionBegin
  Result := AObj.QueryContinueDrag(EscapePressed, KeyState);
  handleExceptionEnd
end;

// procedure
procedure TVTDragManager_ForceDragLeave(AObj: TVTDragManager); extdecl;
begin
  {$define handleExceptionID := 31605}
  handleExceptionBegin
  AObj.ForceDragLeave();
  handleExceptionEnd
end;

exports
  TVTDragManager_Create,
  TVTDragManager_DragLeave,
  TVTDragManager_DragOver,
  TVTDragManager_GiveFeedback,
  TVTDragManager_QueryContinueDrag,
  TVTDragManager_ForceDragLeave;