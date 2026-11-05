// constructor
function TCefViewRef_Create(data: Pointer; out IntfView: ICefView): TCefViewRef; extdecl;
begin
  {$define handleExceptionID := 24400}
  handleExceptionBegin
  Result := TCefViewRef.Create(data);
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsBrowserView(AObj: ICefView; var Result: ICefBrowserView); extdecl;
begin
  {$define handleExceptionID := 24401}
  handleExceptionBegin
  Result := AObj.AsBrowserView();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsButton(AObj: ICefView; var Result: ICefButton); extdecl;
begin
  {$define handleExceptionID := 24402}
  handleExceptionBegin
  Result := AObj.AsButton();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsPanel(AObj: ICefView; var Result: ICefPanel); extdecl;
begin
  {$define handleExceptionID := 24403}
  handleExceptionBegin
  Result := AObj.AsPanel();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsScrollView(AObj: ICefView; var Result: ICefScrollView); extdecl;
begin
  {$define handleExceptionID := 24404}
  handleExceptionBegin
  Result := AObj.AsScrollView();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsTextfield(AObj: ICefView; var Result: ICefTextfield); extdecl;
begin
  {$define handleExceptionID := 24405}
  handleExceptionBegin
  Result := AObj.AsTextfield();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetTypeString(AObj: ICefView;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 24406}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetTypeString()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefViewRef_ToStringEx(AObj: ICefView; include_children: LongBool;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 24407}
  handleExceptionBegin
  StringBufferCreate(string(AObj.ToStringEx(include_children)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefViewRef_IsValid(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 24408}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsAttached(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 24409}
  handleExceptionBegin
  Result := AObj.IsAttached();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsSame(AObj: ICefView; const that: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 24410}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetDelegate(AObj: ICefView; var Result: ICefViewDelegate); extdecl;
begin
  {$define handleExceptionID := 24411}
  handleExceptionBegin
  Result := AObj.GetDelegate();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetWindow(AObj: ICefView; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 24412}
  handleExceptionBegin
  Result := AObj.GetWindow();
  handleExceptionEnd
end;

// function
function TCefViewRef_GetID(AObj: ICefView): Integer; extdecl;
begin
  {$define handleExceptionID := 24413}
  handleExceptionBegin
  Result := AObj.GetID();
  handleExceptionEnd
end;

// function
function TCefViewRef_GetGroupID(AObj: ICefView): Integer; extdecl;
begin
  {$define handleExceptionID := 24414}
  handleExceptionBegin
  Result := AObj.GetGroupID();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetParentView(AObj: ICefView; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 24415}
  handleExceptionBegin
  Result := AObj.GetParentView();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetViewForID(AObj: ICefView; id_: Integer; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 24416}
  handleExceptionBegin
  Result := AObj.GetViewForID(id_);
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetBounds(AObj: ICefView; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 24417}
  handleExceptionBegin
  Result := AObj.GetBounds();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetBoundsInScreen(AObj: ICefView; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 24418}
  handleExceptionBegin
  Result := AObj.GetBoundsInScreen();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionID := 24419}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetPosition(AObj: ICefView; var Result: TCefPoint); extdecl;
begin
  {$define handleExceptionID := 24420}
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetInsets(AObj: ICefView; var Result: TCefInsets); extdecl;
begin
  {$define handleExceptionID := 24421}
  handleExceptionBegin
  Result := AObj.GetInsets();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetPreferredSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionID := 24422}
  handleExceptionBegin
  Result := AObj.GetPreferredSize();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetMinimumSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionID := 24423}
  handleExceptionBegin
  Result := AObj.GetMinimumSize();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetMaximumSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionID := 24424}
  handleExceptionBegin
  Result := AObj.GetMaximumSize();
  handleExceptionEnd
end;

// function
function TCefViewRef_GetHeightForWidth(AObj: ICefView; width: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 24425}
  handleExceptionBegin
  Result := AObj.GetHeightForWidth(width);
  handleExceptionEnd
end;

// function
function TCefViewRef_IsVisible(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 24426}
  handleExceptionBegin
  Result := AObj.IsVisible();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsDrawn(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 24427}
  handleExceptionBegin
  Result := AObj.IsDrawn();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsEnabled(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 24428}
  handleExceptionBegin
  Result := AObj.IsEnabled();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsFocusable(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 24429}
  handleExceptionBegin
  Result := AObj.IsFocusable();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsAccessibilityFocusable(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 24430}
  handleExceptionBegin
  Result := AObj.IsAccessibilityFocusable();
  handleExceptionEnd
end;

// function
function TCefViewRef_GetBackgroundColor(AObj: ICefView): TCefColor; extdecl;
begin
  {$define handleExceptionID := 24431}
  handleExceptionBegin
  Result := AObj.GetBackgroundColor();
  handleExceptionEnd
end;

// function
function TCefViewRef_GetThemeColor(AObj: ICefView; color_id: integer): TCefColor; extdecl;
begin
  {$define handleExceptionID := 24432}
  handleExceptionBegin
  Result := AObj.GetThemeColor(color_id);
  handleExceptionEnd
end;

// function
function TCefViewRef_ConvertPointToScreen(AObj: ICefView; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 24433}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointToScreen(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCefViewRef_ConvertPointFromScreen(AObj: ICefView; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 24434}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointFromScreen(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCefViewRef_ConvertPointToWindow(AObj: ICefView; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 24435}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointToWindow(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCefViewRef_ConvertPointFromWindow(AObj: ICefView; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 24436}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointFromWindow(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCefViewRef_ConvertPointToView(AObj: ICefView; const view: ICefView; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 24437}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointToView(view, Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCefViewRef_ConvertPointFromView(AObj: ICefView; const view: ICefView; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 24438}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointFromView(view, Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function static
procedure TCefViewRef_UnWrapWithPointer(data: Pointer; var Result: ICefView); extdecl;
begin
  Result := TCefViewRef.UnWrap(data);
end;

// procedure
procedure TCefViewRef_SetID(AObj: ICefView; id_: Integer); extdecl;
begin
  {$define handleExceptionID := 24439}
  handleExceptionBegin
  AObj.SetID(id_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetGroupID(AObj: ICefView; group_id: Integer); extdecl;
begin
  {$define handleExceptionID := 24440}
  handleExceptionBegin
  AObj.SetGroupID(group_id);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetBounds(AObj: ICefView; var bounds_: TCefRectPtr); extdecl;
var
  Inbounds_: TCefRect;
begin
  {$define handleExceptionID := 24441}
  handleExceptionBegin
  Inbounds_ := TCefRectToPas(bounds_);
  AObj.SetBounds(Inbounds_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetSize(AObj: ICefView; var size_: TCefSizePtr); extdecl;
var
  Insize_: TCefSize;
begin
  {$define handleExceptionID := 24442}
  handleExceptionBegin
  Insize_ := TCefSizeToPas(size_);
  AObj.SetSize(Insize_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetPosition(AObj: ICefView; var position_: TCefPointPtr); extdecl;
var
  Inposition_: TCefPoint;
begin
  {$define handleExceptionID := 24443}
  handleExceptionBegin
  Inposition_ := TCefPointToPas(position_);
  AObj.SetPosition(Inposition_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetInsets(AObj: ICefView; var insets: TCefInsetsPtr); extdecl;
var
  Ininsets: TCefInsets;
begin
  {$define handleExceptionID := 24444}
  handleExceptionBegin
  Ininsets := TCefInsetsToPas(insets);
  AObj.SetInsets(Ininsets);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SizeToPreferredSize(AObj: ICefView); extdecl;
begin
  {$define handleExceptionID := 24445}
  handleExceptionBegin
  AObj.SizeToPreferredSize();
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_InvalidateLayout(AObj: ICefView); extdecl;
begin
  {$define handleExceptionID := 24446}
  handleExceptionBegin
  AObj.InvalidateLayout();
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetVisible(AObj: ICefView; visible_: LongBool); extdecl;
begin
  {$define handleExceptionID := 24447}
  handleExceptionBegin
  AObj.SetVisible(visible_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetEnabled(AObj: ICefView; enabled_: LongBool); extdecl;
begin
  {$define handleExceptionID := 24448}
  handleExceptionBegin
  AObj.SetEnabled(enabled_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetFocusable(AObj: ICefView; focusable_: LongBool); extdecl;
begin
  {$define handleExceptionID := 24449}
  handleExceptionBegin
  AObj.SetFocusable(focusable_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_RequestFocus(AObj: ICefView); extdecl;
begin
  {$define handleExceptionID := 24450}
  handleExceptionBegin
  AObj.RequestFocus();
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetBackgroundColor(AObj: ICefView; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 24451}
  handleExceptionBegin
  AObj.SetBackgroundColor(color);
  handleExceptionEnd
end;

exports
  TCefViewRef_Create,
  TCefViewRef_AsBrowserView,
  TCefViewRef_AsButton,
  TCefViewRef_AsPanel,
  TCefViewRef_AsScrollView,
  TCefViewRef_AsTextfield,
  TCefViewRef_GetTypeString,
  TCefViewRef_ToStringEx,
  TCefViewRef_IsValid,
  TCefViewRef_IsAttached,
  TCefViewRef_IsSame,
  TCefViewRef_GetDelegate,
  TCefViewRef_GetWindow,
  TCefViewRef_GetID,
  TCefViewRef_GetGroupID,
  TCefViewRef_GetParentView,
  TCefViewRef_GetViewForID,
  TCefViewRef_GetBounds,
  TCefViewRef_GetBoundsInScreen,
  TCefViewRef_GetSize,
  TCefViewRef_GetPosition,
  TCefViewRef_GetInsets,
  TCefViewRef_GetPreferredSize,
  TCefViewRef_GetMinimumSize,
  TCefViewRef_GetMaximumSize,
  TCefViewRef_GetHeightForWidth,
  TCefViewRef_IsVisible,
  TCefViewRef_IsDrawn,
  TCefViewRef_IsEnabled,
  TCefViewRef_IsFocusable,
  TCefViewRef_IsAccessibilityFocusable,
  TCefViewRef_GetBackgroundColor,
  TCefViewRef_GetThemeColor,
  TCefViewRef_ConvertPointToScreen,
  TCefViewRef_ConvertPointFromScreen,
  TCefViewRef_ConvertPointToWindow,
  TCefViewRef_ConvertPointFromWindow,
  TCefViewRef_ConvertPointToView,
  TCefViewRef_ConvertPointFromView,
  TCefViewRef_UnWrapWithPointer,
  TCefViewRef_SetID,
  TCefViewRef_SetGroupID,
  TCefViewRef_SetBounds,
  TCefViewRef_SetSize,
  TCefViewRef_SetPosition,
  TCefViewRef_SetInsets,
  TCefViewRef_SizeToPreferredSize,
  TCefViewRef_InvalidateLayout,
  TCefViewRef_SetVisible,
  TCefViewRef_SetEnabled,
  TCefViewRef_SetFocusable,
  TCefViewRef_RequestFocus,
  TCefViewRef_SetBackgroundColor;