
//constructor
function CoreWebView2WebMessageReceivedEventArgs_Create(const aArgs: ICoreWebView2WebMessageReceivedEventArgs): TCoreWebView2WebMessageReceivedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2WebMessageReceivedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2WebMessageReceivedEventArgs_Initialized(AObj: TCoreWebView2WebMessageReceivedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebMessageReceivedEventArgs_BaseIntf(AObj: TCoreWebView2WebMessageReceivedEventArgs; var Result: ICoreWebView2WebMessageReceivedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2WebMessageReceivedEventArgs_Source(AObj: TCoreWebView2WebMessageReceivedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Source'}
  handleExceptionBegin
  Result := ToPChar(AObj.Source);
  handleExceptionEnd
end;

//property
function CoreWebView2WebMessageReceivedEventArgs_WebMessageAsJson(AObj: TCoreWebView2WebMessageReceivedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='WebMessageAsJson'}
  handleExceptionBegin
  Result := ToPChar(AObj.WebMessageAsJson);
  handleExceptionEnd
end;

//property
function CoreWebView2WebMessageReceivedEventArgs_WebMessageAsString(AObj: TCoreWebView2WebMessageReceivedEventArgs): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='WebMessageAsString'}
  handleExceptionBegin
  Result := ToPChar(AObj.WebMessageAsString);
  handleExceptionEnd
end;

//property
procedure CoreWebView2WebMessageReceivedEventArgs_AdditionalObjects(AObj: TCoreWebView2WebMessageReceivedEventArgs; var Result: ICoreWebView2ObjectCollectionView); extdecl;
begin
  {$define handleExceptionFuncName :='AdditionalObjects'}
  handleExceptionBegin
  Result := AObj.AdditionalObjects;
  handleExceptionEnd
end;


exports
  CoreWebView2WebMessageReceivedEventArgs_Create,
  CoreWebView2WebMessageReceivedEventArgs_Initialized,
  CoreWebView2WebMessageReceivedEventArgs_BaseIntf,
  CoreWebView2WebMessageReceivedEventArgs_Source,
  CoreWebView2WebMessageReceivedEventArgs_WebMessageAsJson,
  CoreWebView2WebMessageReceivedEventArgs_WebMessageAsString,
  CoreWebView2WebMessageReceivedEventArgs_AdditionalObjects;