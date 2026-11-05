// constructor
function TCoreWebView2Frame_Create(const aBaseIntf: ICoreWebView2Frame): TCoreWebView2Frame; extdecl;
begin
  {$define handleExceptionID := 4500}
  handleExceptionBegin
  Result := TCoreWebView2Frame.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2Frame_AddAllBrowserEvents(AObj: TCoreWebView2Frame; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 4501}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2Frame_AddHostObjectToScriptWithOrigins(AObj: TCoreWebView2Frame; const aName: PChar; const aObject: OleVariant; aOriginsCount: cardinal; var aOrigins: PChar): LongBool; extdecl;
var
  OutaOrigins: wvstring;
begin
  {$define handleExceptionID := 4502}
  handleExceptionBegin
  OutaOrigins := aOrigins;
  Result := AObj.AddHostObjectToScriptWithOrigins(PCharToUStr(aName), aObject, aOriginsCount, OutaOrigins);
  aOrigins := ToPChar(OutaOrigins);
  handleExceptionEnd
end;

// function
function TCoreWebView2Frame_RemoveHostObjectFromScript(AObj: TCoreWebView2Frame; const aName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 4503}
  handleExceptionBegin
  Result := AObj.RemoveHostObjectFromScript(PCharToUStr(aName));
  handleExceptionEnd
end;

// function
function TCoreWebView2Frame_ExecuteScript(AObj: TCoreWebView2Frame; const JavaScript: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 4504}
  handleExceptionBegin
  Result := AObj.ExecuteScript(PCharToUStr(JavaScript), aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2Frame_PostWebMessageAsJson(AObj: TCoreWebView2Frame; const aWebMessageAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 4505}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsJson(PCharToUStr(aWebMessageAsJson));
  handleExceptionEnd
end;

// function
function TCoreWebView2Frame_PostWebMessageAsString(AObj: TCoreWebView2Frame; const aWebMessageAsString: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 4506}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsString(PCharToUStr(aWebMessageAsString));
  handleExceptionEnd
end;

// function
function TCoreWebView2Frame_PostSharedBufferToScript(AObj: TCoreWebView2Frame; const aSharedBuffer: ICoreWebView2SharedBuffer; aAccess: TWVSharedBufferAccess; const aAdditionalDataAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionID := 4507}
  handleExceptionBegin
  Result := AObj.PostSharedBufferToScript(aSharedBuffer, aAccess, PCharToUStr(aAdditionalDataAsJson));
  handleExceptionEnd
end;

// property
function TCoreWebView2Frame_Initialized(AObj: TCoreWebView2Frame): LongBool; extdecl;
begin
  {$define handleExceptionID := 4508}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Frame_BaseIntf(AObj: TCoreWebView2Frame; var Result: ICoreWebView2Frame); extdecl;
begin
  {$define handleExceptionID := 4509}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
function TCoreWebView2Frame_FrameID(AObj: TCoreWebView2Frame): cardinal; extdecl;
begin
  {$define handleExceptionID := 4510}
  handleExceptionBegin
  Result := AObj.FrameID;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Frame_Name(AObj: TCoreWebView2Frame; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 4511}
  handleExceptionBegin
  StringBufferCreate(AObj.Name, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2Frame_IsDestroyed(AObj: TCoreWebView2Frame): LongBool; extdecl;
begin
  {$define handleExceptionID := 4512}
  handleExceptionBegin
  Result := AObj.IsDestroyed;
  handleExceptionEnd
end;

exports
  TCoreWebView2Frame_Create,
  TCoreWebView2Frame_AddAllBrowserEvents,
  TCoreWebView2Frame_AddHostObjectToScriptWithOrigins,
  TCoreWebView2Frame_RemoveHostObjectFromScript,
  TCoreWebView2Frame_ExecuteScript,
  TCoreWebView2Frame_PostWebMessageAsJson,
  TCoreWebView2Frame_PostWebMessageAsString,
  TCoreWebView2Frame_PostSharedBufferToScript,
  TCoreWebView2Frame_Initialized,
  TCoreWebView2Frame_BaseIntf,
  TCoreWebView2Frame_FrameID,
  TCoreWebView2Frame_Name,
  TCoreWebView2Frame_IsDestroyed;