
//constructor
function ChromiumOptions_Create(): TChromiumOptions; extdecl;
begin
  handleExceptionBegin
  Result := TChromiumOptions.Create();
  handleExceptionEnd
end;

//property
function ChromiumOptions_Javascript(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
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
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.JavascriptDomPaste := AValue;
  end else
    Result := AObj.JavascriptDomPaste;
  handleExceptionEnd
end;

//property
function ChromiumOptions_ImageLoading(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
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
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Databases := AValue;
  end else
    Result := AObj.Databases;
  handleExceptionEnd
end;

//property
function ChromiumOptions_Webgl(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
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
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackgroundColor := AValue;
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

//property
function ChromiumOptions_WindowlessFrameRate(AIsSet: LongBool; AObj: TChromiumOptions; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.WindowlessFrameRate := AValue;
  end else
    Result := AObj.WindowlessFrameRate;
  handleExceptionEnd
end;

//property
function ChromiumOptions_ChromeStatusBubble(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ChromeStatusBubble := AValue;
  end else
    Result := AObj.ChromeStatusBubble;
  handleExceptionEnd
end;

//property
function ChromiumOptions_ChromeZoomBubble(AIsSet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ChromeZoomBubble := AValue;
  end else
    Result := AObj.ChromeZoomBubble;
  handleExceptionEnd
end;


exports
  ChromiumOptions_Create,
  ChromiumOptions_Javascript,
  ChromiumOptions_JavascriptCloseWindows,
  ChromiumOptions_JavascriptAccessClipboard,
  ChromiumOptions_JavascriptDomPaste,
  ChromiumOptions_ImageLoading,
  ChromiumOptions_ImageShrinkStandaloneToFit,
  ChromiumOptions_TextAreaResize,
  ChromiumOptions_TabToLinks,
  ChromiumOptions_LocalStorage,
  ChromiumOptions_Databases,
  ChromiumOptions_Webgl,
  ChromiumOptions_BackgroundColor,
  ChromiumOptions_WindowlessFrameRate,
  ChromiumOptions_ChromeStatusBubble,
  ChromiumOptions_ChromeZoomBubble;