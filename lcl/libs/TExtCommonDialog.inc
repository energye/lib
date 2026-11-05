// constructor
function TExtCommonDialog_Create(AOwner: TComponent): TExtCommonDialog; extdecl;
begin
  {$define handleExceptionID := 7800}
  handleExceptionBegin
  Result := TExtCommonDialog.Create(AOwner);
  handleExceptionEnd
end;

// property
function TExtCommonDialog_Left(ASet: LongBool; AObj: TExtCommonDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 7801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Left := AValue
  end else
    Result := AObj.Left;
  handleExceptionEnd
end;

// property
function TExtCommonDialog_Top(ASet: LongBool; AObj: TExtCommonDialog; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 7802}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Top := AValue
  end else
    Result := AObj.Top;
  handleExceptionEnd
end;

// property
function TExtCommonDialog_DialogPosition(ASet: LongBool; AObj: TExtCommonDialog; AValue: TPosition): TPosition; extdecl;
begin
  {$define handleExceptionID := 7803}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DialogPosition := AValue
  end else
    Result := AObj.DialogPosition;
  handleExceptionEnd
end;

function TExtCommonDialog_TClass(): TClass; extdecl;
begin
  Result := TExtCommonDialog;
end;

exports
  TExtCommonDialog_Create,
  TExtCommonDialog_Left,
  TExtCommonDialog_Top,
  TExtCommonDialog_DialogPosition,
  TExtCommonDialog_TClass;