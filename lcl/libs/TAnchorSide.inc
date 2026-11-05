// constructor
function TAnchorSide_Create(TheOwner: TControl; TheKind: TAnchorKind): TAnchorSide; extdecl;
begin
  {$define handleExceptionID := 22200}
  handleExceptionBegin
  Result := TAnchorSide.Create(TheOwner, TheKind);
  handleExceptionEnd
end;

// function
function TAnchorSide_CheckSidePosition(AObj: TAnchorSide; NewControl: TControl; NewSide: TAnchorSideReference; var ReferenceControl: TControl; var ReferenceSide: TAnchorSideReference; var Position: Integer): LongBool; extdecl;
var
  OutReferenceControl: TControl;
  OutReferenceSide: TAnchorSideReference;
  OutPosition: Integer;
begin
  {$define handleExceptionID := 22201}
  handleExceptionBegin
  Result := AObj.CheckSidePosition(NewControl, NewSide, OutReferenceControl, OutReferenceSide, OutPosition);
  ReferenceControl := OutReferenceControl;
  ReferenceSide := OutReferenceSide;
  Position := OutPosition;
  handleExceptionEnd
end;

// function
function TAnchorSide_IsAnchoredToParent(AObj: TAnchorSide; ParentSide: TAnchorKind): LongBool; extdecl;
begin
  {$define handleExceptionID := 22202}
  handleExceptionBegin
  Result := AObj.IsAnchoredToParent(ParentSide);
  handleExceptionEnd
end;

// procedure
procedure TAnchorSide_GetSidePosition(AObj: TAnchorSide; var ReferenceControl: TControl; var ReferenceSide: TAnchorSideReference; var Position: Integer); extdecl;
var
  OutReferenceControl: TControl;
  OutReferenceSide: TAnchorSideReference;
  OutPosition: Integer;
begin
  {$define handleExceptionID := 22203}
  handleExceptionBegin
  AObj.GetSidePosition(OutReferenceControl, OutReferenceSide, OutPosition);
  ReferenceControl := OutReferenceControl;
  ReferenceSide := OutReferenceSide;
  Position := OutPosition;
  handleExceptionEnd
end;

// procedure
procedure TAnchorSide_FixCenterAnchoring(AObj: TAnchorSide); extdecl;
begin
  {$define handleExceptionID := 22204}
  handleExceptionBegin
  AObj.FixCenterAnchoring();
  handleExceptionEnd
end;

// property
function TAnchorSide_Owner(AObj: TAnchorSide): TControl; extdecl;
begin
  {$define handleExceptionID := 22205}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

// property
function TAnchorSide_Kind(AObj: TAnchorSide): TAnchorKind; extdecl;
begin
  {$define handleExceptionID := 22206}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

// property
function TAnchorSide_Control(ASet: LongBool; AObj: TAnchorSide; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionID := 22207}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Control := AValue
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

// property
function TAnchorSide_Side(ASet: LongBool; AObj: TAnchorSide; AValue: TAnchorSideReference): TAnchorSideReference; extdecl;
begin
  {$define handleExceptionID := 22208}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Side := AValue
  end else
    Result := AObj.Side;
  handleExceptionEnd
end;

exports
  TAnchorSide_Create,
  TAnchorSide_CheckSidePosition,
  TAnchorSide_IsAnchoredToParent,
  TAnchorSide_GetSidePosition,
  TAnchorSide_FixCenterAnchoring,
  TAnchorSide_Owner,
  TAnchorSide_Kind,
  TAnchorSide_Control,
  TAnchorSide_Side;