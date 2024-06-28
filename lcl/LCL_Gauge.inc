
//constructor
function Gauge_Create(AOwner: TComponent): TGauge; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TGauge.Create(AOwner);
  handleExceptionEnd
end;

//property
function Gauge_ParentFont(AIsSet: LongBool; AObj: TGauge; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ParentFont'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ParentFont := AValue;
  end else
    Result := AObj.ParentFont;
  handleExceptionEnd
end;

//property
function Gauge_ForeColor(AIsSet: LongBool; AObj: TGauge; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='ForeColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.ForeColor := AValue;
  end else
    Result := AObj.ForeColor;
  handleExceptionEnd
end;

//property
function Gauge_BackColor(AIsSet: LongBool; AObj: TGauge; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionFuncName :='BackColor'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.BackColor := AValue;
  end else
    Result := AObj.BackColor;
  handleExceptionEnd
end;

//property
function Gauge_KindForGaugeKind(AIsSet: LongBool; AObj: TGauge; AValue: TGaugeKind): TGaugeKind; extdecl;
begin
  {$define handleExceptionFuncName :='KindForGaugeKind'}
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.Kind := AValue;
  end else
    Result := AObj.Kind;
  handleExceptionEnd
end;

//function
function Gauge_Class(): TClass; extdecl;
begin
  Result := TGauge;
end;


exports
  Gauge_Create,
  Gauge_ParentFont,
  Gauge_ForeColor,
  Gauge_BackColor,
  Gauge_KindForGaugeKind,
  Gauge_Class;