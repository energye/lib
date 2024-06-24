
//constructor
function DataModule_Create(AOwner: TComponent): TDataModule; extdecl;
begin
  handleExceptionBegin
  Result := TDataModule.Create(AOwner);
  handleExceptionEnd
end;

//constructor
function DataModule_CreateNew(AOwner: TComponent): TDataModule; extdecl;
begin
  handleExceptionBegin
  Result := TDataModule.CreateNew(AOwner);
  handleExceptionEnd
end;

//constructor
function DataModule_CreateNew1(AOwner: TComponent; CreateMode: Integer): TDataModule; extdecl;
begin
  handleExceptionBegin
  Result := TDataModule.CreateNew(AOwner, CreateMode);
  handleExceptionEnd
end;

//property
procedure DataModule_DesignOffset(AIsSet: LongBool; AObj: TDataModule; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DesignOffset := AValue;
  end else
    Result := AObj.DesignOffset;
  handleExceptionEnd
end;

//property
procedure DataModule_DesignSize(AIsSet: LongBool; AObj: TDataModule; var AValue: TPoint; var Result: TPoint); extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DesignSize := AValue;
  end else
    Result := AObj.DesignSize;
  handleExceptionEnd
end;

//property
function DataModule_DesignPPI(AIsSet: LongBool; AObj: TDataModule; AValue: Integer): Integer; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.DesignPPI := AValue;
  end else
    Result := AObj.DesignPPI;
  handleExceptionEnd
end;

//property
function DataModule_OldCreateOrder(AIsSet: LongBool; AObj: TDataModule; AValue: LongBool): LongBool; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.OldCreateOrder := AValue;
  end else
    Result := AObj.OldCreateOrder;
  handleExceptionEnd
end;

//function
function DataModule_Class(): TClass; extdecl;
begin
  Result := TDataModule;
end;

//property event
procedure DataModule_SetOnCreate(AObj: TDataModule; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnCreate}
  EventMethodCode
end;

//property event
procedure DataModule_SetOnDestroy(AObj: TDataModule; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := OnTNotifyEvent}
  {$DEFINE EventName := OnDestroy}
  EventMethodCode
end;


exports
  DataModule_Create,
  DataModule_CreateNew,
  DataModule_CreateNew1,
  DataModule_DesignOffset,
  DataModule_DesignSize,
  DataModule_DesignPPI,
  DataModule_OldCreateOrder,
  DataModule_Class,
  DataModule_SetOnCreate,
  DataModule_SetOnDestroy;