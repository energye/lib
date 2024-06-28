
//constructor
function ControlScrollBar_Create(AControl: TWinControl; AKind: TScrollBarKind): TControlScrollBar; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TControlScrollBar.Create(AControl, AKind);
  handleExceptionEnd
end;

//property
function ControlScrollBar_Kind(AObj: TControlScrollBar): TScrollBarKind; extdecl;
begin
  {$define handleExceptionFuncName :='Kind'}
  handleExceptionBegin
  Result := AObj.Kind;
  handleExceptionEnd
end;

//property
function ControlScrollBar_Size(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Size'}
  handleExceptionBegin
  Result := AObj.Size;
  handleExceptionEnd
end;

//property
function ControlScrollBar_Increment(AIsSet: LongBool; AObj: TControlScrollBar; AValue: TScrollBarInc): TScrollBarInc; extdecl;
begin
  {$define handleExceptionFuncName :='Increment'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Increment := AValue;
  end else
    Result := AObj.Increment;
  handleExceptionEnd
end;

//property
function ControlScrollBar_Page(AIsSet: LongBool; AObj: TControlScrollBar; AValue: TScrollBarInc): TScrollBarInc; extdecl;
begin
  {$define handleExceptionFuncName :='Page'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Page := AValue;
  end else
    Result := AObj.Page;
  handleExceptionEnd
end;

//property
function ControlScrollBar_Smooth(AIsSet: LongBool; AObj: TControlScrollBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Smooth'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Smooth := AValue;
  end else
    Result := AObj.Smooth;
  handleExceptionEnd
end;

//property
function ControlScrollBar_Position(AIsSet: LongBool; AObj: TControlScrollBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Position'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Position := AValue;
  end else
    Result := AObj.Position;
  handleExceptionEnd
end;

//property
function ControlScrollBar_Range(AIsSet: LongBool; AObj: TControlScrollBar; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='Range'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Range := AValue;
  end else
    Result := AObj.Range;
  handleExceptionEnd
end;

//property
function ControlScrollBar_Tracking(AIsSet: LongBool; AObj: TControlScrollBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Tracking'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Tracking := AValue;
  end else
    Result := AObj.Tracking;
  handleExceptionEnd
end;

//property
function ControlScrollBar_Visible(AIsSet: LongBool; AObj: TControlScrollBar; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Visible'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Visible := AValue;
  end else
    Result := AObj.Visible;
  handleExceptionEnd
end;

//function
function ControlScrollBar_IsScrollBarVisible(AObj: TControlScrollBar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsScrollBarVisible'}
  handleExceptionBegin
  Result := AObj.IsScrollBarVisible();
  handleExceptionEnd
end;

//function
function ControlScrollBar_ScrollPos(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ScrollPos'}
  handleExceptionBegin
  Result := AObj.ScrollPos();
  handleExceptionEnd
end;

//function
function ControlScrollBar_GetOtherScrollBar(AObj: TControlScrollBar): TControlScrollBar; extdecl;
begin
  {$define handleExceptionFuncName :='GetOtherScrollBar'}
  handleExceptionBegin
  Result := AObj.GetOtherScrollBar();
  handleExceptionEnd
end;

//function
function ControlScrollBar_ControlSize(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ControlSize'}
  handleExceptionBegin
  Result := AObj.ControlSize();
  handleExceptionEnd
end;

//function
function ControlScrollBar_ClientSize(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ClientSize'}
  handleExceptionBegin
  Result := AObj.ClientSize();
  handleExceptionEnd
end;

//function
function ControlScrollBar_ClientSizeWithBar(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ClientSizeWithBar'}
  handleExceptionBegin
  Result := AObj.ClientSizeWithBar();
  handleExceptionEnd
end;

//function
function ControlScrollBar_ClientSizeWithoutBar(AObj: TControlScrollBar): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='ClientSizeWithoutBar'}
  handleExceptionBegin
  Result := AObj.ClientSizeWithoutBar();
  handleExceptionEnd
end;

//function
function ControlScrollBar_Class(): TClass; extdecl;
begin
  Result := TControlScrollBar;
end;


exports
  ControlScrollBar_Create,
  ControlScrollBar_Kind,
  ControlScrollBar_Size,
  ControlScrollBar_Increment,
  ControlScrollBar_Page,
  ControlScrollBar_Smooth,
  ControlScrollBar_Position,
  ControlScrollBar_Range,
  ControlScrollBar_Tracking,
  ControlScrollBar_Visible,
  ControlScrollBar_IsScrollBarVisible,
  ControlScrollBar_ScrollPos,
  ControlScrollBar_GetOtherScrollBar,
  ControlScrollBar_ControlSize,
  ControlScrollBar_ClientSize,
  ControlScrollBar_ClientSizeWithBar,
  ControlScrollBar_ClientSizeWithoutBar,
  ControlScrollBar_Class;