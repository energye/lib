// constructor
function TWkNavigationAction_Create(AData: WKNavigationAction): TWkNavigationAction; extdecl;
begin
  {$define handleExceptionID := 2100}
  handleExceptionBegin
  Result := TWkNavigationAction.Create(AData);
  handleExceptionEnd
end;

// function
function TWkNavigationAction_Data(AObj: TWkNavigationAction): WKNavigationAction; extdecl;
begin
  {$define handleExceptionID := 2101}
  handleExceptionBegin
  Result := AObj.Data();
  handleExceptionEnd
end;

// function
function TWkNavigationAction_SourceFrame(AObj: TWkNavigationAction): WKFrameInfo; extdecl;
begin
  {$define handleExceptionID := 2102}
  handleExceptionBegin
  Result := AObj.SourceFrame();
  handleExceptionEnd
end;

// function
function TWkNavigationAction_TargetFrame(AObj: TWkNavigationAction): WKFrameInfo; extdecl;
begin
  {$define handleExceptionID := 2103}
  handleExceptionBegin
  Result := AObj.TargetFrame();
  handleExceptionEnd
end;

// function
function TWkNavigationAction_NavigationType(AObj: TWkNavigationAction): WKNavigationType; extdecl;
begin
  {$define handleExceptionID := 2104}
  handleExceptionBegin
  Result := AObj.NavigationType();
  handleExceptionEnd
end;

// function
function TWkNavigationAction_Request(AObj: TWkNavigationAction): NSURLRequest; extdecl;
begin
  {$define handleExceptionID := 2105}
  handleExceptionBegin
  Result := AObj.Request();
  handleExceptionEnd
end;

// function
function TWkNavigationAction_ModifierFlags(AObj: TWkNavigationAction): NSEventModifierFlags; extdecl;
begin
  {$define handleExceptionID := 2106}
  handleExceptionBegin
  Result := AObj.ModifierFlags();
  handleExceptionEnd
end;

// function
function TWkNavigationAction_ButtonNumber(AObj: TWkNavigationAction): Integer; extdecl;
begin
  {$define handleExceptionID := 2107}
  handleExceptionBegin
  Result := AObj.ButtonNumber();
  handleExceptionEnd
end;

// procedure
procedure TWkNavigationAction_Release(AObj: TWkNavigationAction); extdecl;
begin
  {$define handleExceptionID := 2108}
  handleExceptionBegin
  AObj.Release();
  handleExceptionEnd
end;

exports
  TWkNavigationAction_Create,
  TWkNavigationAction_Data,
  TWkNavigationAction_SourceFrame,
  TWkNavigationAction_TargetFrame,
  TWkNavigationAction_NavigationType,
  TWkNavigationAction_Request,
  TWkNavigationAction_ModifierFlags,
  TWkNavigationAction_ButtonNumber,
  TWkNavigationAction_Release;