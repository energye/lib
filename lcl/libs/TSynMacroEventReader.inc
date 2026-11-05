// function
function TSynMacroEventReader_EventCommand(AObj: TSynMacroEventReader): TSynEditorCommand; extdecl;
begin
  {$define handleExceptionID := 45400}
  handleExceptionBegin
  Result := AObj.EventCommand();
  handleExceptionEnd
end;

// function
function TSynMacroEventReader_ParamCount(AObj: TSynMacroEventReader): Integer; extdecl;
begin
  {$define handleExceptionID := 45401}
  handleExceptionBegin
  Result := AObj.ParamCount();
  handleExceptionEnd
end;

// property
function TSynMacroEventReader_ParamType(AObj: TSynMacroEventReader; Index: Integer): TSynEventParamType; extdecl;
begin
  {$define handleExceptionID := 45402}
  handleExceptionBegin
  Result := AObj.ParamType[Index];
  handleExceptionEnd
end;

// property
procedure TSynMacroEventReader_ParamAsString(AObj: TSynMacroEventReader; Index: Integer; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 45403}
  handleExceptionBegin
  StringBufferCreate(AObj.ParamAsString[Index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TSynMacroEventReader_ParamAsInt(AObj: TSynMacroEventReader; Index: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 45404}
  handleExceptionBegin
  Result := AObj.ParamAsInt[Index];
  handleExceptionEnd
end;

exports
  TSynMacroEventReader_EventCommand,
  TSynMacroEventReader_ParamCount,
  TSynMacroEventReader_ParamType,
  TSynMacroEventReader_ParamAsString,
  TSynMacroEventReader_ParamAsInt;