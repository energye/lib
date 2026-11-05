// constructor
function TSynEditMark_Create(ASynEdit: TSynEditBase): TSynEditMark; extdecl;
begin
  {$define handleExceptionID := 37500}
  handleExceptionBegin
  Result := TSynEditMark.Create(ASynEdit);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMark_IncChangeLock(AObj: TSynEditMark); extdecl;
begin
  {$define handleExceptionID := 37501}
  handleExceptionBegin
  AObj.IncChangeLock();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMark_DecChangeLock(AObj: TSynEditMark); extdecl;
begin
  {$define handleExceptionID := 37502}
  handleExceptionBegin
  AObj.DecChangeLock();
  handleExceptionEnd
end;

// property
function TSynEditMark_OwnerEdit(ASet: LongBool; AObj: TSynEditMark; AValue: TSynEditBase): TSynEditBase; extdecl;
begin
  {$define handleExceptionID := 37503}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OwnerEdit := AValue
  end else
    Result := AObj.OwnerEdit;
  handleExceptionEnd
end;

// property
function TSynEditMark_OldLine(AObj: TSynEditMark): integer; extdecl;
begin
  {$define handleExceptionID := 37504}
  handleExceptionBegin
  Result := AObj.OldLine;
  handleExceptionEnd
end;

// property
function TSynEditMark_Line(ASet: LongBool; AObj: TSynEditMark; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 37505}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Line := AValue
  end else
    Result := AObj.Line;
  handleExceptionEnd
end;

// property
function TSynEditMark_Column(ASet: LongBool; AObj: TSynEditMark; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 37506}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Column := AValue
  end else
    Result := AObj.Column;
  handleExceptionEnd
end;

// property
function TSynEditMark_Priority(ASet: LongBool; AObj: TSynEditMark; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 37507}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Priority := AValue
  end else
    Result := AObj.Priority;
  handleExceptionEnd
end;

// property
function TSynEditMark_Visible(ASet: LongBool; AObj: TSynEditMark; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37508}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

// property
function TSynEditMark_BookmarkNumber(ASet: LongBool; AObj: TSynEditMark; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 37509}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BookmarkNumber := AValue
  end else
    Result := AObj.BookmarkNumber;
  handleExceptionEnd
end;

// property
function TSynEditMark_IsBookmark(AObj: TSynEditMark): LongBool; extdecl;
begin
  {$define handleExceptionID := 37510}
  handleExceptionBegin
  Result := AObj.IsBookmark;
  handleExceptionEnd
end;

// property
function TSynEditMark_InternalImage(ASet: LongBool; AObj: TSynEditMark; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 37511}
  handleExceptionBegin
  if ASet then
  begin
    AObj.InternalImage := AValue
  end else
    Result := AObj.InternalImage;
  handleExceptionEnd
end;

// property
function TSynEditMark_ImageIndex(ASet: LongBool; AObj: TSynEditMark; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 37512}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageIndex := AValue
  end else
    Result := AObj.ImageIndex;
  handleExceptionEnd
end;

// property
function TSynEditMark_ImageList(ASet: LongBool; AObj: TSynEditMark; AValue: TCustomImageList): TCustomImageList; extdecl;
begin
  {$define handleExceptionID := 37513}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ImageList := AValue
  end else
    Result := AObj.ImageList;
  handleExceptionEnd
end;

exports
  TSynEditMark_Create,
  TSynEditMark_IncChangeLock,
  TSynEditMark_DecChangeLock,
  TSynEditMark_OwnerEdit,
  TSynEditMark_OldLine,
  TSynEditMark_Line,
  TSynEditMark_Column,
  TSynEditMark_Priority,
  TSynEditMark_Visible,
  TSynEditMark_BookmarkNumber,
  TSynEditMark_IsBookmark,
  TSynEditMark_InternalImage,
  TSynEditMark_ImageIndex,
  TSynEditMark_ImageList;