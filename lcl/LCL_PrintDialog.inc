
//constructor
function PrintDialog_Create(TheOwner: TComponent): TPrintDialog; extdecl;
begin
  handleExceptionBegin
  Result := TPrintDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function PrintDialog_AttachTo(AIsSet: LongBool; AObj: TPrintDialog; AValue: TCustomForm): TCustomForm; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.AttachTo := AValue;
  end else
    Result := AObj.AttachTo;
  handleExceptionEnd
end;

//function
function PrintDialog_Class(): TClass; extdecl;
begin
  Result := TPrintDialog;
end;

//property event
procedure PrintDialog_SetOnDialogResult(AObj: TPrintDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTDialogResultEvent}
  {$DEFINE EventName := OnDialogResult}
  EventMethodCode
end;


exports
  PrintDialog_Create,
  PrintDialog_AttachTo,
  PrintDialog_Class,
  PrintDialog_SetOnDialogResult;