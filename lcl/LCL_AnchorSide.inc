
//constructor
function AnchorSide_Create(TheOwner: TControl; TheKind: TAnchorKind): TAnchorSide; extdecl;
begin
  handleExceptionBegin
  Result := TAnchorSide.Create(TheOwner, TheKind);
  handleExceptionEnd
end;

//property
function AnchorSide_Owner(AObj: TAnchorSide): TControl; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function AnchorSide_Kind(AObj: TAnchorSide): TAnchorKind; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function AnchorSide_Control(AIsSet: LongBool; AObj: TAnchorSide; AValue: TControl): TControl; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Control := AValue;
  end else
    Result := AObj.Control;
  handleExceptionEnd
end;

//property
function AnchorSide_Side(AIsSet: LongBool; AObj: TAnchorSide; AValue: TAnchorSideReference): TAnchorSideReference; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Side := AValue;
  end else
    Result := AObj.Side;
  handleExceptionEnd
end;

//function
function AnchorSide_CheckSidePosition(AObj: TAnchorSide; NewControl: TControl; NewSide: TAnchorSideReference; out OutReferenceControl: TControl; out OutReferenceSide: TAnchorSideReference; out OutPosition: Integer): LongBool; extdecl;
var
  RetOutReferenceControl: TControl;
  RetOutReferenceSide: TAnchorSideReference;
  RetOutPosition: Integer;
begin
  handleExceptionBegin
  RetOutReferenceControl := OutReferenceControl;
  RetOutReferenceSide := OutReferenceSide;
  RetOutPosition := OutPosition;
  Result := AObj.CheckSidePosition(NewControl, NewSide, RetOutReferenceControl, RetOutReferenceSide, RetOutPosition);
  OutReferenceControl := RetOutReferenceControl;
  OutReferenceSide := RetOutReferenceSide;
  OutPosition := RetOutPosition;
  handleExceptionEnd
end;

//function
function AnchorSide_IsAnchoredToParent(AObj: TAnchorSide; ParentSide: TAnchorKind): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.IsAnchoredToParent(ParentSide);
  handleExceptionEnd
end;

//function
function AnchorSide_Class(): TClass; extdecl;
begin
  Result := TAnchorSide;
end;

//procedure
procedure AnchorSide_GetSidePosition(AObj: TAnchorSide; out OutReferenceControl: TControl; out OutReferenceSide: TAnchorSideReference; out OutPosition: Integer); extdecl;
var
  RetOutReferenceControl: TControl;
  RetOutReferenceSide: TAnchorSideReference;
  RetOutPosition: Integer;
begin
  handleExceptionBegin
  RetOutReferenceControl := OutReferenceControl;
  RetOutReferenceSide := OutReferenceSide;
  RetOutPosition := OutPosition;
  AObj.GetSidePosition(RetOutReferenceControl, RetOutReferenceSide, RetOutPosition);
  OutReferenceControl := RetOutReferenceControl;
  OutReferenceSide := RetOutReferenceSide;
  OutPosition := RetOutPosition;
  handleExceptionEnd
end;

//procedure
procedure AnchorSide_FixCenterAnchoring(AObj: TAnchorSide); extdecl;
begin
  handleExceptionBegin
  AObj.FixCenterAnchoring();
  handleExceptionEnd
end;


exports
  AnchorSide_Create,
  AnchorSide_Owner,
  AnchorSide_Kind,
  AnchorSide_Control,
  AnchorSide_Side,
  AnchorSide_CheckSidePosition,
  AnchorSide_IsAnchoredToParent,
  AnchorSide_Class,
  AnchorSide_GetSidePosition,
  AnchorSide_FixCenterAnchoring;