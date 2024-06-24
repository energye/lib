
//constructor
function CoreWebView2Controller_Create(const aBaseIntf: ICoreWebView2Controller): TCoreWebView2Controller; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2Controller.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2Controller_Initialized(AObj: TCoreWebView2Controller): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Controller_BaseIntf(AObj: TCoreWebView2Controller; var Result: ICoreWebView2Controller); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Controller_ZoomFactor(AIsSet: LongBool; AObj: TCoreWebView2Controller; var AValue: double; var Result: double); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ZoomFactor := AValue;
  end else
    Result := AObj.ZoomFactor;
  handleExceptionEnd
end;

//property
function CoreWebView2Controller_IsVisible(AIsSet: LongBool; AObj: TCoreWebView2Controller; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.IsVisible := AValue;
  end else
    Result := AObj.IsVisible;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Controller_Bounds(AIsSet: LongBool; AObj: TCoreWebView2Controller; var AValue: TRect; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bounds := AValue;
  end else
    Result := AObj.Bounds;
  handleExceptionEnd
end;

//property
function CoreWebView2Controller_ParentWindow(AIsSet: LongBool; AObj: TCoreWebView2Controller; AValue: THandle): THandle; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentWindow := AValue;
  end else
    Result := AObj.ParentWindow;
  handleExceptionEnd
end;

//property
function CoreWebView2Controller_DefaultBackgroundColor(AIsSet: LongBool; AObj: TCoreWebView2Controller; AValue: TColor): TColor; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultBackgroundColor := AValue;
  end else
    Result := AObj.DefaultBackgroundColor;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Controller_RasterizationScale(AIsSet: LongBool; AObj: TCoreWebView2Controller; var AValue: double; var Result: double); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.RasterizationScale := AValue;
  end else
    Result := AObj.RasterizationScale;
  handleExceptionEnd
end;

//property
function CoreWebView2Controller_ShouldDetectMonitorScaleChanges(AIsSet: LongBool; AObj: TCoreWebView2Controller; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ShouldDetectMonitorScaleChanges := AValue;
  end else
    Result := AObj.ShouldDetectMonitorScaleChanges;
  handleExceptionEnd
end;

//property
function CoreWebView2Controller_BoundsMode(AIsSet: LongBool; AObj: TCoreWebView2Controller; AValue: TWVBoundsMode): TWVBoundsMode; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BoundsMode := AValue;
  end else
    Result := AObj.BoundsMode;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Controller_CoreWebView2(AObj: TCoreWebView2Controller; var Result: ICoreWebView2); extdecl;
begin
  handleExceptionBegin
  Result := AObj.CoreWebView2;
  handleExceptionEnd
end;

//property
function CoreWebView2Controller_AllowExternalDrop(AIsSet: LongBool; AObj: TCoreWebView2Controller; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AllowExternalDrop := AValue;
  end else
    Result := AObj.AllowExternalDrop;
  handleExceptionEnd
end;

//function
function CoreWebView2Controller_AddAllBrowserEvents(AObj: TCoreWebView2Controller; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2Controller_MoveFocus(AObj: TCoreWebView2Controller; aReason: TWVMoveFocusReason): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.MoveFocus(aReason);
  handleExceptionEnd
end;

//function
function CoreWebView2Controller_Close(AObj: TCoreWebView2Controller): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Close();
  handleExceptionEnd
end;

//function
function CoreWebView2Controller_SetBoundsAndZoomFactor(AObj: TCoreWebView2Controller; var aBounds: TRect; var aZoomFactor: double): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SetBoundsAndZoomFactor(aBounds, aZoomFactor);
  handleExceptionEnd
end;

//function
function CoreWebView2Controller_NotifyParentWindowPositionChanged(AObj: TCoreWebView2Controller): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.NotifyParentWindowPositionChanged();
  handleExceptionEnd
end;


exports
  CoreWebView2Controller_Create,
  CoreWebView2Controller_Initialized,
  CoreWebView2Controller_BaseIntf,
  CoreWebView2Controller_ZoomFactor,
  CoreWebView2Controller_IsVisible,
  CoreWebView2Controller_Bounds,
  CoreWebView2Controller_ParentWindow,
  CoreWebView2Controller_DefaultBackgroundColor,
  CoreWebView2Controller_RasterizationScale,
  CoreWebView2Controller_ShouldDetectMonitorScaleChanges,
  CoreWebView2Controller_BoundsMode,
  CoreWebView2Controller_CoreWebView2,
  CoreWebView2Controller_AllowExternalDrop,
  CoreWebView2Controller_AddAllBrowserEvents,
  CoreWebView2Controller_MoveFocus,
  CoreWebView2Controller_Close,
  CoreWebView2Controller_SetBoundsAndZoomFactor,
  CoreWebView2Controller_NotifyParentWindowPositionChanged;