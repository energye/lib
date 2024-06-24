
//function
procedure CefOverlayController_UnWrap(data: Pointer; var Result: ICefOverlayController); extdecl;
begin
  Result := TCefOverlayControllerRef.UnWrap(data);
end;

//function
function CefOverlayController_IsValid(AObj: ICefOverlayController): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

//function
function CefOverlayController_IsSame(AObj: ICefOverlayController; const that: ICefOverlayController): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetContentsView(AObj: ICefOverlayController; var Result: ICefView); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetContentsView();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetWindow(AObj: ICefOverlayController; var Result: ICefWindow); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetWindow();
  handleExceptionEnd
end;

//function
function CefOverlayController_GetDockingMode(AObj: ICefOverlayController): TCefDockingMode; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetDockingMode();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetBounds(AObj: ICefOverlayController; var Result: TCefRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBounds();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetBoundsInScreen(AObj: ICefOverlayController; var Result: TCefRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBoundsInScreen();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetSize(AObj: ICefOverlayController; var Result: TCefSize); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetPosition(AObj: ICefOverlayController; var Result: TCefPoint); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

//function
procedure CefOverlayController_GetInsets(AObj: ICefOverlayController; var Result: TCefInsets); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetInsets();
  handleExceptionEnd
end;

//function
function CefOverlayController_IsVisible(AObj: ICefOverlayController): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsVisible();
  handleExceptionEnd
end;

//function
function CefOverlayController_IsDrawn(AObj: ICefOverlayController): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDrawn();
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_DestroyOverlay(AObj: ICefOverlayController); extdecl;
begin
  handleExceptionBegin
  AObj.DestroyOverlay();
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetBounds(AObj: ICefOverlayController; var bounds: TCefRect); extdecl;
begin
  handleExceptionBegin
  AObj.SetBounds(bounds);
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetSize(AObj: ICefOverlayController; var size: TCefSize); extdecl;
begin
  handleExceptionBegin
  AObj.SetSize(size);
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetPosition(AObj: ICefOverlayController; var position: TCefPoint); extdecl;
begin
  handleExceptionBegin
  AObj.SetPosition(position);
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetInsets(AObj: ICefOverlayController; var insets: TCefInsets); extdecl;
begin
  handleExceptionBegin
  AObj.SetInsets(insets);
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SizeToPreferredSize(AObj: ICefOverlayController); extdecl;
begin
  handleExceptionBegin
  AObj.SizeToPreferredSize();
  handleExceptionEnd
end;

//procedure
procedure CefOverlayController_SetVisible(AObj: ICefOverlayController; visible: LongBool); extdecl;
begin
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