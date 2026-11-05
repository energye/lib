// constructor
function TCefCommandLineRef_Create(data: Pointer; out IntfCommandLine: ICefCommandLine): TCefCommandLineRef; extdecl;
begin
  {$define handleExceptionID := 17600}
  handleExceptionBegin
  Result := TCefCommandLineRef.Create(data);
  IntfCommandLine := Result as ICefCommandLine;
  handleExceptionEnd
end;

// function
function TCefCommandLineRef_IsValid(AObj: ICefCommandLine): LongBool; extdecl;
begin
  {$define handleExceptionID := 17601}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefCommandLineRef_IsReadOnly(AObj: ICefCommandLine): LongBool; extdecl;
begin
  {$define handleExceptionID := 17602}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

// function
procedure TCefCommandLineRef_Copy(AObj: ICefCommandLine; var Result: ICefCommandLine); extdecl;
begin
  {$define handleExceptionID := 17603}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

// function
procedure TCefCommandLineRef_GetCommandLineString(AObj: ICefCommandLine;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17604}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetCommandLineString()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefCommandLineRef_GetProgram(AObj: ICefCommandLine;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17605}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetProgram()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefCommandLineRef_HasSwitches(AObj: ICefCommandLine): LongBool; extdecl;
begin
  {$define handleExceptionID := 17606}
  handleExceptionBegin
  Result := AObj.HasSwitches();
  handleExceptionEnd
end;

// function
function TCefCommandLineRef_HasSwitch(AObj: ICefCommandLine; const name: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 17607}
  handleExceptionBegin
  Result := AObj.HasSwitch(PCharToUStr(name));
  handleExceptionEnd
end;

// function
procedure TCefCommandLineRef_GetSwitchValue(AObj: ICefCommandLine; const name: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 17608}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetSwitchValue(PCharToUStr(name))), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefCommandLineRef_GetSwitches(AObj: ICefCommandLine; var switches: TStrings): LongBool; extdecl;
var
  Outswitches: TStrings;
begin
  {$define handleExceptionID := 17609}
  handleExceptionBegin
  Outswitches := switches;
  Result := AObj.GetSwitches(Outswitches);
  switches := Outswitches;
  handleExceptionEnd
end;

// function
function TCefCommandLineRef_HasArguments(AObj: ICefCommandLine): LongBool; extdecl;
begin
  {$define handleExceptionID := 17610}
  handleExceptionBegin
  Result := AObj.HasArguments();
  handleExceptionEnd
end;

// function static
procedure TCefCommandLineRef_UnWrap(data: Pointer; var Result: ICefCommandLine); extdecl;
begin
  Result := TCefCommandLineRef.UnWrap(data);
end;

// function static
procedure TCefCommandLineRef_New(var Result: ICefCommandLine); extdecl;
begin
  Result := TCefCommandLineRef.New();
end;

// function static
procedure TCefCommandLineRef_Global(var Result: ICefCommandLine); extdecl;
begin
  Result := TCefCommandLineRef.Global();
end;

// procedure
procedure TCefCommandLineRef_InitFromArgv(AObj: ICefCommandLine; argc: Integer; const argv: PPAnsiChar); extdecl;
begin
  {$define handleExceptionID := 17611}
  handleExceptionBegin
  AObj.InitFromArgv(argc, argv);
  handleExceptionEnd
end;

// procedure
procedure TCefCommandLineRef_InitFromString(AObj: ICefCommandLine; const commandLine: PChar); extdecl;
begin
  {$define handleExceptionID := 17612}
  handleExceptionBegin
  AObj.InitFromString(PCharToUStr(commandLine));
  handleExceptionEnd
end;

// procedure
procedure TCefCommandLineRef_Reset(AObj: ICefCommandLine); extdecl;
begin
  {$define handleExceptionID := 17613}
  handleExceptionBegin
  AObj.Reset();
  handleExceptionEnd
end;

// procedure
procedure TCefCommandLineRef_GetArgv(AObj: ICefCommandLine; var args: TStrings); extdecl;
var
  Outargs: TStrings;
begin
  {$define handleExceptionID := 17614}
  handleExceptionBegin
  Outargs := args;
  AObj.GetArgv(Outargs);
  args := Outargs;
  handleExceptionEnd
end;

// procedure
procedure TCefCommandLineRef_SetProgram(AObj: ICefCommandLine; const prog: PChar); extdecl;
begin
  {$define handleExceptionID := 17615}
  handleExceptionBegin
  AObj.SetProgram(PCharToUStr(prog));
  handleExceptionEnd
end;

// procedure
procedure TCefCommandLineRef_AppendSwitch(AObj: ICefCommandLine; const name: PChar); extdecl;
begin
  {$define handleExceptionID := 17616}
  handleExceptionBegin
  AObj.AppendSwitch(PCharToUStr(name));
  handleExceptionEnd
end;

// procedure
procedure TCefCommandLineRef_AppendSwitchWithValue(AObj: ICefCommandLine; const name: PChar; const value: PChar); extdecl;
begin
  {$define handleExceptionID := 17617}
  handleExceptionBegin
  AObj.AppendSwitchWithValue(PCharToUStr(name), PCharToUStr(value));
  handleExceptionEnd
end;

// procedure
procedure TCefCommandLineRef_GetArguments(AObj: ICefCommandLine; var arguments: TStrings); extdecl;
var
  Outarguments: TStrings;
begin
  {$define handleExceptionID := 17618}
  handleExceptionBegin
  Outarguments := arguments;
  AObj.GetArguments(Outarguments);
  arguments := Outarguments;
  handleExceptionEnd
end;

// procedure
procedure TCefCommandLineRef_AppendArgument(AObj: ICefCommandLine; const argument: PChar); extdecl;
begin
  {$define handleExceptionID := 17619}
  handleExceptionBegin
  AObj.AppendArgument(PCharToUStr(argument));
  handleExceptionEnd
end;

// procedure
procedure TCefCommandLineRef_PrependWrapper(AObj: ICefCommandLine; const wrapper: PChar); extdecl;
begin
  {$define handleExceptionID := 17620}
  handleExceptionBegin
  AObj.PrependWrapper(PCharToUStr(wrapper));
  handleExceptionEnd
end;

exports
  TCefCommandLineRef_Create,
  TCefCommandLineRef_IsValid,
  TCefCommandLineRef_IsReadOnly,
  TCefCommandLineRef_Copy,
  TCefCommandLineRef_GetCommandLineString,
  TCefCommandLineRef_GetProgram,
  TCefCommandLineRef_HasSwitches,
  TCefCommandLineRef_HasSwitch,
  TCefCommandLineRef_GetSwitchValue,
  TCefCommandLineRef_GetSwitches,
  TCefCommandLineRef_HasArguments,
  TCefCommandLineRef_UnWrap,
  TCefCommandLineRef_New,
  TCefCommandLineRef_Global,
  TCefCommandLineRef_InitFromArgv,
  TCefCommandLineRef_InitFromString,
  TCefCommandLineRef_Reset,
  TCefCommandLineRef_GetArgv,
  TCefCommandLineRef_SetProgram,
  TCefCommandLineRef_AppendSwitch,
  TCefCommandLineRef_AppendSwitchWithValue,
  TCefCommandLineRef_GetArguments,
  TCefCommandLineRef_AppendArgument,
  TCefCommandLineRef_PrependWrapper;