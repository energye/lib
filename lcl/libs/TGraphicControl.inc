// constructor
function TGraphicControl_Create(AOwner: TComponent): TGraphicControl; extdecl;
begin
  {$define handleExceptionID := 3700}
  handleExceptionBegin
  Result := TGraphicControl.Create(AOwner);
  handleExceptionEnd
end;

// property
function TGraphicControl_Canvas(AObj: TGraphicControl): TCanvas; extdecl;
begin
  {$define handleExceptionID := 3701}
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

function TGraphicControl_TClass(): TClass; extdecl;
begin
  Result := TGraphicControl;
end;

exports
  TGraphicControl_Create,
  TGraphicControl_Canvas,
  TGraphicControl_TClass;