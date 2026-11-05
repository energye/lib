//----------------------------------------
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//----------------------------------------

procedure DarwinSetCommandLine(Args: TStringList); extdecl;
{$ifdef DARWIN}
var
  i: integer;
  //tempArgsStr: string = '';
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
    //tempArgsStr := tempArgsStr + ' ' + CommandLine[i];
  end;
  //WriteLn('pas=CommandLine: ', tempArgsStr);
  argc := Args.Count;
  argv := PPAnsiChar(@MyArgv[0]);
  CmdLine := @MyArgv[0];
  {$endif}
end;

// AddCrDelegate
procedure DarwinAddCrDelegate(); extdecl;
begin
  {$IFDEF DARWIN}
  AddCrDelegate;
  {$ENDIF}
end;

procedure SetGlobalCEFApplication(const AObj: TCefApplication); extdecl;
begin
  if GlobalCEFApp = nil then
    GlobalCEFApp := AObj;
end;

procedure DestroyGlobalCEFApplication(); extdecl;
begin
  DestroyGlobalCEFApp;
  //halt(0); // exit the subprocess
end;

procedure SetGlobalCEFWorkSchedule(const AObj: TCEFWorkScheduler); extdecl;
begin
  if GlobalCEFWorkScheduler = nil then
    GlobalCEFWorkScheduler := AObj;
end;

procedure DestroyGlobalCEFWorkSchedule(); extdecl;
begin
  DestroyGlobalCEFWorkScheduler();
end;

procedure CEFLibVersion(out AMajor, AMinor, ARelease, ABuild: Integer); extdecl;
begin
  AMajor := Integer(CEF_SUPPORTED_VERSION_MAJOR);
  AMinor := Integer(CEF_SUPPORTED_VERSION_MINOR);
  ARelease := Integer(CEF_SUPPORTED_VERSION_RELEASE);
  ABuild := Integer(CEF_SUPPORTED_VERSION_BUILD);
end;

exports
  DarwinSetCommandLine,
  DarwinAddCrDelegate,
  SetGlobalCEFApplication,
  DestroyGlobalCEFApplication,
  SetGlobalCEFWorkSchedule,
  DestroyGlobalCEFWorkSchedule,
  CEFLibVersion;
