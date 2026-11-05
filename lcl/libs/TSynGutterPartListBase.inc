// constructor
function TSynGutterPartListBase_Create(AOwner: TComponent): TSynGutterPartListBase; extdecl;
begin
  {$define handleExceptionID := 40000}
  handleExceptionBegin
  Result := TSynGutterPartListBase.Create(AOwner);
  handleExceptionEnd
end;

// constructor
function TSynGutterPartListBase_CreateWithComponentSynGutterBase(AOwner: TComponent; AGutter: TSynGutterBase): TSynGutterPartListBase; extdecl;
begin
  {$define handleExceptionID := 40001}
  handleExceptionBegin
  Result := TSynGutterPartListBase.Create(AOwner, AGutter);
  handleExceptionEnd
end;

// property
function TSynGutterPartListBase_Part(ASet: LongBool; AObj: TSynGutterPartListBase; Index: Integer; AValue: TSynGutterPartBase): TSynGutterPartBase; extdecl;
begin
  {$define handleExceptionID := 40002}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Part[Index] := AValue
  end else
    Result := AObj.Part[Index];
  handleExceptionEnd
end;

// property
function TSynGutterPartListBase_ByClassCount(AObj: TSynGutterPartListBase; AClass: TSynGutterPartBaseClass): Integer; extdecl;
begin
  {$define handleExceptionID := 40003}
  handleExceptionBegin
  Result := AObj.ByClassCount[AClass];
  handleExceptionEnd
end;

// property
function TSynGutterPartListBase_ByClass(AObj: TSynGutterPartListBase; AClass: TSynGutterPartBaseClass; Index: Integer): TSynGutterPartBase; extdecl;
begin
  {$define handleExceptionID := 40004}
  handleExceptionBegin
  Result := AObj.ByClass[AClass, Index];
  handleExceptionEnd
end;

function TSynGutterPartListBase_TClass(): TClass; extdecl;
begin
  Result := TSynGutterPartListBase;
end;

exports
  TSynGutterPartListBase_Create,
  TSynGutterPartListBase_CreateWithComponentSynGutterBase,
  TSynGutterPartListBase_Part,
  TSynGutterPartListBase_ByClassCount,
  TSynGutterPartListBase_ByClass,
  TSynGutterPartListBase_TClass;