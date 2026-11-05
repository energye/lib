// constructor
function TCustomFrame_Create(AOwner: TComponent): TCustomFrame; extdecl;
begin
  {$define handleExceptionID := 21700}
  handleExceptionBegin
  Result := TCustomFrame.Create(AOwner);
  handleExceptionEnd
end;

// property
function TCustomFrame_ParentBackground(ASet: LongBool; AObj: TCustomFrame; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21701}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentBackground := AValue
  end else
    Result := AObj.ParentBackground;
  handleExceptionEnd
end;

function TCustomFrame_TClass(): TClass; extdecl;
begin
  Result := TCustomFrame;
end;

exports
  TCustomFrame_Create,
  TCustomFrame_ParentBackground,
  TCustomFrame_TClass;