
//constructor
function GraphicControl_Create(AOwner: TComponent): TGraphicControl; extdecl;
begin
  handleExceptionBegin
  Result := TGraphicControl.Create(AOwner);
  handleExceptionEnd
end;

//property
function GraphicControl_Canvas(AObj: TGraphicControl): TCanvas; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Canvas;
  handleExceptionEnd
end;

//function
function GraphicControl_Class(): TClass; extdecl;
begin
  Result := TGraphicControl;
end;


exports
  GraphicControl_Create,
  GraphicControl_Canvas,
  GraphicControl_Class;