
//constructor
function LazDockForm_Create(AOwner: TComponent): TLazDockForm; extdecl;
begin
  handleExceptionBegin
  Result := TLazDockForm.Create(AOwner);
  handleExceptionEnd
end;

//property
function LazDockForm_MainControl(AIsSet: LongBool; AObj: TLazDockForm; AValue: TControl): TControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MainControl := AValue;
  end else
    Result := AObj.MainControl;
  handleExceptionEnd
end;

//function
function LazDockForm_FindMainControlCandidate(AObj: TLazDockForm): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.FindMainControlCandidate();
  handleExceptionEnd
end;

//function
function LazDockForm_FindHeader(AObj: TLazDockForm; x, y: integer; out OutPart: TLazDockHeaderPart): TControl; extdecl;
var
  RetOutPart: TLazDockHeaderPart;
begin
  handleExceptionBegin
  RetOutPart := OutPart;
  Result := AObj.FindHeader(x, y, RetOutPart);
  OutPart := RetOutPart;
  handleExceptionEnd
end;

//function
function LazDockForm_IsDockedControl(AObj: TLazDockForm; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsDockedControl(Control);
  handleExceptionEnd
end;

//function
function LazDockForm_ControlHasTitle(AObj: TLazDockForm; Control: TControl): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.ControlHasTitle(Control);
  handleExceptionEnd
end;

//function
procedure LazDockForm_GetTitleRect(AObj: TLazDockForm; Control: TControl; var Result: TRect); extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTitleRect(Control);
  handleExceptionEnd
end;

//function
function LazDockForm_GetTitleOrientation(AObj: TLazDockForm; Control: TControl): TDockOrientation; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetTitleOrientation(Control);
  handleExceptionEnd
end;

//function
function LazDockForm_Class(): TClass; extdecl;
begin
  Result := TLazDockForm;
end;

//procedure
procedure LazDockForm_UpdateCaption(AObj: TLazDockForm); extdecl;
begin
  handleExceptionBegin
  AObj.UpdateCaption();
  handleExceptionEnd
end;


exports
  LazDockForm_Create,
  LazDockForm_MainControl,
  LazDockForm_FindMainControlCandidate,
  LazDockForm_FindHeader,
  LazDockForm_IsDockedControl,
  LazDockForm_ControlHasTitle,
  LazDockForm_GetTitleRect,
  LazDockForm_GetTitleOrientation,
  LazDockForm_Class,
  LazDockForm_UpdateCaption;