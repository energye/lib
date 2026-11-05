// constructor
function THeaderSections_Create(HeaderControl: TCustomHeaderControl): THeaderSections; extdecl;
begin
  {$define handleExceptionID := 19400}
  handleExceptionBegin
  Result := THeaderSections.Create(HeaderControl);
  handleExceptionEnd
end;

// function
function THeaderSections_AddToHeaderSection(AObj: THeaderSections): THeaderSection; extdecl;
begin
  {$define handleExceptionID := 19401}
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

// function
function THeaderSections_AddItem(AObj: THeaderSections; Item: THeaderSection; Index: Integer): THeaderSection; extdecl;
begin
  {$define handleExceptionID := 19402}
  handleExceptionBegin
  Result := AObj.AddItem(Item, Index);
  handleExceptionEnd
end;

// function
function THeaderSections_InsertWithInt(AObj: THeaderSections; Index: Integer): THeaderSection; extdecl;
begin
  {$define handleExceptionID := 19403}
  handleExceptionBegin
  Result := AObj.Insert(Index);
  handleExceptionEnd
end;

// procedure
procedure THeaderSections_DeleteWithInt(AObj: THeaderSections; Index: Integer); extdecl;
begin
  {$define handleExceptionID := 19404}
  handleExceptionBegin
  AObj.Delete(Index);
  handleExceptionEnd
end;

// property
function THeaderSections_ItemsWithIntToHeaderSection(ASet: LongBool; AObj: THeaderSections; Index: Integer; AValue: THeaderSection): THeaderSection; extdecl;
begin
  {$define handleExceptionID := 19405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Items[Index] := AValue
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

exports
  THeaderSections_Create,
  THeaderSections_AddToHeaderSection,
  THeaderSections_AddItem,
  THeaderSections_InsertWithInt,
  THeaderSections_DeleteWithInt,
  THeaderSections_ItemsWithIntToHeaderSection;