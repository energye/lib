// constructor
function TCustomApplication_Create(AOwner: TComponent): TCustomApplication; extdecl;
begin
  {$define handleExceptionID := 400}
  handleExceptionBegin
  Result := TCustomApplication.Create(AOwner);
  handleExceptionEnd
end;

// function
function TCustomApplication_FindOptionIndex(AObj: TCustomApplication; const S: PChar; var Longopt: LongBool; StartAt: Integer): Integer; extdecl;
var
  OutLongopt: Boolean;
begin
  {$define handleExceptionID := 401}
  handleExceptionBegin
  OutLongopt := Longopt;
  Result := AObj.FindOptionIndex(S, OutLongopt, StartAt);
  Longopt := OutLongopt;
  handleExceptionEnd
end;

// function
procedure TCustomApplication_GetOptionValueWithStr(AObj: TCustomApplication; const S: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 402}
  handleExceptionBegin
  StringBufferCreate(AObj.GetOptionValue(S), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomApplication_GetOptionValueWithCharStr(AObj: TCustomApplication; const C: Char; const S: PChar;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 403}
  handleExceptionBegin
  StringBufferCreate(AObj.GetOptionValue(C, S), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCustomApplication_GetOptionValues(AObj: TCustomApplication; const C: Char; const S: PChar): TStringArrayWrap; extdecl;
begin
  {$define handleExceptionID := 404}
  handleExceptionBegin
  Result := TStringArrayWrap.Create(AObj.GetOptionValues(C, S));
  handleExceptionEnd
end;

// function
function TCustomApplication_HasOptionWithStr(AObj: TCustomApplication; const S: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 405}
  handleExceptionBegin
  Result := AObj.HasOption(S);
  handleExceptionEnd
end;

// function
function TCustomApplication_HasOptionWithCharStr(AObj: TCustomApplication; const C: Char; const S: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 406}
  handleExceptionBegin
  Result := AObj.HasOption(C, S);
  handleExceptionEnd
end;

// function
procedure TCustomApplication_CheckOptionsWithStrStringsX3Bool(AObj: TCustomApplication; const ShortOptions: PChar; const Longopts: TStrings; Opts: TStrings; NonOpts: TStrings; AllErrors: LongBool;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 407}
  handleExceptionBegin
  StringBufferCreate(AObj.CheckOptions(ShortOptions, Longopts, Opts, NonOpts, AllErrors), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomApplication_CheckOptionsWithStrStringsBool(AObj: TCustomApplication; const ShortOptions: PChar; const Longopts: TStrings; AllErrors: LongBool;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 408}
  handleExceptionBegin
  StringBufferCreate(AObj.CheckOptions(ShortOptions, Longopts, AllErrors), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCustomApplication_CheckOptionsWithStrX2Bool(AObj: TCustomApplication; const ShortOptions: PChar; const LongOpts: PChar; AllErrors: LongBool;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 409}
  handleExceptionBegin
  StringBufferCreate(AObj.CheckOptions(ShortOptions, LongOpts, AllErrors), AStrData, AStrSize);
  handleExceptionEnd
end;

// procedure
procedure TCustomApplication_HandleException(AObj: TCustomApplication; Sender: TObject); extdecl;
begin
  {$define handleExceptionID := 410}
  handleExceptionBegin
  AObj.HandleException(Sender);
  handleExceptionEnd
end;

// procedure
procedure TCustomApplication_Initialize(AObj: TCustomApplication); extdecl;
begin
  {$define handleExceptionID := 411}
  handleExceptionBegin
  AObj.Initialize();
  handleExceptionEnd
end;

// procedure
procedure TCustomApplication_Run(AObj: TCustomApplication); extdecl;
begin
  {$define handleExceptionID := 412}
  handleExceptionBegin
  AObj.Run();
  handleExceptionEnd
end;

// procedure
procedure TCustomApplication_Terminate(AObj: TCustomApplication); extdecl;
begin
  {$define handleExceptionID := 413}
  handleExceptionBegin
  AObj.Terminate();
  handleExceptionEnd
end;

// procedure
procedure TCustomApplication_TerminateWithInt(AObj: TCustomApplication; AExitCode: Integer); extdecl;
begin
  {$define handleExceptionID := 414}
  handleExceptionBegin
  AObj.Terminate(AExitCode);
  handleExceptionEnd
end;

// procedure
procedure TCustomApplication_GetEnvironmentListWithStringsBool(AObj: TCustomApplication; List: TStrings; NamesOnly: LongBool); extdecl;
begin
  {$define handleExceptionID := 415}
  handleExceptionBegin
  AObj.GetEnvironmentList(List, NamesOnly);
  handleExceptionEnd
end;

// procedure
procedure TCustomApplication_GetEnvironmentListWithStrings(AObj: TCustomApplication; List: TStrings); extdecl;
begin
  {$define handleExceptionID := 416}
  handleExceptionBegin
  AObj.GetEnvironmentList(List);
  handleExceptionEnd
end;

// procedure
procedure TCustomApplication_Log(AObj: TCustomApplication; EventType: TEventType; const Msg: PChar); extdecl;
begin
  {$define handleExceptionID := 417}
  handleExceptionBegin
  AObj.Log(EventType, Msg);
  handleExceptionEnd
end;

// property
procedure TCustomApplication_ExeName(AObj: TCustomApplication; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 418}
  handleExceptionBegin
  StringBufferCreate(AObj.ExeName, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomApplication_HelpFile(ASet: LongBool; AObj: TCustomApplication; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 419}
  handleExceptionBegin
  if ASet then
  begin
    AObj.HelpFile := AValue
  end else
    StringBufferCreate(AObj.HelpFile, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomApplication_Terminated(AObj: TCustomApplication): LongBool; extdecl;
begin
  {$define handleExceptionID := 420}
  handleExceptionBegin
  Result := AObj.Terminated;
  handleExceptionEnd
end;

// property
procedure TCustomApplication_Title(ASet: LongBool; AObj: TCustomApplication; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 421}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomApplication_ConsoleApplication(AObj: TCustomApplication): LongBool; extdecl;
begin
  {$define handleExceptionID := 422}
  handleExceptionBegin
  Result := AObj.ConsoleApplication;
  handleExceptionEnd
end;

// property
procedure TCustomApplication_Location(AObj: TCustomApplication; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 423}
  handleExceptionBegin
  StringBufferCreate(AObj.Location, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCustomApplication_Params(AObj: TCustomApplication; Index: integer; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 424}
  handleExceptionBegin
  StringBufferCreate(AObj.Params[Index], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomApplication_ParamCount(AObj: TCustomApplication): Integer; extdecl;
begin
  {$define handleExceptionID := 425}
  handleExceptionBegin
  Result := AObj.ParamCount;
  handleExceptionEnd
end;

// property
procedure TCustomApplication_EnvironmentVariable(AObj: TCustomApplication; envName: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 426}
  handleExceptionBegin
  StringBufferCreate(AObj.EnvironmentVariable[envName], AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCustomApplication_OptionChar(ASet: LongBool; AObj: TCustomApplication; AValue: Char): Char; extdecl;
begin
  {$define handleExceptionID := 427}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OptionChar := AValue
  end else
    Result := AObj.OptionChar;
  handleExceptionEnd
end;

// property
function TCustomApplication_CaseSensitiveOptions(ASet: LongBool; AObj: TCustomApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 428}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CaseSensitiveOptions := AValue
  end else
    Result := AObj.CaseSensitiveOptions;
  handleExceptionEnd
end;

// property
function TCustomApplication_StopOnException(ASet: LongBool; AObj: TCustomApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 429}
  handleExceptionBegin
  if ASet then
  begin
    AObj.StopOnException := AValue
  end else
    Result := AObj.StopOnException;
  handleExceptionEnd
end;

// property
function TCustomApplication_ExceptionExitCode(ASet: LongBool; AObj: TCustomApplication; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 430}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ExceptionExitCode := AValue
  end else
    Result := AObj.ExceptionExitCode;
  handleExceptionEnd
end;

// property
function TCustomApplication_EventLogFilter(ASet: LongBool; AObj: TCustomApplication; AValue: TEventLogTypes): TEventLogTypes; extdecl;
begin
  {$define handleExceptionID := 431}
  handleExceptionBegin
  if ASet then
  begin
    AObj.EventLogFilter := AValue
  end else
    Result := AObj.EventLogFilter;
  handleExceptionEnd
end;

// property
function TCustomApplication_SingleInstanceEnabled(ASet: LongBool; AObj: TCustomApplication; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 432}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SingleInstanceEnabled := AValue
  end else
    Result := AObj.SingleInstanceEnabled;
  handleExceptionEnd
end;

// event
procedure TCustomApplication_OnException(AObj: TCustomApplication; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTExceptionEvent}
  {$DEFINE EventName := OnException}
  LCLEventMethodCode
end;

function TCustomApplication_TClass(): TClass; extdecl;
begin
  Result := TCustomApplication;
end;

exports
  TCustomApplication_Create,
  TCustomApplication_FindOptionIndex,
  TCustomApplication_GetOptionValueWithStr,
  TCustomApplication_GetOptionValueWithCharStr,
  TCustomApplication_GetOptionValues,
  TCustomApplication_HasOptionWithStr,
  TCustomApplication_HasOptionWithCharStr,
  TCustomApplication_CheckOptionsWithStrStringsX3Bool,
  TCustomApplication_CheckOptionsWithStrStringsBool,
  TCustomApplication_CheckOptionsWithStrX2Bool,
  TCustomApplication_HandleException,
  TCustomApplication_Initialize,
  TCustomApplication_Run,
  TCustomApplication_Terminate,
  TCustomApplication_TerminateWithInt,
  TCustomApplication_GetEnvironmentListWithStringsBool,
  TCustomApplication_GetEnvironmentListWithStrings,
  TCustomApplication_Log,
  TCustomApplication_ExeName,
  TCustomApplication_HelpFile,
  TCustomApplication_Terminated,
  TCustomApplication_Title,
  TCustomApplication_ConsoleApplication,
  TCustomApplication_Location,
  TCustomApplication_Params,
  TCustomApplication_ParamCount,
  TCustomApplication_EnvironmentVariable,
  TCustomApplication_OptionChar,
  TCustomApplication_CaseSensitiveOptions,
  TCustomApplication_StopOnException,
  TCustomApplication_ExceptionExitCode,
  TCustomApplication_EventLogFilter,
  TCustomApplication_SingleInstanceEnabled,
  TCustomApplication_OnException,
  TCustomApplication_TClass;