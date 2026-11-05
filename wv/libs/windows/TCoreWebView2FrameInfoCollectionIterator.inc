// constructor
function TCoreWebView2FrameInfoCollectionIterator_Create(const aBaseIntf: ICoreWebView2FrameInfoCollectionIterator): TCoreWebView2FrameInfoCollectionIterator; extdecl;
begin
  {$define handleExceptionID := 7200}
  handleExceptionBegin
  Result := TCoreWebView2FrameInfoCollectionIterator.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2FrameInfoCollectionIterator_MoveNext(AObj: TCoreWebView2FrameInfoCollectionIterator): LongBool; extdecl;
begin
  {$define handleExceptionID := 7201}
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;

// property
function TCoreWebView2FrameInfoCollectionIterator_Initialized(AObj: TCoreWebView2FrameInfoCollectionIterator): LongBool; extdecl;
begin
  {$define handleExceptionID := 7202}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameInfoCollectionIterator_BaseIntf(AObj: TCoreWebView2FrameInfoCollectionIterator; var Result: ICoreWebView2FrameInfoCollectionIterator); extdecl;
begin
  {$define handleExceptionID := 7203}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2FrameInfoCollectionIterator_HasCurrent(AObj: TCoreWebView2FrameInfoCollectionIterator): LongBool; extdecl;
begin
  {$define handleExceptionID := 7204}
  handleExceptionBegin
  Result := AObj.HasCurrent;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameInfoCollectionIterator_Current(AObj: TCoreWebView2FrameInfoCollectionIterator; var Result: ICoreWebView2FrameInfo); extdecl;
begin
  {$define handleExceptionID := 7205}
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

exports
  TCoreWebView2FrameInfoCollectionIterator_Create,
  TCoreWebView2FrameInfoCollectionIterator_MoveNext,
  TCoreWebView2FrameInfoCollectionIterator_Initialized,
  TCoreWebView2FrameInfoCollectionIterator_BaseIntf,
  TCoreWebView2FrameInfoCollectionIterator_HasCurrent,
  TCoreWebView2FrameInfoCollectionIterator_Current;