//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

procedure Eng_SetCommandLine(Args: TStringList); extdecl;
{$ifdef DARWIN}
var
  i: integer;
{$endif}
begin
  {$ifdef DARWIN}
  //argc:longint;
  //argv:PPchar;
  //envp:PPchar;
  SetLength(CommandLine, Args.Count);
  SetLength(MyArgv, Args.Count);
  for i := 0 to Args.Count - 1 do
  begin
    CommandLine[i] := Args.Strings[i];
    MyArgv[i] := PChar(CommandLine[i]);
  end;
  argc := Args.Count;
  argv := PPAnsiChar(@MyArgv[0]);
  CmdLine := @MyArgv[0];
  {$endif}
end;

// AddCrDelegate
procedure Eng_AddCrDelegate(); extdecl;
begin
  {$IFDEF DARWIN}
  AddCrDelegate;
  {$ENDIF}
end;

procedure GlobalApp_SetGlobalCEFApp(const AObj: TCefApplication); extdecl;
begin
  if GlobalCEFApp = nil then
  begin
    GlobalCEFApp := AObj;
  end;
end;

procedure GlobalApp_DestroyGlobalCEFApp(); extdecl;
begin
  DestroyGlobalCEFApp;
  //halt(0); // exit the subprocess
end;

// 底层库的特定版本标记
function GlobalApp_SpecificVersion(): Integer; extdecl;
begin
  Result := 0; // 非特定版本，当前版本或当前最新版本
end;

exports
  Eng_SetCommandLine,
  Eng_AddCrDelegate,
  GlobalApp_SetGlobalCEFApp,
  GlobalApp_DestroyGlobalCEFApp,
  GlobalApp_SpecificVersion;
