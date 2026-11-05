// constructor
function TCoreWebView2ProcessInfoCollection_Create(const aBaseIntf: ICoreWebView2ProcessInfoCollection): TCoreWebView2ProcessInfoCollection; extdecl;
begin
  {$define handleExceptionID := 6400}
  handleExceptionBegin
  Result := TCoreWebView2ProcessInfoCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessInfoCollection_Initialized(AObj: TCoreWebView2ProcessInfoCollection): LongBool; extdecl;
begin
  {$define handleExceptionID := 6401}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessInfoCollection_BaseIntf(AObj: TCoreWebView2ProcessInfoCollection; var Result: ICoreWebView2ProcessInfoCollection); extdecl;
begin
  {$define handleExceptionID := 6402}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2ProcessInfoCollection_Count(AObj: TCoreWebView2ProcessInfoCollection): cardinal; extdecl;
begin
  {$define handleExceptionID := 6403}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2ProcessInfoCollection_Items(AObj: TCoreWebView2ProcessInfoCollection; idx: cardinal; var Result: ICoreWebView2ProcessInfo); extdecl;
begin
  {$define handleExceptionID := 6404}
  handleExceptionBegin
  Result := AObj.Items[idx];
  handleExceptionEnd
end;

exports
  TCoreWebView2ProcessInfoCollection_Create,
  TCoreWebView2ProcessInfoCollection_Initialized,
  TCoreWebView2ProcessInfoCollection_BaseIntf,
  TCoreWebView2ProcessInfoCollection_Count,
  TCoreWebView2ProcessInfoCollection_Items;