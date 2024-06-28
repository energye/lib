
procedure CefPrintSettings_SetPageRanges(AObj: ICefPrintSettings; const ARanges: PRangeArray; ASize: Integer); extdecl;
var
  ranges: TCefRangeArray;
  idx: Integer;
begin
  {$define handleExceptionFuncName :='SetPageRanges'}
  handleExceptionBegin
  if ASize > 0 then
  begin
    SetLength(ranges, ASize);
    for idx := 0 to ASize - 1 do
    begin
      ranges[idx] := ARanges^[idx];
    end;
    AObj.SetPageRanges(ranges);
    SetLength(ranges, 0);
  end else
  begin
    AObj.SetPageRanges(nil);
  end;
  handleExceptionEnd
end;

procedure CefPrintSettings_GetPageRanges(AObj: ICefPrintSettings; out ARanges: TCefRangeArray; out ASize: Integer); extdecl;
var
  ranges: TCefRangeArray;
begin
  {$define handleExceptionFuncName :='GetPageRanges'}
  handleExceptionBegin
  AObj.GetPageRanges(ranges);
  ASize := Length(ranges);
  ARanges := ranges;
  handleExceptionEnd
end;


exports
  CefPrintSettings_SetPageRanges,
  CefPrintSettings_GetPageRanges;
