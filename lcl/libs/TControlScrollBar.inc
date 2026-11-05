// constructor
function TControlScrollBar_Create(AControl: TWinControl; AKind: TScrollBarKind): TControlScrollBar; extdecl;
begin
  {$define handleExceptionID := 21900}
  handleExceptionBegin
  Result := TControlScrollBar.Create(AControl, AKind);
  handleExceptionEnd
end;

// function
function TControlScrollBar_IsScrollBarVisible(AObj: TControlScrollBar): LongBool; extdecl;
begin
  {$define handleExceptionID := 21901}
  handleExceptionBegin
  Result := AObj.IsScrollBarVisible();
  handleExceptionEnd
end;

// function
function TControlScrollBar_ScrollPos(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionID := 21902}
  handleExceptionBegin
  Result := AObj.ScrollPos();
  handleExceptionEnd
end;

// function
function TControlScrollBar_GetOtherScrollBar(AObj: TControlScrollBar): TControlScrollBar; extdecl;
begin
  {$define handleExceptionID := 21903}
  handleExceptionBegin
  Result := AObj.GetOtherScrollBar();
  handleExceptionEnd
end;

// function
function TControlScrollBar_ControlSize(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionID := 21904}
  handleExceptionBegin
  Result := AObj.ControlSize();
  handleExceptionEnd
end;

// function
function TControlScrollBar_ClientSize(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionID := 21905}
  handleExceptionBegin
  Result := AObj.ClientSize();
  handleExceptionEnd
end;

// function
function TControlScrollBar_ClientSizeWithBar(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionID := 21906}
  handleExceptionBegin
  Result := AObj.ClientSizeWithBar();
  handleExceptionEnd
end;

// function
function TControlScrollBar_ClientSizeWithoutBar(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionID := 21907}
  handleExceptionBegin
  Result := AObj.ClientSizeWithoutBar();
  handleExceptionEnd
end;

// property
function TControlScrollBar_Kind(AObj: TControlScrollBar): TScrollBarKind; extdecl;
begin
  {$define handleExceptionID := 21908}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

// property
function TControlScrollBar_Size(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionID := 21909}
  handleExceptionBegin
  Result := AObj.Size;
  handleExceptionEnd
end;

// property
function TControlScrollBar_Increment(ASet: LongBool; AObj: TControlScrollBar; AValue: TScrollBarInc): TScrollBarInc; extdecl;
begin
  {$define handleExceptionID := 21910}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Increment := AValue
  end else
    Result := AObj.Increment;
  handleExceptionEnd
end;

// property
function TControlScrollBar_Page(ASet: LongBool; AObj: TControlScrollBar; AValue: TScrollBarInc): TScrollBarInc; extdecl;
begin
  {$define handleExceptionID := 21911}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Page := AValue
  end else
    Result := AObj.Page;
  handleExceptionEnd
end;

// property
function TControlScrollBar_Smooth(ASet: LongBool; AObj: TControlScrollBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21912}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Smooth := AValue
  end else
    Result := AObj.Smooth;
  handleExceptionEnd
end;

// property
function TControlScrollBar_Position(ASet: LongBool; AObj: TControlScrollBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 21913}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Position := AValue
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

// property
function TControlScrollBar_Range(ASet: LongBool; AObj: TControlScrollBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 21914}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Range := AValue
  end else
    Result := AObj.Range;
  handleExceptionEnd
end;

// property
function TControlScrollBar_Tracking(ASet: LongBool; AObj: TControlScrollBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21915}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Tracking := AValue
  end else
    Result := AObj.Tracking;
  handleExceptionEnd
end;

// property
function TControlScrollBar_Visible(ASet: LongBool; AObj: TControlScrollBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 21916}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Visible := AValue
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

exports
  TControlScrollBar_Create,
  TControlScrollBar_IsScrollBarVisible,
  TControlScrollBar_ScrollPos,
  TControlScrollBar_GetOtherScrollBar,
  TControlScrollBar_ControlSize,
  TControlScrollBar_ClientSize,
  TControlScrollBar_ClientSizeWithBar,
  TControlScrollBar_ClientSizeWithoutBar,
  TControlScrollBar_Kind,
  TControlScrollBar_Size,
  TControlScrollBar_Increment,
  TControlScrollBar_Page,
  TControlScrollBar_Smooth,
  TControlScrollBar_Position,
  TControlScrollBar_Range,
  TControlScrollBar_Tracking,
  TControlScrollBar_Visible;