// constructor
function TCefViewRef_Create(data: Pointer; out IntfView: ICefView): TCefViewRef; extdecl;
begin
  {$define handleExceptionID := 23800}
  handleExceptionBegin
  Result := TCefViewRef.Create(data);
  IntfView := Result as ICefView;
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsBrowserView(AObj: ICefView; var Result: ICefBrowserView); extdecl;
begin
  {$define handleExceptionID := 23801}
  handleExceptionBegin
  Result := AObj.AsBrowserView();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsButton(AObj: ICefView; var Result: ICefButton); extdecl;
begin
  {$define handleExceptionID := 23802}
  handleExceptionBegin
  Result := AObj.AsButton();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsPanel(AObj: ICefView; var Result: ICefPanel); extdecl;
begin
  {$define handleExceptionID := 23803}
  handleExceptionBegin
  Result := AObj.AsPanel();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsScrollView(AObj: ICefView; var Result: ICefScrollView); extdecl;
begin
  {$define handleExceptionID := 23804}
  handleExceptionBegin
  Result := AObj.AsScrollView();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_AsTextfield(AObj: ICefView; var Result: ICefTextfield); extdecl;
begin
  {$define handleExceptionID := 23805}
  handleExceptionBegin
  Result := AObj.AsTextfield();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetTypeString(AObj: ICefView;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23806}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetTypeString()), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefViewRef_ToStringEx(AObj: ICefView; include_children: LongBool;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 23807}
  handleExceptionBegin
  StringBufferCreate(string(AObj.ToStringEx(include_children)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCefViewRef_IsValid(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23808}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsAttached(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23809}
  handleExceptionBegin
  Result := AObj.IsAttached();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsSame(AObj: ICefView; const that: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23810}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetDelegate(AObj: ICefView; var Result: ICefViewDelegate); extdecl;
begin
  {$define handleExceptionID := 23811}
  handleExceptionBegin
  Result := AObj.GetDelegate();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetWindow(AObj: ICefView; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 23812}
  handleExceptionBegin
  Result := AObj.GetWindow();
  handleExceptionEnd
end;

// function
function TCefViewRef_GetID(AObj: ICefView): Integer; extdecl;
begin
  {$define handleExceptionID := 23813}
  handleExceptionBegin
  Result := AObj.GetID();
  handleExceptionEnd
end;

// function
function TCefViewRef_GetGroupID(AObj: ICefView): Integer; extdecl;
begin
  {$define handleExceptionID := 23814}
  handleExceptionBegin
  Result := AObj.GetGroupID();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetParentView(AObj: ICefView; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 23815}
  handleExceptionBegin
  Result := AObj.GetParentView();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetViewForID(AObj: ICefView; id_: Integer; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 23816}
  handleExceptionBegin
  Result := AObj.GetViewForID(id_);
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetBounds(AObj: ICefView; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 23817}
  handleExceptionBegin
  Result := AObj.GetBounds();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetBoundsInScreen(AObj: ICefView; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 23818}
  handleExceptionBegin
  Result := AObj.GetBoundsInScreen();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionID := 23819}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetPosition(AObj: ICefView; var Result: TCefPoint); extdecl;
begin
  {$define handleExceptionID := 23820}
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetInsets(AObj: ICefView; var Result: TCefInsets); extdecl;
begin
  {$define handleExceptionID := 23821}
  handleExceptionBegin
  Result := AObj.GetInsets();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetPreferredSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionID := 23822}
  handleExceptionBegin
  Result := AObj.GetPreferredSize();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetMinimumSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionID := 23823}
  handleExceptionBegin
  Result := AObj.GetMinimumSize();
  handleExceptionEnd
end;

// function
procedure TCefViewRef_GetMaximumSize(AObj: ICefView; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionID := 23824}
  handleExceptionBegin
  Result := AObj.GetMaximumSize();
  handleExceptionEnd
end;

// function
function TCefViewRef_GetHeightForWidth(AObj: ICefView; width: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 23825}
  handleExceptionBegin
  Result := AObj.GetHeightForWidth(width);
  handleExceptionEnd
end;

// function
function TCefViewRef_IsVisible(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23826}
  handleExceptionBegin
  Result := AObj.IsVisible();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsDrawn(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23827}
  handleExceptionBegin
  Result := AObj.IsDrawn();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsEnabled(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23828}
  handleExceptionBegin
  Result := AObj.IsEnabled();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsFocusable(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23829}
  handleExceptionBegin
  Result := AObj.IsFocusable();
  handleExceptionEnd
end;

// function
function TCefViewRef_IsAccessibilityFocusable(AObj: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 23830}
  handleExceptionBegin
  Result := AObj.IsAccessibilityFocusable();
  handleExceptionEnd
end;

// function
function TCefViewRef_GetBackgroundColor(AObj: ICefView): TCefColor; extdecl;
begin
  {$define handleExceptionID := 23831}
  handleExceptionBegin
  Result := AObj.GetBackgroundColor();
  handleExceptionEnd
end;

// function
function TCefViewRef_ConvertPointToScreen(AObj: ICefView; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 23832}
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
  {$define handleExceptionID := 23833}
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
  {$define handleExceptionID := 23834}
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
  {$define handleExceptionID := 23835}
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
  {$define handleExceptionID := 23836}
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
  {$define handleExceptionID := 23837}
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
  {$define handleExceptionID := 23838}
  handleExceptionBegin
  AObj.SetID(id_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetGroupID(AObj: ICefView; group_id: Integer); extdecl;
begin
  {$define handleExceptionID := 23839}
  handleExceptionBegin
  AObj.SetGroupID(group_id);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetBounds(AObj: ICefView; var bounds_: TCefRectPtr); extdecl;
var
  Inbounds_: TCefRect;
begin
  {$define handleExceptionID := 23840}
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
  {$define handleExceptionID := 23841}
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
  {$define handleExceptionID := 23842}
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
  {$define handleExceptionID := 23843}
  handleExceptionBegin
  Ininsets := TCefInsetsToPas(insets);
  AObj.SetInsets(Ininsets);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SizeToPreferredSize(AObj: ICefView); extdecl;
begin
  {$define handleExceptionID := 23844}
  handleExceptionBegin
  AObj.SizeToPreferredSize();
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_InvalidateLayout(AObj: ICefView); extdecl;
begin
  {$define handleExceptionID := 23845}
  handleExceptionBegin
  AObj.InvalidateLayout();
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetVisible(AObj: ICefView; visible_: LongBool); extdecl;
begin
  {$define handleExceptionID := 23846}
  handleExceptionBegin
  AObj.SetVisible(visible_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetEnabled(AObj: ICefView; enabled_: LongBool); extdecl;
begin
  {$define handleExceptionID := 23847}
  handleExceptionBegin
  AObj.SetEnabled(enabled_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetFocusable(AObj: ICefView; focusable_: LongBool); extdecl;
begin
  {$define handleExceptionID := 23848}
  handleExceptionBegin
  AObj.SetFocusable(focusable_);
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_RequestFocus(AObj: ICefView); extdecl;
begin
  {$define handleExceptionID := 23849}
  handleExceptionBegin
  AObj.RequestFocus();
  handleExceptionEnd
end;

// procedure
procedure TCefViewRef_SetBackgroundColor(AObj: ICefView; color: TCefColor); extdecl;
begin
  {$define handleExceptionID := 23850}
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