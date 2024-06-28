
//property
function IDesigner_LookupRoot(AObj: TIDesigner): TComponent; extdecl;
begin
  {$define handleExceptionFuncName :='LookupRoot'}
  handleExceptionBegin
  Result := AObj.LookupRoot;
  handleExceptionEnd
end;

//property
function IDesigner_DefaultFormBoundsValid(AIsSet: LongBool; AObj: TIDesigner; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='DefaultFormBoundsValid'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DefaultFormBoundsValid := AValue;
  end else
    Result := AObj.DefaultFormBoundsValid;
  handleExceptionEnd
end;

//function
function IDesigner_IsDesignMsg(AObj: TIDesigner; Sender: TControl; var Message: TLMessage): LongBool; extdecl;
var
  RetMessage: TLMessage;
begin
  {$define handleExceptionFuncName :='IsDesignMsg'}
  handleExceptionBegin
  RetMessage := Message;
  Result := AObj.IsDesignMsg(Sender, RetMessage);
  Message := RetMessage;
  handleExceptionEnd
end;

//function
function IDesigner_GetShiftState(AObj: TIDesigner): TShiftState; extdecl;
begin
  {$define handleExceptionFuncName :='GetShiftState'}
  handleExceptionBegin
  Result := AObj.GetShiftState();
  handleExceptionEnd
end;

//function
function IDesigner_UniqueName(AObj: TIDesigner; const BaseName: PChar): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='UniqueName'}
  handleExceptionBegin
  Result := ToPChar(AObj.UniqueName(BaseName));
  handleExceptionEnd
end;

//function
function IDesigner_Class(): TClass; extdecl;
begin
  Result := TIDesigner;
end;

//procedure
procedure IDesigner_UTF8KeyPress(AObj: TIDesigner; var UTF8Key: TUTF8Char); extdecl;
var
  RetUTF8Key: TUTF8Char;
begin
  {$define handleExceptionFuncName :='UTF8KeyPress'}
  handleExceptionBegin
  RetUTF8Key := UTF8Key;
  AObj.UTF8KeyPress(RetUTF8Key);
  UTF8Key := RetUTF8Key;
  handleExceptionEnd
end;

//procedure
procedure IDesigner_Modified(AObj: TIDesigner); extdecl;
begin
  {$define handleExceptionFuncName :='Modified'}
  handleExceptionBegin
  AObj.Modified();
  handleExceptionEnd
end;

//procedure
procedure IDesigner_Notification(AObj: TIDesigner; AComponent: TComponent; Operation: TOperation); extdecl;
begin
  {$define handleExceptionFuncName :='Notification'}
  handleExceptionBegin
  AObj.Notification(AComponent, Operation);
  handleExceptionEnd
end;

//procedure
procedure IDesigner_PaintGrid(AObj: TIDesigner); extdecl;
begin
  {$define handleExceptionFuncName :='PaintGrid'}
  handleExceptionBegin
  AObj.PaintGrid();
  handleExceptionEnd
end;

//procedure
procedure IDesigner_ValidateRename(AObj: TIDesigner; AComponent: TComponent; const CurName, NewName: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='ValidateRename'}
  handleExceptionBegin
  AObj.ValidateRename(AComponent, CurName, NewName);
  handleExceptionEnd
end;

//procedure
procedure IDesigner_SelectOnlyThisComponent(AObj: TIDesigner; AComponent: TComponent); extdecl;
begin
  {$define handleExceptionFuncName :='SelectOnlyThisComponent'}
  handleExceptionBegin
  AObj.SelectOnlyThisComponent(AComponent);
  handleExceptionEnd
end;

//procedure
procedure IDesigner_PrepareFreeDesigner(AObj: TIDesigner; AFreeComponent: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='PrepareFreeDesigner'}
  handleExceptionBegin
  AObj.PrepareFreeDesigner(AFreeComponent);
  handleExceptionEnd
end;


exports
  IDesigner_LookupRoot,
  IDesigner_DefaultFormBoundsValid,
  IDesigner_IsDesignMsg,
  IDesigner_GetShiftState,
  IDesigner_UniqueName,
  IDesigner_Class,
  IDesigner_UTF8KeyPress,
  IDesigner_Modified,
  IDesigner_Notification,
  IDesigner_PaintGrid,
  IDesigner_ValidateRename,
  IDesigner_SelectOnlyThisComponent,
  IDesigner_PrepareFreeDesigner;