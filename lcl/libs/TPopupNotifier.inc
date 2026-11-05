// constructor
function TPopupNotifier_Create(AOwner: TComponent): TPopupNotifier; extdecl;
begin
  {$define handleExceptionID := 33900}
  handleExceptionBegin
  Result := TPopupNotifier.Create(AOwner);
  handleExceptionEnd
end;

// procedure
procedure TPopupNotifier_Hide(AObj: TPopupNotifier); extdecl;
begin
  {$define handleExceptionID := 33901}
  handleExceptionBegin
  AObj.Hide();
  handleExceptionEnd
end;

// procedure
procedure TPopupNotifier_Show(AObj: TPopupNotifier); extdecl;
begin
  {$define handleExceptionID := 33902}
  handleExceptionBegin
  AObj.Show();
  handleExceptionEnd
end;

// procedure
procedure TPopupNotifier_ShowAtPos(AObj: TPopupNotifier; x: Integer; y: Integer); extdecl;
begin
  {$define handleExceptionID := 33903}
  handleExceptionBegin
  AObj.ShowAtPos(x, y);
  handleExceptionEnd
end;

// property
function TPopupNotifier_Color(ASet: LongBool; AObj: TPopupNotifier; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 33904}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TPopupNotifier_Icon(ASet: LongBool; AObj: TPopupNotifier; AValue: TPicture): TPicture; extdecl;
begin
  {$define handleExceptionID := 33905}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Icon := AValue
  end else
    Result := AObj.Icon;
  handleExceptionEnd
end;

// property
procedure TPopupNotifier_Text(ASet: LongBool; AObj: TPopupNotifier; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 33906}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Text := AValue
  end else
    StringBufferCreate(AObj.Text, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TPopupNotifier_TextFont(ASet: LongBool; AObj: TPopupNotifier; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 33907}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TextFont := AValue
  end else
    Result := AObj.TextFont;
  handleExceptionEnd
end;

// property
procedure TPopupNotifier_Title(ASet: LongBool; AObj: TPopupNotifier; AValue: PChar; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 33908}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Title := AValue
  end else
    StringBufferCreate(AObj.Title, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TPopupNotifier_TitleFont(ASet: LongBool; AObj: TPopupNotifier; AValue: TFont): TFont; extdecl;
begin
  {$define handleExceptionID := 33909}
  handleExceptionBegin
  if ASet then
  begin
    AObj.TitleFont := AValue
  end else
    Result := AObj.TitleFont;
  handleExceptionEnd
end;

// property
function TPopupNotifier_Visible(ASet: LongBool; AObj: TPopupNotifier; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// event
procedure TPopupNotifier_OnClose(AObj: TPopupNotifier; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTCloseEvent}
  {$DEFINE EventName := OnClose}
  LCLEventMethodCode
end;

function TPopupNotifier_TClass(): TClass; extdecl;
begin
  Result := TPopupNotifier;
end;

exports
  TPopupNotifier_Create,
  TPopupNotifier_Hide,
  TPopupNotifier_Show,
  TPopupNotifier_ShowAtPos,
  TPopupNotifier_Color,
  TPopupNotifier_Icon,
  TPopupNotifier_Text,
  TPopupNotifier_TextFont,
  TPopupNotifier_Title,
  TPopupNotifier_TitleFont,
  TPopupNotifier_Visible,
  TPopupNotifier_OnClose,
  TPopupNotifier_TClass;