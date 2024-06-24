
procedure GlobalCEFWorkScheduler_SetGlobalWorkScheduler(const AObj: TCEFWorkScheduler); extdecl;
begin
  handleExceptionBegin
  if GlobalCEFWorkScheduler = nil then
    GlobalCEFWorkScheduler := AObj;
  handleExceptionEnd
end;

procedure GlobalCEFWorkScheduler_DestroyGlobalCEFWorkScheduler(); extdecl;
begin
  handleExceptionBegin
  DestroyGlobalCEFWorkScheduler();
  handleExceptionEnd
end;

exports
  GlobalCEFWorkScheduler_SetGlobalWorkScheduler,
  GlobalCEFWorkScheduler_DestroyGlobalCEFWorkScheduler;
