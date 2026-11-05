// constructor
function TLazDockForm_Create(AOwner: TComponent): TLazDockForm; extdecl;
begin
  {$define handleExceptionID := 23800}
  handleExceptionBegin
  Result := TLazDockForm.Create(AOwner);
  handleExceptionEnd
end;

// function
function TLazDockForm_FindMainControlCandidate(AObj: TLazDockForm): TControl; extdecl;
begin
  {$define handleExceptionID := 23801}
  handleExceptionBegin
  Result := AObj.FindMainControlCandidate();
  handleExceptionEnd
end;

// function
function TLazDockForm_FindHeader(AObj: TLazDockForm; x: integer; y: integer; var Part: TLazDockHeaderPart): TControl; extdecl;
var
  OutPart: TLazDockHeaderPart;
begin
  {$define handleExceptionID := 23802}
  handleExceptionBegin
  Result := AObj.FindHeader(x, y, OutPart);
  Part := OutPart;
  handleExceptionEnd
end;

// function
function TLazDockForm_IsDockedControl(AObj: TLazDockForm; Control: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 23803}
  handleExceptionBegin
  Result := AObj.IsDockedControl(Control);
  handleExceptionEnd
end;

// function
function TLazDockForm_ControlHasTitle(AObj: TLazDockForm; Control: TControl): LongBool; extdecl;
begin
  {$define handleExceptionID := 23804}
  handleExceptionBegin
  Result := AObj.ControlHasTitle(Control);
  handleExceptionEnd
end;

// function
procedure TLazDockForm_GetTitleRect(AObj: TLazDockForm; Control: TControl; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 23805}
  handleExceptionBegin
  Result := AObj.GetTitleRect(Control);
  handleExceptionEnd
end;

// function
function TLazDockForm_GetTitleOrientation(AObj: TLazDockForm; Control: TControl): TDockOrientation; extdecl;
begin
  {$define handleExceptionID := 23806}
  handleExceptionBegin
  Result := AObj.GetTitleOrientation(Control);
  handleExceptionEnd
end;

// procedure
procedure TLazDockForm_UpdateCaption(AObj: TLazDockForm); extdecl;
begin
  {$define handleExceptionID := 23807}
  handleExceptionBegin
  AObj.UpdateCaption();
  handleExceptionEnd
end;

// procedure static
procedure TLazDockForm_UpdateMainControlInParents(StartControl: TControl); extdecl;
begin
  TLazDockForm.UpdateMainControlInParents(StartControl);
end;

// property
function TLazDockForm_MainControl(ASet: LongBool; AObj: TLazDockForm; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 23808}
  handleExceptionBegin
  if ASet then
  begin
    AObj.MainControl := AValue
  end else
    Result := AObj.MainControl;
  handleExceptionEnd
end;

function TLazDockForm_TClass(): TClass; extdecl;
begin
  Result := TLazDockForm;
end;

exports
  TLazDockForm_Create,
  TLazDockForm_FindMainControlCandidate,
  TLazDockForm_FindHeader,
  TLazDockForm_IsDockedControl,
  TLazDockForm_ControlHasTitle,
  TLazDockForm_GetTitleRect,
  TLazDockForm_GetTitleOrientation,
  TLazDockForm_UpdateCaption,
  TLazDockForm_UpdateMainControlInParents,
  TLazDockForm_MainControl,
  TLazDockForm_TClass;