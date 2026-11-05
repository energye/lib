// constructor
function TActionLink_Create(AClient: TObject): TActionLink; extdecl;
begin
  {$define handleExceptionID := 32700}
  handleExceptionBegin
  Result := TActionLink.Create(AClient);
  handleExceptionEnd
end;

// function
function TActionLink_IsCaptionLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32701}
  handleExceptionBegin
  Result := AObj.IsCaptionLinked();
  handleExceptionEnd
end;

// function
function TActionLink_IsCheckedLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32702}
  handleExceptionBegin
  Result := AObj.IsCheckedLinked();
  handleExceptionEnd
end;

// function
function TActionLink_IsEnabledLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32703}
  handleExceptionBegin
  Result := AObj.IsEnabledLinked();
  handleExceptionEnd
end;

// function
function TActionLink_IsGroupIndexLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32704}
  handleExceptionBegin
  Result := AObj.IsGroupIndexLinked();
  handleExceptionEnd
end;

// function
function TActionLink_IsHelpContextLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32705}
  handleExceptionBegin
  Result := AObj.IsHelpContextLinked();
  handleExceptionEnd
end;

// function
function TActionLink_IsHelpLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32706}
  handleExceptionBegin
  Result := AObj.IsHelpLinked();
  handleExceptionEnd
end;

// function
function TActionLink_IsHintLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32707}
  handleExceptionBegin
  Result := AObj.IsHintLinked();
  handleExceptionEnd
end;

// function
function TActionLink_IsImageIndexLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32708}
  handleExceptionBegin
  Result := AObj.IsImageIndexLinked();
  handleExceptionEnd
end;

// function
function TActionLink_IsShortCutLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32709}
  handleExceptionBegin
  Result := AObj.IsShortCutLinked();
  handleExceptionEnd
end;

// function
function TActionLink_IsVisibleLinked(AObj: TActionLink): LongBool; extdecl;
begin
  {$define handleExceptionID := 32710}
  handleExceptionBegin
  Result := AObj.IsVisibleLinked();
  handleExceptionEnd
end;

exports
  TActionLink_Create,
  TActionLink_IsCaptionLinked,
  TActionLink_IsCheckedLinked,
  TActionLink_IsEnabledLinked,
  TActionLink_IsGroupIndexLinked,
  TActionLink_IsHelpContextLinked,
  TActionLink_IsHelpLinked,
  TActionLink_IsHintLinked,
  TActionLink_IsImageIndexLinked,
  TActionLink_IsShortCutLinked,
  TActionLink_IsVisibleLinked;