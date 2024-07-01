
//constructor
function CoreWebView2NewWindowRequestedEventArgs_Create(const aArgs: ICoreWebView2NewWindowRequestedEventArgs): TCoreWebView2NewWindowRequestedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2NewWindowRequestedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2NewWindowRequestedEventArgs_Initialized(AObj: TCoreWebView2NewWindowRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2NewWindowRequestedEventArgs_BaseIntf(AObj: TCoreWebView2NewWindowRequestedEventArgs; var Result: ICoreWebView2NewWindowRequestedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2NewWindowRequestedEventArgs_URI(AObj: TCoreWebView2NewWindowRequestedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='URI'}
  handleExceptionBegin
  Result := ToPChar(AObj.URI);
  handleExceptionEnd
end;

//property
procedure CoreWebView2NewWindowRequestedEventArgs_NewWindow(AIsSet: LongBool; AObj: TCoreWebView2NewWindowRequestedEventArgs; AValue: ICoreWebView2; var Result: ICoreWebView2); extdecl;
begin
  {$define handleExceptionFuncName :='NewWindow'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.NewWindow := AValue;
  end else
    Result := AObj.NewWindow;
  handleExceptionEnd
end;

//property
function CoreWebView2NewWindowRequestedEventArgs_Handled(AIsSet: LongBool; AObj: TCoreWebView2NewWindowRequestedEventArgs; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Handled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Handled := AValue;
  end else
    Result := AObj.Handled;
  handleExceptionEnd
end;

//property
function CoreWebView2NewWindowRequestedEventArgs_IsUserInitiated(AObj: TCoreWebView2NewWindowRequestedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsUserInitiated'}
  handleExceptionBegin
  Result := AObj.IsUserInitiated;
  handleExceptionEnd
end;

//property
procedure CoreWebView2NewWindowRequestedEventArgs_Deferral(AObj: TCoreWebView2NewWindowRequestedEventArgs; var Result: ICoreWebView2Deferral); extdecl;
begin
  {$define handleExceptionFuncName :='Deferral'}
  handleExceptionBegin
  Result := AObj.Deferral;
  handleExceptionEnd
end;

//property
procedure CoreWebView2NewWindowRequestedEventArgs_WindowFeatures(AObj: TCoreWebView2NewWindowRequestedEventArgs; var Result: ICoreWebView2WindowFeatures); extdecl;
begin
  {$define handleExceptionFuncName :='WindowFeatures'}
  handleExceptionBegin
  Result := AObj.WindowFeatures;
  handleExceptionEnd
end;

//property
function CoreWebView2NewWindowRequestedEventArgs_Name(AObj: TCoreWebView2NewWindowRequestedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Name'}
  handleExceptionBegin
  Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
procedure CoreWebView2NewWindowRequestedEventArgs_OriginalSourceFrameInfo(AObj: TCoreWebView2NewWindowRequestedEventArgs; var Result: ICoreWebView2FrameInfo); extdecl;
begin
  {$define handleExceptionFuncName :='OriginalSourceFrameInfo'}
  handleExceptionBegin
  Result := AObj.OriginalSourceFrameInfo;
  handleExceptionEnd
end;


exports
  CoreWebView2NewWindowRequestedEventArgs_Create,
  CoreWebView2NewWindowRequestedEventArgs_Initialized,
  CoreWebView2NewWindowRequestedEventArgs_BaseIntf,
  CoreWebView2NewWindowRequestedEventArgs_URI,
  CoreWebView2NewWindowRequestedEventArgs_NewWindow,
  CoreWebView2NewWindowRequestedEventArgs_Handled,
  CoreWebView2NewWindowRequestedEventArgs_IsUserInitiated,
  CoreWebView2NewWindowRequestedEventArgs_Deferral,
  CoreWebView2NewWindowRequestedEventArgs_WindowFeatures,
  CoreWebView2NewWindowRequestedEventArgs_Name,
  CoreWebView2NewWindowRequestedEventArgs_OriginalSourceFrameInfo;