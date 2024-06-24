
//constructor
function CustomIcon_Create(): TCustomIcon; extdecl;
begin
  handleExceptionBegin
  Result := TCustomIcon.Create();
  handleExceptionEnd
end;

//property
function CustomIcon_Current(AIsSet: LongBool; AObj: TCustomIcon; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Current := AValue;
  end else
    Result := AObj.Current;
  handleExceptionEnd
end;

//property
function CustomIcon_Count(AObj: TCustomIcon): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

//function
function CustomIcon_GetBestIndexForSize(AObj: TCustomIcon; var ASize: TSize): Integer; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetBestIndexForSize(ASize);
  handleExceptionEnd
end;

//function
function CustomIcon_Class(): TClass; extdecl;
begin
  Result := TCustomIcon;
end;

//procedure
procedure CustomIcon_Add(AObj: TCustomIcon; AFormat: TPixelFormat; AHeight, AWidth: Word); extdecl;
begin
  handleExceptionBegin
  AObj.Add(AFormat, AHeight, AWidth);
  handleExceptionEnd
end;

//procedure
procedure CustomIcon_AssignImage(AObj: TCustomIcon; ASource: TRasterImage); extdecl;
begin
  handleExceptionBegin
  AObj.AssignImage(ASource);
  handleExceptionEnd
end;

//procedure
procedure CustomIcon_Delete(AObj: TCustomIcon; Aindex: Integer); extdecl;
begin
  handleExceptionBegin
  AObj.Delete(Aindex);
  handleExceptionEnd
end;

//procedure
procedure CustomIcon_Remove(AObj: TCustomIcon; AFormat: TPixelFormat; AHeight, AWidth: Word); extdecl;
begin
  handleExceptionBegin
  AObj.Remove(AFormat, AHeight, AWidth);
  handleExceptionEnd
end;

//procedure
procedure CustomIcon_GetDescription(AObj: TCustomIcon; Aindex: Integer; out OutFormat: TPixelFormat; out OutHeight, OutWidth: Word); extdecl;
var
  RetOutFormat: TPixelFormat;
  RetOutHeight: Word;
  RetOutWidth: Word;
begin
  handleExceptionBegin
  RetOutFormat := OutFormat;
  RetOutHeight := OutHeight;
  RetOutWidth := OutWidth;
  AObj.GetDescription(Aindex, RetOutFormat, RetOutHeight, RetOutWidth);
  OutFormat := RetOutFormat;
  OutHeight := RetOutHeight;
  OutWidth := RetOutWidth;
  handleExceptionEnd
end;

//procedure
procedure CustomIcon_SetSize(AObj: TCustomIcon; AWidth, AHeight: integer); extdecl;
begin
  handleExceptionBegin
  AObj.SetSize(AWidth, AHeight);
  handleExceptionEnd
end;

//procedure
procedure CustomIcon_LoadFromResourceHandle(AObj: TCustomIcon; Instance: THandle; ResHandle: TFPResourceHandle); extdecl;
begin
  handleExceptionBegin
  AObj.LoadFromResourceHandle(Instance, ResHandle);
  handleExceptionEnd
end;

//procedure
procedure CustomIcon_Sort(AObj: TCustomIcon); extdecl;
begin
  handleExceptionBegin
  AObj.Sort();
  handleExceptionEnd
end;


exports
  CustomIcon_Create,
  CustomIcon_Current,
  CustomIcon_Count,
  CustomIcon_GetBestIndexForSize,
  CustomIcon_Class,
  CustomIcon_Add,
  CustomIcon_AssignImage,
  CustomIcon_Delete,
  CustomIcon_Remove,
  CustomIcon_GetDescription,
  CustomIcon_SetSize,
  CustomIcon_LoadFromResourceHandle,
  CustomIcon_Sort;