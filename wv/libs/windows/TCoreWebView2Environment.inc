// constructor
function TCoreWebView2Environment_Create(const aBaseIntf: ICoreWebView2Environment): TCoreWebView2Environment; extdecl;
begin
  {$define handleExceptionID := 1000}
  handleExceptionBegin
  Result := TCoreWebView2Environment.Create(aBaseIntf);
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_AddAllLoaderEvents(AObj: TCoreWebView2Environment; const aLoaderComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 1001}
  handleExceptionBegin
  Result := AObj.AddAllLoaderEvents(aLoaderComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_AddAllBrowserEvents(AObj: TCoreWebView2Environment; const aBrowserComponent: TComponent): LongBool; extdecl;
begin
  {$define handleExceptionID := 1002}
  handleExceptionBegin
  Result := AObj.AddAllBrowserEvents(aBrowserComponent);
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateCoreWebView2Controller(AObj: TCoreWebView2Environment; aParentWindow: THandle; const aBrowserEvents: IWVBrowserEvents; var aResult: HRESULT): LongBool; extdecl;
var
  OutaResult: HRESULT;
begin
  {$define handleExceptionID := 1003}
  handleExceptionBegin
  OutaResult := aResult;
  Result := AObj.CreateCoreWebView2Controller(aParentWindow, aBrowserEvents, OutaResult);
  aResult := OutaResult;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateWebResourceResponse(AObj: TCoreWebView2Environment; const aContent: IStream; aStatusCode: integer; aReasonPhrase: PChar; aHeaders: PChar; var aResponse: ICoreWebView2WebResourceResponse): LongBool; extdecl;
var
  OutaResponse: ICoreWebView2WebResourceResponse = nil;
begin
  {$define handleExceptionID := 1004}
  handleExceptionBegin
  Result := AObj.CreateWebResourceResponse(aContent, aStatusCode, PCharToUStr(aReasonPhrase), PCharToUStr(aHeaders), OutaResponse);
  aResponse := OutaResponse;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateWebResourceRequest(AObj: TCoreWebView2Environment; const aURI: PChar; const aMethod: PChar; const aPostData: IStream; const aHeaders: PChar; var aRequest: ICoreWebView2WebResourceRequest): LongBool; extdecl;
var
  OutaRequest: ICoreWebView2WebResourceRequest = nil;
begin
  {$define handleExceptionID := 1005}
  handleExceptionBegin
  Result := AObj.CreateWebResourceRequest(PCharToUStr(aURI), PCharToUStr(aMethod), aPostData, PCharToUStr(aHeaders), OutaRequest);
  aRequest := OutaRequest;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateCoreWebView2CompositionController(AObj: TCoreWebView2Environment; aParentWindow: THandle; const aBrowserEvents: IWVBrowserEvents; var aResult: HRESULT): LongBool; extdecl;
var
  OutaResult: HRESULT;
begin
  {$define handleExceptionID := 1006}
  handleExceptionBegin
  OutaResult := aResult;
  Result := AObj.CreateCoreWebView2CompositionController(aParentWindow, aBrowserEvents, OutaResult);
  aResult := OutaResult;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateCoreWebView2PointerInfo(AObj: TCoreWebView2Environment; var aPointerInfo: ICoreWebView2PointerInfo): LongBool; extdecl;
var
  OutaPointerInfo: ICoreWebView2PointerInfo = nil;
begin
  {$define handleExceptionID := 1007}
  handleExceptionBegin
  Result := AObj.CreateCoreWebView2PointerInfo(OutaPointerInfo);
  aPointerInfo := OutaPointerInfo;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_GetAutomationProviderForWindow(AObj: TCoreWebView2Environment; aHandle: THandle; var aProvider: IUnknown): LongBool; extdecl;
var
  OutaProvider: IUnknown = nil;
begin
  {$define handleExceptionID := 1008}
  handleExceptionBegin
  Result := AObj.GetAutomationProviderForWindow(aHandle, OutaProvider);
  aProvider := OutaProvider;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreatePrintSettings(AObj: TCoreWebView2Environment; var aPrintSettings: ICoreWebView2PrintSettings): LongBool; extdecl;
var
  OutaPrintSettings: ICoreWebView2PrintSettings = nil;
begin
  {$define handleExceptionID := 1009}
  handleExceptionBegin
  Result := AObj.CreatePrintSettings(OutaPrintSettings);
  aPrintSettings := OutaPrintSettings;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateContextMenuItem(AObj: TCoreWebView2Environment; const aLabel: PChar; const aIconStream: IStream; aKind: TWVMenuItemKind; var aMenuItem: ICoreWebView2ContextMenuItem): LongBool; extdecl;
var
  OutaMenuItem: ICoreWebView2ContextMenuItem = nil;
begin
  {$define handleExceptionID := 1010}
  handleExceptionBegin
  Result := AObj.CreateContextMenuItem(PCharToUStr(aLabel), aIconStream, aKind, OutaMenuItem);
  aMenuItem := OutaMenuItem;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateCoreWebView2ControllerOptions(AObj: TCoreWebView2Environment; var aOptions: ICoreWebView2ControllerOptions; var aResult: HResult): LongBool; extdecl;
var
  OutaOptions: ICoreWebView2ControllerOptions = nil;
  OutaResult: HResult;
begin
  {$define handleExceptionID := 1011}
  handleExceptionBegin
  OutaResult := aResult;
  Result := AObj.CreateCoreWebView2ControllerOptions(OutaOptions, OutaResult);
  aOptions := OutaOptions;
  aResult := OutaResult;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateCoreWebView2ControllerWithOptions(AObj: TCoreWebView2Environment; aParentWindow: HWND; const aOptions: ICoreWebView2ControllerOptions; const aBrowserEvents: IWVBrowserEvents; var aResult: HResult): LongBool; extdecl;
var
  OutaResult: HResult;
begin
  {$define handleExceptionID := 1012}
  handleExceptionBegin
  OutaResult := aResult;
  Result := AObj.CreateCoreWebView2ControllerWithOptions(aParentWindow, aOptions, aBrowserEvents, OutaResult);
  aResult := OutaResult;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateCoreWebView2CompositionControllerWithOptions(AObj: TCoreWebView2Environment; aParentWindow: HWND; const aOptions: ICoreWebView2ControllerOptions; const aBrowserEvents: IWVBrowserEvents; var aResult: HResult): LongBool; extdecl;
var
  OutaResult: HResult;
begin
  {$define handleExceptionID := 1013}
  handleExceptionBegin
  OutaResult := aResult;
  Result := AObj.CreateCoreWebView2CompositionControllerWithOptions(aParentWindow, aOptions, aBrowserEvents, OutaResult);
  aResult := OutaResult;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateSharedBuffer(AObj: TCoreWebView2Environment; var aSize: int64; var aSharedBuffer: ICoreWebView2SharedBuffer): LongBool; extdecl;
var
  OutaSharedBuffer: ICoreWebView2SharedBuffer = nil;
begin
  {$define handleExceptionID := 1014}
  handleExceptionBegin
  Result := AObj.CreateSharedBuffer(aSize, OutaSharedBuffer);
  aSharedBuffer := OutaSharedBuffer;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_GetProcessExtendedInfos(AObj: TCoreWebView2Environment; const aBrowserEvents: IWVBrowserEvents): LongBool; extdecl;
begin
  {$define handleExceptionID := 1015}
  handleExceptionBegin
  Result := AObj.GetProcessExtendedInfos(aBrowserEvents);
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateWebFileSystemFileHandle(AObj: TCoreWebView2Environment; const aPath: PChar; aPermission: TWVFileSystemHandlePermission; var aValue: ICoreWebView2FileSystemHandle): LongBool; extdecl;
var
  OutaValue: ICoreWebView2FileSystemHandle = nil;
begin
  {$define handleExceptionID := 1016}
  handleExceptionBegin
  Result := AObj.CreateWebFileSystemFileHandle(PCharToUStr(aPath), aPermission, OutaValue);
  aValue := OutaValue;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateWebFileSystemDirectoryHandle(AObj: TCoreWebView2Environment; const aPath: PChar; aPermission: TWVFileSystemHandlePermission; var aValue: ICoreWebView2FileSystemHandle): LongBool; extdecl;
var
  OutaValue: ICoreWebView2FileSystemHandle = nil;
begin
  {$define handleExceptionID := 1017}
  handleExceptionBegin
  Result := AObj.CreateWebFileSystemDirectoryHandle(PCharToUStr(aPath), aPermission, OutaValue);
  aValue := OutaValue;
  handleExceptionEnd
end;

// function
function TCoreWebView2Environment_CreateObjectCollection(AObj: TCoreWebView2Environment; aLength: cardinal; var aItems: IUnknown; var aObjectCollection: ICoreWebView2ObjectCollection): LongBool; extdecl;
var
  OutaItems: IUnknown = nil;
  OutaObjectCollection: ICoreWebView2ObjectCollection = nil;
begin
  {$define handleExceptionID := 1018}
  handleExceptionBegin
  Result := AObj.CreateObjectCollection(aLength, OutaItems, OutaObjectCollection);
  aItems := OutaItems;
  aObjectCollection := OutaObjectCollection;
  handleExceptionEnd
end;

// property
function TCoreWebView2Environment_Initialized(AObj: TCoreWebView2Environment): LongBool; extdecl;
begin
  {$define handleExceptionID := 1019}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Environment_BaseIntf(AObj: TCoreWebView2Environment; var Result: ICoreWebView2Environment); extdecl;
begin
  {$define handleExceptionID := 1020}
  handleExceptionBegin
  Result := AObj.BaseIntf;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Environment_BrowserVersionInfo(AObj: TCoreWebView2Environment; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1021}
  handleExceptionBegin
  StringBufferCreate(AObj.BrowserVersionInfo, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
function TCoreWebView2Environment_SupportsCompositionController(AObj: TCoreWebView2Environment): LongBool; extdecl;
begin
  {$define handleExceptionID := 1022}
  handleExceptionBegin
  Result := AObj.SupportsCompositionController;
  handleExceptionEnd
end;

// property
function TCoreWebView2Environment_SupportsControllerOptions(AObj: TCoreWebView2Environment): LongBool; extdecl;
begin
  {$define handleExceptionID := 1023}
  handleExceptionBegin
  Result := AObj.SupportsControllerOptions;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Environment_UserDataFolder(AObj: TCoreWebView2Environment; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1024}
  handleExceptionBegin
  StringBufferCreate(AObj.UserDataFolder, AStrData, AStrSize);
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Environment_ProcessInfos(AObj: TCoreWebView2Environment; var Result: ICoreWebView2ProcessInfoCollection); extdecl;
begin
  {$define handleExceptionID := 1025}
  handleExceptionBegin
  Result := AObj.ProcessInfos;
  handleExceptionEnd
end;

// property
procedure TCoreWebView2Environment_FailureReportFolderPath(AObj: TCoreWebView2Environment; out AStrData: Pointer; out AStrSize: NativeUInt); extdecl;
begin
  {$define handleExceptionID := 1026}
  handleExceptionBegin
  StringBufferCreate(AObj.FailureReportFolderPath, AStrData, AStrSize);
  handleExceptionEnd
end;

exports
  TCoreWebView2Environment_Create,
  TCoreWebView2Environment_AddAllLoaderEvents,
  TCoreWebView2Environment_AddAllBrowserEvents,
  TCoreWebView2Environment_CreateCoreWebView2Controller,
  TCoreWebView2Environment_CreateWebResourceResponse,
  TCoreWebView2Environment_CreateWebResourceRequest,
  TCoreWebView2Environment_CreateCoreWebView2CompositionController,
  TCoreWebView2Environment_CreateCoreWebView2PointerInfo,
  TCoreWebView2Environment_GetAutomationProviderForWindow,
  TCoreWebView2Environment_CreatePrintSettings,
  TCoreWebView2Environment_CreateContextMenuItem,
  TCoreWebView2Environment_CreateCoreWebView2ControllerOptions,
  TCoreWebView2Environment_CreateCoreWebView2ControllerWithOptions,
  TCoreWebView2Environment_CreateCoreWebView2CompositionControllerWithOptions,
  TCoreWebView2Environment_CreateSharedBuffer,
  TCoreWebView2Environment_GetProcessExtendedInfos,
  TCoreWebView2Environment_CreateWebFileSystemFileHandle,
  TCoreWebView2Environment_CreateWebFileSystemDirectoryHandle,
  TCoreWebView2Environment_CreateObjectCollection,
  TCoreWebView2Environment_Initialized,
  TCoreWebView2Environment_BaseIntf,
  TCoreWebView2Environment_BrowserVersionInfo,
  TCoreWebView2Environment_SupportsCompositionController,
  TCoreWebView2Environment_SupportsControllerOptions,
  TCoreWebView2Environment_UserDataFolder,
  TCoreWebView2Environment_ProcessInfos,
  TCoreWebView2Environment_FailureReportFolderPath;