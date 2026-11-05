// constructor
function TCefBrowserRef_Create(data: Pointer; out IntfBrowser: ICefBrowser): TCefBrowserRef; extdecl;
begin
  {$define handleExceptionID := 17300}
  handleExceptionBegin
  Result := TCefBrowserRef.Create(data);
  IntfBrowser := Result as ICefBrowser;
  handleExceptionEnd
end;

// function
function TCefBrowserRef_IsValid(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 17301}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetHost(AObj: ICefBrowser; var Result: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 17302}
  handleExceptionBegin
  Result := AObj.GetHost();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_CanGoBack(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 17303}
  handleExceptionBegin
  Result := AObj.CanGoBack();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_CanGoForward(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 17304}
  handleExceptionBegin
  Result := AObj.CanGoForward();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_IsLoading(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 17305}
  handleExceptionBegin
  Result := AObj.IsLoading();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_GetIdentifier(AObj: ICefBrowser): Integer; extdecl;
begin
  {$define handleExceptionID := 17306}
  handleExceptionBegin
  Result := AObj.GetIdentifier();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_IsSame(AObj: ICefBrowser; const that: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 17307}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefBrowserRef_IsPopup(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 17308}
  handleExceptionBegin
  Result := AObj.IsPopup();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_HasDocument(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 17309}
  handleExceptionBegin
  Result := AObj.HasDocument();
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetMainFrame(AObj: ICefBrowser; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 17310}
  handleExceptionBegin
  Result := AObj.GetMainFrame();
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetFocusedFrame(AObj: ICefBrowser; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 17311}
  handleExceptionBegin
  Result := AObj.GetFocusedFrame();
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetFrameByident(AObj: ICefBrowser; var identifier: Int64; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 17312}
  handleExceptionBegin
  Result := AObj.GetFrameByident(identifier);
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetFrame(AObj: ICefBrowser; const name: PChar; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 17313}
  handleExceptionBegin
  Result := AObj.GetFrame(PCharToUStr(name));
  handleExceptionEnd
end;

// function
function TCefBrowserRef_GetFrameCount(AObj: ICefBrowser): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 17314}
  handleExceptionBegin
  Result := AObj.GetFrameCount();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_GetFrameIdentifiers(AObj: ICefBrowser; var aFrameCount: NativeUInt; var aFrameIdentifierArray: TCefFrameIdentifierArray; var aFrameIdentifierArrayCount: Integer): LongBool; extdecl;
var
  OutaFrameCount: NativeUInt;
  OutaFrameIdentifierArray: TCefFrameIdentifierArray = nil;
begin
  {$define handleExceptionID := 17315}
  handleExceptionBegin
  OutaFrameCount := aFrameCount;
  Result := AObj.GetFrameIdentifiers(OutaFrameCount, OutaFrameIdentifierArray);
  aFrameCount := OutaFrameCount;
  aFrameIdentifierArrayCount := Length(OutaFrameIdentifierArray);
  aFrameIdentifierArray := OutaFrameIdentifierArray;
  handleExceptionEnd
end;

// function
function TCefBrowserRef_GetFrameNames(AObj: ICefBrowser; var aFrameNames: TStrings): LongBool; extdecl;
var
  OutaFrameNames: TStrings;
begin
  {$define handleExceptionID := 17316}
  handleExceptionBegin
  OutaFrameNames := aFrameNames;
  Result := AObj.GetFrameNames(OutaFrameNames);
  aFrameNames := OutaFrameNames;
  handleExceptionEnd
end;

// function static
procedure TCefBrowserRef_UnWrap(data: Pointer; var Result: ICefBrowser); extdecl;
begin
  Result := TCefBrowserRef.UnWrap(data);
end;

// procedure
procedure TCefBrowserRef_GoBack(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 17317}
  handleExceptionBegin
  AObj.GoBack();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserRef_GoForward(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 17318}
  handleExceptionBegin
  AObj.GoForward();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserRef_Reload(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 17319}
  handleExceptionBegin
  AObj.Reload();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserRef_ReloadIgnoreCache(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 17320}
  handleExceptionBegin
  AObj.ReloadIgnoreCache();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserRef_StopLoad(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 17321}
  handleExceptionBegin
  AObj.StopLoad();
  handleExceptionEnd
end;

exports
  TCefBrowserRef_Create,
  TCefBrowserRef_IsValid,
  TCefBrowserRef_GetHost,
  TCefBrowserRef_CanGoBack,
  TCefBrowserRef_CanGoForward,
  TCefBrowserRef_IsLoading,
  TCefBrowserRef_GetIdentifier,
  TCefBrowserRef_IsSame,
  TCefBrowserRef_IsPopup,
  TCefBrowserRef_HasDocument,
  TCefBrowserRef_GetMainFrame,
  TCefBrowserRef_GetFocusedFrame,
  TCefBrowserRef_GetFrameByident,
  TCefBrowserRef_GetFrame,
  TCefBrowserRef_GetFrameCount,
  TCefBrowserRef_GetFrameIdentifiers,
  TCefBrowserRef_GetFrameNames,
  TCefBrowserRef_UnWrap,
  TCefBrowserRef_GoBack,
  TCefBrowserRef_GoForward,
  TCefBrowserRef_Reload,
  TCefBrowserRef_ReloadIgnoreCache,
  TCefBrowserRef_StopLoad;