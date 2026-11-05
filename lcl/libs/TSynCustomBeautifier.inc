// function
function TSynCustomBeautifier_GetCopy(AObj: TSynCustomBeautifier): TSynCustomBeautifier; extdecl;
begin
  {$define handleExceptionID := 36900}
  handleExceptionBegin
  Result := AObj.GetCopy();
  handleExceptionEnd
end;

// function
function TSynCustomBeautifier_GetDesiredIndentForLineWithSEBaseSEStringsSECaret(AObj: TSynCustomBeautifier; Editor: TSynEditBase; const Lines: TSynEditStrings; const ACaret: TSynEditCaret): Integer; extdecl;
begin
  {$define handleExceptionID := 36901}
  handleExceptionBegin
  Result := AObj.GetDesiredIndentForLine(Editor, Lines, ACaret);
  handleExceptionEnd
end;

// function
function TSynCustomBeautifier_GetDesiredIndentForLineWithSEBaseSEStringsSECaretBoolStr(AObj: TSynCustomBeautifier; Editor: TSynEditBase; const Lines: TSynEditStrings; const ACaret: TSynEditCaret; var ReplaceIndent: LongBool; var DesiredIndent: PChar): Integer; extdecl;
var
  OutReplaceIndent: Boolean;
  OutDesiredIndent: String;
begin
  {$define handleExceptionID := 36902}
  handleExceptionBegin
  Result := AObj.GetDesiredIndentForLine(Editor, Lines, ACaret, OutReplaceIndent, OutDesiredIndent);
  ReplaceIndent := OutReplaceIndent;
  DesiredIndent := ToPChar(OutDesiredIndent);
  handleExceptionEnd
end;

// procedure
procedure TSynCustomBeautifier_BeforeCommand(AObj: TSynCustomBeautifier; const Editor: TSynEditBase; const Lines: TSynEditStrings; const ACaret: TSynEditCaret; var Command: TSynEditorCommand; InitialCmd: TSynEditorCommand); extdecl;
var
  OutCommand: TSynEditorCommand;
begin
  {$define handleExceptionID := 36903}
  handleExceptionBegin
  OutCommand := Command;
  AObj.BeforeCommand(Editor, Lines, ACaret, OutCommand, InitialCmd);
  Command := OutCommand;
  handleExceptionEnd
end;

// procedure
procedure TSynCustomBeautifier_AfterCommand(AObj: TSynCustomBeautifier; const Editor: TSynEditBase; const Lines: TSynEditStrings; const ACaret: TSynEditCaret; var Command: TSynEditorCommand; InitialCmd: TSynEditorCommand; StartLinePos: Integer; EndLinePos: Integer); extdecl;
var
  OutCommand: TSynEditorCommand;
begin
  {$define handleExceptionID := 36904}
  handleExceptionBegin
  OutCommand := Command;
  AObj.AfterCommand(Editor, Lines, ACaret, OutCommand, InitialCmd, StartLinePos, EndLinePos);
  Command := OutCommand;
  handleExceptionEnd
end;

// property
function TSynCustomBeautifier_AutoIndent(ASet: LongBool; AObj: TSynCustomBeautifier; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 36905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AutoIndent := AValue
  end else
    Result := AObj.AutoIndent;
  handleExceptionEnd
end;

// event
procedure TSynCustomBeautifier_OnGetDesiredIndent(AObj: TSynCustomBeautifier; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTSynBeautifierGetIndentEvent}
  {$DEFINE EventName := OnGetDesiredIndent}
  LCLEventMethodCode
end;

exports
  TSynCustomBeautifier_GetCopy,
  TSynCustomBeautifier_GetDesiredIndentForLineWithSEBaseSEStringsSECaret,
  TSynCustomBeautifier_GetDesiredIndentForLineWithSEBaseSEStringsSECaretBoolStr,
  TSynCustomBeautifier_BeforeCommand,
  TSynCustomBeautifier_AfterCommand,
  TSynCustomBeautifier_AutoIndent,
  TSynCustomBeautifier_OnGetDesiredIndent;