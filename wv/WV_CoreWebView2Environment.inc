
//constructor
function CoreWebView2Environment_Create(const aBaseIntf: ICoreWebView2Environment): TCoreWebView2Environment; extdecl;
begin
  handleExceptionBegin
  Result := TCoreWebView2Environment.Create(aBaseIntf);
  handleExceptionEnd
end;

//property
function CoreWebView2Environment_Initialized(AObj: TCoreWebView2Environment): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

//property
procedure CoreWebView2Environment_BaseIntf(AObj: TCoreWebView2Environment; var Result: ICoreWebView2Environment); extdecl;
begin
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

//property
function CoreWebView2Environment_BrowserVersionInfo(AObj: TCoreWebView2Environment): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.BrowserVersionInfo);
  handleExceptionEnd
end;

//property
function CoreWebView2Environment_SupportsCompositionController(AObj: TCoreWebView2Environment): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SupportsCompositionController;
  handleExceptionEnd
end;

//property
function CoreWebView2Environment_SupportsControllerOptions(AObj: TCoreWebView2Environment): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.SupportsControllerOptions;
  handleExceptionEnd
end;

//property
function CoreWebView2Environment_UserDataFolder(AObj: TCoreWebView2Environment): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.UserDataFolder);
  handleExceptionEnd
end;

//property
procedure CoreWebView2Environment_ProcessInfos(AObj: TCoreWebView2Environment; var Result: ICoreWebView2ProcessInfoCollection); extdecl;
begin
  handleExceptionBegin
  Result := AObj.ProcessInfos;
  handleExceptionEnd
end;

//property
function CoreWebView2Environment_FailureReportFolderPath(AObj: TCoreWebView2Environment): PChar; extdecl;
begin
  handleExceptionBegin
  Result := ToPChar(AObj.FailureReportFolderPath);
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_AddAllLoaderEvents(AObj: TCoreWebView2Environment; const aLoaderComponent: TComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddAllLoaderEvents(aLoaderComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_AddAllBrowserEvents(AObj: TCoreWebView2Environment; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateCoreWebView2Controller(AObj: TCoreWebView2Environment; aParentWindow: THandle; const aBrowserEvents: IWVBrowserEvents; var aResult: Integer): LongBool; extdecl;
var
  RetaResult: Integer;
begin
  handleExceptionBegin
  RetaResult := aResult;
  Result := AObj.CreateCoreWebView2Controller(aParentWindow, aBrowserEvents, RetaResult);
  aResult := RetaResult;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateWebResourceResponse(AObj: TCoreWebView2Environment; const aContent: TStreamAdapter; aStatusCode: integer; aReasonPhrase, aHeaders: PChar; var aResponse: ICoreWebView2WebResourceResponse): LongBool; extdecl;
var
  RetaResponse: ICoreWebView2WebResourceResponse;
begin
  handleExceptionBegin
  RetaResponse := aResponse;
  Result := AObj.CreateWebResourceResponse(aContent, aStatusCode, aReasonPhrase, aHeaders, RetaResponse);
  aResponse := RetaResponse;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateWebResourceRequest(AObj: TCoreWebView2Environment; const aURI, aMethod: PChar; const aPostData: TStreamAdapter; const aHeaders: PChar; var aRequest: ICoreWebView2WebResourceRequest): LongBool; extdecl;
var
  RetaRequest: ICoreWebView2WebResourceRequest;
begin
  handleExceptionBegin
  RetaRequest := aRequest;
  Result := AObj.CreateWebResourceRequest(aURI, aMethod, aPostData, aHeaders, RetaRequest);
  aRequest := RetaRequest;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateCoreWebView2CompositionController(AObj: TCoreWebView2Environment; aParentWindow: THandle; const aBrowserEvents: IWVBrowserEvents; var aResult: Integer): LongBool; extdecl;
var
  RetaResult: Integer;
begin
  handleExceptionBegin
  RetaResult := aResult;
  Result := AObj.CreateCoreWebView2CompositionController(aParentWindow, aBrowserEvents, RetaResult);
  aResult := RetaResult;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateCoreWebView2PointerInfo(AObj: TCoreWebView2Environment; var aPointerInfo: ICoreWebView2PointerInfo): LongBool; extdecl;
var
  RetaPointerInfo: ICoreWebView2PointerInfo;
begin
  handleExceptionBegin
  RetaPointerInfo := aPointerInfo;
  Result := AObj.CreateCoreWebView2PointerInfo(RetaPointerInfo);
  aPointerInfo := RetaPointerInfo;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_GetAutomationProviderForWindow(AObj: TCoreWebView2Environment; aHandle: THandle; var aProvider: IUnknown): LongBool; extdecl;
var
  RetaProvider: IUnknown;
begin
  handleExceptionBegin
  RetaProvider := aProvider;
  Result := AObj.GetAutomationProviderForWindow(aHandle, RetaProvider);
  aProvider := RetaProvider;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreatePrintSettings(AObj: TCoreWebView2Environment; var aPrintSettings: ICoreWebView2PrintSettings): LongBool; extdecl;
var
  RetaPrintSettings: ICoreWebView2PrintSettings;
begin
  handleExceptionBegin
  RetaPrintSettings := aPrintSettings;
  Result := AObj.CreatePrintSettings(RetaPrintSettings);
  aPrintSettings := RetaPrintSettings;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateContextMenuItem(AObj: TCoreWebView2Environment; const aLabel: PChar; const aIconStream: TStreamAdapter; aKind: TWVMenuItemKind; var aMenuItem: ICoreWebView2ContextMenuItem): LongBool; extdecl;
var
  RetaMenuItem: ICoreWebView2ContextMenuItem;
begin
  handleExceptionBegin
  RetaMenuItem := aMenuItem;
  Result := AObj.CreateContextMenuItem(aLabel, aIconStream, aKind, RetaMenuItem);
  aMenuItem := RetaMenuItem;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateCoreWebView2ControllerOptions(AObj: TCoreWebView2Environment; var aOptions: ICoreWebView2ControllerOptions; var aResult: Integer): LongBool; extdecl;
var
  RetaOptions: ICoreWebView2ControllerOptions;
  RetaResult: Integer;
begin
  handleExceptionBegin
  RetaOptions := aOptions;
  RetaResult := aResult;
  Result := AObj.CreateCoreWebView2ControllerOptions(RetaOptions, RetaResult);
  aOptions := RetaOptions;
  aResult := RetaResult;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateCoreWebView2ControllerWithOptions(AObj: TCoreWebView2Environment; aParentWindow: HWND; const aOptions: ICoreWebView2ControllerOptions; const aBrowserEvents: IWVBrowserEvents; var aResult: Integer): LongBool; extdecl;
var
  RetaResult: Integer;
begin
  handleExceptionBegin
  RetaResult := aResult;
  Result := AObj.CreateCoreWebView2ControllerWithOptions(aParentWindow, aOptions, aBrowserEvents, RetaResult);
  aResult := RetaResult;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateCoreWebView2CompositionControllerWithOptions(AObj: TCoreWebView2Environment; aParentWindow: HWND; const aOptions: ICoreWebView2ControllerOptions; const aBrowserEvents: IWVBrowserEvents; var aResult: Integer): LongBool; extdecl;
var
  RetaResult: Integer;
begin
  handleExceptionBegin
  RetaResult := aResult;
  Result := AObj.CreateCoreWebView2CompositionControllerWithOptions(aParentWindow, aOptions, aBrowserEvents, RetaResult);
  aResult := RetaResult;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_CreateSharedBuffer(AObj: TCoreWebView2Environment; var aSize: int64; var aSharedBuffer: ICoreWebView2SharedBuffer): LongBool; extdecl;
var
  RetaSharedBuffer: ICoreWebView2SharedBuffer;
begin
  handleExceptionBegin
  RetaSharedBuffer := aSharedBuffer;
  Result := AObj.CreateSharedBuffer(aSize, RetaSharedBuffer);
  aSharedBuffer := RetaSharedBuffer;
  handleExceptionEnd
end;

//function
function CoreWebView2Environment_GetProcessExtendedInfos(AObj: TCoreWebView2Environment; const aBrowserEvents: IWVBrowserEvents): LongBool; extdecl;
begin
  handleExceptionBegin
  Result := AObj.GetProcessExtendedInfos(aBrowserEvents);
  handleExceptionEnd
end;


exports
  CoreWebView2Environment_Create,
  CoreWebView2Environment_Initialized,
  CoreWebView2Environment_BaseIntf,
  CoreWebView2Environment_BrowserVersionInfo,
  CoreWebView2Environment_SupportsCompositionController,
  CoreWebView2Environment_SupportsControllerOptions,
  CoreWebView2Environment_UserDataFolder,
  CoreWebView2Environment_ProcessInfos,
  CoreWebView2Environment_FailureReportFolderPath,
  CoreWebView2Environment_AddAllLoaderEvents,
  CoreWebView2Environment_AddAllBrowserEvents,
  CoreWebView2Environment_CreateCoreWebView2Controller,
  CoreWebView2Environment_CreateWebResourceResponse,
  CoreWebView2Environment_CreateWebResourceRequest,
  CoreWebView2Environment_CreateCoreWebView2CompositionController,
  CoreWebView2Environment_CreateCoreWebView2PointerInfo,
  CoreWebView2Environment_GetAutomationProviderForWindow,
  CoreWebView2Environment_CreatePrintSettings,
  CoreWebView2Environment_CreateContextMenuItem,
  CoreWebView2Environment_CreateCoreWebView2ControllerOptions,
  CoreWebView2Environment_CreateCoreWebView2ControllerWithOptions,
  CoreWebView2Environment_CreateCoreWebView2CompositionControllerWithOptions,
  CoreWebView2Environment_CreateSharedBuffer,
  CoreWebView2Environment_GetProcessExtendedInfos;