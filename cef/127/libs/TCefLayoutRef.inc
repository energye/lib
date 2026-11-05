// constructor
function TCefLayoutRef_Create(data: Pointer; out IntfLayout: ICefLayout): TCefLayoutRef; extdecl;
begin
  {$define handleExceptionID := 24600}
  handleExceptionBegin
  Result := TCefLayoutRef.Create(data);
  IntfLayout := Result as ICefLayout;
  handleExceptionEnd
end;

// function
procedure TCefLayoutRef_AsBoxLayout(AObj: ICefLayout; var Result: ICefBoxLayout); extdecl;
begin
  {$define handleExceptionID := 24601}
  handleExceptionBegin
  Result := AObj.AsBoxLayout();
  handleExceptionEnd
end;

// function
procedure TCefLayoutRef_AsFillLayout(AObj: ICefLayout; var Result: ICefFillLayout); extdecl;
begin
  {$define handleExceptionID := 24602}
  handleExceptionBegin
  Result := AObj.AsFillLayout();
  handleExceptionEnd
end;

// function
function TCefLayoutRef_IsValid(AObj: ICefLayout): LongBool; extdecl;
begin
  {$define handleExceptionID := 24603}
  handleExceptionBegin
  Result := AObj.IsValid();
  handleExceptionEnd
end;

// function static
procedure TCefLayoutRef_UnWrapWithPointer(data: Pointer; var Result: ICefLayout); extdecl;
begin
  Result := TCefLayoutRef.UnWrap(data);
end;

exports
  TCefLayoutRef_Create,
  TCefLayoutRef_AsBoxLayout,
  TCefLayoutRef_AsFillLayout,
  TCefLayoutRef_IsValid,
  TCefLayoutRef_UnWrapWithPointer;