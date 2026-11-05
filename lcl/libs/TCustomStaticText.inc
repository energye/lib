// constructor
function TCustomStaticText_Create(AOwner: TComponent): TCustomStaticText; extdecl;
begin
  {$define handleExceptionID := 6000}
  handleExceptionBegin
  Result := TCustomStaticText.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCustomStaticText_Alignment(ASet: LongBool; AObj: TCustomStaticText; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 6001}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TCustomStaticText_BorderStyle(ASet: LongBool; AObj: TCustomStaticText; AValue: TStaticBorderStyle): TStaticBorderStyle; extdecl;
begin
  {$define handleExceptionID := 6002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BorderStyle := AValue
  end else
    Result := AObj.BorderStyle;
  handleExceptionEnd
end;

// property
function TCustomStaticText_FocusControl(ASet: LongBool; AObj: TCustomStaticText; AValue: TWinControl): TWinControl; extdecl;
begin
  {$define handleExceptionID := 6003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FocusControl := AValue
  end else
    Result := AObj.FocusControl;
  handleExceptionEnd
end;

// property
function TCustomStaticText_ShowAccelChar(ASet: LongBool; AObj: TCustomStaticText; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6004}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ShowAccelChar := AValue
  end else
    Result := AObj.ShowAccelChar;
  handleExceptionEnd
end;

// property
function TCustomStaticText_Transparent(ASet: LongBool; AObj: TCustomStaticText; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 6005}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Transparent := AValue
  end else
    Result := AObj.Transparent;
  handleExceptionEnd
end;

function TCustomStaticText_TClass(): TClass; extdecl;
begin
  Result := TCustomStaticText;
end;

exports
  TCustomStaticText_Create,
  TCustomStaticText_Alignment,
  TCustomStaticText_BorderStyle,
  TCustomStaticText_FocusControl,
  TCustomStaticText_ShowAccelChar,
  TCustomStaticText_Transparent,
  TCustomStaticText_TClass;