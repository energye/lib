
//constructor
function CoreWebView2SourceChangedEventArgs_Create(const aArgs: ICoreWebView2SourceChangedEventArgs): TCoreWebView2SourceChangedEventArgs; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2SourceChangedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

//property
function CoreWebView2SourceChangedEventArgs_Initialized(AObj: TCoreWebView2SourceChangedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2SourceChangedEventArgs_BaseIntf(AObj: TCoreWebView2SourceChangedEventArgs; var Result: ICoreWebView2SourceChangedEventArgs); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2SourceChangedEventArgs_IsNewDocument(AObj: TCoreWebView2SourceChangedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsNewDocument'}
  handleExceptionBegin
  Result := AObj.IsNewDocument;
  handleExceptionEnd
end;


exports
  CoreWebView2SourceChangedEventArgs_Create,
  CoreWebView2SourceChangedEventArgs_Initialized,
  CoreWebView2SourceChangedEventArgs_BaseIntf,
  CoreWebView2SourceChangedEventArgs_IsNewDocument;