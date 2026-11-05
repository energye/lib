// constructor
function TSynGutterChanges_Create(AOwner: TComponent): TSynGutterChanges; extdecl;
begin
  {$define handleExceptionID := 40200}
  handleExceptionBegin
  Result := TSynGutterChanges.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSynGutterChanges_ModifiedColor(ASet: LongBool; AObj: TSynGutterChanges; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 40201}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ModifiedColor := AValue
  end else
    Result := AObj.ModifiedColor;
  handleExceptionEnd
end;

// property
function TSynGutterChanges_SavedColor(ASet: LongBool; AObj: TSynGutterChanges; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 40202}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SavedColor := AValue
  end else
    Result := AObj.SavedColor;
  handleExceptionEnd
end;

function TSynGutterChanges_TClass(): TClass; extdecl;
begin
  Result := TSynGutterChanges;
end;

exports
  TSynGutterChanges_Create,
  TSynGutterChanges_ModifiedColor,
  TSynGutterChanges_SavedColor,
  TSynGutterChanges_TClass;