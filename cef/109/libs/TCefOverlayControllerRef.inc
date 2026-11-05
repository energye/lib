// constructor
function TCefOverlayControllerRef_Create(data: Pointer; out IntfOverlayController: ICefOverlayController): TCefOverlayControllerRef; extdecl;
begin
  {$define handleExceptionID := 24500}
  handleExceptionBegin
  Result := TCefOverlayControllerRef.Create(data);
  IntfOverlayController := Result as ICefOverlayController;
  handleExceptionEnd
end;

// function
function TCefOverlayControllerRef_IsValid(AObj: ICefOverlayController): LongBool; extdecl;
begin
  {$define handleExceptionID := 24501}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function
function TCefOverlayControllerRef_IsSame(AObj: ICefOverlayController; const that: ICefOverlayController): LongBool; extdecl;
begin
  {$define handleExceptionID := 24502}
  handleExceptionBegin
  Result := AObj.IsSame(that);
  handleExceptionEnd
end;

// function
procedure TCefOverlayControllerRef_GetContentsView(AObj: ICefOverlayController; var Result: ICefView); extdecl;
begin
  {$define handleExceptionID := 24503}
  handleExceptionBegin
  Result := AObj.GetContentsView();
  handleExceptionEnd
end;

// function
procedure TCefOverlayControllerRef_GetWindow(AObj: ICefOverlayController; var Result: ICefWindow); extdecl;
begin
  {$define handleExceptionID := 24504}
  handleExceptionBegin
  Result := AObj.GetWindow();
  handleExceptionEnd
end;

// function
function TCefOverlayControllerRef_GetDockingMode(AObj: ICefOverlayController): TCefDockingMode; extdecl;
begin
  {$define handleExceptionID := 24505}
  handleExceptionBegin
  Result := AObj.GetDockingMode();
  handleExceptionEnd
end;

// function
procedure TCefOverlayControllerRef_GetBounds(AObj: ICefOverlayController; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 24506}
  handleExceptionBegin
  Result := AObj.GetBounds();
  handleExceptionEnd
end;

// function
procedure TCefOverlayControllerRef_GetBoundsInScreen(AObj: ICefOverlayController; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 24507}
  handleExceptionBegin
  Result := AObj.GetBoundsInScreen();
  handleExceptionEnd
end;

// function
procedure TCefOverlayControllerRef_GetSize(AObj: ICefOverlayController; var Result: TCefSize); extdecl;
begin
  {$define handleExceptionID := 24508}
  handleExceptionBegin
  Result := AObj.GetSize();
  handleExceptionEnd
end;

// function
procedure TCefOverlayControllerRef_GetPosition(AObj: ICefOverlayController; var Result: TCefPoint); extdecl;
begin
  {$define handleExceptionID := 24509}
  handleExceptionBegin
  Result := AObj.GetPosition();
  handleExceptionEnd
end;

// function
procedure TCefOverlayControllerRef_GetInsets(AObj: ICefOverlayController; var Result: TCefInsets); extdecl;
begin
  {$define handleExceptionID := 24510}
  handleExceptionBegin
  Result := AObj.GetInsets();
  handleExceptionEnd
end;

// function
function TCefOverlayControllerRef_IsVisible(AObj: ICefOverlayController): LongBool; extdecl;
begin
  {$define handleExceptionID := 24511}
  handleExceptionBegin
  Result := AObj.IsVisible();
  handleExceptionEnd
end;

// function
function TCefOverlayControllerRef_IsDrawn(AObj: ICefOverlayController): LongBool; extdecl;
begin
  {$define handleExceptionID := 24512}
  handleExceptionBegin
  Result := AObj.IsDrawn();
  handleExceptionEnd
end;

// function static
procedure TCefOverlayControllerRef_UnWrap(data: Pointer; var Result: ICefOverlayController); extdecl;
begin
  Result := TCefOverlayControllerRef.UnWrap(data);
end;

// procedure
procedure TCefOverlayControllerRef_DestroyOverlay(AObj: ICefOverlayController); extdecl;
begin
  {$define handleExceptionID := 24513}
  handleExceptionBegin
  AObj.DestroyOverlay();
  handleExceptionEnd
end;

// procedure
procedure TCefOverlayControllerRef_SetBounds(AObj: ICefOverlayController; var bounds: TCefRectPtr); extdecl;
var
  Inbounds: TCefRect;
begin
  {$define handleExceptionID := 24514}
  handleExceptionBegin
  Inbounds := TCefRectToPas(bounds);
  AObj.SetBounds(Inbounds);
  handleExceptionEnd
end;

// procedure
procedure TCefOverlayControllerRef_SetSize(AObj: ICefOverlayController; var size: TCefSizePtr); extdecl;
var
  Insize: TCefSize;
begin
  {$define handleExceptionID := 24515}
  handleExceptionBegin
  Insize := TCefSizeToPas(size);
  AObj.SetSize(Insize);
  handleExceptionEnd
end;

// procedure
procedure TCefOverlayControllerRef_SetPosition(AObj: ICefOverlayController; var position: TCefPointPtr); extdecl;
var
  Inposition: TCefPoint;
begin
  {$define handleExceptionID := 24516}
  handleExceptionBegin
  Inposition := TCefPointToPas(position);
  AObj.SetPosition(Inposition);
  handleExceptionEnd
end;

// procedure
procedure TCefOverlayControllerRef_SetInsets(AObj: ICefOverlayController; var insets: TCefInsetsPtr); extdecl;
var
  Ininsets: TCefInsets;
begin
  {$define handleExceptionID := 24517}
  handleExceptionBegin
  Ininsets := TCefInsetsToPas(insets);
  AObj.SetInsets(Ininsets);
  handleExceptionEnd
end;

// procedure
procedure TCefOverlayControllerRef_SizeToPreferredSize(AObj: ICefOverlayController); extdecl;
begin
  {$define handleExceptionID := 24518}
  handleExceptionBegin
  AObj.SizeToPreferredSize();
  handleExceptionEnd
end;

// procedure
procedure TCefOverlayControllerRef_SetVisible(AObj: ICefOverlayController; visible: LongBool); extdecl;
begin
  {$define handleExceptionID := 24519}
  handleExceptionBegin
  AObj.SetVisible(visible);
  handleExceptionEnd
end;

exports
  TCefOverlayControllerRef_Create,
  TCefOverlayControllerRef_IsValid,
  TCefOverlayControllerRef_IsSame,
  TCefOverlayControllerRef_GetContentsView,
  TCefOverlayControllerRef_GetWindow,
  TCefOverlayControllerRef_GetDockingMode,
  TCefOverlayControllerRef_GetBounds,
  TCefOverlayControllerRef_GetBoundsInScreen,
  TCefOverlayControllerRef_GetSize,
  TCefOverlayControllerRef_GetPosition,
  TCefOverlayControllerRef_GetInsets,
  TCefOverlayControllerRef_IsVisible,
  TCefOverlayControllerRef_IsDrawn,
  TCefOverlayControllerRef_UnWrap,
  TCefOverlayControllerRef_DestroyOverlay,
  TCefOverlayControllerRef_SetBounds,
  TCefOverlayControllerRef_SetSize,
  TCefOverlayControllerRef_SetPosition,
  TCefOverlayControllerRef_SetInsets,
  TCefOverlayControllerRef_SizeToPreferredSize,
  TCefOverlayControllerRef_SetVisible;