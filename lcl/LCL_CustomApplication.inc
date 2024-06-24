
//constructor
function CustomApplication_Create(AOwner: TComponent): TCustomApplication; extdecl;
begin
  handleExceptionBegin
  Result := TCustomApplication.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomApplication_ExeName(AObj: TCustomApplication): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ExeName);
  handleExceptionEnd
end;

//property
function CustomApplication_HelpFile(AIsSet: LongBool; AObj: TCustomApplication; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.HelpFile := AValue;
  end else
    Result := ToPChar(AObj.HelpFile);
  handleExceptionEnd
end;

//property
function CustomApplication_Terminated(AObj: TCustomApplication): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Terminated;
  handleExceptionEnd
end;

//property
function CustomApplication_Title(AIsSet: LongBool; AObj: TCustomApplication; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Title := AValue;
  end else
    Result := ToPChar(AObj.Title);
  handleExceptionEnd
end;

//property
function CustomApplication_Location(AObj: TCustomApplication): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Location);
  handleExceptionEnd
end;

//property
function CustomApplication_Params(AObj: TCustomApplication; Index: integer): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.Params[Index]);
  handleExceptionEnd
end;

//property
function CustomApplication_ParamCount(AObj: TCustomApplication): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ParamCount;
  handleExceptionEnd
end;

//property
function CustomApplication_EnvironmentVariable(AObj: TCustomApplication; envName: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.EnvironmentVariable[envName]);
  handleExceptionEnd
end;

//property
function CustomApplication_OptionChar(AIsSet: LongBool; AObj: TCustomApplication; AValue: Char): Char; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OptionChar := AValue;
  end else
    Result := AObj.OptionChar;
  handleExceptionEnd
end;

//property
function CustomApplication_CaseSensitiveOptions(AIsSet: LongBool; AObj: TCustomApplication; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CaseSensitiveOptions := AValue;
  end else
    Result := AObj.CaseSensitiveOptions;
  handleExceptionEnd
end;

//property
function CustomApplication_StopOnException(AIsSet: LongBool; AObj: TCustomApplication; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.StopOnException := AValue;
  end else
    Result := AObj.StopOnException;
  handleExceptionEnd
end;

//property
function CustomApplication_ExceptionExitCode(AIsSet: LongBool; AObj: TCustomApplication; AValue: LongInt): LongInt; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ExceptionExitCode := AValue;
  end else
    Result := AObj.ExceptionExitCode;
  handleExceptionEnd
end;

//property
function CustomApplication_EventLogFilter(AIsSet: LongBool; AObj: TCustomApplication; AValue: TEventLogTypes): TEventLogTypes; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.EventLogFilter := AValue;
  end else
    Result := AObj.EventLogFilter;
  handleExceptionEnd
end;

//function
function CustomApplication_FindOptionIndex(AObj: TCustomApplication; const S: PChar; var Longopt: LongBool; StartAt: Integer): Integer; extdecl;
var
  RetLongopt: boolean;
begin
  handleExceptionBegin
  RetLongopt := Longopt;
  Result := AObj.FindOptionIndex(S, RetLongopt, StartAt);
  Longopt := LongBool(RetLongopt);
  handleExceptionEnd
end;

//function
function CustomApplication_GetOptionValue(AObj: TCustomApplication; const S: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetOptionValue(S));
  handleExceptionEnd
end;

//function
function CustomApplication_GetOptionValue1(AObj: TCustomApplication; const C: Char; const S: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetOptionValue(C, S));
  handleExceptionEnd
end;

//function
function CustomApplication_GetOptionValues(AObj: TCustomApplication; const C: Char; const S: PChar): TStringArray; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetOptionValues(C, S);
  handleExceptionEnd
end;

//function
function CustomApplication_HasOption(AObj: TCustomApplication; const S: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasOption(S);
  handleExceptionEnd
end;

//function
function CustomApplication_HasOption1(AObj: TCustomApplication; const C: Char; const S: PChar): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasOption(C, S);
  handleExceptionEnd
end;

//function
function CustomApplication_CheckOptions(AObj: TCustomApplication; const ShortOptions: PChar; const Longopts: TStrings; Opts, NonOpts: TStrings; AllErrors: LongBool): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.CheckOptions(ShortOptions, Longopts, Opts, NonOpts, AllErrors));
  handleExceptionEnd
end;

//function
function CustomApplication_CheckOptions1(AObj: TCustomApplication; const ShortOptions: PChar; const Longopts: TStrings; AllErrors: LongBool): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.CheckOptions(ShortOptions, Longopts, AllErrors));
  handleExceptionEnd
end;

//function
function CustomApplication_CheckOptions2(AObj: TCustomApplication; const ShortOptions: PChar; const LongOpts: PChar; AllErrors: LongBool): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.CheckOptions(ShortOptions, LongOpts, AllErrors));
  handleExceptionEnd
end;

//function
function CustomApplication_Class(): TClass; extdecl;
begin
  Result := TCustomApplication;
end;

//procedure
procedure CustomApplication_HandleException(AObj: TCustomApplication; Sender: TObject); extdecl;
begin
  handleExceptionBegin
  AObj.HandleException(Sender);
  handleExceptionEnd
end;

//procedure
procedure CustomApplication_Initialize(AObj: TCustomApplication); extdecl;
begin
  handleExceptionBegin
  AObj.Initialize();
  handleExceptionEnd
end;

//procedure
procedure CustomApplication_Run(AObj: TCustomApplication); extdecl;
begin
  handleExceptionBegin
  AObj.Run();
  handleExceptionEnd
end;

//procedure
procedure CustomApplication_ShowException(AObj: TCustomApplication; E: Exception); extdecl;
begin
  handleExceptionBegin
  AObj.ShowException(E);
  handleExceptionEnd
end;

//procedure
procedure CustomApplication_Terminate(AObj: TCustomApplication); extdecl;
begin
  handleExceptionBegin
  AObj.Terminate();
  handleExceptionEnd
end;

//procedure
procedure CustomApplication_Terminate1(AObj: TCustomApplication; AExitCode: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Terminate(AExitCode);
  handleExceptionEnd
end;

//procedure
procedure CustomApplication_GetEnvironmentList(AObj: TCustomApplication; List: TStrings; NamesOnly: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.GetEnvironmentList(List, NamesOnly);
  handleExceptionEnd
end;

//procedure
procedure CustomApplication_GetEnvironmentList1(AObj: TCustomApplication; List: TStrings); extdecl;
begin
  handleExceptionBegin
  AObj.GetEnvironmentList(List);
  handleExceptionEnd
end;

//procedure
procedure CustomApplication_Log(AObj: TCustomApplication; EventType: TEventType; const Msg: PChar); extdecl;
begin
  handleExceptionBegin
  AObj.Log(EventType, Msg);
  handleExceptionEnd
end;

//property event
procedure CustomApplication_SetOnException(AObj: TCustomApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTExceptionEvent}
  {$DEFINE EventName := OnException}
  EventMethodCode
end;


exports
  CustomApplication_Create,
  CustomApplication_ExeName,
  CustomApplication_HelpFile,
  CustomApplication_Terminated,
  CustomApplication_Title,
  CustomApplication_Location,
  CustomApplication_Params,
  CustomApplication_ParamCount,
  CustomApplication_EnvironmentVariable,
  CustomApplication_OptionChar,
  CustomApplication_CaseSensitiveOptions,
  CustomApplication_StopOnException,
  CustomApplication_ExceptionExitCode,
  CustomApplication_EventLogFilter,
  CustomApplication_FindOptionIndex,
  CustomApplication_GetOptionValue,
  CustomApplication_GetOptionValue1,
  CustomApplication_GetOptionValues,
  CustomApplication_HasOption,
  CustomApplication_HasOption1,
  CustomApplication_CheckOptions,
  CustomApplication_CheckOptions1,
  CustomApplication_CheckOptions2,
  CustomApplication_Class,
  CustomApplication_HandleException,
  CustomApplication_Initialize,
  CustomApplication_Run,
  CustomApplication_ShowException,
  CustomApplication_Terminate,
  CustomApplication_Terminate1,
  CustomApplication_GetEnvironmentList,
  CustomApplication_GetEnvironmentList1,
  CustomApplication_Log,
  CustomApplication_SetOnException;