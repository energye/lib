// constructor
function TChromiumOptions_Create(): TChromiumOptions; extdecl;
begin
  {$define handleExceptionID := 700}
  handleExceptionBegin
  Result := TChromiumOptions.Create();
  handleExceptionEnd
end;

// property
function TChromiumOptions_Javascript(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Javascript := AValue
  end else
    Result := AObj.Javascript;
  handleExceptionEnd
end;

// property
function TChromiumOptions_JavascriptCloseWindows(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 702}
  handleExceptionBegin
  if ASet then
  begin
    AObj.JavascriptCloseWindows := AValue
  end else
    Result := AObj.JavascriptCloseWindows;
  handleExceptionEnd
end;

// property
function TChromiumOptions_JavascriptAccessClipboard(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 703}
  handleExceptionBegin
  if ASet then
  begin
    AObj.JavascriptAccessClipboard := AValue
  end else
    Result := AObj.JavascriptAccessClipboard;
  handleExceptionEnd
end;

// property
function TChromiumOptions_JavascriptDomPaste(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 704}
  handleExceptionBegin
  if ASet then
  begin
    AObj.JavascriptDomPaste := AValue
  end else
    Result := AObj.JavascriptDomPaste;
  handleExceptionEnd
end;

// property
function TChromiumOptions_ImageLoading(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 705}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageLoading := AValue
  end else
    Result := AObj.ImageLoading;
  handleExceptionEnd
end;

// property
function TChromiumOptions_ImageShrinkStandaloneToFit(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 706}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageShrinkStandaloneToFit := AValue
  end else
    Result := AObj.ImageShrinkStandaloneToFit;
  handleExceptionEnd
end;

// property
function TChromiumOptions_TextAreaResize(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 707}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextAreaResize := AValue
  end else
    Result := AObj.TextAreaResize;
  handleExceptionEnd
end;

// property
function TChromiumOptions_TabToLinks(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 708}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TabToLinks := AValue
  end else
    Result := AObj.TabToLinks;
  handleExceptionEnd
end;

// property
function TChromiumOptions_LocalStorage(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 709}
  handleExceptionBegin
  if ASet then
  begin
    AObj.LocalStorage := AValue
  end else
    Result := AObj.LocalStorage;
  handleExceptionEnd
end;

// property
function TChromiumOptions_Databases(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 710}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Databases := AValue
  end else
    Result := AObj.Databases;
  handleExceptionEnd
end;

// property
function TChromiumOptions_Webgl(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 711}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Webgl := AValue
  end else
    Result := AObj.Webgl;
  handleExceptionEnd
end;

// property
function TChromiumOptions_BackgroundColor(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionID := 712}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundColor := AValue
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

// property
function TChromiumOptions_WindowlessFrameRate(ASet: LongBool; AObj: TChromiumOptions; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 713}
  handleExceptionBegin
  if ASet then
  begin
    AObj.WindowlessFrameRate := AValue
  end else
    Result := AObj.WindowlessFrameRate;
  handleExceptionEnd
end;

// property
function TChromiumOptions_ChromeStatusBubble(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 714}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChromeStatusBubble := AValue
  end else
    Result := AObj.ChromeStatusBubble;
  handleExceptionEnd
end;

// property
function TChromiumOptions_ChromeZoomBubble(ASet: LongBool; AObj: TChromiumOptions; AValue: TCefState): TCefState; extdecl;
begin
  {$define handleExceptionID := 715}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ChromeZoomBubble := AValue
  end else
    Result := AObj.ChromeZoomBubble;
  handleExceptionEnd
end;

exports
  TChromiumOptions_Create,
  TChromiumOptions_Javascript,
  TChromiumOptions_JavascriptCloseWindows,
  TChromiumOptions_JavascriptAccessClipboard,
  TChromiumOptions_JavascriptDomPaste,
  TChromiumOptions_ImageLoading,
  TChromiumOptions_ImageShrinkStandaloneToFit,
  TChromiumOptions_TextAreaResize,
  TChromiumOptions_TabToLinks,
  TChromiumOptions_LocalStorage,
  TChromiumOptions_Databases,
  TChromiumOptions_Webgl,
  TChromiumOptions_BackgroundColor,
  TChromiumOptions_WindowlessFrameRate,
  TChromiumOptions_ChromeStatusBubble,
  TChromiumOptions_ChromeZoomBubble;