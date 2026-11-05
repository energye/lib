// constructor
function TCEFViewComponent_Create(AOwner: TComponent; out IntfViewDelegateEvents: ICefViewDelegateEvents): TCEFViewComponent; extdecl;
begin
  {$define handleExceptionID := 8000}
  handleExceptionBegin
  Result := TCEFViewComponent.Create(AOwner);
  IntfViewDelegateEvents := Result as ICefViewDelegateEvents;
  handleExceptionEnd
end;

// function
procedure TCEFViewComponent_ToStringEx(AObj: TCEFViewComponent; include_children: LongBool;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8001}
  handleExceptionBegin
  StringBufferCreate(string(AObj.ToStringEx(include_children)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
function TCEFViewComponent_IsSame(AObj: TCEFViewComponent; const that: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionID := 8002}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
function TCEFViewComponent_ConvertPointToScreen(AObj: TCEFViewComponent; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 8003}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointToScreen(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCEFViewComponent_ConvertPointFromScreen(AObj: TCEFViewComponent; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 8004}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointFromScreen(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCEFViewComponent_ConvertPointToWindow(AObj: TCEFViewComponent; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 8005}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointToWindow(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCEFViewComponent_ConvertPointFromWindow(AObj: TCEFViewComponent; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 8006}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointFromWindow(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCEFViewComponent_ConvertPointToView(AObj: TCEFViewComponent; const view: ICefView; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 8007}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointToView(view, Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// function
function TCEFViewComponent_ConvertPointFromView(AObj: TCEFViewComponent; const view: ICefView; var point: TCefPointPtr): LongBool; extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 8008}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  Result := AObj.ConvertPointFromView(view, Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// procedure
procedure TCEFViewComponent_SizeToPreferredSize(AObj: TCEFViewComponent); extdecl;
begin
  {$define handleExceptionID := 8009}
  handleExceptionBegin
  AObj.SizeToPreferredSize();
  handleExceptionEnd
end;

// procedure
procedure TCEFViewComponent_InvalidateLayout(AObj: TCEFViewComponent); extdecl;
begin
  {$define handleExceptionID := 8010}
  handleExceptionBegin
  AObj.InvalidateLayout();
  handleExceptionEnd
end;

// procedure
procedure TCEFViewComponent_RequestFocus(AObj: TCEFViewComponent); extdecl;
begin
  {$define handleExceptionID := 8011}
  handleExceptionBegin
  AObj.RequestFocus();
  handleExceptionEnd
end;

// property
function TCEFViewComponent_Initialized(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8012}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_AsView(AObj: TCEFViewComponent; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 8013}
  handleExceptionBegin
  Result := AObj.AsView;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_AsBrowserView(AObj: TCEFViewComponent; var Result: ICefBrowserView); extdecl;
begin
  {$define handleExceptionID := 8014}
  handleExceptionBegin
  Result := AObj.AsBrowserView;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_AsButton(AObj: TCEFViewComponent; var Result: ICefButton); extdecl;
begin
  {$define handleExceptionID := 8015}
  handleExceptionBegin
  Result := AObj.AsButton;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_AsPanel(AObj: TCEFViewComponent; var Result: ICefPanel); extdecl;
begin
  {$define handleExceptionID := 8016}
  handleExceptionBegin
  Result := AObj.AsPanel;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_AsScrollView(AObj: TCEFViewComponent; var Result: ICefScrollView); extdecl;
begin
  {$define handleExceptionID := 8017}
  handleExceptionBegin
  Result := AObj.AsScrollView;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_AsTextfield(AObj: TCEFViewComponent; var Result: ICefTextfield); extdecl;
begin
  {$define handleExceptionID := 8018}
  handleExceptionBegin
  Result := AObj.AsTextfield;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_ViewForID(AObj: TCEFViewComponent; id_: Integer; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 8019}
  handleExceptionBegin
  Result := AObj.ViewForID[id_];
  handleExceptionEnd
end;

// property
function TCEFViewComponent_Valid(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8020}
  handleExceptionBegin
  Result := AObj.Valid;
  handleExceptionEnd
end;

// property
function TCEFViewComponent_Attached(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8021}
  handleExceptionBegin
  Result := AObj.Attached;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_Delegate(AObj: TCEFViewComponent; var Result: ICefViewDelegate); extdecl;
begin
  {$define handleExceptionID := 8022}
  handleExceptionBegin
  Result := AObj.Delegate;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_Window(AObj: TCEFViewComponent; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 8023}
  handleExceptionBegin
  Result := AObj.Window;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_ParentView(AObj: TCEFViewComponent; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 8024}
  handleExceptionBegin
  Result := AObj.ParentView;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_BoundsInScreen(AObj: TCEFViewComponent; var Result: TCefRectPtr); extdecl;
begin
  {$define handleExceptionID := 8025}
  handleExceptionBegin
  Result := TCefRectToGo(AObj.BoundsInScreen);
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_PreferredSize(AObj: TCEFViewComponent; var Result: TCefSizePtr); extdecl;
begin
  {$define handleExceptionID := 8026}
  handleExceptionBegin
  Result := TCefSizeToGo(AObj.PreferredSize);
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_MinimumSize(AObj: TCEFViewComponent; var Result: TCefSizePtr); extdecl;
begin
  {$define handleExceptionID := 8027}
  handleExceptionBegin
  Result := TCefSizeToGo(AObj.MinimumSize);
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_MaximumSize(AObj: TCEFViewComponent; var Result: TCefSizePtr); extdecl;
begin
  {$define handleExceptionID := 8028}
  handleExceptionBegin
  Result := TCefSizeToGo(AObj.MaximumSize);
  handleExceptionEnd
end;

// property
function TCEFViewComponent_Visible(ASet: LongBool; AObj: TCEFViewComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8029}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TCEFViewComponent_Drawn(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8030}
  handleExceptionBegin
  Result := AObj.Drawn;
  handleExceptionEnd
end;

// property
function TCEFViewComponent_Enabled(ASet: LongBool; AObj: TCEFViewComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8031}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Enabled := AValue
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

// property
function TCEFViewComponent_Focusable(ASet: LongBool; AObj: TCEFViewComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 8032}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Focusable := AValue
  end else
    Result := AObj.Focusable;
  handleExceptionEnd
end;

// property
function TCEFViewComponent_AccessibilityFocusable(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 8033}
  handleExceptionBegin
  Result := AObj.AccessibilityFocusable;
  handleExceptionEnd
end;

// property
function TCEFViewComponent_BackgroundColor(ASet: LongBool; AObj: TCEFViewComponent; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionID := 8034}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BackgroundColor := AValue
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

// property
function TCEFViewComponent_ID(ASet: LongBool; AObj: TCEFViewComponent; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 8035}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ID := AValue
  end else
    Result := AObj.ID;
  handleExceptionEnd
end;

// property
function TCEFViewComponent_GroupID(ASet: LongBool; AObj: TCEFViewComponent; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 8036}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GroupID := AValue
  end else
    Result := AObj.GroupID;
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_Bounds(ASet: LongBool; AObj: TCEFViewComponent; var AValue: TCefRectPtr; var Result: TCefRectPtr); extdecl;
begin
  {$define handleExceptionID := 8037}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Bounds := TCefRectToPas(AValue)
  end else
    Result := TCefRectToGo(AObj.Bounds);
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_Size(ASet: LongBool; AObj: TCEFViewComponent; var AValue: TCefSizePtr; var Result: TCefSizePtr); extdecl;
begin
  {$define handleExceptionID := 8038}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Size := TCefSizeToPas(AValue)
  end else
    Result := TCefSizeToGo(AObj.Size);
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_Position(ASet: LongBool; AObj: TCEFViewComponent; var AValue: TCefPointPtr; var Result: TCefPointPtr); extdecl;
begin
  {$define handleExceptionID := 8039}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := TCefPointToPas(AValue)
  end else
    Result := TCefPointToGo(AObj.Position);
  handleExceptionEnd
end;

// property
procedure TCEFViewComponent_TypeString(AObj: TCEFViewComponent; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 8040}
  handleExceptionBegin
  StringBufferCreate(AObj.TypeString, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCEFViewComponent_HeightForWidth(AObj: TCEFViewComponent; width: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 8041}
  handleExceptionBegin
  Result := AObj.HeightForWidth[width];
  handleExceptionEnd
end;

// event
procedure TCEFViewComponent_OnGetPreferredSize(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnGetPreferredSizeEvent}
  {$DEFINE EventName := OnGetPreferredSize}
  CEFEventMethodCode
end;

// event
procedure TCEFViewComponent_OnGetMinimumSize(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnGetMinimumSizeEvent}
  {$DEFINE EventName := OnGetMinimumSize}
  CEFEventMethodCode
end;

// event
procedure TCEFViewComponent_OnGetMaximumSize(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnGetMaximumSizeEvent}
  {$DEFINE EventName := OnGetMaximumSize}
  CEFEventMethodCode
end;

// event
procedure TCEFViewComponent_OnGetHeightForWidth(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnGetHeightForWidthEvent}
  {$DEFINE EventName := OnGetHeightForWidth}
  CEFEventMethodCode
end;

// event
procedure TCEFViewComponent_OnParentViewChanged(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnParentViewChangedEvent}
  {$DEFINE EventName := OnParentViewChanged}
  CEFEventMethodCode
end;

// event
procedure TCEFViewComponent_OnChildViewChanged(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnChildViewChangedEvent}
  {$DEFINE EventName := OnChildViewChanged}
  CEFEventMethodCode
end;

// event
procedure TCEFViewComponent_OnWindowChanged(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnWindowChangedEvent}
  {$DEFINE EventName := OnWindowChanged}
  CEFEventMethodCode
end;

// event
procedure TCEFViewComponent_OnLayoutChanged(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnLayoutChangedEvent}
  {$DEFINE EventName := OnLayoutChanged}
  CEFEventMethodCode
end;

// event
procedure TCEFViewComponent_OnFocus(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnFocusEvent}
  {$DEFINE EventName := OnFocus}
  CEFEventMethodCode
end;

// event
procedure TCEFViewComponent_OnBlur(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TCEFViewComponent_TOnBlurEvent}
  {$DEFINE EventName := OnBlur}
  CEFEventMethodCode
end;

exports
  TCEFViewComponent_Create,
  TCEFViewComponent_ToStringEx,
  TCEFViewComponent_IsSame,
  TCEFViewComponent_ConvertPointToScreen,
  TCEFViewComponent_ConvertPointFromScreen,
  TCEFViewComponent_ConvertPointToWindow,
  TCEFViewComponent_ConvertPointFromWindow,
  TCEFViewComponent_ConvertPointToView,
  TCEFViewComponent_ConvertPointFromView,
  TCEFViewComponent_SizeToPreferredSize,
  TCEFViewComponent_InvalidateLayout,
  TCEFViewComponent_RequestFocus,
  TCEFViewComponent_Initialized,
  TCEFViewComponent_AsView,
  TCEFViewComponent_AsBrowserView,
  TCEFViewComponent_AsButton,
  TCEFViewComponent_AsPanel,
  TCEFViewComponent_AsScrollView,
  TCEFViewComponent_AsTextfield,
  TCEFViewComponent_ViewForID,
  TCEFViewComponent_Valid,
  TCEFViewComponent_Attached,
  TCEFViewComponent_Delegate,
  TCEFViewComponent_Window,
  TCEFViewComponent_ParentView,
  TCEFViewComponent_BoundsInScreen,
  TCEFViewComponent_PreferredSize,
  TCEFViewComponent_MinimumSize,
  TCEFViewComponent_MaximumSize,
  TCEFViewComponent_Visible,
  TCEFViewComponent_Drawn,
  TCEFViewComponent_Enabled,
  TCEFViewComponent_Focusable,
  TCEFViewComponent_AccessibilityFocusable,
  TCEFViewComponent_BackgroundColor,
  TCEFViewComponent_ID,
  TCEFViewComponent_GroupID,
  TCEFViewComponent_Bounds,
  TCEFViewComponent_Size,
  TCEFViewComponent_Position,
  TCEFViewComponent_TypeString,
  TCEFViewComponent_HeightForWidth,
  TCEFViewComponent_OnGetPreferredSize,
  TCEFViewComponent_OnGetMinimumSize,
  TCEFViewComponent_OnGetMaximumSize,
  TCEFViewComponent_OnGetHeightForWidth,
  TCEFViewComponent_OnParentViewChanged,
  TCEFViewComponent_OnChildViewChanged,
  TCEFViewComponent_OnWindowChanged,
  TCEFViewComponent_OnLayoutChanged,
  TCEFViewComponent_OnFocus,
  TCEFViewComponent_OnBlur;