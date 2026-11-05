// constructor
function TEngTextfieldDelegate_Create(out IntfTextfieldDelegate: ICefTextfieldDelegate; out IntfViewDelegate: ICefViewDelegate): TEngTextfieldDelegate; extdecl;
begin
  {$define handleExceptionID := 16200}
  handleExceptionBegin
  Result := TEngTextfieldDelegate.Create();
  IntfTextfieldDelegate := Result as ICefTextfieldDelegate;
  IntfViewDelegate := Result as ICefViewDelegate;
  handleExceptionEnd
end;

// event
procedure TEngTextfieldDelegate_OnTextfieldKey(AObj: TEngTextfieldDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngTextfieldDelegate_TOnTextfieldKeyEvent}
  {$DEFINE EventName := OnTextfieldKey}
  CEFEventMethodCode
end;

// event
procedure TEngTextfieldDelegate_OnTextfieldAfterUserAction(AObj: TEngTextfieldDelegate; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngTextfieldDelegate_TOnTextfieldAfterUserActionEvent}
  {$DEFINE EventName := OnTextfieldAfterUserAction}
  CEFEventMethodCode
end;

exports
  TEngTextfieldDelegate_Create,
  TEngTextfieldDelegate_OnTextfieldKey,
  TEngTextfieldDelegate_OnTextfieldAfterUserAction;