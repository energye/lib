// constructor manually create
function TCtrlBand_Create(): TCtrlBand; extdecl;
begin
  {$define handleExceptionID := 33500}
  handleExceptionBegin
  Result := TCtrlBand.Create();
  handleExceptionEnd
end;

// property
procedure TCtrlBand_BandRect(ASet: LongBool; AObj: TCtrlBand; var AValue: TRect; var Result: TRect); extdecl;
begin
  {$define handleExceptionID := 33501}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BandRect := AValue
  end else
    Result := AObj.BandRect;
  handleExceptionEnd
end;

// property
function TCtrlBand_Bottom(AObj: TCtrlBand): Integer; extdecl;
begin
  {$define handleExceptionID := 33502}
  handleExceptionBegin
  Result := AObj.Bottom;
  handleExceptionEnd
end;

// property
function TCtrlBand_Control(ASet: LongBool; AObj: TCtrlBand; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 33503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Control := AValue
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

// property
function TCtrlBand_ControlHeight(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33504}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ControlHeight := AValue
  end else
    Result := AObj.ControlHeight;
  handleExceptionEnd
end;

// property
function TCtrlBand_ControlLeft(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ControlLeft := AValue
  end else
    Result := AObj.ControlLeft;
  handleExceptionEnd
end;

// property
function TCtrlBand_ControlTop(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ControlTop := AValue
  end else
    Result := AObj.ControlTop;
  handleExceptionEnd
end;

// property
function TCtrlBand_ControlWidth(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ControlWidth := AValue
  end else
    Result := AObj.ControlWidth;
  handleExceptionEnd
end;

// property
function TCtrlBand_ControlVisible(ASet: LongBool; AObj: TCtrlBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ControlVisible := AValue
  end else
    Result := AObj.ControlVisible;
  handleExceptionEnd
end;

// property
function TCtrlBand_Height(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Height := AValue
  end else
    Result := AObj.Height;
  handleExceptionEnd
end;

// property
function TCtrlBand_InitLeft(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33510}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InitLeft := AValue
  end else
    Result := AObj.InitLeft;
  handleExceptionEnd
end;

// property
function TCtrlBand_InitTop(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InitTop := AValue
  end else
    Result := AObj.InitTop;
  handleExceptionEnd
end;

// property
function TCtrlBand_Left(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33512}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Left := AValue
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TCtrlBand_Right(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33513}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Right := AValue
  end else
    Result := AObj.Right;
  handleExceptionEnd
end;

// property
function TCtrlBand_Top(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33514}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Top := AValue
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TCtrlBand_Visible(ASet: LongBool; AObj: TCtrlBand; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 33515}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TCtrlBand_Width(ASet: LongBool; AObj: TCtrlBand; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 33516}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Width := AValue
  end else
    Result := AObj.Width;
  handleExceptionEnd
end;

exports
  TCtrlBand_Create,
  TCtrlBand_BandRect,
  TCtrlBand_Bottom,
  TCtrlBand_Control,
  TCtrlBand_ControlHeight,
  TCtrlBand_ControlLeft,
  TCtrlBand_ControlTop,
  TCtrlBand_ControlWidth,
  TCtrlBand_ControlVisible,
  TCtrlBand_Height,
  TCtrlBand_InitLeft,
  TCtrlBand_InitTop,
  TCtrlBand_Left,
  TCtrlBand_Right,
  TCtrlBand_Top,
  TCtrlBand_Visible,
  TCtrlBand_Width;