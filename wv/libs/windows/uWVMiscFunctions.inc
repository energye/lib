// function static
function uWVMiscFunctions_LowestChromiumVersion(): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.LowestChromiumVersion());
end;

// function static
function uWVMiscFunctions_LowestLoaderDLLVersion(): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.LowestLoaderDLLVersion());
end;

// function static
function uWVMiscFunctions_EnvironmentCreationErrorToString(aErrorCode: HRESULT): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.EnvironmentCreationErrorToString(aErrorCode));
end;

// function static
function uWVMiscFunctions_ControllerCreationErrorToString(aErrorCode: HRESULT): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.ControllerCreationErrorToString(aErrorCode));
end;

// function static
function uWVMiscFunctions_ControllerOptionsCreationErrorToString(aErrorCode: HRESULT): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.ControllerOptionsCreationErrorToString(aErrorCode));
end;

// function static
function uWVMiscFunctions_CompositionControllerCreationErrorToString(aErrorCode: HRESULT): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.CompositionControllerCreationErrorToString(aErrorCode));
end;

// function static
function uWVMiscFunctions_GetScreenDPI(): integer; extdecl;
begin
  Result := uWVMiscFunctions.GetScreenDPI();
end;

// function static
procedure uWVMiscFunctions_GetDeviceScaleFactor(var Result: single); extdecl;
begin
  Result := uWVMiscFunctions.GetDeviceScaleFactor();
end;

// function static
function uWVMiscFunctions_EditingCommandToString(aEditingCommand: TWV2EditingCommand): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.EditingCommandToString(aEditingCommand));
end;

// function static
function uWVMiscFunctions_DeleteDirContents(const aDirectory: PChar; const aExcludeFiles: TStringList): LongBool; extdecl;
begin
  Result := uWVMiscFunctions.DeleteDirContents(aDirectory, aExcludeFiles);
end;

// function static
function uWVMiscFunctions_SystemCursorIDToDelphiCursor(aSystemCursorID: cardinal): TCursor; extdecl;
begin
  Result := uWVMiscFunctions.SystemCursorIDToDelphiCursor(aSystemCursorID);
end;

// function static
function uWVMiscFunctions_TryIso8601BasicToDate(const Str: PChar; var Date: Double): LongBool; extdecl;
var
  OutDate: TDateTime;
begin
  Result := uWVMiscFunctions.TryIso8601BasicToDate(Str, OutDate);
  Date := OutDate;
end;

// function static
function uWVMiscFunctions_JSONUnescape(const Source: PChar): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.JSONUnescape(Source));
end;

// function static
function uWVMiscFunctions_JSONEscape(const Source: PChar): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.JSONEscape(Source));
end;

// function static
function uWVMiscFunctions_CustomURLDecode(const aEncodedStr: PChar): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.CustomURLDecode(aEncodedStr));
end;

// function static
function uWVMiscFunctions_CustomPathIsRelative(const aPath: PChar): LongBool; extdecl;
begin
  Result := uWVMiscFunctions.CustomPathIsRelative(aPath);
end;

// function static
function uWVMiscFunctions_CustomPathCanonicalize(const aOriginalPath: PChar; var aCanonicalPath: PChar): LongBool; extdecl;
var
  OutaCanonicalPath: wvstring;
begin
  OutaCanonicalPath := aCanonicalPath;
  Result := uWVMiscFunctions.CustomPathCanonicalize(aOriginalPath, OutaCanonicalPath);
  aCanonicalPath := ToPChar(OutaCanonicalPath);
end;

// function static
function uWVMiscFunctions_CustomAbsolutePath(const aPath: PChar; aMustExist: LongBool): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.CustomAbsolutePath(aPath, aMustExist));
end;

// function static
function uWVMiscFunctions_CustomPathIsURL(const aPath: PChar): LongBool; extdecl;
begin
  Result := uWVMiscFunctions.CustomPathIsURL(aPath);
end;

// function static
function uWVMiscFunctions_CustomPathIsUNC(const aPath: PChar): LongBool; extdecl;
begin
  Result := uWVMiscFunctions.CustomPathIsUNC(aPath);
end;

// function static
function uWVMiscFunctions_GetModulePath(): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.GetModulePath());
end;

// function static
function uWVMiscFunctions_EscapeCommandLineParameter(const aParameter: PChar): PChar; extdecl;
begin
  Result := ToPChar(uWVMiscFunctions.EscapeCommandLineParameter(aParameter));
end;

// procedure static
procedure uWVMiscFunctions_OutputDebugMessage(const aMessage: PChar); extdecl;
begin
  uWVMiscFunctions.OutputDebugMessage(aMessage);
end;

// procedure static
procedure uWVMiscFunctions_LogMouseEvent(aEventKind: TWVMouseEventKind; aVirtualKeys: TWVMouseEventVirtualKeys; aMouseData: cardinal; var aPoint: TPoint); extdecl;
begin
  uWVMiscFunctions.LogMouseEvent(aEventKind, aVirtualKeys, aMouseData, aPoint);
end;

exports
  uWVMiscFunctions_LowestChromiumVersion,
  uWVMiscFunctions_LowestLoaderDLLVersion,
  uWVMiscFunctions_EnvironmentCreationErrorToString,
  uWVMiscFunctions_ControllerCreationErrorToString,
  uWVMiscFunctions_ControllerOptionsCreationErrorToString,
  uWVMiscFunctions_CompositionControllerCreationErrorToString,
  uWVMiscFunctions_GetScreenDPI,
  uWVMiscFunctions_GetDeviceScaleFactor,
  uWVMiscFunctions_EditingCommandToString,
  uWVMiscFunctions_DeleteDirContents,
  uWVMiscFunctions_SystemCursorIDToDelphiCursor,
  uWVMiscFunctions_TryIso8601BasicToDate,
  uWVMiscFunctions_JSONUnescape,
  uWVMiscFunctions_JSONEscape,
  uWVMiscFunctions_CustomURLDecode,
  uWVMiscFunctions_CustomPathIsRelative,
  uWVMiscFunctions_CustomPathCanonicalize,
  uWVMiscFunctions_CustomAbsolutePath,
  uWVMiscFunctions_CustomPathIsURL,
  uWVMiscFunctions_CustomPathIsUNC,
  uWVMiscFunctions_GetModulePath,
  uWVMiscFunctions_EscapeCommandLineParameter,
  uWVMiscFunctions_OutputDebugMessage,
  uWVMiscFunctions_LogMouseEvent;