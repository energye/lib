// constructor
function TCoreWebView2FrameInfoCollection_Create(const aBaseIntf: ICoreWebView2FrameInfoCollection): TCoreWebView2FrameInfoCollection; extdecl;
begin
  {$define handleExceptionID := 7100}
  handleExceptionBegin
  Result := TCoreWebView2FrameInfoCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2FrameInfoCollection_Initialized(AObj: TCoreWebView2FrameInfoCollection): LongBool; extdecl;
begin
  {$define handleExceptionID := 7101}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameInfoCollection_BaseIntf(AObj: TCoreWebView2FrameInfoCollection; var Result: ICoreWebView2FrameInfoCollection); extdecl;
begin
  {$define handleExceptionID := 7102}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2FrameInfoCollection_Iterator(AObj: TCoreWebView2FrameInfoCollection; var Result: ICoreWebView2FrameInfoCollectionIterator); extdecl;
begin
  {$define handleExceptionID := 7103}
  handleExceptionBegin
  Result := AObj.Iterator;
  handleExceptionEnd
end;

exports
  TCoreWebView2FrameInfoCollection_Create,
  TCoreWebView2FrameInfoCollection_Initialized,
  TCoreWebView2FrameInfoCollection_BaseIntf,
  TCoreWebView2FrameInfoCollection_Iterator;