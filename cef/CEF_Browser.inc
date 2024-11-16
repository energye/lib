
//function
procedure CefBrowser_UnWrap(data: Pointer; var Result: ICefBrowser); extdecl;
begin
  Result := TCefBrowserRef.UnWrap(data);
end;

//function
function CefBrowser_IsValid(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
procedure CefBrowser_GetHost(AObj: ICefBrowser; var Result: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionFuncName :='GetHost'}
  handleExceptionBegin
  Result := AObj.GetHost();
  handleExceptionEnd
end;

//function
function CefBrowser_CanGoBack(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanGoBack'}
  handleExceptionBegin
  Result := AObj.CanGoBack();
  handleExceptionEnd
end;

//function
function CefBrowser_CanGoForward(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='CanGoForward'}
  handleExceptionBegin
  Result := AObj.CanGoForward();
  handleExceptionEnd
end;

//function
function CefBrowser_IsLoading(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsLoading'}
  handleExceptionBegin
  Result := AObj.IsLoading();
  handleExceptionEnd
end;

//function
function CefBrowser_GetIdentifier(AObj: ICefBrowser): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetIdentifier'}
  handleExceptionBegin
  Result := AObj.GetIdentifier();
  handleExceptionEnd
end;

//function
function CefBrowser_IsSame(AObj: ICefBrowser; const that: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CefBrowser_IsPopup(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsPopup'}
  handleExceptionBegin
  Result := AObj.IsPopup();
  handleExceptionEnd
end;

//function
function CefBrowser_HasDocument(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='HasDocument'}
  handleExceptionBegin
  Result := AObj.HasDocument();
  handleExceptionEnd
end;

//function
procedure CefBrowser_GetMainFrame(AObj: ICefBrowser; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='GetMainFrame'}
  handleExceptionBegin
  Result := AObj.GetMainFrame();
  handleExceptionEnd
end;

//function
procedure CefBrowser_GetFocusedFrame(AObj: ICefBrowser; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='GetFocusedFrame'}
  handleExceptionBegin
  Result := AObj.GetFocusedFrame();
  handleExceptionEnd
end;

//function
procedure CefBrowser_GetFrameByident(AObj: ICefBrowser; var identifier: Int64; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='GetFrameByident'}
  handleExceptionBegin
  Result := AObj.GetFrameByident(identifier);
  handleExceptionEnd
end;

//function
procedure CefBrowser_GetFrame(AObj: ICefBrowser; const name: PChar; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionFuncName :='GetFrame'}
  handleExceptionBegin
  Result := AObj.GetFrame(name);
  handleExceptionEnd
end;

//function
function CefBrowser_GetFrameCount(AObj: ICefBrowser): NativeUInt; extdecl;
begin
  {$define handleExceptionFuncName :='GetFrameCount'}
  handleExceptionBegin
  Result := AObj.GetFrameCount();
  handleExceptionEnd
end;

//function
function CefBrowser_GetFrameIdentifiers(AObj: ICefBrowser; var aFrameCount: NativeUInt; var aFrameIdentifierArray: TCefFrameIdentifierArray): LongBool; extdecl;
var
  RetaFrameCount: NativeUInt;
  RetaFrameIdentifierArray: TCefFrameIdentifierArray;
begin
  {$define handleExceptionFuncName :='GetFrameIdentifiers'}
  handleExceptionBegin
  RetaFrameCount := aFrameCount;
  RetaFrameIdentifierArray := aFrameIdentifierArray;
  Result := AObj.GetFrameIdentifiers(RetaFrameCount, RetaFrameIdentifierArray);
  aFrameCount := RetaFrameCount;
  aFrameIdentifierArray := RetaFrameIdentifierArray;
  handleExceptionEnd
end;

//function
function CefBrowser_GetFrameNames(AObj: ICefBrowser; var aFrameNames: TStrings): LongBool; extdecl;
var
  RetaFrameNames: TStrings;
begin
  {$define handleExceptionFuncName :='GetFrameNames'}
  handleExceptionBegin
  RetaFrameNames := TStringList.Create();
  Result := AObj.GetFrameNames(RetaFrameNames);
  aFrameNames := RetaFrameNames;
  handleExceptionEnd
end;

//procedure
procedure CefBrowser_GoBack(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='GoBack'}
  handleExceptionBegin
  AObj.GoBack();
  handleExceptionEnd
end;

//procedure
procedure CefBrowser_GoForward(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='GoForward'}
  handleExceptionBegin
  AObj.GoForward();
  handleExceptionEnd
end;

//procedure
procedure CefBrowser_Reload(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='Reload'}
  handleExceptionBegin
  AObj.Reload();
  handleExceptionEnd
end;

//procedure
procedure CefBrowser_ReloadIgnoreCache(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='ReloadIgnoreCache'}
  handleExceptionBegin
  AObj.ReloadIgnoreCache();
  handleExceptionEnd
end;

//procedure
procedure CefBrowser_StopLoad(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionFuncName :='StopLoad'}
  handleExceptionBegin
  AObj.StopLoad();
  handleExceptionEnd
end;


exports
  CefBrowser_UnWrap,
  CefBrowser_IsValid,
  CefBrowser_GetHost,
  CefBrowser_CanGoBack,
  CefBrowser_CanGoForward,
  CefBrowser_IsLoading,
  CefBrowser_GetIdentifier,
  CefBrowser_IsSame,
  CefBrowser_IsPopup,
  CefBrowser_HasDocument,
  CefBrowser_GetMainFrame,
  CefBrowser_GetFocusedFrame,
  CefBrowser_GetFrameByident,
  CefBrowser_GetFrame,
  CefBrowser_GetFrameCount,
  CefBrowser_GetFrameIdentifiers,
  CefBrowser_GetFrameNames,
  CefBrowser_GoBack,
  CefBrowser_GoForward,
  CefBrowser_Reload,
  CefBrowser_ReloadIgnoreCache,
  CefBrowser_StopLoad;