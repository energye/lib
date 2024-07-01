
//constructor
function CoreWebView2ExecuteScriptResult_Create(const aBaseIntf: ICoreWebView2ExecuteScriptResult): TCoreWebView2ExecuteScriptResult; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2ExecuteScriptResult.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2ExecuteScriptResult_Initialized(AObj: TCoreWebView2ExecuteScriptResult): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2ExecuteScriptResult_BaseIntf(AObj: TCoreWebView2ExecuteScriptResult; var Result: ICoreWebView2ExecuteScriptResult); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2ExecuteScriptResult_Succeeded(AObj: TCoreWebView2ExecuteScriptResult): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Succeeded'}
  handleExceptionBegin
  Result := AObj.Succeeded_;
  handleExceptionEnd
end;

//property
function CoreWebView2ExecuteScriptResult_ResultAsJson(AObj: TCoreWebView2ExecuteScriptResult): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ResultAsJson'}
  handleExceptionBegin
  Result := ToPChar(AObj.ResultAsJson);
  handleExceptionEnd
end;

//property
procedure CoreWebView2ExecuteScriptResult_Exception(AObj: TCoreWebView2ExecuteScriptResult; var Result: ICoreWebView2ScriptException); extdecl;
begin
  {$define handleExceptionFuncName :='Exception'}
  handleExceptionBegin
  Result := AObj.Exception;
  handleExceptionEnd
end;

//function
function CoreWebView2ExecuteScriptResult_TryGetResultAsString(AObj: TCoreWebView2ExecuteScriptResult; var stringResult: PChar; var value: LongBool): LongBool; extdecl;
var
  RetstringResult: UnicodeString;
  Retvalue: boolean;
begin
  {$define handleExceptionFuncName :='TryGetResultAsString'}
  handleExceptionBegin
  RetstringResult := stringResult;
  Retvalue := value;
  Result := AObj.TryGetResultAsString(RetstringResult, Retvalue);
  stringResult := ToPChar(RetstringResult);
  value := LongBool(Retvalue);
  handleExceptionEnd
end;


exports
  CoreWebView2ExecuteScriptResult_Create,
  CoreWebView2ExecuteScriptResult_Initialized,
  CoreWebView2ExecuteScriptResult_BaseIntf,
  CoreWebView2ExecuteScriptResult_Succeeded,
  CoreWebView2ExecuteScriptResult_ResultAsJson,
  CoreWebView2ExecuteScriptResult_Exception,
  CoreWebView2ExecuteScriptResult_TryGetResultAsString;