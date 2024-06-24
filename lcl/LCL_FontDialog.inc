
//constructor
function FontDialog_Create(AOwner: TComponent): TFontDialog; extdecl;
begin
  handleExceptionBegin
  Result := TFontDialog.Create(AOwner);
  handleExceptionEnd
end;

//property
function FontDialog_Font(AIsSet: LongBool; AObj: TFontDialog; AValue: TFont): TFont; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Font := AValue;
  end else
    Result := AObj.Font;
  handleExceptionEnd
end;

//property
function FontDialog_MinFontSize(AIsSet: LongBool; AObj: TFontDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MinFontSize := AValue;
  end else
    Result := AObj.MinFontSize;
  handleExceptionEnd
end;

//property
function FontDialog_MaxFontSize(AIsSet: LongBool; AObj: TFontDialog; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.MaxFontSize := AValue;
  end else
    Result := AObj.MaxFontSize;
  handleExceptionEnd
end;

//property
function FontDialog_Options(AIsSet: LongBool; AObj: TFontDialog; AValue: TFontDialogOptions): TFontDialogOptions; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Options := AValue;
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

//property
function FontDialog_PreviewText(AIsSet: LongBool; AObj: TFontDialog; AValue: PChar): PChar; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PreviewText := AValue;
  end else
    Result := ToPChar(AObj.PreviewText);
  handleExceptionEnd
end;

//function
function FontDialog_Class(): TClass; extdecl;
begin
  Result := TFontDialog;
end;

//procedure
procedure FontDialog_ApplyClicked(AObj: TFontDialog); extdecl;
begin
  handleExceptionBegin
  AObj.ApplyClicked();
  handleExceptionEnd
end;

//property event
procedure FontDialog_SetOnApplyClicked(AObj: TFontDialog; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnApplyClicked}
  EventMethodCode
end;


exports
  FontDialog_Create,
  FontDialog_Font,
  FontDialog_MinFontSize,
  FontDialog_MaxFontSize,
  FontDialog_Options,
  FontDialog_PreviewText,
  FontDialog_Class,
  FontDialog_ApplyClicked,
  FontDialog_SetOnApplyClicked;