
//constructor
function CEFViewComponent_Create(aOwner: TComponent): TCEFViewComponent; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCEFViewComponent.Create(aOwner);
  handleExceptionEnd
end;

//procedure
procedure CEFViewComponent_AsInterface(AObj: TCEFViewComponent; var Result: ICefViewDelegateEvents); extdecl;
begin
  Result := AObj as ICefViewDelegateEvents;
end;

//property
function CEFViewComponent_Initialized(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_AsView(AObj: TCEFViewComponent; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='AsView'}
  handleExceptionBegin
  Result := AObj.AsView;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_AsBrowserView(AObj: TCEFViewComponent; var Result: ICefBrowserView); extdecl;
begin
  {$define handleExceptionFuncName :='AsBrowserView'}
  handleExceptionBegin
  Result := AObj.AsBrowserView;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_AsButton(AObj: TCEFViewComponent; var Result: ICefButton); extdecl;
begin
  {$define handleExceptionFuncName :='AsButton'}
  handleExceptionBegin
  Result := AObj.AsButton;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_AsPanel(AObj: TCEFViewComponent; var Result: ICefPanel); extdecl;
begin
  {$define handleExceptionFuncName :='AsPanel'}
  handleExceptionBegin
  Result := AObj.AsPanel;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_AsScrollView(AObj: TCEFViewComponent; var Result: ICefScrollView); extdecl;
begin
  {$define handleExceptionFuncName :='AsScrollView'}
  handleExceptionBegin
  Result := AObj.AsScrollView;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_AsTextfield(AObj: TCEFViewComponent; var Result: ICefTextfield); extdecl;
begin
  {$define handleExceptionFuncName :='AsTextfield'}
  handleExceptionBegin
  Result := AObj.AsTextfield;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_ViewForID(AObj: TCEFViewComponent; id: Integer; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='ViewForID'}
  handleExceptionBegin
  Result := AObj.ViewForID[id];
  handleExceptionEnd
end;

//property
function CEFViewComponent_Valid(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Valid'}
  handleExceptionBegin
  Result := AObj.Valid;
  handleExceptionEnd
end;

//property
function CEFViewComponent_Attached(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Attached'}
  handleExceptionBegin
  Result := AObj.Attached;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_Delegate(AObj: TCEFViewComponent; var Result: ICefViewDelegate); extdecl;
begin
  {$define handleExceptionFuncName :='Delegate'}
  handleExceptionBegin
  Result := AObj.Delegate;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_Window(AObj: TCEFViewComponent; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionFuncName :='Window'}
  handleExceptionBegin
  Result := AObj.Window;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_ParentView(AObj: TCEFViewComponent; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='ParentView'}
  handleExceptionBegin
  Result := AObj.ParentView;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_BoundsInScreen(AObj: TCEFViewComponent; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='BoundsInScreen'}
  handleExceptionBegin
  Result := AObj.BoundsInScreen;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_PreferredSize(AObj: TCEFViewComponent; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='PreferredSize'}
  handleExceptionBegin
  Result := AObj.PreferredSize;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_MinimumSize(AObj: TCEFViewComponent; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='MinimumSize'}
  handleExceptionBegin
  Result := AObj.MinimumSize;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_MaximumSize(AObj: TCEFViewComponent; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='MaximumSize'}
  handleExceptionBegin
  Result := AObj.MaximumSize;
  handleExceptionEnd
end;

//property
function CEFViewComponent_Visible(AIsSet: LongBool; AObj: TCEFViewComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Visible'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//property
function CEFViewComponent_Drawn(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Drawn'}
  handleExceptionBegin
  Result := AObj.Drawn;
  handleExceptionEnd
end;

//property
function CEFViewComponent_Enabled(AIsSet: LongBool; AObj: TCEFViewComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Enabled'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Enabled := AValue;
  end else
    Result := AObj.Enabled;
  handleExceptionEnd
end;

//property
function CEFViewComponent_Focusable(AIsSet: LongBool; AObj: TCEFViewComponent; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Focusable'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Focusable := AValue;
  end else
    Result := AObj.Focusable;
  handleExceptionEnd
end;

//property
function CEFViewComponent_AccessibilityFocusable(AObj: TCEFViewComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AccessibilityFocusable'}
  handleExceptionBegin
  Result := AObj.AccessibilityFocusable;
  handleExceptionEnd
end;

//property
function CEFViewComponent_BackgroundColor(AIsSet: LongBool; AObj: TCEFViewComponent; AValue: TCefColor): TCefColor; extdecl;
begin
  {$define handleExceptionFuncName :='BackgroundColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackgroundColor := AValue;
  end else
    Result := AObj.BackgroundColor;
  handleExceptionEnd
end;

//property
function CEFViewComponent_ID(AIsSet: LongBool; AObj: TCEFViewComponent; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='ID'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ID := AValue;
  end else
    Result := AObj.ID;
  handleExceptionEnd
end;

//property
function CEFViewComponent_GroupID(AIsSet: LongBool; AObj: TCEFViewComponent; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionFuncName :='GroupID'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.GroupID := AValue;
  end else
    Result := AObj.GroupID;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_Bounds(AIsSet: LongBool; AObj: TCEFViewComponent; var AValue: TCefRect; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='Bounds'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Bounds := AValue;
  end else
    Result := AObj.Bounds;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_Size(AIsSet: LongBool; AObj: TCEFViewComponent; var AValue: TCefSize; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='Size'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Size := AValue;
  end else
    Result := AObj.Size;
  handleExceptionEnd
end;

//property
procedure CEFViewComponent_Position(AIsSet: LongBool; AObj: TCEFViewComponent; var AValue: TCefPoint; var Result: TCefPoint); extdecl;
begin
  {$define handleExceptionFuncName :='Position'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
function CEFViewComponent_TypeString(AObj: TCEFViewComponent): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='TypeString'}
  handleExceptionBegin
  Result := ToPChar(AObj.TypeString);
  handleExceptionEnd
end;

//property
function CEFViewComponent_HeightForWidth(AObj: TCEFViewComponent; width: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='HeightForWidth'}
  handleExceptionBegin
  Result := AObj.HeightForWidth[width];
  handleExceptionEnd
end;

//function
function CEFViewComponent_ToStringEx(AObj: TCEFViewComponent; includechildren: LongBool): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='ToStringEx'}
  handleExceptionBegin
  Result := ToPChar(AObj.ToStringEx(includechildren));
  handleExceptionEnd
end;

//function
function CEFViewComponent_IsSame(AObj: TCEFViewComponent; const that: ICefView): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
function CEFViewComponent_ConvertPointToScreen(AObj: TCEFViewComponent; var point: TCefPoint): LongBool; extdecl;
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
function CEFViewComponent_ConvertPointFromScreen(AObj: TCEFViewComponent; var point: TCefPoint): LongBool; extdecl;
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
function CEFViewComponent_ConvertPointToWindow(AObj: TCEFViewComponent; var point: TCefPoint): LongBool; extdecl;
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
function CEFViewComponent_ConvertPointFromWindow(AObj: TCEFViewComponent; var point: TCefPoint): LongBool; extdecl;
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
function CEFViewComponent_ConvertPointToView(AObj: TCEFViewComponent; const view: ICefView; var point: TCefPoint): LongBool; extdecl;
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
function CEFViewComponent_ConvertPointFromView(AObj: TCEFViewComponent; const view: ICefView; var point: TCefPoint): LongBool; extdecl;
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
procedure CEFViewComponent_SizeToPreferredSize(AObj: TCEFViewComponent); extdecl;
begin
  {$define handleExceptionFuncName :='SizeToPreferredSize'}
  handleExceptionBegin
  AObj.SizeToPreferredSize();
  handleExceptionEnd
end;

//procedure
procedure CEFViewComponent_InvalidateLayout(AObj: TCEFViewComponent); extdecl;
begin
  {$define handleExceptionFuncName :='InvalidateLayout'}
  handleExceptionBegin
  AObj.InvalidateLayout();
  handleExceptionEnd
end;

//procedure
procedure CEFViewComponent_RequestFocus(AObj: TCEFViewComponent); extdecl;
begin
  {$define handleExceptionFuncName :='RequestFocus'}
  handleExceptionBegin
  AObj.RequestFocus();
  handleExceptionEnd
end;

//property event
procedure CEFViewComponent_SetOnGetPreferredSize(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnGetPreferredSize}
  {$DEFINE EventName := OnGetPreferredSize}
  CEFEventMethodCode
end;

//property event
procedure CEFViewComponent_SetOnGetMinimumSize(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnGetMinimumSize}
  {$DEFINE EventName := OnGetMinimumSize}
  CEFEventMethodCode
end;

//property event
procedure CEFViewComponent_SetOnGetMaximumSize(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnGetMaximumSize}
  {$DEFINE EventName := OnGetMaximumSize}
  CEFEventMethodCode
end;

//property event
procedure CEFViewComponent_SetOnGetHeightForWidth(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnGetHeightForWidth}
  {$DEFINE EventName := OnGetHeightForWidth}
  CEFEventMethodCode
end;

//property event
procedure CEFViewComponent_SetOnParentViewChanged(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnParentViewChanged}
  {$DEFINE EventName := OnParentViewChanged}
  CEFEventMethodCode
end;

//property event
procedure CEFViewComponent_SetOnChildViewChanged(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnChildViewChanged}
  {$DEFINE EventName := OnChildViewChanged}
  CEFEventMethodCode
end;

//property event
procedure CEFViewComponent_SetOnWindowChanged(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnWindowChanged}
  {$DEFINE EventName := OnWindowChanged}
  CEFEventMethodCode
end;

//property event
procedure CEFViewComponent_SetOnLayoutChanged(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnLayoutChanged}
  {$DEFINE EventName := OnLayoutChanged}
  CEFEventMethodCode
end;

//property event
procedure CEFViewComponent_SetOnFocus(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnFocus}
  {$DEFINE EventName := OnFocus}
  CEFEventMethodCode
end;

//property event
procedure CEFViewComponent_SetOnBlur(AObj: TCEFViewComponent; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := ViewComponent_OnBlur}
  {$DEFINE EventName := OnBlur}
  CEFEventMethodCode
end;


exports
  CEFViewComponent_Create,
  CEFViewComponent_AsInterface,
  CEFViewComponent_Initialized,
  CEFViewComponent_AsView,
  CEFViewComponent_AsBrowserView,
  CEFViewComponent_AsButton,
  CEFViewComponent_AsPanel,
  CEFViewComponent_AsScrollView,
  CEFViewComponent_AsTextfield,
  CEFViewComponent_ViewForID,
  CEFViewComponent_Valid,
  CEFViewComponent_Attached,
  CEFViewComponent_Delegate,
  CEFViewComponent_Window,
  CEFViewComponent_ParentView,
  CEFViewComponent_BoundsInScreen,
  CEFViewComponent_PreferredSize,
  CEFViewComponent_MinimumSize,
  CEFViewComponent_MaximumSize,
  CEFViewComponent_Visible,
  CEFViewComponent_Drawn,
  CEFViewComponent_Enabled,
  CEFViewComponent_Focusable,
  CEFViewComponent_AccessibilityFocusable,
  CEFViewComponent_BackgroundColor,
  CEFViewComponent_ID,
  CEFViewComponent_GroupID,
  CEFViewComponent_Bounds,
  CEFViewComponent_Size,
  CEFViewComponent_Position,
  CEFViewComponent_TypeString,
  CEFViewComponent_HeightForWidth,
  CEFViewComponent_ToStringEx,
  CEFViewComponent_IsSame,
  CEFViewComponent_ConvertPointToScreen,
  CEFViewComponent_ConvertPointFromScreen,
  CEFViewComponent_ConvertPointToWindow,
  CEFViewComponent_ConvertPointFromWindow,
  CEFViewComponent_ConvertPointToView,
  CEFViewComponent_ConvertPointFromView,
  CEFViewComponent_SizeToPreferredSize,
  CEFViewComponent_InvalidateLayout,
  CEFViewComponent_RequestFocus,
  CEFViewComponent_SetOnGetPreferredSize,
  CEFViewComponent_SetOnGetMinimumSize,
  CEFViewComponent_SetOnGetMaximumSize,
  CEFViewComponent_SetOnGetHeightForWidth,
  CEFViewComponent_SetOnParentViewChanged,
  CEFViewComponent_SetOnChildViewChanged,
  CEFViewComponent_SetOnWindowChanged,
  CEFViewComponent_SetOnLayoutChanged,
  CEFViewComponent_SetOnFocus,
  CEFViewComponent_SetOnBlur;