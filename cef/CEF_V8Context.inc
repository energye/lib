
//function
procedure Cefv8Context_UnWrap(data: Pointer; var Result: ICefv8Context); extdecl;
begin
  Result := TCefv8ContextRef.UnWrap(data);
end;

//function
procedure Cefv8Context_Current(var Result: ICefv8Context); extdecl;
begin
  Result := TCefv8ContextRef.Current();
end;

//function
procedure Cefv8Context_Entered(var Result: ICefv8Context); extdecl;
begin
  Result := TCefv8ContextRef.Entered();
end;

//function
procedure Cefv8Context_GetTaskRunner(AObj: ICefv8Context; var Result: ICefTaskRunner); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTaskRunner();
  handleExceptionEnd
end;

//function
function Cefv8Context_IsValid(AObj: ICefv8Context): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
procedure Cefv8Context_GetBrowser(AObj: ICefv8Context; var Result: ICefBrowser); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

//function
procedure Cefv8Context_GetFrame(AObj: ICefv8Context; var Result: ICefFrame); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetFrame();
  handleExceptionEnd
end;

//function
procedure Cefv8Context_GetGlobal(AObj: ICefv8Context; var Result: ICefv8Value); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetGlobal();
  handleExceptionEnd
end;

//function
function Cefv8Context_Enter(AObj: ICefv8Context): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Enter();
  handleExceptionEnd
end;

//function
function Cefv8Context_Exit(AObj: ICefv8Context): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Exit();
  handleExceptionEnd
end;

//function
function Cefv8Context_IsSame(AObj: ICefv8Context; const that: ICefv8Context): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function Cefv8Context_Eval(AObj: ICefv8Context; const code: PChar; const scripturl: PChar; startline: integer; var retval: ICefv8Value; var exception: ICefV8Exception): LongBool; extdecl;
var
  Retretval: ICefv8Value;
  Retexception: ICefV8Exception;
begin
  handleExceptionBegin
  Retretval := retval;
  Retexception := exception;
  Result := AObj.Eval(code, scripturl, startline, Retretval, Retexception);
  retval := Retretval;
  exception := Retexception;
  handleExceptionEnd
end;


exports
  Cefv8Context_UnWrap,
  Cefv8Context_Current,
  Cefv8Context_Entered,
  Cefv8Context_GetTaskRunner,
  Cefv8Context_IsValid,
  Cefv8Context_GetBrowser,
  Cefv8Context_GetFrame,
  Cefv8Context_GetGlobal,
  Cefv8Context_Enter,
  Cefv8Context_Exit,
  Cefv8Context_IsSame,
  Cefv8Context_Eval;