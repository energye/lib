
//function
procedure CefView_UnWrap(data: Pointer; var Result: ICefView); extdecl;
begin
  Result := TCefViewRef.UnWrap(data);
end;

//function
procedure CefView_AsBrowserView(AObj: ICefView; var Result: ICefBrowserView); extdecl;
begin
  {$define handleExceptionFuncName :='AsBrowserView'}
  handleExceptionBegin
  Result := AObj.AsBrowserView();
  handleExceptionEnd
end;

//function
procedure CefView_AsButton(AObj: ICefView; var Result: ICefButton); extdecl;
begin
  {$define handleExceptionFuncName :='AsButton'}
  handleExceptionBegin
  Result := AObj.AsButton();
  handleExceptionEnd
end;

//function
procedure CefView_AsPanel(AObj: ICefView; var Result: ICefPanel); extdecl;
begin
  {$define handleExceptionFuncName :='AsPanel'}
  handleExceptionBegin
  Result := AObj.AsPanel();
  handleExceptionEnd
end;

//function
procedure CefView_AsScrollView(AObj: ICefView; var Result: ICefScrollView); extdecl;
begin
  {$define handleExceptionFuncName :='AsScrollView'}
  handleExceptionBegin
  Result := AObj.AsScrollView();
  handleExceptionEnd
end;

//function
procedure CefView_AsTextfield(AObj: ICefView; var Result: ICefTextfield); extdecl;
begin
  {$define handleExceptionFuncName :='AsTextfield'}
  handleExceptionBegin
  Result := AObj.AsTextfield();
  handleExceptionEnd
end;

//function
function CefView_GetTypeString(AObj: ICefView): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='GetTypeString'}
  handleExceptionBegin
  Result := ToPChar(AObj.GetTypeString());
  handleExceptionEnd
end;

//function
function CefView_ToStringEx(AObj: ICefView; includechildren: LongBool): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ToStringEx'}
  handleExceptionBegin
  Result := ToPChar(AObj.ToStringEx(includechildren));
  handleExceptionEnd
end;

//function
function CefView_IsValid(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefView_IsAttached(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsAttached'}
  handleExceptionBegin
  Result := AObj.IsAttached();
  handleExceptionEnd
end;

//function
function CefView_IsSame(AObj: ICefView; const that: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
procedure CefView_GetDelegate(AObj: ICefView; var Result: ICefViewDelegate); extdecl;
begin
  {$define handleExceptionFuncName :='GetDelegate'}
  handleExceptionBegin
  Result := AObj.GetDelegate();
  handleExceptionEnd
end;

//function
procedure CefView_GetWindow(AObj: ICefView; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionFuncName :='GetWindow'}
  handleExceptionBegin
  Result := AObj.GetWindow();
  handleExceptionEnd
end;

//function
function CefView_GetID(AObj: ICefView): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetID'}
  handleExceptionBegin
  Result := AObj.GetID();
  handleExceptionEnd
end;

//function
function CefView_GetGroupID(AObj: ICefView): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetGroupID'}
  handleExceptionBegin
  Result := AObj.GetGroupID();
  handleExceptionEnd
end;

//function
procedure CefView_GetParentView(AObj: ICefView; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='GetParentView'}
  handleExceptionBegin
  Result := AObj.GetParentView();
  handleExceptionEnd
end;

//function
procedure CefView_GetViewForID(AObj: ICefView; id: Integer; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='GetViewForID'}
  handleExceptionBegin
  Result := AObj.GetViewForID(id);
  handleExceptionEnd
end;

//function
procedure CefView_GetBounds(AObj: ICefView; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetBounds'}
  handleExceptionBegin
  Result := AObj.GetBounds();
  handleExceptionEnd
end;

//function
procedure CefView_GetBoundsInScreen(AObj: ICefView; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetBoundsInScreen'}
  handleExceptionBegin
  Result := AObj.GetBoundsInScreen();
  handleExceptionEnd
end;

//function
procedure CefView_GetSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='GetSize'}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
procedure CefView_GetPosition(AObj: ICefView; var Result: TCefPoint); extdecl;
begin
  {$define handleExceptionFuncName :='GetPosition'}
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

//function
procedure CefView_GetInsets(AObj: ICefView; var Result: TCefInsets); extdecl;
begin
  {$define handleExceptionFuncName :='GetInsets'}
  handleExceptionBegin
  Result := AObj.GetInsets();
  handleExceptionEnd
end;

//function
procedure CefView_GetPreferredSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='GetPreferredSize'}
  handleExceptionBegin
  Result := AObj.GetPreferredSize();
  handleExceptionEnd
end;

//function
procedure CefView_GetMinimumSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='GetMinimumSize'}
  handleExceptionBegin
  Result := AObj.GetMinimumSize();
  handleExceptionEnd
end;

//function
procedure CefView_GetMaximumSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='GetMaximumSize'}
  handleExceptionBegin
  Result := AObj.GetMaximumSize();
  handleExceptionEnd
end;

//function
function CefView_GetHeightForWidth(AObj: ICefView; width: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetHeightForWidth'}
  handleExceptionBegin
  Result := AObj.GetHeightForWidth(width);
  handleExceptionEnd
end;

//function
function CefView_IsVisible(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsVisible'}
  handleExceptionBegin
  Result := AObj.IsVisible();
  handleExceptionEnd
end;

//function
function CefView_IsDrawn(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDrawn'}
  handleExceptionBegin
  Result := AObj.IsDrawn();
  handleExceptionEnd
end;

//function
function CefView_IsEnabled(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsEnabled'}
  handleExceptionBegin
  Result := AObj.IsEnabled();
  handleExceptionEnd
end;

//function
function CefView_IsFocusable(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsFocusable'}
  handleExceptionBegin
  Result := AObj.IsFocusable();
  handleExceptionEnd
end;

//function
function CefView_IsAccessibilityFocusable(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsAccessibilityFocusable'}
  handleExceptionBegin
  Result := AObj.IsAccessibilityFocusable();
  handleExceptionEnd
end;

//function
function CefView_GetBackgroundColor(AObj: ICefView): TCefColor; extdecl;
begin
  {$define handleExceptionFuncName :='GetBackgroundColor'}
  handleExceptionBegin
  Result := AObj.GetBackgroundColor();
  handleExceptionEnd
end;

//function
function CefView_ConvertPointToScreen(AObj: ICefView; var point: TCefPoint): LongBool; extdecl;
var
  Retpoint: TCefPoint;
begin
  {$define handleExceptionFuncName :='ConvertPointToScreen'}
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
  {$define handleExceptionFuncName :='ConvertPointFromScreen'}
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
  {$define handleExceptionFuncName :='ConvertPointToWindow'}
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
  {$define handleExceptionFuncName :='ConvertPointFromWindow'}
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
  {$define handleExceptionFuncName :='ConvertPointToView'}
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
  {$define handleExceptionFuncName :='ConvertPointFromView'}
  handleExceptionBegin
  Retpoint := point;
  Result := AObj.ConvertPointFromView(view, Retpoint);
  point := Retpoint;
  handleExceptionEnd
end;

//procedure
procedure CefView_SetID(AObj: ICefView; id: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetID'}
  handleExceptionBegin
  AObj.SetID(id);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetGroupID(AObj: ICefView; groupid: Integer); extdecl;
begin
  {$define handleExceptionFuncName :='SetGroupID'}
  handleExceptionBegin
  AObj.SetGroupID(groupid);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetBounds(AObj: ICefView; var bounds: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='SetBounds'}
  handleExceptionBegin
  AObj.SetBounds(bounds);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetSize(AObj: ICefView; var size: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='SetSize'}
  handleExceptionBegin
  AObj.SetSize(size);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetPosition(AObj: ICefView; var position: TCefPoint); extdecl;
begin
  {$define handleExceptionFuncName :='SetPosition'}
  handleExceptionBegin
  AObj.SetPosition(position);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetInsets(AObj: ICefView; var insets: TCefInsets); extdecl;
begin
  {$define handleExceptionFuncName :='SetInsets'}
  handleExceptionBegin
  AObj.SetInsets(insets);
  handleExceptionEnd
end;

//procedure
procedure CefView_SizeToPreferredSize(AObj: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='SizeToPreferredSize'}
  handleExceptionBegin
  AObj.SizeToPreferredSize();
  handleExceptionEnd
end;

//procedure
procedure CefView_InvalidateLayout(AObj: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateLayout'}
  handleExceptionBegin
  AObj.InvalidateLayout();
  handleExceptionEnd
end;

//procedure
procedure CefView_SetVisible(AObj: ICefView; visible: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetVisible'}
  handleExceptionBegin
  AObj.SetVisible(visible);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetEnabled(AObj: ICefView; enabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetEnabled'}
  handleExceptionBegin
  AObj.SetEnabled(enabled);
  handleExceptionEnd
end;

//procedure
procedure CefView_SetFocusable(AObj: ICefView; focusable: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetFocusable'}
  handleExceptionBegin
  AObj.SetFocusable(focusable);
  handleExceptionEnd
end;

//procedure
procedure CefView_RequestFocus(AObj: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='RequestFocus'}
  handleExceptionBegin
  AObj.RequestFocus();
  handleExceptionEnd
end;

//procedure
procedure CefView_SetBackgroundColor(AObj: ICefView; color: TCefColor); extdecl;
begin
  {$define handleExceptionFuncName :='SetBackgroundColor'}
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