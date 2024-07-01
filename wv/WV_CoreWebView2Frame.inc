
//constructor
function CoreWebView2Frame_Create(const aBaseIntf: ICoreWebView2Frame): TCoreWebView2Frame; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TCoreWebView2Frame.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2Frame_Initialized(AObj: TCoreWebView2Frame): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='Initialized'}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Frame_BaseIntf(AObj: TCoreWebView2Frame; var Result: ICoreWebView2Frame); extdecl;
begin
  {$define handleExceptionFuncName :='BaseIntf'}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2Frame_FrameID(AObj: TCoreWebView2Frame): uint32; extdecl;
begin
  {$define handleExceptionFuncName :='FrameID'}
  handleExceptionBegin
  Result := AObj.FrameID;
  handleExceptionEnd
end;

//property
function CoreWebView2Frame_Name(AObj: TCoreWebView2Frame): PChar; extdecl;
begin
  {$define handleExceptionFuncName :='Name'}
  handleExceptionBegin
  Result := ToPChar(AObj.Name);
  handleExceptionEnd
end;

//property
function CoreWebView2Frame_IsDestroyed(AObj: TCoreWebView2Frame): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='IsDestroyed'}
  handleExceptionBegin
  Result := AObj.IsDestroyed;
  handleExceptionEnd
end;

//function
function CoreWebView2Frame_AddAllBrowserEvents(AObj: TCoreWebView2Frame; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='AddAllBrowserEvents'}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2Frame_RemoveHostObjectFromScript(AObj: TCoreWebView2Frame; const aName: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='RemoveHostObjectFromScript'}
  handleExceptionBegin
  Result := AObj.RemoveHostObjectFromScript(aName);
  handleExceptionEnd
end;

//function
function CoreWebView2Frame_ExecuteScript(AObj: TCoreWebView2Frame; const JavaScript: PChar; aExecutionID: integer; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='ExecuteScript'}
  handleExceptionBegin
  Result := AObj.ExecuteScript(JavaScript, aExecutionID, aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2Frame_PostWebMessageAsJson(AObj: TCoreWebView2Frame; const aWebMessageAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PostWebMessageAsJson'}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsJson(aWebMessageAsJson);
  handleExceptionEnd
end;

//function
function CoreWebView2Frame_PostWebMessageAsString(AObj: TCoreWebView2Frame; const aWebMessageAsString: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PostWebMessageAsString'}
  handleExceptionBegin
  Result := AObj.PostWebMessageAsString(aWebMessageAsString);
  handleExceptionEnd
end;

//function
function CoreWebView2Frame_PostSharedBufferToScript(AObj: TCoreWebView2Frame; const aSharedBuffer: ICoreWebView2SharedBuffer; aAccess: TWVSharedBufferAccess; const aAdditionalDataAsJson: PChar): LongBool; extdecl;
begin
  {$define handleExceptionFuncName :='PostSharedBufferToScript'}
  handleExceptionBegin
  Result := AObj.PostSharedBufferToScript(aSharedBuffer, aAccess, aAdditionalDataAsJson);
  handleExceptionEnd
end;


exports
  CoreWebView2Frame_Create,
  CoreWebView2Frame_Initialized,
  CoreWebView2Frame_BaseIntf,
  CoreWebView2Frame_FrameID,
  CoreWebView2Frame_Name,
  CoreWebView2Frame_IsDestroyed,
  CoreWebView2Frame_AddAllBrowserEvents,
  CoreWebView2Frame_RemoveHostObjectFromScript,
  CoreWebView2Frame_ExecuteScript,
  CoreWebView2Frame_PostWebMessageAsJson,
  CoreWebView2Frame_PostWebMessageAsString,
  CoreWebView2Frame_PostSharedBufferToScript;