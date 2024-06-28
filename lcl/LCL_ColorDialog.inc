
//constructor
function ColorDialog_Create(TheOwner: TComponent): TColorDialog; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TColorDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function ColorDialog_Color(AIsSet: LongBool; AObj: TColorDialog; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='Color'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Color := AValue;
  end else
    Result := AObj.Color;
  handleExceptionEnd
end;

//property
function ColorDialog_CustomColors(AIsSet: LongBool; AObj: TColorDialog; AValue: TStrings): TStrings; extdecl;
begin
  {$define handleExceptionFuncName :='CustomColors'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.CustomColors := AValue;
  end else
    Result := AObj.CustomColors;
  handleExceptionEnd
end;

//function
function ColorDialog_Class(): TClass; extdecl;
begin
  Result := TColorDialog;
end;


exports
  ColorDialog_Create,
  ColorDialog_Color,
  ColorDialog_CustomColors,
  ColorDialog_Class;