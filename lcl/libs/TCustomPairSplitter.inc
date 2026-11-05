// constructor
function TCustomPairSplitter_Create(TheOwner: TComponent): TCustomPairSplitter; extdecl;
begin
  {$define handleExceptionID := 33600}
  handleExceptionBegin
  Result := TCustomPairSplitter.Create(TheOwner);
  handleExceptionEnd
end;

// function
function TCustomPairSplitter_ChildClassAllowed(AObj: TCustomPairSplitter; ChildClass: TClass): LongBool; extdecl;
begin
  {$define handleExceptionID := 33601}
  handleExceptionBegin
  Result := AObj.ChildClassAllowed(ChildClass);
  handleExceptionEnd
end;

// procedure
procedure TCustomPairSplitter_CreateWnd(AObj: TCustomPairSplitter); extdecl;
begin
  {$define handleExceptionID := 33602}
  handleExceptionBegin
  AObj.CreateWnd();
  handleExceptionEnd
end;

// procedure
procedure TCustomPairSplitter_UpdatePosition(AObj: TCustomPairSplitter); extdecl;
begin
  {$define handleExceptionID := 33603}
  handleExceptionBegin
  AObj.UpdatePosition();
  handleExceptionEnd
end;

// procedure
procedure TCustomPairSplitter_CreateSides(AObj: TCustomPairSplitter); extdecl;
begin
  {$define handleExceptionID := 33604}
  handleExceptionBegin
  AObj.CreateSides();
  handleExceptionEnd
end;

// procedure
procedure TCustomPairSplitter_Loaded(AObj: TCustomPairSplitter); extdecl;
begin
  {$define handleExceptionID := 33605}
  handleExceptionBegin
  AObj.Loaded();
  handleExceptionEnd
end;

// property
function TCustomPairSplitter_Sides(AObj: TCustomPairSplitter; Index: integer): TPairSplitterSide; extdecl;
begin
  {$define handleExceptionID := 33606}
  handleExceptionBegin
  Result := AObj.Sides[Index];
  handleExceptionEnd
end;

// property
function TCustomPairSplitter_SplitterType(ASet: LongBool; AObj: TCustomPairSplitter; AValue: TPairSplitterType): TPairSplitterType; extdecl;
begin
  {$define handleExceptionID := 33607}
  handleExceptionBegin
  if ASet then
  begin
    AObj.SplitterType := AValue
  end else
    Result := AObj.SplitterType;
  handleExceptionEnd
end;

// property
function TCustomPairSplitter_Position(ASet: LongBool; AObj: TCustomPairSplitter; AValue: integer): integer; extdecl;
begin
  {$define handleExceptionID := 33608}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

function TCustomPairSplitter_TClass(): TClass; extdecl;
begin
  Result := TCustomPairSplitter;
end;

exports
  TCustomPairSplitter_Create,
  TCustomPairSplitter_ChildClassAllowed,
  TCustomPairSplitter_CreateWnd,
  TCustomPairSplitter_UpdatePosition,
  TCustomPairSplitter_CreateSides,
  TCustomPairSplitter_Loaded,
  TCustomPairSplitter_Sides,
  TCustomPairSplitter_SplitterType,
  TCustomPairSplitter_Position,
  TCustomPairSplitter_TClass;