
procedure GlobalCEFWorkScheduler_SetGlobalWorkScheduler(const AObj: TCEFWorkScheduler); extdecl;
begin
  {$define handleExceptionFuncName :=''}
  handleExceptionBegin
  if GlobalCEFWorkScheduler = nil then
    GlobalCEFWorkScheduler := AObj;
  handleExceptionEnd
end;

procedure GlobalCEFWorkScheduler_DestroyGlobalCEFWorkScheduler(); extdecl;
begin
  {$define handleExceptionFuncName :='DestroyGlobalCEFWorkScheduler'}
  handleExceptionBegin
  DestroyGlobalCEFWorkScheduler();
  handleExceptionEnd
end;

exports
  GlobalCEFWorkScheduler_SetGlobalWorkScheduler,
  GlobalCEFWorkScheduler_DestroyGlobalCEFWorkScheduler;
