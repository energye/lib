// constructor
function TDataModule_Create(AOwner: TComponent): TDataModule; extdecl;
begin
  {$define handleExceptionID := 26100}
  handleExceptionBegin
  Result := TDataModule.Create(AOwner);
  handleExceptionEnd
end;

// constructor
function TDataModule_CreateNew(AOwner: TComponent): TDataModule; extdecl;
begin
  {$define handleExceptionID := 26101}
  handleExceptionBegin
  Result := TDataModule.CreateNew(AOwner);
  handleExceptionEnd
end;

// constructor
function TDataModule_CreateNewWithComponentInt(AOwner: TComponent; CreateMode: Integer): TDataModule; extdecl;
begin
  {$define handleExceptionID := 26102}
  handleExceptionBegin
  Result := TDataModule.CreateNew(AOwner, CreateMode);
  handleExceptionEnd
end;

// property
procedure TDataModule_DesignOffset(ASet: LongBool; AObj: TDataModule; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 26103}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DesignOffset := AValue
  end else
    Result := AObj.DesignOffset;
  handleExceptionEnd
end;

// property
procedure TDataModule_DesignSize(ASet: LongBool; AObj: TDataModule; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  {$define handleExceptionID := 26104}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DesignSize := AValue
  end else
    Result := AObj.DesignSize;
  handleExceptionEnd
end;

// property
function TDataModule_DesignPPI(ASet: LongBool; AObj: TDataModule; AValue: Integer): Integer; extdecl;
begin
  {$define handleExceptionID := 26105}
  handleExceptionBegin
  if ASet then
  begin
    AObj.DesignPPI := AValue
  end else
    Result := AObj.DesignPPI;
  handleExceptionEnd
end;

// property
function TDataModule_OldCreateOrder(ASet: LongBool; AObj: TDataModule; AValue: LongBool): LongBool; extdecl;
begin
  {$define handleExceptionID := 26106}
  handleExceptionBegin
  if ASet then
  begin
    AObj.OldCreateOrder := AValue
  end else
    Result := AObj.OldCreateOrder;
  handleExceptionEnd
end;

// event
procedure TDataModule_OnCreate(AObj: TDataModule; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCreate}
  LCLEventMethodCode
end;

// event
procedure TDataModule_OnDestroy(AObj: TDataModule; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDestroy}
  LCLEventMethodCode
end;

function TDataModule_TClass(): TClass; extdecl;
begin
  Result := TDataModule;
end;

exports
  TDataModule_Create,
  TDataModule_CreateNew,
  TDataModule_CreateNewWithComponentInt,
  TDataModule_DesignOffset,
  TDataModule_DesignSize,
  TDataModule_DesignPPI,
  TDataModule_OldCreateOrder,
  TDataModule_OnCreate,
  TDataModule_OnDestroy,
  TDataModule_TClass;