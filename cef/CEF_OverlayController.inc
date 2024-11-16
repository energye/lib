
//function
procedure CefOverlayController_UnWrap(data: Pointer; var Result: ICefOverlayController); extdecl;
begin
  Result := TCefOverlayControllerRef.UnWrap(data);
end;

//function
function CefOverlayController_IsValid(AObj: ICefOverlayController): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsValid'}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefOverlayController_IsSame(AObj: ICefOverlayController; const that: ICefOverlayController): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsSame'}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetContentsView(AObj: ICefOverlayController; var Result: ICefView); extdecl;
begin
  {$define handleExceptionFuncName :='GetContentsView'}
  handleExceptionBegin
  Result := AObj.GetContentsView();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetWindow(AObj: ICefOverlayController; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionFuncName :='GetWindow'}
  handleExceptionBegin
  Result := AObj.GetWindow();
  handleExceptionEnd
end;

//function
function CefOverlayController_GetDockingMode(AObj: ICefOverlayController): TCefDockingMode; extdecl;
begin
  {$define handleExceptionFuncName :='GetDockingMode'}
  handleExceptionBegin
  Result := AObj.GetDockingMode();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetBounds(AObj: ICefOverlayController; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetBounds'}
  handleExceptionBegin
  Result := AObj.GetBounds();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetBoundsInScreen(AObj: ICefOverlayController; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetBoundsInScreen'}
  handleExceptionBegin
  Result := AObj.GetBoundsInScreen();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetSize(AObj: ICefOverlayController; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='GetSize'}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetPosition(AObj: ICefOverlayController; var Result: TCefPoint); extdecl;
begin
  {$define handleExceptionFuncName :='GetPosition'}
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetInsets(AObj: ICefOverlayController; var Result: TCefInsets); extdecl;
begin
  {$define handleExceptionFuncName :='GetInsets'}
  handleExceptionBegin
  Result := AObj.GetInsets();
  handleExceptionEnd
end;

//function
function CefOverlayController_IsVisible(AObj: ICefOverlayController): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsVisible'}
  handleExceptionBegin
  Result := AObj.IsVisible();
  handleExceptionEnd
end;

//function
function CefOverlayController_IsDrawn(AObj: ICefOverlayController): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDrawn'}
  handleExceptionBegin
  Result := AObj.IsDrawn();
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_DestroyOverlay(AObj: ICefOverlayController); extdecl;
begin
  {$define handleExceptionFuncName :='DestroyOverlay'}
  handleExceptionBegin
  AObj.DestroyOverlay();
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetBounds(AObj: ICefOverlayController; var bounds: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='SetBounds'}
  handleExceptionBegin
  AObj.SetBounds(bounds);
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetSize(AObj: ICefOverlayController; var size: TCefSize); extdecl;
begin
  {$define handleExceptionFuncName :='SetSize'}
  handleExceptionBegin
  AObj.SetSize(size);
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetPosition(AObj: ICefOverlayController; var position: TCefPoint); extdecl;
begin
  {$define handleExceptionFuncName :='SetPosition'}
  handleExceptionBegin
  AObj.SetPosition(position);
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetInsets(AObj: ICefOverlayController; var insets: TCefInsets); extdecl;
begin
  {$define handleExceptionFuncName :='SetInsets'}
  handleExceptionBegin
  AObj.SetInsets(insets);
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SizeToPreferredSize(AObj: ICefOverlayController); extdecl;
begin
  {$define handleExceptionFuncName :='SizeToPreferredSize'}
  handleExceptionBegin
  AObj.SizeToPreferredSize();
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetVisible(AObj: ICefOverlayController; visible: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetVisible'}
  handleExceptionBegin
  AObj.SetVisible(visible);
  handleExceptionEnd
end;


exports
  CefOverlayController_UnWrap,
  CefOverlayController_IsValid,
  CefOverlayController_IsSame,
  CefOverlayController_GetContentsView,
  CefOverlayController_GetWindow,
  CefOverlayController_GetDockingMode,
  CefOverlayController_GetBounds,
  CefOverlayController_GetBoundsInScreen,
  CefOverlayController_GetSize,
  CefOverlayController_GetPosition,
  CefOverlayController_GetInsets,
  CefOverlayController_IsVisible,
  CefOverlayController_IsDrawn,
  CefOverlayController_DestroyOverlay,
  CefOverlayController_SetBounds,
  CefOverlayController_SetSize,
  CefOverlayController_SetPosition,
  CefOverlayController_SetInsets,
  CefOverlayController_SizeToPreferredSize,
  CefOverlayController_SetVisible;