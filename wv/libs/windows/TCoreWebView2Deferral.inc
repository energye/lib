// constructor
function TCoreWebView2Deferral_Create(const aBaseIntf: ICoreWebView2Deferral): TCoreWebView2Deferral; extdecl;
begin
  {$define handleExceptionID := 4000}
  handleExceptionBegin
  Result := TCoreWebView2Deferral.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2Deferral_Complete(AObj: TCoreWebView2Deferral): LongBool; extdecl;
begin
  {$define handleExceptionID := 4001}
  handleExceptionBegin
  Result := AObj.Complete();
  handleExceptionEnd
end;

// property
function TCoreWebView2Deferral_Initialized(AObj: TCoreWebView2Deferral): LongBool; extdecl;
begin
  {$define handleExceptionID := 4002}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Deferral_BaseIntf(AObj: TCoreWebView2Deferral; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionID := 4003}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

exports
  TCoreWebView2Deferral_Create,
  TCoreWebView2Deferral_Complete,
  TCoreWebView2Deferral_Initialized,
  TCoreWebView2Deferral_BaseIntf;