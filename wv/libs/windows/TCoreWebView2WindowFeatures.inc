// constructor
function TCoreWebView2WindowFeatures_Create(const aBaseIntf: ICoreWebView2WindowFeatures): TCoreWebView2WindowFeatures; extdecl;
begin
  {$define handleExceptionID := 6800}
  handleExceptionBegin
  Result := TCoreWebView2WindowFeatures.Create(aBaseIntf);
  handleExceptionEnd
end;

// procedure
procedure TCoreWebView2WindowFeatures_CopyToRecord(AObj: TCoreWebView2WindowFeatures; var aWindowFeatures: TWVWindowFeaturesPtr); extdecl;
var
  OutaWindowFeatures: TWVWindowFeatures;
begin
  {$define handleExceptionID := 6801}
  handleExceptionBegin
  OutaWindowFeatures := TWVWindowFeaturesToPas(aWindowFeatures);
  AObj.CopyToRecord(OutaWindowFeatures);
  aWindowFeatures := TWVWindowFeaturesToGo(OutaWindowFeatures);
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_Initialized(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 6802}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2WindowFeatures_BaseIntf(AObj: TCoreWebView2WindowFeatures; var Result: ICoreWebView2WindowFeatures); extdecl;
begin
  {$define handleExceptionID := 6803}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_HasPosition(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 6804}
  handleExceptionBegin
  Result := AObj.HasPosition;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_HasSize(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 6805}
  handleExceptionBegin
  Result := AObj.HasSize;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_Left(AObj: TCoreWebView2WindowFeatures): cardinal; extdecl;
begin
  {$define handleExceptionID := 6806}
  handleExceptionBegin
  Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_Top(AObj: TCoreWebView2WindowFeatures): cardinal; extdecl;
begin
  {$define handleExceptionID := 6807}
  handleExceptionBegin
  Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_Width(AObj: TCoreWebView2WindowFeatures): cardinal; extdecl;
begin
  {$define handleExceptionID := 6808}
  handleExceptionBegin
  Result := AObj.Width;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_Height(AObj: TCoreWebView2WindowFeatures): cardinal; extdecl;
begin
  {$define handleExceptionID := 6809}
  handleExceptionBegin
  Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_ShouldDisplayMenuBar(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 6810}
  handleExceptionBegin
  Result := AObj.ShouldDisplayMenuBar;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_ShouldDisplayStatus(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 6811}
  handleExceptionBegin
  Result := AObj.ShouldDisplayStatus;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_ShouldDisplayToolbar(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 6812}
  handleExceptionBegin
  Result := AObj.ShouldDisplayToolbar;
  handleExceptionEnd
end;

// property
function TCoreWebView2WindowFeatures_ShouldDisplayScrollBars(AObj: TCoreWebView2WindowFeatures): LongBool; extdecl;
begin
  {$define handleExceptionID := 6813}
  handleExceptionBegin
  Result := AObj.ShouldDisplayScrollBars;
  handleExceptionEnd
end;

exports
  TCoreWebView2WindowFeatures_Create,
  TCoreWebView2WindowFeatures_CopyToRecord,
  TCoreWebView2WindowFeatures_Initialized,
  TCoreWebView2WindowFeatures_BaseIntf,
  TCoreWebView2WindowFeatures_HasPosition,
  TCoreWebView2WindowFeatures_HasSize,
  TCoreWebView2WindowFeatures_Left,
  TCoreWebView2WindowFeatures_Top,
  TCoreWebView2WindowFeatures_Width,
  TCoreWebView2WindowFeatures_Height,
  TCoreWebView2WindowFeatures_ShouldDisplayMenuBar,
  TCoreWebView2WindowFeatures_ShouldDisplayStatus,
  TCoreWebView2WindowFeatures_ShouldDisplayToolbar,
  TCoreWebView2WindowFeatures_ShouldDisplayScrollBars;