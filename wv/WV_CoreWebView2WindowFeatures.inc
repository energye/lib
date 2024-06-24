
//constructor
function CoreWebView2WindowFeatures_Create(const aBaseIntf: ICoreWebView2WindowFeatures): TCoreWebView2WindowFeatures; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2WindowFeatures.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_Initialized(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2WindowFeatures_BaseIntf(AObj: TCoreWebView2WindowFeatures; var Result: ICoreWebView2WindowFeatures); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_HasPosition(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasPosition;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_HasSize(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.HasSize;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_Left(AObj: TCoreWebView2WindowFeatures): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_Top(AObj: TCoreWebView2WindowFeatures): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_Width(AObj: TCoreWebView2WindowFeatures): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_Height(AObj: TCoreWebView2WindowFeatures): uint32; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_ShouldDisplayMenuBar(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ShouldDisplayMenuBar;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_ShouldDisplayStatus(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ShouldDisplayStatus;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_ShouldDisplayToolbar(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ShouldDisplayToolbar;
  handleExceptionEnd
end;

//property
function CoreWebView2WindowFeatures_ShouldDisplayScrollBars(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ShouldDisplayScrollBars;
  handleExceptionEnd
end;

//procedure
procedure CoreWebView2WindowFeatures_CopyToRecord(AObj: TCoreWebView2WindowFeatures; var aWindowFeatures: TWVWindowFeatures); extdecl;
var
  RetaWindowFeatures: TWVWindowFeatures;
begin
  handleExceptionBegin
  RetaWindowFeatures := aWindowFeatures;
  AObj.CopyToRecord(RetaWindowFeatures);
  aWindowFeatures := RetaWindowFeatures;
  handleExceptionEnd
end;


exports
  CoreWebView2WindowFeatures_Create,
  CoreWebView2WindowFeatures_Initialized,
  CoreWebView2WindowFeatures_BaseIntf,
  CoreWebView2WindowFeatures_HasPosition,
  CoreWebView2WindowFeatures_HasSize,
  CoreWebView2WindowFeatures_Left,
  CoreWebView2WindowFeatures_Top,
  CoreWebView2WindowFeatures_Width,
  CoreWebView2WindowFeatures_Height,
  CoreWebView2WindowFeatures_ShouldDisplayMenuBar,
  CoreWebView2WindowFeatures_ShouldDisplayStatus,
  CoreWebView2WindowFeatures_ShouldDisplayToolbar,
  CoreWebView2WindowFeatures_ShouldDisplayScrollBars,
  CoreWebView2WindowFeatures_CopyToRecord;