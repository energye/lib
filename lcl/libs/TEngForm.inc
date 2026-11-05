// constructor
function TEngForm_Create(AOwner: TComponent): TEngForm; extdecl;
begin
  {$define handleExceptionID := 1400}
  handleExceptionBegin
  Result := TEngForm.Create(AOwner);
  handleExceptionEnd
end;

// constructor
function TEngForm_CreateNew(AOwner: TComponent; Num: Integer): TEngForm; extdecl;
begin
  {$define handleExceptionID := 1401}
  handleExceptionBegin
  Result := TEngForm.CreateNew(AOwner, Num);
  handleExceptionEnd
end;

// constructor
function TEngForm_CreateFromClassName(TheOwner: TComponent; const AClassName: PChar): TEngForm; extdecl;
begin
  {$define handleExceptionID := 1402}
  handleExceptionBegin
  Result := TEngForm.CreateFromClassName(TheOwner, AClassName);
  handleExceptionEnd
end;

// procedure
procedure TEngForm_ScaleForPPI(AObj: TEngForm; ANewPPI: Integer); extdecl;
begin
  {$define handleExceptionID := 1403}
  handleExceptionBegin
  AObj.ScaleForPPI(ANewPPI);
  handleExceptionEnd
end;

// procedure
procedure TEngForm_ScaleForCurrentDpi(AObj: TEngForm); extdecl;
begin
  {$define handleExceptionID := 1404}
  handleExceptionBegin
  AObj.ScaleForCurrentDpi();
  handleExceptionEnd
end;

// procedure
procedure TEngForm_GoDeactivate(AObj: TEngForm); extdecl;
begin
  {$define handleExceptionID := 1405}
  handleExceptionBegin
  AObj.GoDeactivate();
  handleExceptionEnd
end;

// procedure
procedure TEngForm_GoActivate(AObj: TEngForm); extdecl;
begin
  {$define handleExceptionID := 1406}
  handleExceptionBegin
  AObj.GoActivate();
  handleExceptionEnd
end;

// procedure
procedure TEngForm_InheritedWndProc(AObj: TEngForm; var TheMessage: TLMessage); extdecl;
var
  OutTheMessage: TLMessage;
begin
  {$define handleExceptionID := 1407}
  handleExceptionBegin
  OutTheMessage := TheMessage;
  AObj.InheritedWndProc(OutTheMessage);
  TheMessage := OutTheMessage;
  handleExceptionEnd
end;

// procedure
procedure TEngForm_EnabledMaximize(AObj: TEngForm; AValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 1408}
  handleExceptionBegin
  AObj.EnabledMaximize(AValue);
  handleExceptionEnd
end;

// procedure
procedure TEngForm_EnabledMinimize(AObj: TEngForm; AValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 1409}
  handleExceptionBegin
  AObj.EnabledMinimize(AValue);
  handleExceptionEnd
end;

// procedure
procedure TEngForm_EnabledSystemMenu(AObj: TEngForm; AValue: LongBool); extdecl;
begin
  {$define handleExceptionID := 1410}
  handleExceptionBegin
  AObj.EnabledSystemMenu(AValue);
  handleExceptionEnd
end;

// procedure
procedure TEngForm_ScreenCenter(AObj: TEngForm); extdecl;
begin
  {$define handleExceptionID := 1411}
  handleExceptionBegin
  AObj.ScreenCenter();
  handleExceptionEnd
end;

// procedure
procedure TEngForm_WorkAreaCenter(AObj: TEngForm); extdecl;
begin
  {$define handleExceptionID := 1412}
  handleExceptionBegin
  AObj.WorkAreaCenter();
  handleExceptionEnd
end;

// property
function TEngForm_GoPtr(ASet: LongBool; AObj: TEngForm; AValue: Pointer): Pointer; extdecl;
begin
  {$define handleExceptionID := 1413}
  handleExceptionBegin
  if ASet then
  begin
    AObj.GoPtr := AValue
  end else
    Result := AObj.GoPtr;
  handleExceptionEnd
end;

// event
procedure TEngForm_OnWndProc(AObj: TEngForm; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTWndMethod}
  {$DEFINE EventName := OnWndProc}
  LCLEventMethodCode
end;

function TEngForm_TClass(): TClass; extdecl;
begin
  Result := TEngForm;
end;

exports
  TEngForm_Create,
  TEngForm_CreateNew,
  TEngForm_CreateFromClassName,
  TEngForm_ScaleForPPI,
  TEngForm_ScaleForCurrentDpi,
  TEngForm_GoDeactivate,
  TEngForm_GoActivate,
  TEngForm_InheritedWndProc,
  TEngForm_EnabledMaximize,
  TEngForm_EnabledMinimize,
  TEngForm_EnabledSystemMenu,
  TEngForm_ScreenCenter,
  TEngForm_WorkAreaCenter,
  TEngForm_GoPtr,
  TEngForm_OnWndProc,
  TEngForm_TClass;