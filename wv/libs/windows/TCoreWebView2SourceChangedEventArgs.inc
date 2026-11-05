// constructor
function TCoreWebView2SourceChangedEventArgs_Create(const aArgs: ICoreWebView2SourceChangedEventArgs): TCoreWebView2SourceChangedEventArgs; extdecl;
begin
  {$define handleExceptionID := 1900}
  handleExceptionBegin
  Result := TCoreWebView2SourceChangedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2SourceChangedEventArgs_Initialized(AObj: TCoreWebView2SourceChangedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1901}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2SourceChangedEventArgs_BaseIntf(AObj: TCoreWebView2SourceChangedEventArgs; var Result: ICoreWebView2SourceChangedEventArgs); extdecl;
begin
  {$define handleExceptionID := 1902}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2SourceChangedEventArgs_IsNewDocument(AObj: TCoreWebView2SourceChangedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 1903}
  handleExceptionBegin
  Result := AObj.IsNewDocument;
  handleExceptionEnd
end;

exports
  TCoreWebView2SourceChangedEventArgs_Create,
  TCoreWebView2SourceChangedEventArgs_Initialized,
  TCoreWebView2SourceChangedEventArgs_BaseIntf,
  TCoreWebView2SourceChangedEventArgs_IsNewDocument;