
//constructor
function CoreWebView2FrameInfoCollectionIterator_Create(const aBaseIntf: ICoreWebView2FrameInfoCollectionIterator): TCoreWebView2FrameInfoCollectionIterator; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2FrameInfoCollectionIterator.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2FrameInfoCollectionIterator_Initialized(AObj: TCoreWebView2FrameInfoCollectionIterator): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2FrameInfoCollectionIterator_BaseIntf(AObj: TCoreWebView2FrameInfoCollectionIterator; var Result: ICoreWebView2FrameInfoCollectionIterator); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2FrameInfoCollectionIterator_HasCurrent(AObj: TCoreWebView2FrameInfoCollectionIterator): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasCurrent;
  handleExceptionEnd
end;

//property
procedure CoreWebView2FrameInfoCollectionIterator_Current(AObj: TCoreWebView2FrameInfoCollectionIterator; var Result: ICoreWebView2FrameInfo); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Current;
  handleExceptionEnd
end;

//function
function CoreWebView2FrameInfoCollectionIterator_MoveNext(AObj: TCoreWebView2FrameInfoCollectionIterator): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MoveNext();
  handleExceptionEnd
end;


exports
  CoreWebView2FrameInfoCollectionIterator_Create,
  CoreWebView2FrameInfoCollectionIterator_Initialized,
  CoreWebView2FrameInfoCollectionIterator_BaseIntf,
  CoreWebView2FrameInfoCollectionIterator_HasCurrent,
  CoreWebView2FrameInfoCollectionIterator_Current,
  CoreWebView2FrameInfoCollectionIterator_MoveNext;