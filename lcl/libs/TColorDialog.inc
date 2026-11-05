// constructor
function TColorDialog_Create(TheOwner: TComponent): TColorDialog; extdecl;
begin
  {$define handleExceptionID := 7000}
  handleExceptionBegin
  Result := TColorDialog.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TColorDialog_Color(ASet: LongBool; AObj: TColorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 7001}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Color := AValue
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

// property
function TColorDialog_CustomColors(ASet: LongBool; AObj: TColorDialog; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionID := 7002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.CustomColors := AValue
  end else
    Result := AObj.CustomColors;
  handleExceptionEnd
end;

// property
function TColorDialog_Options(ASet: LongBool; AObj: TColorDialog; AValue: TColorDialogOptions): TColorDialogOptions; extdecl;
begin
  {$define handleExceptionID := 7003}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Options := AValue
  end else
    Result := AObj.Options;
  handleExceptionEnd
end;

function TColorDialog_TClass(): TClass; extdecl;
begin
  Result := TColorDialog;
end;

exports
  TColorDialog_Create,
  TColorDialog_Color,
  TColorDialog_CustomColors,
  TColorDialog_Options,
  TColorDialog_TClass;