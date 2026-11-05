// constructor
function TCefDisplayRef_Create(data: Pointer; out IntfDisplay: ICefDisplay): TCefDisplayRef; extdecl;
begin
  {$define handleExceptionID := 24100}
  handleExceptionBegin
  Result := TCefDisplayRef.Create(data);
  IntfDisplay := Result as ICefDisplay;
  handleExceptionEnd
end;

// function
procedure TCefDisplayRef_GetID(AObj: ICefDisplay; var Result: int64); extdecl;
begin
  {$define handleExceptionID := 24101}
  handleExceptionBegin
  Result := AObj.GetID();
  handleExceptionEnd
end;

// function
procedure TCefDisplayRef_GetDeviceScaleFactor(AObj: ICefDisplay; var Result: Single); extdecl;
begin
  {$define handleExceptionID := 24102}
  handleExceptionBegin
  Result := AObj.GetDeviceScaleFactor();
  handleExceptionEnd
end;

// function
procedure TCefDisplayRef_GetBounds(AObj: ICefDisplay; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 24103}
  handleExceptionBegin
  Result := AObj.GetBounds();
  handleExceptionEnd
end;

// function
procedure TCefDisplayRef_GetWorkArea(AObj: ICefDisplay; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionID := 24104}
  handleExceptionBegin
  Result := AObj.GetWorkArea();
  handleExceptionEnd
end;

// function
function TCefDisplayRef_GetRotation(AObj: ICefDisplay): Integer; extdecl;
begin
  {$define handleExceptionID := 24105}
  handleExceptionBegin
  Result := AObj.GetRotation();
  handleExceptionEnd
end;

// function static
procedure TCefDisplayRef_UnWrap(data: Pointer; var Result: ICefDisplay); extdecl;
begin
  Result := TCefDisplayRef.UnWrap(data);
end;

// function static
procedure TCefDisplayRef_Primary(var Result: ICefDisplay); extdecl;
begin
  Result := TCefDisplayRef.Primary();
end;

// function static
procedure TCefDisplayRef_NearestPoint(var point: TCefPointPtr; input_pixel_coords: LongBool; var Result: ICefDisplay); extdecl;
var
  Inpoint: TCefPoint;
begin
  Inpoint := TCefPointToPas(point);
  Result := TCefDisplayRef.NearestPoint(Inpoint, input_pixel_coords);
end;

// function static
procedure TCefDisplayRef_MatchingBounds(var bounds: TCefRectPtr; input_pixel_coords: LongBool; var Result: ICefDisplay); extdecl;
var
  Inbounds: TCefRect;
begin
  Inbounds := TCefRectToPas(bounds);
  Result := TCefDisplayRef.MatchingBounds(Inbounds, input_pixel_coords);
end;

// function static
function TCefDisplayRef_GetCount(): NativeUInt; extdecl;
begin
  Result := TCefDisplayRef.GetCount();
end;

// function static
function TCefDisplayRef_GetAlls(var aDisplayArray: TCefDisplayArray; var aDisplayArrayCount: Integer): LongBool; extdecl;
var
  OutaDisplayArray: TCefDisplayArray = nil;
begin
  Result := TCefDisplayRef.GetAlls(OutaDisplayArray);
  aDisplayArrayCount := Length(OutaDisplayArray);
  aDisplayArray := OutaDisplayArray;
end;

// function static
procedure TCefDisplayRef_ScreenPointToPixels(var aScreenPoint: TPoint; var Result: TPoint); extdecl;
begin
  Result := TCefDisplayRef.ScreenPointToPixels(aScreenPoint);
end;

// function static
procedure TCefDisplayRef_ScreenPointFromPixels(var aPixelsPoint: TPoint; var Result: TPoint); extdecl;
begin
  Result := TCefDisplayRef.ScreenPointFromPixels(aPixelsPoint);
end;

// function static
procedure TCefDisplayRef_ScreenRectToPixels(var aScreenRect: TRect; var Result: TRect); extdecl;
begin
  Result := TCefDisplayRef.ScreenRectToPixels(aScreenRect);
end;

// function static
procedure TCefDisplayRef_ScreenRectFromPixels(var aPixelsRect: TRect; var Result: TRect); extdecl;
begin
  Result := TCefDisplayRef.ScreenRectFromPixels(aPixelsRect);
end;

// procedure
procedure TCefDisplayRef_ConvertPointToPixels(AObj: ICefDisplay; var point: TCefPointPtr); extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 24106}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  AObj.ConvertPointToPixels(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

// procedure
procedure TCefDisplayRef_ConvertPointFromPixels(AObj: ICefDisplay; var point: TCefPointPtr); extdecl;
var
  Outpoint: TCefPoint;
begin
  {$define handleExceptionID := 24107}
  handleExceptionBegin
  Outpoint := TCefPointToPas(point);
  AObj.ConvertPointFromPixels(Outpoint);
  point := TCefPointToGo(Outpoint);
  handleExceptionEnd
end;

exports
  TCefDisplayRef_Create,
  TCefDisplayRef_GetID,
  TCefDisplayRef_GetDeviceScaleFactor,
  TCefDisplayRef_GetBounds,
  TCefDisplayRef_GetWorkArea,
  TCefDisplayRef_GetRotation,
  TCefDisplayRef_UnWrap,
  TCefDisplayRef_Primary,
  TCefDisplayRef_NearestPoint,
  TCefDisplayRef_MatchingBounds,
  TCefDisplayRef_GetCount,
  TCefDisplayRef_GetAlls,
  TCefDisplayRef_ScreenPointToPixels,
  TCefDisplayRef_ScreenPointFromPixels,
  TCefDisplayRef_ScreenRectToPixels,
  TCefDisplayRef_ScreenRectFromPixels,
  TCefDisplayRef_ConvertPointToPixels,
  TCefDisplayRef_ConvertPointFromPixels;