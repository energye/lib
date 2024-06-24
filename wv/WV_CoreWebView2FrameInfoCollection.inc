
//constructor
function CoreWebView2FrameInfoCollection_Create(const aBaseIntf: ICoreWebView2FrameInfoCollection): TCoreWebView2FrameInfoCollection; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2FrameInfoCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2FrameInfoCollection_Initialized(AObj: TCoreWebView2FrameInfoCollection): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2FrameInfoCollection_BaseIntf(AObj: TCoreWebView2FrameInfoCollection; var Result: ICoreWebView2FrameInfoCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2FrameInfoCollection_Iterator(AObj: TCoreWebView2FrameInfoCollection; var Result: ICoreWebView2FrameInfoCollectionIterator); extdecl;
begin
  handleExceptionBegin
  Result := AObj.Iterator;
  handleExceptionEnd
end;


exports
  CoreWebView2FrameInfoCollection_Create,
  CoreWebView2FrameInfoCollection_Initialized,
  CoreWebView2FrameInfoCollection_BaseIntf,
  CoreWebView2FrameInfoCollection_Iterator;