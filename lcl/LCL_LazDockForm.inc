
//constructor
function LazDockForm_Create(AOwner: TComponent): TLazDockForm; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TLazDockForm.Create(AOwner);
  handleExceptionEnd
end;

//property
function LazDockForm_MainControl(AIsSet: LongBool; AObj: TLazDockForm; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='MainControl'}
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
  {$define handleExceptionFuncName :='FindMainControlCandidate'}
  handleExceptionBegin
  Result := AObj.FindMainControlCandidate();
  handleExceptionEnd
end;

//function
function LazDockForm_FindHeader(AObj: TLazDockForm; x, y: integer; out OutPart: TLazDockHeaderPart): TControl; extdecl;
var
  RetOutPart: TLazDockHeaderPart;
begin
  {$define handleExceptionFuncName :='FindHeader'}
  handleExceptionBegin
  RetOutPart := OutPart;
  Result := AObj.FindHeader(x, y, RetOutPart);
  OutPart := RetOutPart;
  handleExceptionEnd
end;

//function
function LazDockForm_IsDockedControl(AObj: TLazDockForm; Control: TControl): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDockedControl'}
  handleExceptionBegin
  Result := AObj.IsDockedControl(Control);
  handleExceptionEnd
end;

//function
function LazDockForm_ControlHasTitle(AObj: TLazDockForm; Control: TControl): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ControlHasTitle'}
  handleExceptionBegin
  Result := AObj.ControlHasTitle(Control);
  handleExceptionEnd
end;

//function
procedure LazDockForm_GetTitleRect(AObj: TLazDockForm; Control: TControl; var Result: TRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetTitleRect'}
  handleExceptionBegin
  Result := AObj.GetTitleRect(Control);
  handleExceptionEnd
end;

//function
function LazDockForm_GetTitleOrientation(AObj: TLazDockForm; Control: TControl): TDockOrientation; extdecl;
begin
  {$define handleExceptionFuncName :='GetTitleOrientation'}
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
  {$define handleExceptionFuncName :='UpdateCaption'}
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