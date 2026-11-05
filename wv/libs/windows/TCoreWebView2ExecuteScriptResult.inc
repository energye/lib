// constructor
function TCoreWebView2ExecuteScriptResult_Create(const aBaseIntf: ICoreWebView2ExecuteScriptResult): TCoreWebView2ExecuteScriptResult; extdecl;
begin
  {$define handleExceptionID := 4200}
  handleExceptionBegin
  Result := TCoreWebView2ExecuteScriptResult.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2ExecuteScriptResult_TryGetResultAsString(AObj: TCoreWebView2ExecuteScriptResult; var stringResult: PChar; var value: LongBool): LongBool; extdecl;
var
  OutstringResult: wvstring;
  Outvalue: boolean;
begin
  {$define handleExceptionID := 4201}
  handleExceptionBegin
  OutstringResult := stringResult;
  Outvalue := value;
  Result := AObj.TryGetResultAsString(OutstringResult, Outvalue);
  stringResult := ToPChar(OutstringResult);
  value := Outvalue;
  handleExceptionEnd
end;

// property
function TCoreWebView2ExecuteScriptResult_Initialized(AObj: TCoreWebView2ExecuteScriptResult): LongBool; extdecl;
begin
  {$define handleExceptionID := 4202}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ExecuteScriptResult_BaseIntf(AObj: TCoreWebView2ExecuteScriptResult; var Result: ICoreWebView2ExecuteScriptResult); extdecl;
begin
  {$define handleExceptionID := 4203}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ExecuteScriptResult_Succeeded_(AObj: TCoreWebView2ExecuteScriptResult): LongBool; extdecl;
begin
  {$define handleExceptionID := 4204}
  handleExceptionBegin
  Result := AObj.Succeeded_;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ExecuteScriptResult_ResultAsJson(AObj: TCoreWebView2ExecuteScriptResult; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4205}
  handleExceptionBegin
  StringBufferCreate(AObj.ResultAsJson, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ExecuteScriptResult_Exception(AObj: TCoreWebView2ExecuteScriptResult; var Result: ICoreWebView2ScriptException); extdecl;
begin
  {$define handleExceptionID := 4206}
  handleExceptionBegin
  Result := AObj.Exception;
  handleExceptionEnd
end;

exports
  TCoreWebView2ExecuteScriptResult_Create,
  TCoreWebView2ExecuteScriptResult_TryGetResultAsString,
  TCoreWebView2ExecuteScriptResult_Initialized,
  TCoreWebView2ExecuteScriptResult_BaseIntf,
  TCoreWebView2ExecuteScriptResult_Succeeded_,
  TCoreWebView2ExecuteScriptResult_ResultAsJson,
  TCoreWebView2ExecuteScriptResult_Exception;