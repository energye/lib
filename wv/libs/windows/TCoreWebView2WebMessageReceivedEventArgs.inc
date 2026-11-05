// constructor
function TCoreWebView2WebMessageReceivedEventArgs_Create(const aArgs: ICoreWebView2WebMessageReceivedEventArgs): TCoreWebView2WebMessageReceivedEventArgs; extdecl;
begin
  {$define handleExceptionID := 2600}
  handleExceptionBegin
  Result := TCoreWebView2WebMessageReceivedEventArgs.Create(aArgs);
  handleExceptionEnd
end;

// property
function TCoreWebView2WebMessageReceivedEventArgs_Initialized(AObj: TCoreWebView2WebMessageReceivedEventArgs): LongBool; extdecl;
begin
  {$define handleExceptionID := 2601}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebMessageReceivedEventArgs_BaseIntf(AObj: TCoreWebView2WebMessageReceivedEventArgs; var Result: ICoreWebView2WebMessageReceivedEventArgs); extdecl;
begin
  {$define handleExceptionID := 2602}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebMessageReceivedEventArgs_Source(AObj: TCoreWebView2WebMessageReceivedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2603}
  handleExceptionBegin
  StringBufferCreate(AObj.Source, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebMessageReceivedEventArgs_WebMessageAsJson(AObj: TCoreWebView2WebMessageReceivedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2604}
  handleExceptionBegin
  StringBufferCreate(AObj.WebMessageAsJson, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebMessageReceivedEventArgs_WebMessageAsString(AObj: TCoreWebView2WebMessageReceivedEventArgs; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 2605}
  handleExceptionBegin
  StringBufferCreate(AObj.WebMessageAsString, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WebMessageReceivedEventArgs_AdditionalObjects(AObj: TCoreWebView2WebMessageReceivedEventArgs; var Result: ICoreWebView2ObjectCollectionView); extdecl;
begin
  {$define handleExceptionID := 2606}
  handleExceptionBegin
  Result := AObj.AdditionalObjects;
  handleExceptionEnd
end;

exports
  TCoreWebView2WebMessageReceivedEventArgs_Create,
  TCoreWebView2WebMessageReceivedEventArgs_Initialized,
  TCoreWebView2WebMessageReceivedEventArgs_BaseIntf,
  TCoreWebView2WebMessageReceivedEventArgs_Source,
  TCoreWebView2WebMessageReceivedEventArgs_WebMessageAsJson,
  TCoreWebView2WebMessageReceivedEventArgs_WebMessageAsString,
  TCoreWebView2WebMessageReceivedEventArgs_AdditionalObjects;