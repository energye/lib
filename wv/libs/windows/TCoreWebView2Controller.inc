// constructor
function TCoreWebView2Controller_Create(const aBaseIntf: ICoreWebView2Controller): TCoreWebView2Controller; extdecl;
begin
  {$define handleExceptionID := 1100}
  handleExceptionBegin
  Result := TCoreWebView2Controller.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2Controller_AddAllBrowserEvents(AObj: TCoreWebView2Controller; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 1101}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2Controller_MoveFocus(AObj: TCoreWebView2Controller; aReason: TWVMoveFocusReason): LongBool; extdecl;
begin
  {$define handleExceptionID := 1102}
  handleExceptionBegin
  Result := AObj.MoveFocus(aReason);
  handleExceptionEnd
end;

// function
function TCoreWebView2Controller_Close(AObj: TCoreWebView2Controller): LongBool; extdecl;
begin
  {$define handleExceptionID := 1103}
  handleExceptionBegin
  Result := AObj.Close();
  handleExceptionEnd
end;

// function
function TCoreWebView2Controller_SetBoundsAndZoomFactor(AObj: TCoreWebView2Controller; var aBounds: TRect; var aZoomFactor: double): LongBool; extdecl;
begin
  {$define handleExceptionID := 1104}
  handleExceptionBegin
  Result := AObj.SetBoundsAndZoomFactor(aBounds, aZoomFactor);
  handleExceptionEnd
end;

// function
function TCoreWebView2Controller_NotifyParentWindowPositionChanged(AObj: TCoreWebView2Controller): LongBool; extdecl;
begin
  {$define handleExceptionID := 1105}
  handleExceptionBegin
  Result := AObj.NotifyParentWindowPositionChanged();
  handleExceptionEnd
end;

// property
function TCoreWebView2Controller_Initialized(AObj: TCoreWebView2Controller): LongBool; extdecl;
begin
  {$define handleExceptionID := 1106}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Controller_BaseIntf(AObj: TCoreWebView2Controller; var Result: ICoreWebView2Controller); extdecl;
begin
  {$define handleExceptionID := 1107}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Controller_ZoomFactor(ASet: LongBool; AObj: TCoreWebView2Controller; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 1108}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ZoomFactor := AValue
  end else
    Result := AObj.ZoomFactor;
  handleExceptionEnd
end;

// property
function TCoreWebView2Controller_IsVisible(ASet: LongBool; AObj: TCoreWebView2Controller; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1109}
  handleExceptionBegin
  if ASet then
  begin
    AObj.IsVisible := AValue
  end else
    Result := AObj.IsVisible;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Controller_Bounds(ASet: LongBool; AObj: TCoreWebView2Controller; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 1110}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bounds := AValue
  end else
    Result := AObj.Bounds;
  handleExceptionEnd
end;

// property
function TCoreWebView2Controller_ParentWindow(ASet: LongBool; AObj: TCoreWebView2Controller; AValue: THandle): THandle; extdecl;
begin
  {$define handleExceptionID := 1111}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentWindow := AValue
  end else
    Result := AObj.ParentWindow;
  handleExceptionEnd
end;

// property
function TCoreWebView2Controller_DefaultBackgroundColor(ASet: LongBool; AObj: TCoreWebView2Controller; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 1112}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DefaultBackgroundColor := AValue
  end else
    Result := AObj.DefaultBackgroundColor;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Controller_RasterizationScale(ASet: LongBool; AObj: TCoreWebView2Controller; var AValue: double; var Result: double); extdecl;
begin
  {$define handleExceptionID := 1113}
  handleExceptionBegin
  if ASet then
  begin
    AObj.RasterizationScale := AValue
  end else
    Result := AObj.RasterizationScale;
  handleExceptionEnd
end;

// property
function TCoreWebView2Controller_ShouldDetectMonitorScaleChanges(ASet: LongBool; AObj: TCoreWebView2Controller; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1114}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShouldDetectMonitorScaleChanges := AValue
  end else
    Result := AObj.ShouldDetectMonitorScaleChanges;
  handleExceptionEnd
end;

// property
function TCoreWebView2Controller_BoundsMode(ASet: LongBool; AObj: TCoreWebView2Controller; AValue: TWVBoundsMode): TWVBoundsMode; extdecl;
begin
  {$define handleExceptionID := 1115}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BoundsMode := AValue
  end else
    Result := AObj.BoundsMode;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Controller_CoreWebView2(AObj: TCoreWebView2Controller; var Result: ICoreWebView2); extdecl;
begin
  {$define handleExceptionID := 1116}
  handleExceptionBegin
  Result := AObj.CoreWebView2;
  handleExceptionEnd
end;

// property
function TCoreWebView2Controller_AllowExternalDrop(ASet: LongBool; AObj: TCoreWebView2Controller; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 1117}
  handleExceptionBegin
  if ASet then
  begin
    AObj.AllowExternalDrop := AValue
  end else
    Result := AObj.AllowExternalDrop;
  handleExceptionEnd
end;

exports
  TCoreWebView2Controller_Create,
  TCoreWebView2Controller_AddAllBrowserEvents,
  TCoreWebView2Controller_MoveFocus,
  TCoreWebView2Controller_Close,
  TCoreWebView2Controller_SetBoundsAndZoomFactor,
  TCoreWebView2Controller_NotifyParentWindowPositionChanged,
  TCoreWebView2Controller_Initialized,
  TCoreWebView2Controller_BaseIntf,
  TCoreWebView2Controller_ZoomFactor,
  TCoreWebView2Controller_IsVisible,
  TCoreWebView2Controller_Bounds,
  TCoreWebView2Controller_ParentWindow,
  TCoreWebView2Controller_DefaultBackgroundColor,
  TCoreWebView2Controller_RasterizationScale,
  TCoreWebView2Controller_ShouldDetectMonitorScaleChanges,
  TCoreWebView2Controller_BoundsMode,
  TCoreWebView2Controller_CoreWebView2,
  TCoreWebView2Controller_AllowExternalDrop;