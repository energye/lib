
procedure VTImageInfo_Get(AVTImageInfo: Pointer; Index: TVTImageInfoIndex; out Result: TVTImageInfoPtr); extdecl;
var
  ImageInfos: TImageInfoArray;
begin
  handleExceptionBegin
  ImageInfos := PImageInfoArray(AVTImageInfo)^;
  Result := VTImageInfoToGo(ImageInfos[Index]);
  handleExceptionEnd
end;

exports
  VTImageInfo_Get;
