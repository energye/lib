// procedure
procedure TFPBoxInterpolation_Execute(AObj: TFPBoxInterpolation; x: integer; y: integer; w: integer; h: integer); extdecl;
begin
  {$define handleExceptionID := 31300}
  handleExceptionBegin
  AObj.Execute(x, y, w, h);
  handleExceptionEnd
end;

exports
  TFPBoxInterpolation_Execute;
