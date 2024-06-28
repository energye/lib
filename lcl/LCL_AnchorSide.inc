
//constructor
function AnchorSide_Create(TheOwner: TControl; TheKind: TAnchorKind): TAnchorSide; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TAnchorSide.Create(TheOwner, TheKind);
  handleExceptionEnd
end;

//property
function AnchorSide_Owner(AObj: TAnchorSide): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='Owner'}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//property
function AnchorSide_Kind(AObj: TAnchorSide): TAnchorKind; extdecl;
begin
  {$define handleExceptionFuncName :='Kind'}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function AnchorSide_Control(AIsSet: LongBool; AObj: TAnchorSide; AValue: TControl): TControl; extdecl;
begin
  {$define handleExceptionFuncName :='Control'}
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
  {$define handleExceptionFuncName :='Side'}
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
  {$define handleExceptionFuncName :='CheckSidePosition'}
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
  {$define handleExceptionFuncName :='IsAnchoredToParent'}
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
  {$define handleExceptionFuncName :='GetSidePosition'}
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
  {$define handleExceptionFuncName :='FixCenterAnchoring'}
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