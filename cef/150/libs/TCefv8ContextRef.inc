// constructor
function TCefv8ContextRef_Create(data: Pointer; out IntfV8Context: ICefv8Context): TCefv8ContextRef; extdecl;
begin
  {$define handleExceptionID := 22000}
  handleExceptionBegin
  Result := TCefv8ContextRef.Create(data);
  IntfV8Context := Result as ICefv8Context;
  handleExceptionEnd
end;

// function
procedure TCefv8ContextRef_GetTaskRunner(AObj: ICefv8Context; var Result: ICefTaskRunner); extdecl;
begin
  {$define handleExceptionID := 22001}
  handleExceptionBegin
  Result := AObj.GetTaskRunner();
  handleExceptionEnd
end;

// function
function TCefv8ContextRef_IsValid(AObj: ICefv8Context): LongBool; extdecl;
begin
  {$define handleExceptionID := 22002}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
procedure TCefv8ContextRef_GetBrowser(AObj: ICefv8Context; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 22003}
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

// function
procedure TCefv8ContextRef_GetFrame(AObj: ICefv8Context; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 22004}
  handleExceptionBegin
  Result := AObj.GetFrame();
  handleExceptionEnd
end;

// function
procedure TCefv8ContextRef_GetGlobal(AObj: ICefv8Context; var Result: ICefv8Value); extdecl;
begin
  {$define handleExceptionID := 22005}
  handleExceptionBegin
  Result := AObj.GetGlobal();
  handleExceptionEnd
end;

// function
function TCefv8ContextRef_Enter(AObj: ICefv8Context): LongBool; extdecl;
begin
  {$define handleExceptionID := 22006}
  handleExceptionBegin
  Result := AObj.Enter();
  handleExceptionEnd
end;

// function
function TCefv8ContextRef_Exit(AObj: ICefv8Context): LongBool; extdecl;
begin
  {$define handleExceptionID := 22007}
  handleExceptionBegin
  Result := AObj.Exit();
  handleExceptionEnd
end;

// function
function TCefv8ContextRef_IsSame(AObj: ICefv8Context; const that: ICefv8Context): LongBool; extdecl;
begin
  {$define handleExceptionID := 22008}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefv8ContextRef_Eval(AObj: ICefv8Context; const code: PChar; const script_url: PChar; start_line: integer; var retval: ICefv8Value; var exception: ICefV8Exception): LongBool; extdecl;
var
  Outretval: ICefv8Value = nil;
  Outexception: ICefV8Exception = nil;
begin
  {$define handleExceptionID := 22009}
  handleExceptionBegin
  Result := AObj.Eval(PCharToUStr(code), PCharToUStr(script_url), start_line, Outretval, Outexception);
  retval := Outretval;
  exception := Outexception;
  handleExceptionEnd
end;

// function static
procedure TCefv8ContextRef_UnWrap(data: Pointer; var Result: ICefv8Context); extdecl;
begin
  Result := TCefv8ContextRef.UnWrap(data);
end;

// function static
procedure TCefv8ContextRef_Current(var Result: ICefv8Context); extdecl;
begin
  Result := TCefv8ContextRef.Current();
end;

// function static
procedure TCefv8ContextRef_Entered(var Result: ICefv8Context); extdecl;
begin
  Result := TCefv8ContextRef.Entered();
end;

exports
  TCefv8ContextRef_Create,
  TCefv8ContextRef_GetTaskRunner,
  TCefv8ContextRef_IsValid,
  TCefv8ContextRef_GetBrowser,
  TCefv8ContextRef_GetFrame,
  TCefv8ContextRef_GetGlobal,
  TCefv8ContextRef_Enter,
  TCefv8ContextRef_Exit,
  TCefv8ContextRef_IsSame,
  TCefv8ContextRef_Eval,
  TCefv8ContextRef_UnWrap,
  TCefv8ContextRef_Current,
  TCefv8ContextRef_Entered;