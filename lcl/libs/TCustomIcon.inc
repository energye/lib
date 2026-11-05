// constructor
function TCustomIcon_Create(): TCustomIcon; extdecl;
begin
  {$define handleExceptionID := 10600}
  handleExceptionBegin
  Result := TCustomIcon.Create();
  handleExceptionEnd
end;

// function
function TCustomIcon_GetBestIndexForSize(AObj: TCustomIcon; var ASize: TSize): Integer; extdecl;
begin
  {$define handleExceptionID := 10601}
  handleExceptionBegin
  Result := AObj.GetBestIndexForSize(ASize);
  handleExceptionEnd
end;

// function
function TCustomIcon_ExportImage(AObj: TCustomIcon; AIndex: Integer; AImageClass: TFPImageBitmapClass): TFPImageBitmap; extdecl;
begin
  {$define handleExceptionID := 10602}
  handleExceptionBegin
  Result := AObj.ExportImage(AIndex, AImageClass);
  handleExceptionEnd
end;

// procedure
procedure TCustomIcon_Add(AObj: TCustomIcon; AFormat: TPixelFormat; AHeight: Word; AWidth: Word); extdecl;
begin
  {$define handleExceptionID := 10603}
  handleExceptionBegin
  AObj.Add(AFormat, AHeight, AWidth);
  handleExceptionEnd
end;

// procedure
procedure TCustomIcon_AssignImage(AObj: TCustomIcon; ASource: TRasterImage); extdecl;
begin
  {$define handleExceptionID := 10604}
  handleExceptionBegin
  AObj.AssignImage(ASource);
  handleExceptionEnd
end;

// procedure
procedure TCustomIcon_Delete(AObj: TCustomIcon; Aindex: Integer); extdecl;
begin
  {$define handleExceptionID := 10605}
  handleExceptionBegin
  AObj.Delete(Aindex);
  handleExceptionEnd
end;

// procedure
procedure TCustomIcon_Remove(AObj: TCustomIcon; AFormat: TPixelFormat; AHeight: Word; AWidth: Word); extdecl;
begin
  {$define handleExceptionID := 10606}
  handleExceptionBegin
  AObj.Remove(AFormat, AHeight, AWidth);
  handleExceptionEnd
end;

// procedure
procedure TCustomIcon_GetDescription(AObj: TCustomIcon; Aindex: Integer; var AFormat: TPixelFormat; var AHeight: Word; var AWidth: Word); extdecl;
var
  OutAFormat: TPixelFormat;
  OutAHeight: Word;
  OutAWidth: Word;
begin
  {$define handleExceptionID := 10607}
  handleExceptionBegin
  AObj.GetDescription(Aindex, OutAFormat, OutAHeight, OutAWidth);
  AFormat := OutAFormat;
  AHeight := OutAHeight;
  AWidth := OutAWidth;
  handleExceptionEnd
end;

// procedure
procedure TCustomIcon_SetSize(AObj: TCustomIcon; AWidth: integer; AHeight: integer); extdecl;
begin
  {$define handleExceptionID := 10608}
  handleExceptionBegin
  AObj.SetSize(AWidth, AHeight);
  handleExceptionEnd
end;

// procedure
procedure TCustomIcon_LoadFromResourceHandle(AObj: TCustomIcon; Instance: TLCLHandle; ResHandle: TFPResourceHandle); extdecl;
begin
  {$define handleExceptionID := 10609}
  handleExceptionBegin
  AObj.LoadFromResourceHandle(Instance, ResHandle);
  handleExceptionEnd
end;

// procedure
procedure TCustomIcon_Sort(AObj: TCustomIcon); extdecl;
begin
  {$define handleExceptionID := 10610}
  handleExceptionBegin
  AObj.Sort();
  handleExceptionEnd
end;

// property
function TCustomIcon_Current(ASet: LongBool; AObj: TCustomIcon; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 10611}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Current := AValue
  end else
    Result := AObj.Current;
  handleExceptionEnd
end;

// property
function TCustomIcon_Count(AObj: TCustomIcon): Integer; extdecl;
begin
  {$define handleExceptionID := 10612}
  handleExceptionBegin
  Result := AObj.Count;
  handleExceptionEnd
end;

exports
  TCustomIcon_Create,
  TCustomIcon_GetBestIndexForSize,
  TCustomIcon_ExportImage,
  TCustomIcon_Add,
  TCustomIcon_AssignImage,
  TCustomIcon_Delete,
  TCustomIcon_Remove,
  TCustomIcon_GetDescription,
  TCustomIcon_SetSize,
  TCustomIcon_LoadFromResourceHandle,
  TCustomIcon_Sort,
  TCustomIcon_Current,
  TCustomIcon_Count;