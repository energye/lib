// constructor
function TEngResourceBundleHandler_Create(out IntfResourceBundleHandler: ICefResourceBundleHandler): TEngResourceBundleHandler; extdecl;
begin
  {$define handleExceptionID := 13200}
  handleExceptionBegin
  Result := TEngResourceBundleHandler.Create();
  IntfResourceBundleHandler := Result as ICefResourceBundleHandler;
  handleExceptionEnd
end;

// event
procedure TEngResourceBundleHandler_OnResourceBundleGetLocalizedString(AObj: TEngResourceBundleHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceBundleHandler_TOnResourceBundleGetLocalizedStringEvent}
  {$DEFINE EventName := OnResourceBundleGetLocalizedString}
  CEFEventMethodCode
end;

// event
procedure TEngResourceBundleHandler_OnResourceBundleGetDataResource(AObj: TEngResourceBundleHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceBundleHandler_TOnResourceBundleGetDataResourceEvent}
  {$DEFINE EventName := OnResourceBundleGetDataResource}
  CEFEventMethodCode
end;

// event
procedure TEngResourceBundleHandler_OnResourceBundleGetDataResourceForScale(AObj: TEngResourceBundleHandler; AEventData: Pointer); extdecl;
begin
  {$DEFINE EventMethodName := TEngResourceBundleHandler_TOnResourceBundleGetDataResourceForScaleEvent}
  {$DEFINE EventName := OnResourceBundleGetDataResourceForScale}
  CEFEventMethodCode
end;

exports
  TEngResourceBundleHandler_Create,
  TEngResourceBundleHandler_OnResourceBundleGetLocalizedString,
  TEngResourceBundleHandler_OnResourceBundleGetDataResource,
  TEngResourceBundleHandler_OnResourceBundleGetDataResourceForScale;