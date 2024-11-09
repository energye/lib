
//constructor
function WKNavigationAction_Create(aData: WKNavigationAction): TWKNavigationAction; extdecl;
begin
  handleExceptionBegin
  Result := TWKNavigationAction.Create(aData);
  handleExceptionEnd
end;

//function
function WKNavigationAction_Data(AObj: TWKNavigationAction): WKNavigationAction; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

//function
function WKNavigationAction_SourceFrame(AObj: TWKNavigationAction): WKFrameInfo; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SourceFrame();
  handleExceptionEnd
end;

//function
function WKNavigationAction_TargetFrame(AObj: TWKNavigationAction): WKFrameInfo; extdecl;
begin
  handleExceptionBegin
  Result := AObj.TargetFrame();
  handleExceptionEnd
end;

//function
function WKNavigationAction_NavigationType(AObj: TWKNavigationAction): WKNavigationType; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NavigationType();
  handleExceptionEnd
end;

//function
function WKNavigationAction_Request(AObj: TWKNavigationAction): NSURLRequest; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Request();
  handleExceptionEnd
end;

//function
function WKNavigationAction_ModifierFlags(AObj: TWKNavigationAction): NSEventModifierFlags; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ModifierFlags();
  handleExceptionEnd
end;

//function
function WKNavigationAction_ButtonNumber(AObj: TWKNavigationAction): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ButtonNumber();
  handleExceptionEnd
end;

//procedure
procedure WKNavigationAction_Release(AObj: TWKNavigationAction); extdecl;
begin
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;


exports
  WKNavigationAction_Create,
  WKNavigationAction_Data,
  WKNavigationAction_SourceFrame,
  WKNavigationAction_TargetFrame,
  WKNavigationAction_NavigationType,
  WKNavigationAction_Request,
  WKNavigationAction_ModifierFlags,
  WKNavigationAction_ButtonNumber,
  WKNavigationAction_Release;