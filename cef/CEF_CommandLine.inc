
//function
procedure CefCommandLine_UnWrap(data: Pointer; var Result: ICefCommandLine); extdecl;
begin
  Result := TCefCommandLineRef.UnWrap(data);
end;

//function
procedure CefCommandLine_New(var Result: ICefCommandLine); extdecl;
begin
  Result := TCefCommandLineRef.New();
end;

//function
procedure CefCommandLine_Global(var Result: ICefCommandLine); extdecl;
begin
  Result := TCefCommandLineRef.Global();
end;

//function
function CefCommandLine_IsValid(AObj: ICefCommandLine): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefCommandLine_IsReadOnly(AObj: ICefCommandLine): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsReadOnly'}
  handleExceptionBegin
  Result := AObj.IsReadOnly();
  handleExceptionEnd
end;

//function
procedure CefCommandLine_Copy(AObj: ICefCommandLine; var Result: ICefCommandLine); extdecl;
begin
  {$define handleExceptionFuncName :='Copy'}
  handleExceptionBegin
  Result := AObj.Copy();
  handleExceptionEnd
end;

//function
function CefCommandLine_GetCommandLineString(AObj: ICefCommandLine): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetCommandLineString'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetCommandLineString());
  handleExceptionEnd
end;

//function
function CefCommandLine_GetProgram(AObj: ICefCommandLine): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetProgram'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetProgram());
  handleExceptionEnd
end;

//function
function CefCommandLine_HasSwitches(AObj: ICefCommandLine): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasSwitches'}
  handleExceptionBegin
  Result := AObj.HasSwitches();
  handleExceptionEnd
end;

//function
function CefCommandLine_HasSwitch(AObj: ICefCommandLine; const name: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasSwitch'}
  handleExceptionBegin
  Result := AObj.HasSwitch(name);
  handleExceptionEnd
end;

//function
function CefCommandLine_GetSwitchValue(AObj: ICefCommandLine; const name: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetSwitchValue'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetSwitchValue(name));
  handleExceptionEnd
end;

//function
function CefCommandLine_GetSwitches(AObj: ICefCommandLine; var switches: TStrings): LongBool; extdecl;
var
  Retswitches: TStrings;
begin
  {$define handleExceptionFuncName :='GetSwitches'}
  handleExceptionBegin
  Retswitches := switches;
  Result := AObj.GetSwitches(Retswitches);
  switches := Retswitches;
  handleExceptionEnd
end;

//function
function CefCommandLine_GetSwitches1(AObj: ICefCommandLine; var switchKeys,  switchValues: TStringList): LongBool; extdecl;
var
  RetswitchKeys: TStringList;
  RetswitchValues: TStringList;
begin
  {$define handleExceptionFuncName :='GetSwitches1'}
  handleExceptionBegin
  RetswitchKeys := switchKeys;
  RetswitchValues := switchValues;
  Result := AObj.GetSwitches(RetswitchKeys, RetswitchValues);
  switchKeys := RetswitchKeys;
  switchValues := RetswitchValues;
  handleExceptionEnd
end;

//function
function CefCommandLine_HasArguments(AObj: ICefCommandLine): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasArguments'}
  handleExceptionBegin
  Result := AObj.HasArguments();
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_InitFromArgv(AObj: ICefCommandLine; argc: Integer; const argv: PPAnsiChar); extdecl;
begin
  {$define handleExceptionFuncName :='InitFromArgv'}
  handleExceptionBegin
  AObj.InitFromArgv(argc, argv);
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_InitFromString(AObj: ICefCommandLine; const commandLine: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='InitFromString'}
  handleExceptionBegin
  AObj.InitFromString(commandLine);
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_Reset(AObj: ICefCommandLine); extdecl;
begin
  {$define handleExceptionFuncName :='Reset'}
  handleExceptionBegin
  AObj.Reset();
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_GetArgv(AObj: ICefCommandLine; var args: TStrings); extdecl;
var
  Retargs: TStrings;
begin
  {$define handleExceptionFuncName :='GetArgv'}
  handleExceptionBegin
  Retargs := args;
  AObj.GetArgv(Retargs);
  args := Retargs;
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_SetProgram(AObj: ICefCommandLine; const prog: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetProgram'}
  handleExceptionBegin
  AObj.SetProgram(prog);
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_AppendSwitch(AObj: ICefCommandLine; const name: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='AppendSwitch'}
  handleExceptionBegin
  AObj.AppendSwitch(name);
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_AppendSwitchWithValue(AObj: ICefCommandLine; const name,  value: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='AppendSwitchWithValue'}
  handleExceptionBegin
  AObj.AppendSwitchWithValue(name,  value);
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_GetArguments(AObj: ICefCommandLine; var arguments: TStrings); extdecl;
var
  Retarguments: TStrings;
begin
  {$define handleExceptionFuncName :='GetArguments'}
  handleExceptionBegin
  Retarguments := arguments;
  AObj.GetArguments(Retarguments);
  arguments := Retarguments;
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_AppendArgument(AObj: ICefCommandLine; const argument: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='AppendArgument'}
  handleExceptionBegin
  AObj.AppendArgument(argument);
  handleExceptionEnd
end;

//procedure
procedure CefCommandLine_PrependWrapper(AObj: ICefCommandLine; const wrapper: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='PrependWrapper'}
  handleExceptionBegin
  AObj.PrependWrapper(wrapper);
  handleExceptionEnd
end;


exports
  CefCommandLine_UnWrap,
  CefCommandLine_New,
  CefCommandLine_Global,
  CefCommandLine_IsValid,
  CefCommandLine_IsReadOnly,
  CefCommandLine_Copy,
  CefCommandLine_GetCommandLineString,
  CefCommandLine_GetProgram,
  CefCommandLine_HasSwitches,
  CefCommandLine_HasSwitch,
  CefCommandLine_GetSwitchValue,
  CefCommandLine_GetSwitches,
  CefCommandLine_GetSwitches1,
  CefCommandLine_HasArguments,
  CefCommandLine_InitFromArgv,
  CefCommandLine_InitFromString,
  CefCommandLine_Reset,
  CefCommandLine_GetArgv,
  CefCommandLine_SetProgram,
  CefCommandLine_AppendSwitch,
  CefCommandLine_AppendSwitchWithValue,
  CefCommandLine_GetArguments,
  CefCommandLine_AppendArgument,
  CefCommandLine_PrependWrapper;