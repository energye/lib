// constructor
function TCefBrowserRef_Create(data: Pointer; out IntfBrowser: ICefBrowser): TCefBrowserRef; extdecl;
begin
  {$define handleExceptionID := 18100}
  handleExceptionBegin
  Result := TCefBrowserRef.Create(data);
  IntfBrowser := Result as ICefBrowser;
  handleExceptionEnd
end;

// function
function TCefBrowserRef_IsValid(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 18101}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetHost(AObj: ICefBrowser; var Result: ICefBrowserHost); extdecl;
begin
  {$define handleExceptionID := 18102}
  handleExceptionBegin
  Result := AObj.GetHost();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_CanGoBack(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 18103}
  handleExceptionBegin
  Result := AObj.CanGoBack();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_CanGoForward(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 18104}
  handleExceptionBegin
  Result := AObj.CanGoForward();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_IsLoading(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 18105}
  handleExceptionBegin
  Result := AObj.IsLoading();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_GetIdentifier(AObj: ICefBrowser): Integer; extdecl;
begin
  {$define handleExceptionID := 18106}
  handleExceptionBegin
  Result := AObj.GetIdentifier();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_IsSame(AObj: ICefBrowser; const that: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 18107}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCefBrowserRef_IsPopup(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 18108}
  handleExceptionBegin
  Result := AObj.IsPopup();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_HasDocument(AObj: ICefBrowser): LongBool; extdecl;
begin
  {$define handleExceptionID := 18109}
  handleExceptionBegin
  Result := AObj.HasDocument();
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetMainFrame(AObj: ICefBrowser; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18110}
  handleExceptionBegin
  Result := AObj.GetMainFrame();
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetFocusedFrame(AObj: ICefBrowser; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18111}
  handleExceptionBegin
  Result := AObj.GetFocusedFrame();
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetFrameByIdentifier(AObj: ICefBrowser; const identifier: PChar; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18112}
  handleExceptionBegin
  Result := AObj.GetFrameByIdentifier(PCharToUStr(identifier));
  handleExceptionEnd
end;

// function
procedure TCefBrowserRef_GetFrameByName(AObj: ICefBrowser; const name: PChar; var Result: ICefFrame); extdecl;
begin
  {$define handleExceptionID := 18113}
  handleExceptionBegin
  Result := AObj.GetFrameByName(PCharToUStr(name));
  handleExceptionEnd
end;

// function
function TCefBrowserRef_GetFrameCount(AObj: ICefBrowser): NativeUInt; extdecl;
begin
  {$define handleExceptionID := 18114}
  handleExceptionBegin
  Result := AObj.GetFrameCount();
  handleExceptionEnd
end;

// function
function TCefBrowserRef_GetFrameIdentifiers(AObj: ICefBrowser; var aFrameIdentifiers: TStrings): LongBool; extdecl;
var
  OutaFrameIdentifiers: TStrings;
begin
  {$define handleExceptionID := 18115}
  handleExceptionBegin
  OutaFrameIdentifiers := aFrameIdentifiers;
  Result := AObj.GetFrameIdentifiers(OutaFrameIdentifiers);
  aFrameIdentifiers := OutaFrameIdentifiers;
  handleExceptionEnd
end;

// function
function TCefBrowserRef_GetFrameNames(AObj: ICefBrowser; var aFrameNames: TStrings): LongBool; extdecl;
var
  OutaFrameNames: TStrings;
begin
  {$define handleExceptionID := 18116}
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
  {$define handleExceptionID := 18117}
  handleExceptionBegin
  AObj.GoBack();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserRef_GoForward(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 18118}
  handleExceptionBegin
  AObj.GoForward();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserRef_Reload(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 18119}
  handleExceptionBegin
  AObj.Reload();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserRef_ReloadIgnoreCache(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 18120}
  handleExceptionBegin
  AObj.ReloadIgnoreCache();
  handleExceptionEnd
end;

// procedure
procedure TCefBrowserRef_StopLoad(AObj: ICefBrowser); extdecl;
begin
  {$define handleExceptionID := 18121}
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
  TCefBrowserRef_GetFrameByIdentifier,
  TCefBrowserRef_GetFrameByName,
  TCefBrowserRef_GetFrameCount,
  TCefBrowserRef_GetFrameIdentifiers,
  TCefBrowserRef_GetFrameNames,
  TCefBrowserRef_UnWrap,
  TCefBrowserRef_GoBack,
  TCefBrowserRef_GoForward,
  TCefBrowserRef_Reload,
  TCefBrowserRef_ReloadIgnoreCache,
  TCefBrowserRef_StopLoad;