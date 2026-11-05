// constructor
function TCoreWebView2StringCollection_Create(const aBaseIntf: ICoreWebView2StringCollection): TCoreWebView2StringCollection; extdecl;
begin
  {$define handleExceptionID := 3900}
  handleExceptionBegin
  Result := TCoreWebView2StringCollection.Create(aBaseIntf);
  handleExceptionEnd
end;

// property
function TCoreWebView2StringCollection_Initialized(AObj: TCoreWebView2StringCollection): LongBool; extdecl;
begin
  {$define handleExceptionID := 3901}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2StringCollection_BaseIntf(AObj: TCoreWebView2StringCollection; var Result: ICoreWebView2StringCollection); extdecl;
begin
  {$define handleExceptionID := 3902}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2StringCollection_Count(AObj: TCoreWebView2StringCollection): cardinal; extdecl;
begin
  {$define handleExceptionID := 3903}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2StringCollection_Items(AObj: TCoreWebView2StringCollection; idx: cardinal; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 3904}
  handleExceptionBegin
  StringBufferCreate(AObj.Items[idx], AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2StringCollection_Create,
  TCoreWebView2StringCollection_Initialized,
  TCoreWebView2StringCollection_BaseIntf,
  TCoreWebView2StringCollection_Count,
  TCoreWebView2StringCollection_Items;