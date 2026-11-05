// constructor
function TCefResourceBundleRef_Create(data: Pointer; out IntfResourceBundle: ICefResourceBundle): TCefResourceBundleRef; extdecl;
begin
  {$define handleExceptionID := 19900}
  handleExceptionBegin
  Result := TCefResourceBundleRef.Create(data);
  IntfResourceBundle := Result as ICefResourceBundle;
  handleExceptionEnd
end;

// function
procedure TCefResourceBundleRef_GetLocalizedString(AObj: ICefResourceBundle; stringId: Integer;  out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 19901}
  handleExceptionBegin
  StringBufferCreate(string(AObj.GetLocalizedString(stringId)), AStrData, AStrSize);
  handleExceptionEnd
end;

// function
procedure TCefResourceBundleRef_GetDataResource(AObj: ICefResourceBundle; resourceId: Integer; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionID := 19902}
  handleExceptionBegin
  Result := AObj.GetDataResource(resourceId);
  handleExceptionEnd
end;

// function
procedure TCefResourceBundleRef_GetDataResourceForScale(AObj: ICefResourceBundle; resourceId: Integer; scaleFactor: TCefScaleFactor; var Result: ICefBinaryValue); extdecl;
begin
  {$define handleExceptionID := 19903}
  handleExceptionBegin
  Result := AObj.GetDataResourceForScale(resourceId, scaleFactor);
  handleExceptionEnd
end;

// function static
procedure TCefResourceBundleRef_UnWrap(data: Pointer; var Result: ICefResourceBundle); extdecl;
begin
  Result := TCefResourceBundleRef.UnWrap(data);
end;

// function static
procedure TCefResourceBundleRef_Global(var Result: ICefResourceBundle); extdecl;
begin
  Result := TCefResourceBundleRef.Global();
end;

exports
  TCefResourceBundleRef_Create,
  TCefResourceBundleRef_GetLocalizedString,
  TCefResourceBundleRef_GetDataResource,
  TCefResourceBundleRef_GetDataResourceForScale,
  TCefResourceBundleRef_UnWrap,
  TCefResourceBundleRef_Global;