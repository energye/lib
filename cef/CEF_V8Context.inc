
//function
procedure CefV8Context_UnWrap(data: Pointer; var Result: ICefv8Context); extdecl;
begin
  Result := TCefv8ContextRef.UnWrap(data);
end;

//function
procedure CefV8Context_Current(var Result: ICefv8Context); extdecl;
begin
  Result := TCefv8ContextRef.Current();
end;

//function
procedure CefV8Context_Entered(var Result: ICefv8Context); extdecl;
begin
  Result := TCefv8ContextRef.Entered();
end;

//function
procedure CefV8Context_GetTaskRunner(AObj: ICefV8Context; var Result: ICefTaskRunner); extdecl;
begin
  {$define handleExceptionFuncName :='GetTaskRunner'}
  handleExceptionBegin
  Result := AObj.GetTaskRunner();
  handleExceptionEnd
end;

//function
function CefV8Context_IsValid(AObj: ICefV8Context): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
procedure CefV8Context_GetBrowser(AObj: ICefV8Context; var Result: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='GetBrowser'}
  handleExceptionBegin
  Result := AObj.GetBrowser();
  handleExceptionEnd
end;

//function
procedure CefV8Context_GetFrame(AObj: ICefV8Context; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='GetFrame'}
  handleExceptionBegin
  Result := AObj.GetFrame();
  handleExceptionEnd
end;

//function
procedure CefV8Context_GetGlobal(AObj: ICefV8Context; var Result: ICefv8Value); extdecl;
begin
  {$define handleExceptionFuncName :='GetGlobal'}
  handleExceptionBegin
  Result := AObj.GetGlobal();
  handleExceptionEnd
end;

//function
function CefV8Context_Enter(AObj: ICefV8Context): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Enter'}
  handleExceptionBegin
  Result := AObj.Enter();
  handleExceptionEnd
end;

//function
function CefV8Context_Exit(AObj: ICefV8Context): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Exit'}
  handleExceptionBegin
  Result := AObj.Exit();
  handleExceptionEnd
end;

//function
function CefV8Context_IsSame(AObj: ICefV8Context; const that: ICefv8Context): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefV8Context_Eval(AObj: ICefV8Context; const code: PChar; const scripturl: PChar; startline: integer; var retval: ICefv8Value; var exception: ICefV8Exception): LongBool; extdecl;
var
  Retretval: ICefv8Value;
  Retexception: ICefV8Exception;
begin
  {$define handleExceptionFuncName :='Eval'}
  handleExceptionBegin
  Retretval := retval;
  Retexception := exception;
  Result := AObj.Eval(code, scripturl, startline, Retretval, Retexception);
  retval := Retretval;
  exception := Retexception;
  handleExceptionEnd
end;


exports
  CefV8Context_UnWrap,
  CefV8Context_Current,
  CefV8Context_Entered,
  CefV8Context_GetTaskRunner,
  CefV8Context_IsValid,
  CefV8Context_GetBrowser,
  CefV8Context_GetFrame,
  CefV8Context_GetGlobal,
  CefV8Context_Enter,
  CefV8Context_Exit,
  CefV8Context_IsSame,
  CefV8Context_Eval;