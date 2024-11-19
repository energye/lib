
//constructor
function ChromiumOptions_Create(): TChromiumOptions; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TChromiumOptions.Create();
  handleExceptionEnd
end;

//property
function ChromiumOptions_Javascript(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='Javascript'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Javascript := AValue;
  end else
    Result := AObj.Javascript;
  handleExceptionEnd
end;

//property
function ChromiumOptions_JavascriptCloseWindows(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='JavascriptCloseWindows'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.JavascriptCloseWindows := AValue;
  end else
    Result := AObj.JavascriptCloseWindows;
  handleExceptionEnd
end;

//property
function ChromiumOptions_JavascriptAccessClipboard(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='JavascriptAccessClipboard'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.JavascriptAccessClipboard := AValue;
  end else
    Result := AObj.JavascriptAccessClipboard;
  handleExceptionEnd
end;

//property
function ChromiumOptions_JavascriptDomPaste(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='JavascriptDomPaste'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.JavascriptDomPaste := AValue;
  end else
    Result := AObj.JavascriptDomPaste;
  handleExceptionEnd
end;

//property
function ChromiumOptions_Plugins(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='Plugins'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Plugins := AValue;
  end else
    Result := AObj.Plugins;
  handleExceptionEnd
end;

//property
function ChromiumOptions_UniversalAccessFromFileUrls(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='UniversalAccessFromFileUrls'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.UniversalAccessFromFileUrls := AValue;
  end else
    Result := AObj.UniversalAccessFromFileUrls;
  handleExceptionEnd
end;

//property
function ChromiumOptions_FileAccessFromFileUrls(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='FileAccessFromFileUrls'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FileAccessFromFileUrls := AValue;
  end else
    Result := AObj.FileAccessFromFileUrls;
  handleExceptionEnd
end;

//property
function ChromiumOptions_WebSecurity(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='WebSecurity'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WebSecurity := AValue;
  end else
    Result := AObj.WebSecurity;
  handleExceptionEnd
end;

//property
function ChromiumOptions_ImageLoading(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='ImageLoading'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageLoading := AValue;
  end else
    Result := AObj.ImageLoading;
  handleExceptionEnd
end;

//property
function ChromiumOptions_ImageShrinkStandaloneToFit(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='ImageShrinkStandaloneToFit'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ImageShrinkStandaloneToFit := AValue;
  end else
    Result := AObj.ImageShrinkStandaloneToFit;
  handleExceptionEnd
end;

//property
function ChromiumOptions_TextAreaResize(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='TextAreaResize'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TextAreaResize := AValue;
  end else
    Result := AObj.TextAreaResize;
  handleExceptionEnd
end;

//property
function ChromiumOptions_TabToLinks(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='TabToLinks'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.TabToLinks := AValue;
  end else
    Result := AObj.TabToLinks;
  handleExceptionEnd
end;

//property
function ChromiumOptions_LocalStorage(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='LocalStorage'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.LocalStorage := AValue;
  end else
    Result := AObj.LocalStorage;
  handleExceptionEnd
end;

//property
function ChromiumOptions_Databases(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='Databases'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Databases := AValue;
  end else
    Result := AObj.Databases;
  handleExceptionEnd
end;

//property
function ChromiumOptions_ApplicationCache(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='ApplicationCache'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ApplicationCache := AValue;
  end else
    Result := AObj.ApplicationCache;
  handleExceptionEnd
end;

//property
function ChromiumOptions_Webgl(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionFuncName :='Webgl'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Webgl := AValue;
  end else
    Result := AObj.Webgl;
  handleExceptionEnd
end;

//property
function ChromiumOptions_BackgroundColor(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionFuncName :='BackgroundColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackgroundColor := AValue;
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

//property
function ChromiumOptions_AcceptLanguageList(AIsSet: LongBool; AObj: TChromiumOptions; AValue: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='AcceptLanguageList'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AcceptLanguageList := AValue;
  end else
    Result := ToPChar(AObj.AcceptLanguageList);
  handleExceptionEnd
end;

//property
function ChromiumOptions_WindowlessFrameRate(AIsSet: LongBool; AObj: TChromiumOptions; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='WindowlessFrameRate'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowlessFrameRate := AValue;
  end else
    Result := AObj.WindowlessFrameRate;
  handleExceptionEnd
end;


exports
  ChromiumOptions_Create,
  ChromiumOptions_Javascript,
  ChromiumOptions_JavascriptCloseWindows,
  ChromiumOptions_JavascriptAccessClipboard,
  ChromiumOptions_JavascriptDomPaste,
  ChromiumOptions_Plugins,
  ChromiumOptions_UniversalAccessFromFileUrls,
  ChromiumOptions_FileAccessFromFileUrls,
  ChromiumOptions_WebSecurity,
  ChromiumOptions_ImageLoading,
  ChromiumOptions_ImageShrinkStandaloneToFit,
  ChromiumOptions_TextAreaResize,
  ChromiumOptions_TabToLinks,
  ChromiumOptions_LocalStorage,
  ChromiumOptions_Databases,
  ChromiumOptions_ApplicationCache,
  ChromiumOptions_Webgl,
  ChromiumOptions_BackgroundColor,
  ChromiumOptions_AcceptLanguageList,
  ChromiumOptions_WindowlessFrameRate;