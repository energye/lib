
//constructor
function HeaderSections_Create(HeaderControl: TCustomHeaderControl): THeaderSections; extdecl;
begin
  handleExceptionBegin
  Result := THeaderSections.Create(HeaderControl);
  handleExceptionEnd
end;

//property
function HeaderSections_ItemsForHeaderSection(AIsSet: LongBool; AObj: THeaderSections; Index: Integer; AValue: THeaderSection): THeaderSection; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Items[Index] := AValue;
  end else
    Result := AObj.Items[Index];
  handleExceptionEnd
end;

//function
function HeaderSections_AddForHeaderSection(AObj: THeaderSections): THeaderSection; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Add();
  handleExceptionEnd
end;

//function
function HeaderSections_AddItem(AObj: THeaderSections; Item: THeaderSection; Index: Integer): THeaderSection; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddItem(Item, Index);
  handleExceptionEnd
end;

//function
function HeaderSections_InsertForHeaderSection(AObj: THeaderSections; Index: Integer): THeaderSection; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Insert(Index);
  handleExceptionEnd
end;

//function
function HeaderSections_Class(): TClass; extdecl;
begin
  Result := THeaderSections;
end;


exports
  HeaderSections_Create,
  HeaderSections_ItemsForHeaderSection,
  HeaderSections_AddForHeaderSection,
  HeaderSections_AddItem,
  HeaderSections_InsertForHeaderSection,
  HeaderSections_Class;