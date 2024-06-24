
//function
procedure CefView_UnWrap(data: Pointer; var Result: ICefView); extdecl;
begin
  Result := TCefViewRef.UnWrap(data);
end;

//function
procedure CefView_AsBrowserView(AObj: ICefView; var Result: ICefBrowserView); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsBrowserView();
  handleExceptionEnd
end;

//function
procedure CefView_AsButton(AObj: ICefView; var Result: ICefButton); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsButton();
  handleExceptionEnd
end;

//function
procedure CefView_AsPanel(AObj: ICefView; var Result: ICefPanel); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsPanel();
  handleExceptionEnd
end;

//function
procedure CefView_AsScrollView(AObj: ICefView; var Result: ICefScrollView); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsScrollView();
  handleExceptionEnd
end;

//function
procedure CefView_AsTextfield(AObj: ICefView; var Result: ICefTextfield); extdecl;
begin
  handleExceptionBegin
  Result := AObj.AsTextfield();
  handleExceptionEnd
end;

//function
function CefView_GetTypeString(AObj: ICefView): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.GetTypeString());
  handleExceptionEnd
end;

//function
function CefView_ToStringEx(AObj: ICefView; includechildren: LongBool): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.ToStringEx(includechildren));
  handleExceptionEnd
end;

//function
function CefView_IsValid(AObj: ICefView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefView_IsAttached(AObj: ICefView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsAttached();
  handleExceptionEnd
end;

//function
function CefView_IsSame(AObj: ICefView; const that: ICefView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
procedure CefView_GetDelegate(AObj: ICefView; var Result: ICefViewDelegate); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDelegate();
  handleExceptionEnd
end;

//function
procedure CefView_GetWindow(AObj: ICefView; var Result: ICefWindow); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetWindow();
  handleExceptionEnd
end;

//function
function CefView_GetID(AObj: ICefView): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetID();
  handleExceptionEnd
end;

//function
function CefView_GetGroupID(AObj: ICefView): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetGroupID();
  handleExceptionEnd
end;

//function
procedure CefView_GetParentView(AObj: ICefView; var Result: ICefView); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetParentView();
  handleExceptionEnd
end;

//function
procedure CefView_GetViewForID(AObj: ICefView; id: Integer; var Result: ICefView); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetViewForID(id);
  handleExceptionEnd
end;

//function
procedure CefView_GetBounds(AObj: ICefView; var Result: TCefRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBounds();
  handleExceptionEnd
end;

//function
procedure CefView_GetBoundsInScreen(AObj: ICefView; var Result: TCefRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBoundsInScreen();
  handleExceptionEnd
end;

//function
procedure CefView_GetSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
procedure CefView_GetPosition(AObj: ICefView; var Result: TCefPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

//function
procedure CefView_GetInsets(AObj: ICefView; var Result: TCefInsets); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetInsets();
  handleExceptionEnd
end;

//function
procedure CefView_GetPreferredSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPreferredSize();
  handleExceptionEnd
end;

//function
procedure CefView_GetMinimumSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetMinimumSize();
  handleExceptionEnd
end;

//function
procedure CefView_GetMaximumSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetMaximumSize();
  handleExceptionEnd
end;

//function
function CefView_GetHeightForWidth(AObj: ICefView; width: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetHeightForWidth(width);
  handleExceptionEnd
end;

//function
function CefView_IsVisible(AObj: ICefView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsVisible();
  handleExceptionEnd
end;

//function
function CefView_IsDrawn(AObj: ICefView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDrawn();
  handleExceptionEnd
end;

//function
function CefView_IsEnabled(AObj: ICefView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsEnabled();
  handleExceptionEnd
end;

//function
function CefView_IsFocusable(AObj: ICefView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsFocusable();
  handleExceptionEnd
end;

//function
function CefView_IsAccessibilityFocusable(AObj: ICefView): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsAccessibilityFocusable();
  handleExceptionEnd
end;

//function
function CefView_GetBackgroundColor(AObj: ICefView): TCefColor; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBackgroundColor();
  handleExceptionEnd
end;

//function
function CefView_ConvertPointToScreen(AObj: ICefView; var point: TCefPoint): LongBool; extdecl;
var
  Retpoint: TCefPoint;
begin
  handleExceptionBegin
  Retpoint := point;
  Result := AObj.ConvertPointToScreen(Retpoint);
  point := Retpoint;
  handleExceptionEnd
end;

//function
function CefView_ConvertPointFromScreen(AObj: ICefView; var point: TCefPoint): LongBool; extdecl;
var
  Retpoint: TCefPoint;
begin
  handleExceptionBegin
  Retpoint := point;
  Result := AObj.ConvertPointFromScreen(Retpoint);
  point := Retpoint;
  handleExceptionEnd
end;

//function
function CefView_ConvertPointToWindow(AObj: ICefView; var point: TCefPoint): LongBool; extdecl;
var
  Retpoint: TCefPoint;
begin
  handleExceptionBegin
  Retpoint := point;
  Result := AObj.ConvertPointToWindow(Retpoint);
  point := Retpoint;
  handleExceptionEnd
end;

//function
function CefView_ConvertPointFromWindow(AObj: ICefView; var point: TCefPoint): LongBool; extdecl;
var
  Retpoint: TCefPoint;
begin
  handleExceptionBegin
  Retpoint := point;
  Result := AObj.ConvertPointFromWindow(Retpoint);
  point := Retpoint;
  handleExceptionEnd
end;

//function
function CefView_ConvertPointToView(AObj: ICefView; const view: ICefView; var point: TCefPoint): LongBool; extdecl;
var
  Retpoint: TCefPoint;
begin
  handleExceptionBegin
  Retpoint := point;
  Result := AObj.ConvertPointToView(view, Retpoint);
  point := Retpoint;
  handleExceptionEnd
end;

//function
function CefView_ConvertPointFromView(AObj: ICefView; const view: ICefView; var point: TCefPoint): LongBool; extdecl;
var
  Retpoint: TCefPoint;
begin
  handleExceptionBegin
  Retpoint := point;
  Result := AObj.ConvertPointFromView(view, Retpoint);
  point := Retpoint;
  handleExceptionEnd
end;

//procedure
procedure CefView_SetID(AObj: ICefView; id: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetID(id);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetGroupID(AObj: ICefView; groupid: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetGroupID(groupid);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetBounds(AObj: ICefView; var bounds: TCefRect); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(bounds);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetSize(AObj: ICefView; var size: TCefSize); extdecl;
begin
  handleExceptionBegin
  AObj.SetSize(size);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetPosition(AObj: ICefView; var position: TCefPoint); extdecl;
begin
  handleExceptionBegin
  AObj.SetPosition(position);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetInsets(AObj: ICefView; var insets: TCefInsets); extdecl;
begin
  handleExceptionBegin
  AObj.SetInsets(insets);
  handleExceptionEnd
end;

//procedure
procedure CefView_SizeToPreferredSize(AObj: ICefView); extdecl;
begin
  handleExceptionBegin
  AObj.SizeToPreferredSize();
  handleExceptionEnd
end;

//procedure
procedure CefView_InvalidateLayout(AObj: ICefView); extdecl;
begin
  handleExceptionBegin
  AObj.InvalidateLayout();
  handleExceptionEnd
end;

//procedure
procedure CefView_SetVisible(AObj: ICefView; visible: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetVisible(visible);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetEnabled(AObj: ICefView; enabled: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetEnabled(enabled);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetFocusable(AObj: ICefView; focusable: LongBool); extdecl;
begin
  handleExceptionBegin
  AObj.SetFocusable(focusable);
  handleExceptionEnd
end;

//procedure
procedure CefView_RequestFocus(AObj: ICefView); extdecl;
begin
  handleExceptionBegin
  AObj.RequestFocus();
  handleExceptionEnd
end;

//procedure
procedure CefView_SetBackgroundColor(AObj: ICefView; color: TCefColor); extdecl;
begin
  handleExceptionBegin
  AObj.SetBackgroundColor(color);
  handleExceptionEnd
end;


exports
  CefView_UnWrap,
  CefView_AsBrowserView,
  CefView_AsButton,
  CefView_AsPanel,
  CefView_AsScrollView,
  CefView_AsTextfield,
  CefView_GetTypeString,
  CefView_ToStringEx,
  CefView_IsValid,
  CefView_IsAttached,
  CefView_IsSame,
  CefView_GetDelegate,
  CefView_GetWindow,
  CefView_GetID,
  CefView_GetGroupID,
  CefView_GetParentView,
  CefView_GetViewForID,
  CefView_GetBounds,
  CefView_GetBoundsInScreen,
  CefView_GetSize,
  CefView_GetPosition,
  CefView_GetInsets,
  CefView_GetPreferredSize,
  CefView_GetMinimumSize,
  CefView_GetMaximumSize,
  CefView_GetHeightForWidth,
  CefView_IsVisible,
  CefView_IsDrawn,
  CefView_IsEnabled,
  CefView_IsFocusable,
  CefView_IsAccessibilityFocusable,
  CefView_GetBackgroundColor,
  CefView_ConvertPointToScreen,
  CefView_ConvertPointFromScreen,
  CefView_ConvertPointToWindow,
  CefView_ConvertPointFromWindow,
  CefView_ConvertPointToView,
  CefView_ConvertPointFromView,
  CefView_SetID,
  CefView_SetGroupID,
  CefView_SetBounds,
  CefView_SetSize,
  CefView_SetPosition,
  CefView_SetInsets,
  CefView_SizeToPreferredSize,
  CefView_InvalidateLayout,
  CefView_SetVisible,
  CefView_SetEnabled,
  CefView_SetFocusable,
  CefView_RequestFocus,
  CefView_SetBackgroundColor;