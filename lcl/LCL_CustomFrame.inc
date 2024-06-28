
//constructor
function CustomFrame_Create(AOwner: TComponent): TCustomFrame; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCustomFrame.Create(AOwner);
  handleExceptionEnd
end;

//property
function CustomFrame_ParentBackground(AIsSet: LongBool; AObj: TCustomFrame; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentBackground'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentBackground := AValue;
  end else
    Result := AObj.ParentBackground;
  handleExceptionEnd
end;

//function
function CustomFrame_Class(): TClass; extdecl;
begin
  Result := TCustomFrame;
end;


exports
  CustomFrame_Create,
  CustomFrame_ParentBackground,
  CustomFrame_Class;