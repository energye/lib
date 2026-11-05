// constructor
function TCustomPanel_Create(TheOwner: TComponent): TCustomPanel; extdecl;
begin
  {$define handleExceptionID := 4400}
  handleExceptionBegin
  Result := TCustomPanel.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TCustomPanel_Alignment(ASet: LongBool; AObj: TCustomPanel; AValue: TAlignment): TAlignment; extdecl;
begin
  {$define handleExceptionID := 4401}
  handleExceptionBegin
  if ASet then
  begin
    AObj.Alignment := AValue
  end else
    Result := AObj.Alignment;
  handleExceptionEnd
end;

// property
function TCustomPanel_BevelColor(ASet: LongBool; AObj: TCustomPanel; AValue: TColor): TColor; extdecl;
begin
  {$define handleExceptionID := 4402}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BevelColor := AValue
  end else
    Result := AObj.BevelColor;
  handleExceptionEnd
end;

// property
function TCustomPanel_BevelInner(ASet: LongBool; AObj: TCustomPanel; AValue: TPanelBevel): TPanelBevel; extdecl;
begin
  {$define handleExceptionID := 4403}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BevelInner := AValue
  end else
    Result := AObj.BevelInner;
  handleExceptionEnd
end;

// property
function TCustomPanel_BevelOuter(ASet: LongBool; AObj: TCustomPanel; AValue: TPanelBevel): TPanelBevel; extdecl;
begin
  {$define handleExceptionID := 4404}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BevelOuter := AValue
  end else
    Result := AObj.BevelOuter;
  handleExceptionEnd
end;

// property
function TCustomPanel_BevelWidth(ASet: LongBool; AObj: TCustomPanel; AValue: TBevelWidth): TBevelWidth; extdecl;
begin
  {$define handleExceptionID := 4405}
  handleExceptionBegin
  if ASet then
  begin
    AObj.BevelWidth := AValue
  end else
    Result := AObj.BevelWidth;
  handleExceptionEnd
end;

// property
function TCustomPanel_FullRepaint(ASet: LongBool; AObj: TCustomPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4406}
  handleExceptionBegin
  if ASet then
  begin
    AObj.FullRepaint := AValue
  end else
    Result := AObj.FullRepaint;
  handleExceptionEnd
end;

// property
function TCustomPanel_ParentBackground(ASet: LongBool; AObj: TCustomPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4407}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentBackground := AValue
  end else
    Result := AObj.ParentBackground;
  handleExceptionEnd
end;

// property
function TCustomPanel_ParentColor(ASet: LongBool; AObj: TCustomPanel; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 4408}
  handleExceptionBegin
  if ASet then
  begin
    AObj.ParentColor := AValue
  end else
    Result := AObj.ParentColor;
  handleExceptionEnd
end;

function TCustomPanel_TClass(): TClass; extdecl;
begin
  Result := TCustomPanel;
end;

exports
  TCustomPanel_Create,
  TCustomPanel_Alignment,
  TCustomPanel_BevelColor,
  TCustomPanel_BevelInner,
  TCustomPanel_BevelOuter,
  TCustomPanel_BevelWidth,
  TCustomPanel_FullRepaint,
  TCustomPanel_ParentBackground,
  TCustomPanel_ParentColor,
  TCustomPanel_TClass;