// function static
function uCEFMiscFunctions_CefColorGetA(color: TCefColor): Byte; extdecl;
begin
  Result := uCEFMiscFunctions.CefColorGetA(color);
end;

// function static
function uCEFMiscFunctions_CefColorGetR(color: TCefColor): byte; extdecl;
begin
  Result := uCEFMiscFunctions.CefColorGetR(color);
end;

// function static
function uCEFMiscFunctions_CefColorGetG(color: TCefColor): Byte; extdecl;
begin
  Result := uCEFMiscFunctions.CefColorGetG(color);
end;

// function static
function uCEFMiscFunctions_CefColorGetB(color: TCefColor): Byte; extdecl;
begin
  Result := uCEFMiscFunctions.CefColorGetB(color);
end;

// function static
function uCEFMiscFunctions_CefColorSetARGB(a: Byte; r: Byte; g: Byte; b: Byte): TCefColor; extdecl;
begin
  Result := uCEFMiscFunctions.CefColorSetARGB(a, r, g, b);
end;

// function static
function uCEFMiscFunctions_CefGetObject(ptr: Pointer): TObject; extdecl;
begin
  Result := uCEFMiscFunctions.CefGetObject(ptr);
end;

// function static
function uCEFMiscFunctions_CefRegisterExtension(const name: PChar; const code: PChar; const Handler: ICefv8Handler): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefRegisterExtension(name, code, Handler);
end;

// function static
function uCEFMiscFunctions_CefPostTask(aThreadId: TCefThreadId; const aTask: ICefTask): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefPostTask(aThreadId, aTask);
end;

// function static
function uCEFMiscFunctions_CefPostDelayedTask(aThreadId: TCefThreadId; const aTask: ICefTask; var aDelayMs: Int64): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefPostDelayedTask(aThreadId, aTask, aDelayMs);
end;

// function static
function uCEFMiscFunctions_CefCurrentlyOn(aThreadId: TCefThreadId): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefCurrentlyOn(aThreadId);
end;

// function static
procedure uCEFMiscFunctions_FixCefTime(var dt: TCefTimePtr; var Result: TCefTime); extdecl;
var
  Indt: TCefTime;
begin
  Indt := TCefTimeToPas(dt);
  Result := uCEFMiscFunctions.FixCefTime(Indt);
end;

// function static
procedure uCEFMiscFunctions_CefTimeToDateTime(var dt: TCefTimePtr; var Result: Double); extdecl;
var
  Indt: TCefTime;
begin
  Indt := TCefTimeToPas(dt);
  Result := uCEFMiscFunctions.CefTimeToDateTime(Indt);
end;

// function static
procedure uCEFMiscFunctions_DateTimeToCefTime(var dt: Double; var Result: TCefTime); extdecl;
begin
  Result := uCEFMiscFunctions.DateTimeToCefTime(dt);
end;

// function static
procedure uCEFMiscFunctions_DateTimeToCefBaseTime(var dt: Double; var Result: TCefBaseTime); extdecl;
begin
  Result := uCEFMiscFunctions.DateTimeToCefBaseTime(dt);
end;

// function static
procedure uCEFMiscFunctions_CefTimeToDouble(var dt: TCefTimePtr; var Result: double); extdecl;
var
  Indt: TCefTime;
begin
  Indt := TCefTimeToPas(dt);
  Result := uCEFMiscFunctions.CefTimeToDouble(Indt);
end;

// function static
procedure uCEFMiscFunctions_DoubleToCefTime(var dt: double; var Result: TCefTime); extdecl;
begin
  Result := uCEFMiscFunctions.DoubleToCefTime(dt);
end;

// function static
procedure uCEFMiscFunctions_CefTimeToUnixTime(var dt: TCefTimePtr; var Result: int64); extdecl;
var
  Indt: TCefTime;
begin
  Indt := TCefTimeToPas(dt);
  Result := uCEFMiscFunctions.CefTimeToUnixTime(Indt);
end;

// function static
procedure uCEFMiscFunctions_UnixTimeToCefTime(var dt: int64; var Result: TCefTime); extdecl;
begin
  Result := uCEFMiscFunctions.UnixTimeToCefTime(dt);
end;

// function static
procedure uCEFMiscFunctions_CefTimeNow(var Result: TCefTime); extdecl;
begin
  Result := uCEFMiscFunctions.CefTimeNow();
end;

// function static
procedure uCEFMiscFunctions_DoubleTimeNow(var Result: double); extdecl;
begin
  Result := uCEFMiscFunctions.DoubleTimeNow();
end;

// function static
procedure uCEFMiscFunctions_CefBaseTimeNow(var Result: TCefBaseTime); extdecl;
begin
  Result := uCEFMiscFunctions.CefBaseTimeNow();
end;

// function static
procedure uCEFMiscFunctions_CetTimeToCefBaseTime(var ct: TCefTimePtr; var Result: TCefBaseTime); extdecl;
var
  Inct: TCefTime;
begin
  Inct := TCefTimeToPas(ct);
  Result := uCEFMiscFunctions.CetTimeToCefBaseTime(Inct);
end;

// function static
procedure uCEFMiscFunctions_CetTimeFromCefBaseTime(var cbt: TCefBaseTime; var Result: TCefTime); extdecl;
begin
  Result := uCEFMiscFunctions.CetTimeFromCefBaseTime(cbt);
end;

// function static
procedure uCEFMiscFunctions_CefBaseTimeToDateTime(var cbt: TCefBaseTime; var Result: Double); extdecl;
begin
  Result := uCEFMiscFunctions.CefBaseTimeToDateTime(cbt);
end;

// function static
function uCEFMiscFunctions_CustomPathIsRelative(const aPath: PChar): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CustomPathIsRelative(aPath);
end;

// function static
function uCEFMiscFunctions_CustomPathCanonicalize(const aOriginalPath: PChar; var aCanonicalPath: PChar): LongBool; extdecl;
var
  OutaCanonicalPath: string;
begin
  OutaCanonicalPath := aCanonicalPath;
  Result := uCEFMiscFunctions.CustomPathCanonicalize(aOriginalPath, OutaCanonicalPath);
  aCanonicalPath := ToPChar(OutaCanonicalPath);
end;

// function static
function uCEFMiscFunctions_CustomAbsolutePath(const aPath: PChar; aMustExist: LongBool): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.CustomAbsolutePath(aPath, aMustExist));
end;

// function static
function uCEFMiscFunctions_CustomPathIsURL(const aPath: PChar): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CustomPathIsURL(aPath);
end;

// function static
function uCEFMiscFunctions_CustomPathIsUNC(const aPath: PChar): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CustomPathIsUNC(aPath);
end;

// function static
function uCEFMiscFunctions_GetModulePath(): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.GetModulePath());
end;

// function static
function uCEFMiscFunctions_CefIsCertStatusError(Status: TCefCertStatus): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefIsCertStatusError(Status);
end;

// function static
function uCEFMiscFunctions_CefCrashReportingEnabled(): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefCrashReportingEnabled();
end;

// function static
function uCEFMiscFunctions_CefRegisterSchemeHandlerFactory(const SchemeName: PChar; const DomainName: PChar; const handler: TCefResourceHandlerClass): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefRegisterSchemeHandlerFactory(SchemeName, DomainName, handler);
end;

// function static
function uCEFMiscFunctions_CefClearSchemeHandlerFactories(): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefClearSchemeHandlerFactories();
end;

// function static
function uCEFMiscFunctions_CefAddCrossOriginWhitelistEntry(const SourceOrigin: PChar; const TargetProtocol: PChar; const TargetDomain: PChar; AllowTargetSubdomains: LongBool): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefAddCrossOriginWhitelistEntry(SourceOrigin, TargetProtocol, TargetDomain, AllowTargetSubdomains);
end;

// function static
function uCEFMiscFunctions_CefRemoveCrossOriginWhitelistEntry(const SourceOrigin: PChar; const TargetProtocol: PChar; const TargetDomain: PChar; AllowTargetSubdomains: LongBool): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefRemoveCrossOriginWhitelistEntry(SourceOrigin, TargetProtocol, TargetDomain, AllowTargetSubdomains);
end;

// function static
function uCEFMiscFunctions_CefClearCrossOriginWhitelist(): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefClearCrossOriginWhitelist();
end;

// function static
{$IFDEF MSWINDOWS}
procedure uCEFMiscFunctions_GetExtendedFileVersion(const aFileName: PChar; var Result: uint64); extdecl;
begin
  Result := uCEFMiscFunctions.GetExtendedFileVersion(aFileName);
end;
{$ENDIF}

// function static
function uCEFMiscFunctions_SplitLongString(aSrcString: PChar): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.SplitLongString(aSrcString));
end;

// function static
function uCEFMiscFunctions_GetAbsoluteDirPath(const aSrcPath: PChar; var aRsltPath: PChar): LongBool; extdecl;
var
  OutaRsltPath: string;
begin
  OutaRsltPath := aRsltPath;
  Result := uCEFMiscFunctions.GetAbsoluteDirPath(aSrcPath, OutaRsltPath);
  aRsltPath := ToPChar(OutaRsltPath);
end;

// function static
function uCEFMiscFunctions_CheckSubprocessPath(const aSubprocessPath: PChar; var aMissingFiles: PChar): LongBool; extdecl;
var
  OutaMissingFiles: string;
begin
  OutaMissingFiles := aMissingFiles;
  Result := uCEFMiscFunctions.CheckSubprocessPath(aSubprocessPath, OutaMissingFiles);
  aMissingFiles := ToPChar(OutaMissingFiles);
end;

// function static
function uCEFMiscFunctions_CheckLocales(const aLocalesDirPath: PChar; var aMissingFiles: PChar; const aLocalesRequired: PChar): LongBool; extdecl;
var
  OutaMissingFiles: string;
begin
  OutaMissingFiles := aMissingFiles;
  Result := uCEFMiscFunctions.CheckLocales(aLocalesDirPath, OutaMissingFiles, aLocalesRequired);
  aMissingFiles := ToPChar(OutaMissingFiles);
end;

// function static
function uCEFMiscFunctions_CheckResources(const aResourcesDirPath: PChar; var aMissingFiles: PChar): LongBool; extdecl;
var
  OutaMissingFiles: string;
begin
  OutaMissingFiles := aMissingFiles;
  Result := uCEFMiscFunctions.CheckResources(aResourcesDirPath, OutaMissingFiles);
  aMissingFiles := ToPChar(OutaMissingFiles);
end;

// function static
function uCEFMiscFunctions_CheckDLLs(const aFrameworkDirPath: PChar; var aMissingFiles: PChar): LongBool; extdecl;
var
  OutaMissingFiles: string;
begin
  OutaMissingFiles := aMissingFiles;
  Result := uCEFMiscFunctions.CheckDLLs(aFrameworkDirPath, OutaMissingFiles);
  aMissingFiles := ToPChar(OutaMissingFiles);
end;

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_CheckDLLVersion(const aDLLFile: PChar; aMajor: uint16; aMinor: uint16; aRelease: uint16; aBuild: uint16): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CheckDLLVersion(aDLLFile, aMajor, aMinor, aRelease, aBuild);
end;
{$ENDIF}

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_GetDLLHeaderMachine(const aDLLFile: PChar; var aMachine: integer): LongBool; extdecl;
var
  OutaMachine: integer;
begin
  OutaMachine := aMachine;
  Result := uCEFMiscFunctions.GetDLLHeaderMachine(aDLLFile, OutaMachine);
  aMachine := OutaMachine;
end;
{$ENDIF}

// function static
function uCEFMiscFunctions_GetFileTypeDescription(const aExtension: PChar): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.GetFileTypeDescription(aExtension));
end;

// function static
function uCEFMiscFunctions_CheckFilesExist(var aList: TStringList; var aMissingFiles: PChar): LongBool; extdecl;
var
  OutaList: TStringList;
  OutaMissingFiles: string;
begin
  OutaList := aList;
  OutaMissingFiles := aMissingFiles;
  Result := uCEFMiscFunctions.CheckFilesExist(OutaList, OutaMissingFiles);
  aList := OutaList;
  aMissingFiles := ToPChar(OutaMissingFiles);
end;

// function static
function uCEFMiscFunctions_Is32BitProcess(): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.Is32BitProcess();
end;

// function static
function uCEFMiscFunctions_CefFormatUrlForSecurityDisplay(const originUrl: PChar): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.CefFormatUrlForSecurityDisplay(originUrl));
end;

// function static
function uCEFMiscFunctions_CefGetMimeType(const extension: PChar): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.CefGetMimeType(extension));
end;

// function static
function uCEFMiscFunctions_CefBase64Encode(const data: Pointer; dataSize: NativeUInt): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.CefBase64Encode(data, dataSize));
end;

// function static
procedure uCEFMiscFunctions_CefBase64Decode(const data: PChar; var Result: ICefBinaryValue); extdecl;
begin
  Result := uCEFMiscFunctions.CefBase64Decode(data);
end;

// function static
function uCEFMiscFunctions_CefUriEncode(const text: PChar; usePlus: LongBool): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.CefUriEncode(text, usePlus));
end;

// function static
function uCEFMiscFunctions_CefUriDecode(const text: PChar; convertToUtf8: LongBool; unescapeRule: TCefUriUnescapeRule): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.CefUriDecode(text, convertToUtf8, unescapeRule));
end;

// function static
function uCEFMiscFunctions_CefGetPath(const aPathKey: TCefPathKey): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.CefGetPath(aPathKey));
end;

// function static
function uCEFMiscFunctions_CefIsRTL(): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefIsRTL();
end;

// function static
function uCEFMiscFunctions_CefCreateDirectory(const fullPath: PChar): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefCreateDirectory(fullPath);
end;

// function static
function uCEFMiscFunctions_CefGetTempDirectory(var tempDir: PChar): LongBool; extdecl;
var
  OuttempDir: ustring;
begin
  Result := uCEFMiscFunctions.CefGetTempDirectory(OuttempDir);
  tempDir := ToPChar(OuttempDir);
end;

// function static
function uCEFMiscFunctions_CefCreateNewTempDirectory(const prefix: PChar; var newTempPath: PChar): LongBool; extdecl;
var
  OutnewTempPath: ustring;
begin
  Result := uCEFMiscFunctions.CefCreateNewTempDirectory(prefix, OutnewTempPath);
  newTempPath := ToPChar(OutnewTempPath);
end;

// function static
function uCEFMiscFunctions_CefCreateTempDirectoryInDirectory(const baseDir: PChar; const prefix: PChar; var newDir: PChar): LongBool; extdecl;
var
  OutnewDir: ustring;
begin
  Result := uCEFMiscFunctions.CefCreateTempDirectoryInDirectory(baseDir, prefix, OutnewDir);
  newDir := ToPChar(OutnewDir);
end;

// function static
function uCEFMiscFunctions_CefDirectoryExists(const path: PChar): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefDirectoryExists(path);
end;

// function static
function uCEFMiscFunctions_CefDeleteFile(const path: PChar; recursive: LongBool): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefDeleteFile(path, recursive);
end;

// function static
function uCEFMiscFunctions_CefZipDirectory(const srcDir: PChar; const destFile: PChar; includeHiddenFiles: LongBool): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefZipDirectory(srcDir, destFile, includeHiddenFiles);
end;

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_CefIsKeyDown(aWparam: WPARAM): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefIsKeyDown(aWparam);
end;
{$ENDIF}

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_CefIsKeyToggled(aWparam: WPARAM): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.CefIsKeyToggled(aWparam);
end;
{$ENDIF}

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_GetCefMouseModifiersToEventFlags(): TCefEventFlags; extdecl;
begin
  Result := uCEFMiscFunctions.GetCefMouseModifiers();
end;
{$ENDIF}

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_GetCefMouseModifiersWithWPARAM(awparam: WPARAM): TCefEventFlags; extdecl;
begin
  Result := uCEFMiscFunctions.GetCefMouseModifiers(awparam);
end;
{$ENDIF}

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_GetCefKeyboardModifiers(aWparam: WPARAM; aLparam: LPARAM): TCefEventFlags; extdecl;
begin
  Result := uCEFMiscFunctions.GetCefKeyboardModifiers(aWparam, aLparam);
end;
{$ENDIF}

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_GetWindowsMajorMinorVersion(var wMajorVersion: DWORD; var wMinorVersion: DWORD): LongBool; extdecl;
var
  OutwMajorVersion: DWORD;
  OutwMinorVersion: DWORD;
begin
  OutwMajorVersion := wMajorVersion;
  OutwMinorVersion := wMinorVersion;
  Result := uCEFMiscFunctions.GetWindowsMajorMinorVersion(OutwMajorVersion, OutwMinorVersion);
  wMajorVersion := OutwMajorVersion;
  wMinorVersion := OutwMinorVersion;
end;
{$ENDIF}

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_RunningWindows10OrNewer(): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.RunningWindows10OrNewer();
end;
{$ENDIF}

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_GetDPIForHandle(aHandle: HWND; var aDPI: UINT): LongBool; extdecl;
var
  OutaDPI: UINT;
begin
  OutaDPI := aDPI;
  Result := uCEFMiscFunctions.GetDPIForHandle(aHandle, OutaDPI);
  aDPI := OutaDPI;
end;
{$ENDIF}

// function static
{$IFDEF MSWINDOWS}
function uCEFMiscFunctions_GetDefaultCEFUserAgent(): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.GetDefaultCEFUserAgent());
end;
{$ENDIF}

// function static
function uCEFMiscFunctions_DeviceToLogicalWithIntDouble(aValue: integer; var aDeviceScaleFactor: double): integer; extdecl;
begin
  Result := uCEFMiscFunctions.DeviceToLogical(aValue, aDeviceScaleFactor);
end;

// function static
procedure uCEFMiscFunctions_DeviceToLogicalWithSingleDouble(var aValue: single; var aDeviceScaleFactor: double; var Result: single); extdecl;
begin
  Result := uCEFMiscFunctions.DeviceToLogical(aValue, aDeviceScaleFactor);
end;

// function static
function uCEFMiscFunctions_LogicalToDeviceWithIntDouble(aValue: integer; var aDeviceScaleFactor: double): integer; extdecl;
begin
  Result := uCEFMiscFunctions.LogicalToDevice(aValue, aDeviceScaleFactor);
end;

// function static
function uCEFMiscFunctions_GetScreenDPI(): integer; extdecl;
begin
  Result := uCEFMiscFunctions.GetScreenDPI();
end;

// function static
procedure uCEFMiscFunctions_GetDeviceScaleFactor(var Result: single); extdecl;
begin
  Result := uCEFMiscFunctions.GetDeviceScaleFactor();
end;

// function static
function uCEFMiscFunctions_DeleteDirContents(const aDirectory: PChar; const aExcludeFiles: TStringList): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.DeleteDirContents(aDirectory, aExcludeFiles);
end;

// function static
function uCEFMiscFunctions_DeleteFileList(const aFileList: TStringList): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.DeleteFileList(aFileList);
end;

// function static
function uCEFMiscFunctions_MoveFileList(const aFileList: TStringList; const aSrcDirectory: PChar; const aDstDirectory: PChar): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.MoveFileList(aFileList, aSrcDirectory, aDstDirectory);
end;

// function static
function uCEFMiscFunctions_CefGetDataURIWithStrX2(const aString: PChar; const aMimeType: PChar): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.CefGetDataURI(aString, aMimeType));
end;

// function static
function uCEFMiscFunctions_CefGetDataURIWithPointerIntStrX2(aData: pointer; aSize: integer; const aMimeType: PChar; const aCharset: PChar): PChar; extdecl;
begin
  Result := ToPChar(uCEFMiscFunctions.CefGetDataURI(aData, aSize, aMimeType, aCharset));
end;

// function static
function uCEFMiscFunctions_ValidCefWindowHandle(aHandle: TCefWindowHandle): LongBool; extdecl;
begin
  Result := uCEFMiscFunctions.ValidCefWindowHandle(aHandle);
end;

// function static
function uCEFMiscFunctions_GetCommandLineSwitchValue(const aKey: PChar; var aValue: PChar): LongBool; extdecl;
var
  OutaValue: ustring;
begin
  OutaValue := aValue;
  Result := uCEFMiscFunctions.GetCommandLineSwitchValue(aKey, OutaValue);
  aValue := ToPChar(OutaValue);
end;

// procedure static
procedure uCEFMiscFunctions_InitializeCefTime(var aTime: TCefTimePtr); extdecl;
var
  OutaTime: TCefTime;
begin
  OutaTime := TCefTimeToPas(aTime);
  uCEFMiscFunctions.InitializeCefTime(OutaTime);
  aTime := TCefTimeToGo(OutaTime);
end;

// procedure static
{$IFDEF MSWINDOWS}
procedure uCEFMiscFunctions_WindowInfoAsChildWithWInfoWHandleRectStrDWORD(var aWindowInfo: TCefWindowInfoPtr; aParent: TCefWindowHandle; var aRect: TRect; const aWindowName: PChar; aExStyle: DWORD); extdecl;
var
  OutaWindowInfo: TCefWindowInfo;
begin
  OutaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  uCEFMiscFunctions.WindowInfoAsChild(OutaWindowInfo, aParent, aRect, aWindowName, aExStyle);
  aWindowInfo := TCefWindowInfoToGo(OutaWindowInfo);
end;
{$ENDIF}

// procedure static
{$IFDEF MSWINDOWS}
procedure uCEFMiscFunctions_WindowInfoAsPopUpWithWInfoWHandleStrDWORD(var aWindowInfo: TCefWindowInfoPtr; aParent: TCefWindowHandle; const aWindowName: PChar; aExStyle: DWORD); extdecl;
var
  OutaWindowInfo: TCefWindowInfo;
begin
  OutaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  uCEFMiscFunctions.WindowInfoAsPopUp(OutaWindowInfo, aParent, aWindowName, aExStyle);
  aWindowInfo := TCefWindowInfoToGo(OutaWindowInfo);
end;
{$ENDIF}

// procedure static
{$IFDEF MSWINDOWS}
procedure uCEFMiscFunctions_WindowInfoAsWindowlessWithWInfoWHandleStrDWORD(var aWindowInfo: TCefWindowInfoPtr; aParent: TCefWindowHandle; const aWindowName: PChar; aExStyle: DWORD); extdecl;
var
  OutaWindowInfo: TCefWindowInfo;
begin
  OutaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  uCEFMiscFunctions.WindowInfoAsWindowless(OutaWindowInfo, aParent, aWindowName, aExStyle);
  aWindowInfo := TCefWindowInfoToGo(OutaWindowInfo);
end;
{$ENDIF}

// procedure static
{$IFDEF MACOSX}
procedure uCEFMiscFunctions_WindowInfoAsChildWithWInfoWHandleRectStrBool(var aWindowInfo: TCefWindowInfoPtr; aParent: TCefWindowHandle; var aRect: TRect; const aWindowName: PChar; aHidden: LongBool); extdecl;
var
  OutaWindowInfo: TCefWindowInfo;
begin
  OutaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  uCEFMiscFunctions.WindowInfoAsChild(OutaWindowInfo, aParent, aRect, aWindowName, aHidden);
  aWindowInfo := TCefWindowInfoToGo(OutaWindowInfo);
end;
{$ENDIF}

// procedure static
{$IFDEF MACOSX}
procedure uCEFMiscFunctions_WindowInfoAsPopUpWithWInfoWHandleStrBool(var aWindowInfo: TCefWindowInfoPtr; aParent: TCefWindowHandle; const aWindowName: PChar; aHidden: LongBool); extdecl;
var
  OutaWindowInfo: TCefWindowInfo;
begin
  OutaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  uCEFMiscFunctions.WindowInfoAsPopUp(OutaWindowInfo, aParent, aWindowName, aHidden);
  aWindowInfo := TCefWindowInfoToGo(OutaWindowInfo);
end;
{$ENDIF}

// procedure static
{$IFDEF MACOSX}
procedure uCEFMiscFunctions_WindowInfoAsWindowlessWithWInfoWHandleStrBool(var aWindowInfo: TCefWindowInfoPtr; aParent: TCefWindowHandle; const aWindowName: PChar; aHidden: LongBool); extdecl;
var
  OutaWindowInfo: TCefWindowInfo;
begin
  OutaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  uCEFMiscFunctions.WindowInfoAsWindowless(OutaWindowInfo, aParent, aWindowName, aHidden);
  aWindowInfo := TCefWindowInfoToGo(OutaWindowInfo);
end;
{$ENDIF}

// procedure static
{$IFDEF LINUX}
procedure uCEFMiscFunctions_WindowInfoAsChildWithWInfoWHandleRectStr(var aWindowInfo: TCefWindowInfoPtr; aParent: TCefWindowHandle; var aRect: TRect; const aWindowName: PChar); extdecl;
var
  OutaWindowInfo: TCefWindowInfo;
begin
  OutaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  uCEFMiscFunctions.WindowInfoAsChild(OutaWindowInfo, aParent, aRect, aWindowName);
  aWindowInfo := TCefWindowInfoToGo(OutaWindowInfo);
end;
{$ENDIF}

// procedure static
{$IFDEF LINUX}
procedure uCEFMiscFunctions_WindowInfoAsPopUpWithWInfoWHandleStr(var aWindowInfo: TCefWindowInfoPtr; aParent: TCefWindowHandle; const aWindowName: PChar); extdecl;
var
  OutaWindowInfo: TCefWindowInfo;
begin
  OutaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  uCEFMiscFunctions.WindowInfoAsPopUp(OutaWindowInfo, aParent, aWindowName);
  aWindowInfo := TCefWindowInfoToGo(OutaWindowInfo);
end;
{$ENDIF}

// procedure static
{$IFDEF LINUX}
procedure uCEFMiscFunctions_WindowInfoAsWindowlessWithWInfoWHandleStr(var aWindowInfo: TCefWindowInfoPtr; aParent: TCefWindowHandle; const aWindowName: PChar); extdecl;
var
  OutaWindowInfo: TCefWindowInfo;
begin
  OutaWindowInfo := TCefWindowInfoToPas(aWindowInfo);
  uCEFMiscFunctions.WindowInfoAsWindowless(OutaWindowInfo, aParent, aWindowName);
  aWindowInfo := TCefWindowInfoToGo(OutaWindowInfo);
end;
{$ENDIF}

// procedure static
procedure uCEFMiscFunctions_CefSetCrashKeyValue(const aKey: PChar; const aValue: PChar); extdecl;
begin
  uCEFMiscFunctions.CefSetCrashKeyValue(aKey, aValue);
end;

// procedure static
procedure uCEFMiscFunctions_CefLog(const aFile: PChar; aLine: integer; aSeverity: integer; const aMessage: PChar); extdecl;
begin
  uCEFMiscFunctions.CefLog(aFile, aLine, aSeverity, aMessage);
end;

// procedure static
procedure uCEFMiscFunctions_CefKeyEventLog(var aEvent: TCefKeyEventPtr); extdecl;
var
  InaEvent: TCefKeyEvent;
begin
  InaEvent := TCefKeyEventToPas(aEvent);
  uCEFMiscFunctions.CefKeyEventLog(InaEvent);
end;

// procedure static
procedure uCEFMiscFunctions_CefMouseEventLog(var aEvent: TCefMouseEventPtr); extdecl;
var
  InaEvent: TCefMouseEvent;
begin
  InaEvent := TCefMouseEventToPas(aEvent);
  uCEFMiscFunctions.CefMouseEventLog(InaEvent);
end;

// procedure static
procedure uCEFMiscFunctions_OutputDebugMessage(const aMessage: PChar); extdecl;
begin
  uCEFMiscFunctions.OutputDebugMessage(aMessage);
end;

// procedure static
{$IFDEF MSWINDOWS}
procedure uCEFMiscFunctions_OutputLastErrorMessage(); extdecl;
begin
  uCEFMiscFunctions.OutputLastErrorMessage();
end;
{$ENDIF}

// procedure static
procedure uCEFMiscFunctions_CefGetExtensionsForMimeType(const mimeType: PChar; var extensions: TStringList); extdecl;
var
  Outextensions: TStringList;
begin
  Outextensions := extensions;
  uCEFMiscFunctions.CefGetExtensionsForMimeType(mimeType, Outextensions);
  extensions := Outextensions;
end;

// procedure static
procedure uCEFMiscFunctions_CefLoadCRLSetsFile(const path: PChar); extdecl;
begin
  uCEFMiscFunctions.CefLoadCRLSetsFile(path);
end;

// procedure static
{$IFDEF MSWINDOWS}
procedure uCEFMiscFunctions_CefCheckAltGrPressed(aWparam: WPARAM; var aEvent: TCefKeyEventPtr); extdecl;
var
  OutaEvent: TCefKeyEvent;
begin
  OutaEvent := TCefKeyEventToPas(aEvent);
  uCEFMiscFunctions.CefCheckAltGrPressed(aWparam, OutaEvent);
  aEvent := TCefKeyEventToGo(OutaEvent);
end;
{$ENDIF}

// procedure static
{$IFDEF MSWINDOWS}
procedure uCEFMiscFunctions_DropEffectToDragOperation(aEffect: Integer; var aAllowedOps: TCefDragOperations); extdecl;
var
  OutaAllowedOps: TCefDragOperations;
begin
  OutaAllowedOps := aAllowedOps;
  uCEFMiscFunctions.DropEffectToDragOperation(aEffect, OutaAllowedOps);
  aAllowedOps := OutaAllowedOps;
end;
{$ENDIF}

// procedure static
{$IFDEF MSWINDOWS}
procedure uCEFMiscFunctions_DragOperationToDropEffect(const aDragOperations: TCefDragOperations; var aEffect: Integer); extdecl;
var
  OutaEffect: Longint;
begin
  OutaEffect := aEffect;
  uCEFMiscFunctions.DragOperationToDropEffect(aDragOperations, OutaEffect);
  aEffect := OutaEffect;
end;
{$ENDIF}

// procedure static
procedure uCEFMiscFunctions_DeviceToLogicalWithMouseEventDouble(var aEvent: TCEFMouseEventPtr; var aDeviceScaleFactor: double); extdecl;
var
  OutaEvent: TCEFMouseEvent;
begin
  OutaEvent := TCEFMouseEventToPas(aEvent);
  uCEFMiscFunctions.DeviceToLogical(OutaEvent, aDeviceScaleFactor);
  aEvent := TCEFMouseEventToGo(OutaEvent);
end;

// procedure static
procedure uCEFMiscFunctions_DeviceToLogicalWithTouchEventDouble(var aEvent: TCefTouchEventPtr; var aDeviceScaleFactor: double); extdecl;
var
  OutaEvent: TCefTouchEvent;
begin
  OutaEvent := TCefTouchEventToPas(aEvent);
  uCEFMiscFunctions.DeviceToLogical(OutaEvent, aDeviceScaleFactor);
  aEvent := TCefTouchEventToGo(OutaEvent);
end;

// procedure static
procedure uCEFMiscFunctions_DeviceToLogicalWithPointDouble(var aPoint: TPoint; var aDeviceScaleFactor: double); extdecl;
var
  OutaPoint: TPoint;
begin
  OutaPoint := aPoint;
  uCEFMiscFunctions.DeviceToLogical(OutaPoint, aDeviceScaleFactor);
  aPoint := OutaPoint;
end;

// procedure static
procedure uCEFMiscFunctions_LogicalToDeviceWithRectDouble(var aRect: TCEFRectPtr; var aDeviceScaleFactor: double); extdecl;
var
  OutaRect: TCEFRect;
begin
  OutaRect := TCEFRectToPas(aRect);
  uCEFMiscFunctions.LogicalToDevice(OutaRect, aDeviceScaleFactor);
  aRect := TCEFRectToGo(OutaRect);
end;

// procedure static
procedure uCEFMiscFunctions_InitializeWindowHandle(var aHandle: TCefWindowHandle); extdecl;
var
  OutaHandle: TCefWindowHandle;
begin
  OutaHandle := aHandle;
  uCEFMiscFunctions.InitializeWindowHandle(OutaHandle);
  aHandle := OutaHandle;
end;

exports
  uCEFMiscFunctions_CefColorGetA,
  uCEFMiscFunctions_CefColorGetR,
  uCEFMiscFunctions_CefColorGetG,
  uCEFMiscFunctions_CefColorGetB,
  uCEFMiscFunctions_CefColorSetARGB,
  uCEFMiscFunctions_CefGetObject,
  uCEFMiscFunctions_CefRegisterExtension,
  uCEFMiscFunctions_CefPostTask,
  uCEFMiscFunctions_CefPostDelayedTask,
  uCEFMiscFunctions_CefCurrentlyOn,
  uCEFMiscFunctions_FixCefTime,
  uCEFMiscFunctions_CefTimeToDateTime,
  uCEFMiscFunctions_DateTimeToCefTime,
  uCEFMiscFunctions_DateTimeToCefBaseTime,
  uCEFMiscFunctions_CefTimeToDouble,
  uCEFMiscFunctions_DoubleToCefTime,
  uCEFMiscFunctions_CefTimeToUnixTime,
  uCEFMiscFunctions_UnixTimeToCefTime,
  uCEFMiscFunctions_CefTimeNow,
  uCEFMiscFunctions_DoubleTimeNow,
  uCEFMiscFunctions_CefBaseTimeNow,
  uCEFMiscFunctions_CetTimeToCefBaseTime,
  uCEFMiscFunctions_CetTimeFromCefBaseTime,
  uCEFMiscFunctions_CefBaseTimeToDateTime,
  uCEFMiscFunctions_CustomPathIsRelative,
  uCEFMiscFunctions_CustomPathCanonicalize,
  uCEFMiscFunctions_CustomAbsolutePath,
  uCEFMiscFunctions_CustomPathIsURL,
  uCEFMiscFunctions_CustomPathIsUNC,
  uCEFMiscFunctions_GetModulePath,
  uCEFMiscFunctions_CefIsCertStatusError,
  uCEFMiscFunctions_CefCrashReportingEnabled,
  uCEFMiscFunctions_CefRegisterSchemeHandlerFactory,
  uCEFMiscFunctions_CefClearSchemeHandlerFactories,
  uCEFMiscFunctions_CefAddCrossOriginWhitelistEntry,
  uCEFMiscFunctions_CefRemoveCrossOriginWhitelistEntry,
  uCEFMiscFunctions_CefClearCrossOriginWhitelist,
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_GetExtendedFileVersion,
{$ENDIF}
  uCEFMiscFunctions_SplitLongString,
  uCEFMiscFunctions_GetAbsoluteDirPath,
  uCEFMiscFunctions_CheckSubprocessPath,
  uCEFMiscFunctions_CheckLocales,
  uCEFMiscFunctions_CheckResources,
  uCEFMiscFunctions_CheckDLLs,
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_CheckDLLVersion,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_GetDLLHeaderMachine,
{$ENDIF}
  uCEFMiscFunctions_GetFileTypeDescription,
  uCEFMiscFunctions_CheckFilesExist,
  uCEFMiscFunctions_Is32BitProcess,
  uCEFMiscFunctions_CefFormatUrlForSecurityDisplay,
  uCEFMiscFunctions_CefGetMimeType,
  uCEFMiscFunctions_CefBase64Encode,
  uCEFMiscFunctions_CefBase64Decode,
  uCEFMiscFunctions_CefUriEncode,
  uCEFMiscFunctions_CefUriDecode,
  uCEFMiscFunctions_CefGetPath,
  uCEFMiscFunctions_CefIsRTL,
  uCEFMiscFunctions_CefCreateDirectory,
  uCEFMiscFunctions_CefGetTempDirectory,
  uCEFMiscFunctions_CefCreateNewTempDirectory,
  uCEFMiscFunctions_CefCreateTempDirectoryInDirectory,
  uCEFMiscFunctions_CefDirectoryExists,
  uCEFMiscFunctions_CefDeleteFile,
  uCEFMiscFunctions_CefZipDirectory,
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_CefIsKeyDown,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_CefIsKeyToggled,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_GetCefMouseModifiersToEventFlags,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_GetCefMouseModifiersWithWPARAM,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_GetCefKeyboardModifiers,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_GetWindowsMajorMinorVersion,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_RunningWindows10OrNewer,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_GetDPIForHandle,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_GetDefaultCEFUserAgent,
{$ENDIF}
  uCEFMiscFunctions_DeviceToLogicalWithIntDouble,
  uCEFMiscFunctions_DeviceToLogicalWithSingleDouble,
  uCEFMiscFunctions_LogicalToDeviceWithIntDouble,
  uCEFMiscFunctions_GetScreenDPI,
  uCEFMiscFunctions_GetDeviceScaleFactor,
  uCEFMiscFunctions_DeleteDirContents,
  uCEFMiscFunctions_DeleteFileList,
  uCEFMiscFunctions_MoveFileList,
  uCEFMiscFunctions_CefGetDataURIWithStrX2,
  uCEFMiscFunctions_CefGetDataURIWithPointerIntStrX2,
  uCEFMiscFunctions_ValidCefWindowHandle,
  uCEFMiscFunctions_GetCommandLineSwitchValue,
  uCEFMiscFunctions_InitializeCefTime,
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_WindowInfoAsChildWithWInfoWHandleRectStrDWORD,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_WindowInfoAsPopUpWithWInfoWHandleStrDWORD,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_WindowInfoAsWindowlessWithWInfoWHandleStrDWORD,
{$ENDIF}
{$IFDEF MACOSX}
  uCEFMiscFunctions_WindowInfoAsChildWithWInfoWHandleRectStrBool,
{$ENDIF}
{$IFDEF MACOSX}
  uCEFMiscFunctions_WindowInfoAsPopUpWithWInfoWHandleStrBool,
{$ENDIF}
{$IFDEF MACOSX}
  uCEFMiscFunctions_WindowInfoAsWindowlessWithWInfoWHandleStrBool,
{$ENDIF}
{$IFDEF LINUX}
  uCEFMiscFunctions_WindowInfoAsChildWithWInfoWHandleRectStr,
{$ENDIF}
{$IFDEF LINUX}
  uCEFMiscFunctions_WindowInfoAsPopUpWithWInfoWHandleStr,
{$ENDIF}
{$IFDEF LINUX}
  uCEFMiscFunctions_WindowInfoAsWindowlessWithWInfoWHandleStr,
{$ENDIF}
  uCEFMiscFunctions_CefSetCrashKeyValue,
  uCEFMiscFunctions_CefLog,
  uCEFMiscFunctions_CefKeyEventLog,
  uCEFMiscFunctions_CefMouseEventLog,
  uCEFMiscFunctions_OutputDebugMessage,
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_OutputLastErrorMessage,
{$ENDIF}
  uCEFMiscFunctions_CefGetExtensionsForMimeType,
  uCEFMiscFunctions_CefLoadCRLSetsFile,
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_CefCheckAltGrPressed,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_DropEffectToDragOperation,
{$ENDIF}
{$IFDEF MSWINDOWS}
  uCEFMiscFunctions_DragOperationToDropEffect,
{$ENDIF}
  uCEFMiscFunctions_DeviceToLogicalWithMouseEventDouble,
  uCEFMiscFunctions_DeviceToLogicalWithTouchEventDouble,
  uCEFMiscFunctions_DeviceToLogicalWithPointDouble,
  uCEFMiscFunctions_LogicalToDeviceWithRectDouble,
  uCEFMiscFunctions_InitializeWindowHandle;