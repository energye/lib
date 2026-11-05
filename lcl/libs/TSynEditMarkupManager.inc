// constructor
function TSynEditMarkupManager_Create(ASynEdit: TSynEditBase): TSynEditMarkupManager; extdecl;
begin
  {$define handleExceptionID := 36800}
  handleExceptionBegin
  Result := TSynEditMarkupManager.Create(ASynEdit);
  handleExceptionEnd
end;

// function
function TSynEditMarkupManager_Count(AObj: TSynEditMarkupManager): Integer; extdecl;
begin
  {$define handleExceptionID := 36801}
  handleExceptionBegin
  Result := AObj.Count();
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkupManager_DoVisibleChanged(AObj: TSynEditMarkupManager; AVisible: LongBool); extdecl;
begin
  {$define handleExceptionID := 36802}
  handleExceptionBegin
  AObj.DoVisibleChanged(AVisible);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkupManager_AddMarkUp(AObj: TSynEditMarkupManager; aMarkUp: TSynEditMarkup; AsFirst: LongBool); extdecl;
begin
  {$define handleExceptionID := 36803}
  handleExceptionBegin
  AObj.AddMarkUp(aMarkUp, AsFirst);
  handleExceptionEnd
end;

// procedure
procedure TSynEditMarkupManager_RemoveMarkUp(AObj: TSynEditMarkupManager; aMarkUp: TSynEditMarkup); extdecl;
begin
  {$define handleExceptionID := 36804}
  handleExceptionBegin
  AObj.RemoveMarkUp(aMarkUp);
  handleExceptionEnd
end;

// property
function TSynEditMarkupManager_Markup(AObj: TSynEditMarkupManager; Index: integer): TSynEditMarkup; extdecl;
begin
  {$define handleExceptionID := 36805}
  handleExceptionBegin
  Result := AObj.Markup[Index];
  handleExceptionEnd
end;

// property
function TSynEditMarkupManager_MarkupByClass(AObj: TSynEditMarkupManager; Index: TSynEditMarkupClass): TSynEditMarkup; extdecl;
begin
  {$define handleExceptionID := 36806}
  handleExceptionBegin
  Result := AObj.MarkupByClass[Index];
  handleExceptionEnd
end;

exports
  TSynEditMarkupManager_Create,
  TSynEditMarkupManager_Count,
  TSynEditMarkupManager_DoVisibleChanged,
  TSynEditMarkupManager_AddMarkUp,
  TSynEditMarkupManager_RemoveMarkUp,
  TSynEditMarkupManager_Markup,
  TSynEditMarkupManager_MarkupByClass;