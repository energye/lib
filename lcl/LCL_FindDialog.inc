
//constructor
function FindDialog_Create(AOwner: TComponent): TFindDialog; extdecl;
begin
  handleExceptionBegin
  Result := TFindDialog.Create(AOwner);
  handleExceptionEnd
end;

//property
function FindDialog_Left(AIsSet: LongBool; AObj: TFindDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Left := AValue;
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

//property
procedure FindDialog_Position(AIsSet: LongBool; AObj: TFindDialog; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
function FindDialog_Top(AIsSet: LongBool; AObj: TFindDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Top := AValue;
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

//property
function FindDialog_FindText(AIsSet: LongBool; AObj: TFindDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.FindText := AValue;
  end else
    Result := ToPChar(AObj.FindText);
  handleExceptionEnd
end;

//property
function FindDialog_Options(AIsSet: LongBool; AObj: TFindDialog; AValue: TFindOptions): TFindOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//function
function FindDialog_Class(): TClass; extdecl;
begin
  Result := TFindDialog;
end;

//procedure
procedure FindDialog_CloseDialog(AObj: TFindDialog); extdecl;
begin
  handleExceptionBegin
  AObj.CloseDialog();
  handleExceptionEnd
end;

//property event
procedure FindDialog_SetOnFind(AObj: TFindDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnFind}
  EventMethodCode
end;

//property event
procedure FindDialog_SetOnHelpClicked(AObj: TFindDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnHelpClicked}
  EventMethodCode
end;


exports
  FindDialog_Create,
  FindDialog_Left,
  FindDialog_Position,
  FindDialog_Top,
  FindDialog_FindText,
  FindDialog_Options,
  FindDialog_Class,
  FindDialog_CloseDialog,
  FindDialog_SetOnFind,
  FindDialog_SetOnHelpClicked;