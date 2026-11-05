// procedure
procedure TSynMacroEventWriter_WriteEventCommand(AObj: TSynMacroEventWriter; const ACmd: TSynEditorCommand); extdecl;
begin
  {$define handleExceptionID := 45200}
  handleExceptionBegin
  AObj.WriteEventCommand(ACmd);
  handleExceptionEnd
end;

// procedure
procedure TSynMacroEventWriter_WriteEventParamWithStr(AObj: TSynMacroEventWriter; const AParam: PChar); extdecl;
begin
  {$define handleExceptionID := 45201}
  handleExceptionBegin
  AObj.WriteEventParam(AParam);
  handleExceptionEnd
end;

// procedure
procedure TSynMacroEventWriter_WriteEventParamWithInt(AObj: TSynMacroEventWriter; const AParam: integer); extdecl;
begin
  {$define handleExceptionID := 45202}
  handleExceptionBegin
  AObj.WriteEventParam(AParam);
  handleExceptionEnd
end;

exports
  TSynMacroEventWriter_WriteEventCommand,
  TSynMacroEventWriter_WriteEventParamWithStr,
  TSynMacroEventWriter_WriteEventParamWithInt;