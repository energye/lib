
//function
procedure CefDisplay_UnWrap(data: Pointer; var Result: ICefDisplay); extdecl;
begin
  Result := TCefDisplayRef.UnWrap(data);
end;

//function
procedure CefDisplay_Primary(var Result: ICefDisplay); extdecl;
begin
  Result := TCefDisplayRef.Primary();
end;

//function
procedure CefDisplay_NearestPoint(var point: TCefPoint; inputpixelcoords: LongBool; var Result: ICefDisplay); extdecl;
begin
  Result := TCefDisplayRef.NearestPoint(point, inputpixelcoords);
end;

//function
procedure CefDisplay_MatchingBounds(var bounds: TCefRect; inputpixelcoords: LongBool; var Result: ICefDisplay); extdecl;
begin
  Result := TCefDisplayRef.MatchingBounds(bounds, inputpixelcoords);
end;

//function
function CefDisplay_GetCount(): NativeUInt; extdecl;
begin
  Result := TCefDisplayRef.GetCount();
end;

//function
procedure CefDisplay_GetID(AObj: ICefDisplay; var Result: int64); extdecl;
begin
  {$define handleExceptionFuncName :='GetID'}
  handleExceptionBegin
  Result := AObj.GetID();
  handleExceptionEnd
end;

//function
procedure CefDisplay_GetDeviceScaleFactor(AObj: ICefDisplay; var Result: Single); extdecl;
begin
  {$define handleExceptionFuncName :='GetDeviceScaleFactor'}
  handleExceptionBegin
  Result := AObj.GetDeviceScaleFactor();
  handleExceptionEnd
end;

//function
procedure CefDisplay_GetBounds(AObj: ICefDisplay; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetBounds'}
  handleExceptionBegin
  Result := AObj.GetBounds();
  handleExceptionEnd
end;

//function
procedure CefDisplay_GetWorkArea(AObj: ICefDisplay; var Result: TCefRect); extdecl;
begin
  {$define handleExceptionFuncName :='GetWorkArea'}
  handleExceptionBegin
  Result := AObj.GetWorkArea();
  handleExceptionEnd
end;

//function
function CefDisplay_GetRotation(AObj: ICefDisplay): Integer; extdecl;
begin
  {$define handleExceptionFuncName :='GetRotation'}
  handleExceptionBegin
  Result := AObj.GetRotation();
  handleExceptionEnd
end;

//procedure
procedure CefDisplay_ConvertPointToPixels(AObj: ICefDisplay; var point: TCefPoint); extdecl;
var
  Retpoint: TCefPoint;
begin
  {$define handleExceptionFuncName :='ConvertPointToPixels'}
  handleExceptionBegin
  Retpoint := point;
  AObj.ConvertPointToPixels(Retpoint);
  point := Retpoint;
  handleExceptionEnd
end;

//procedure
procedure CefDisplay_ConvertPointFromPixels(AObj: ICefDisplay; var point: TCefPoint); extdecl;
var
  Retpoint: TCefPoint;
begin
  {$define handleExceptionFuncName :='ConvertPointFromPixels'}
  handleExceptionBegin
  Retpoint := point;
  AObj.ConvertPointFromPixels(Retpoint);
  point := Retpoint;
  handleExceptionEnd
end;


exports
  CefDisplay_UnWrap,
  CefDisplay_Primary,
  CefDisplay_NearestPoint,
  CefDisplay_MatchingBounds,
  CefDisplay_GetCount,
  CefDisplay_GetID,
  CefDisplay_GetDeviceScaleFactor,
  CefDisplay_GetBounds,
  CefDisplay_GetWorkArea,
  CefDisplay_GetRotation,
  CefDisplay_ConvertPointToPixels,
  CefDisplay_ConvertPointFromPixels;