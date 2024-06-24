
//constructor
function CoreWebView2Deferral_Create(const aBaseIntf: ICoreWebView2Deferral): TCoreWebView2Deferral; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2Deferral.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2Deferral_Initialized(AObj: TCoreWebView2Deferral): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Deferral_BaseIntf(AObj: TCoreWebView2Deferral; var Result: ICoreWebView2Deferral); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//function
function CoreWebView2Deferral_Complete(AObj: TCoreWebView2Deferral): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Complete();
  handleExceptionEnd
end;


exports
  CoreWebView2Deferral_Create,
  CoreWebView2Deferral_Initialized,
  CoreWebView2Deferral_BaseIntf,
  CoreWebView2Deferral_Complete;