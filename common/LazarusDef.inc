//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

procedure GetLCLVersion(var AMajor: Word; var AMinor: Word; var ARelease: Word; var APatch: Word; var AFullVersion: Cardinal; var AVersion: PChar); extdecl;
begin
  AMajor := Word(lcl_major);
  AMinor := Word(lcl_minor);
  ARelease := Word(lcl_release);
  APatch := Word(lcl_patch);
  AFullVersion := Cardinal(lcl_fullversion);
  AVersion := PChar(lcl_version);
end;

function GetLCLWidget(): Word; extdecl;
begin
  Result := 0; // default
  {$IFDEF LCLWin32}
  Result := 1; // windows
  {$ENDIF}
  {$IFDEF LCLGTK2}
  Result := 2; // linux gtk2
  {$ENDIF}
  {$IFDEF LCLGTK3}
  Result := 3; // linux gtk3
  {$ENDIF}
  {$IFDEF LCLCocoa}
  Result := 4; // linux cocoa
  {$ENDIF}
end;

// 注册 Lazarus 资源
//procedure AddLazarusResources(AName: PChar; AValueType: PChar; AValue: Pointer; ALength: NativeUInt);
//var
//  LRes: AnsiString;
//begin
//  handleExceptionBegin
//  if (ALength = 0) or (AValue = nil) then
//    Exit;
//  SetLength(LRes, ALength);
//  Move(AValue^, LRes[1], ALength);
//  LazarusResources.Add(AnsiString(AName), AnsiString(AValueType), LRes);
//  handleExceptionEnd
//end;
//
//procedure AddLazarusResources2(AName: PChar; AValueType: PChar; AValue: PChar);
//begin
//  handleExceptionBegin
//  if AValue = nil then
//    Exit;
//  LazarusResources.Add(AnsiString(AName), AnsiString(AValueType), AnsiString(AValue));
//  handleExceptionEnd
//end;

// SysLocale  14byte
procedure DSysLocale(var AInfo: TSysLocale); extdecl;
begin
  AInfo := SysLocale;
end;


// TApplication
function Application_Instance: TApplication; extdecl;
begin
  Result := Application;
end;

{$IFDEF WINDOWS}
// 当 IsLibrary = True 时，是不会调用 WidgetSet.CreateAppHandle 方法
// 这时就需要手动去伪造一个 WidgetSet.AppHandle := CreateWindowsAppHandle;
// 这里的代码来自win32object.inc单元中 CreateAppHandle 方法。
function CreateWindowsAppHandle: HWND;
var
  SysMenu: HMENU;
begin
  //Result := CreateWindowW(@ClsNameW, PWideChar(UTF8ToUTF16(Application.Title)), WS_OVERLAPPEDWINDOW, 0, 0, 0, 0, 0, 0, HInstance, nil);
  Result := CreateWindowW(@ClsNameW, PWideChar(UTF8ToUTF16(Application.Title)), WS_POPUP or WS_CLIPSIBLINGS or WS_SYSMENU or WS_MINIMIZEBOX,
    0, {Windows.GetSystemMetrics(SM_CXSCREEN) div 2,} 0, {Windows.GetSystemMetrics(SM_CYSCREEN) div 2,} 0, 0, HWND(nil), HMENU(nil), HInstance, nil);
  if Result = 0 then
    Exit(0);
  AllocWindowInfo(Result);
  // remove useless menuitems from sysmenu
  SysMenu := Windows.GetSystemMenu(Result, False);
  Windows.DeleteMenu(SysMenu, SC_MAXIMIZE, MF_BYCOMMAND);
  Windows.DeleteMenu(SysMenu, SC_SIZE, MF_BYCOMMAND);
  Windows.DeleteMenu(SysMenu, SC_MOVE, MF_BYCOMMAND);
end;
{$ENDIF}

procedure Application_Initialize(AObj: TApplication); extdecl;
begin
  handleExceptionBegin
  //AObj.Initialize;
{$IFDEF WINDOWS}
  if Application.Icon.Handle = 0 then
     Application.Icon.Handle := LoadIcon(GetModuleHandle(nil), 'MAINICON');
  WidgetSet.ThemeServices.UpdateThemes;
  WidgetSet.AppHandle := CreateWindowsAppHandle;
{$ENDIF}
  handleExceptionEnd
end;

function Application_CreateForm(App: TApplication): TEngForm; extdecl;
begin
  handleExceptionBegin
  App.CreateForm(TEngForm, Result);
  handleExceptionEnd
end;

procedure RemoveAllForms;
var
  C: TComponent;
  I: Integer;
begin
  for I := Application.ComponentCount - 1 downto 0 do
  begin
    C := Application.Components[I];
    if C is TCustomForm then
    begin
      C.Free;
    end;
  end;
end;

procedure Application_Run(AObj: TApplication); extdecl;
begin
  handleExceptionBegin
  AObj.MyRun;
  // 在Run结束后手动释放Application中的Form，主要是考虑在非Lazarus运行环境中造成的一些资源清理问题
  RemoveAllForms;
  handleExceptionEnd
end;

// mouse
function Mouse_Instance: TMouse; extdecl;
begin
  Result := Mouse;
end;

// screen
function Screen_Instance: TScreen; extdecl;
begin
  Result := Screen;
end;

function DTextToShortCut(AText: PChar): TShortCut; extdecl;
begin
{$ifdef UsehandleException}Result := TShortCut(0);{$endif}
  handleExceptionBegin
  Result := TextToShortCut(AText);
  handleExceptionEnd
end;

function DShortCutToText(AVal: TShortCut): PChar; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := PChar(ShortCutToText(AVal));
  handleExceptionEnd
end;

// TClipboard
function Clipboard_Instance: TClipboard; extdecl;
begin
  Result := Clipboard;
end;


function DPredefinedClipboardFormat(AFormat: TPredefinedClipboardFormat): TClipboardFormat; extdecl;
begin
{$ifdef UsehandleException}Result := TClipboardFormat(0);{$endif}
  handleExceptionBegin
  Result := PredefinedClipboardFormat(AFormat);
  handleExceptionEnd
end;

function DSetClipboard(ANewClipboard: TClipboard): TClipboard; extdecl;
begin
{$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := SetClipboard(ANewClipboard);
  handleExceptionEnd
end;

type
   // Note: tfComposited only supported by ThemeServices.DrawText
  TTextFormats = (tfBottom, tfCalcRect, tfCenter, tfEditControl, tfEndEllipsis,
    tfPathEllipsis, tfExpandTabs, tfExternalLeading, tfLeft, tfModifyString,
    tfNoClip, tfNoPrefix, tfRight, tfRtlReading, tfSingleLine, tfTop,
    tfVerticalCenter, tfWordBreak, tfHidePrefix, tfNoFullWidthCharBreak,
    tfPrefixOnly, tfTabStop, tfWordEllipsis, tfComposited);
  TTextFormat = set of TTextFormats;


function DSendMessage(hWd: HWND; msg: Cardinal; wParam: WParam; lParam: LParam): LResult; extdecl;
begin
{$ifdef UsehandleException}Result := 0;{$endif}
  handleExceptionBegin
  Result := LCLIntf.SendMessage(hWd, msg, wParam, lParam);
  handleExceptionEnd
end;

function DPostMessage(hWd: HWND; msg: Cardinal; wParam: WParam; lParam: LParam): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result := LCLIntf.PostMessage(hWd, msg, wParam, lParam);
  handleExceptionEnd
end;

function DIsIconic(hWnd: HWND): LongBool; extdecl;
begin
{$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result := LCLIntf.IsIconic(hWnd);
  handleExceptionEnd
end;

function DIsWindow(hWnd: HWND): LongBool; extdecl;
begin
  {$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result := LCLIntf.IsWindow(hWnd);
  handleExceptionEnd
end;

function DIsZoomed(hWnd: HWND): LongBool; extdecl;
begin
  {$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result := LCLIntf.IsZoomed(hWnd);
  handleExceptionEnd
end;

function DIsWindowVisible(hWnd: HWND): LongBool; extdecl;
begin
  {$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result := LCLIntf.IsWindowVisible(hWnd);
  handleExceptionEnd
end;

function DGetDC(hWnd: HWND): HDC; extdecl;
begin
  {$ifdef UsehandleException}Result := 0;{$endif}
  handleExceptionBegin
  Result := LCLIntf.GetDC(hWnd);
  handleExceptionEnd
end;

function DReleaseDC(hWnd: HWND; dc: HDC): Integer; extdecl;
begin
  {$ifdef UsehandleException}Result := 0;{$endif}
  handleExceptionBegin
  Result := LCLIntf.ReleaseDC(hWnd, dc);
  handleExceptionEnd
end;

function DSetForegroundWindow(hWnd: HWND): LongBool; extdecl;
begin
  {$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result := LCLIntf.SetForegroundWindow(hWnd);
  handleExceptionEnd
end;

function DRegisterClipboardFormat(AFormat: PChar): TClipboardFormat; extdecl;
begin
  {$ifdef UsehandleException}Result := TClipboardFormat(0);{$endif}
  handleExceptionBegin
  Result := Clipbrd.RegisterClipboardFormat(AFormat);
  handleExceptionEnd
end;

function DWindowFromPoint(point: PPoint): HWND; extdecl;
begin
  if point = nil then
    Exit(0);
{$ifdef UsehandleException}Result := 0;{$endif}
  handleExceptionBegin
  Result := LCLIntf.WindowFromPoint(PPoint(point)^);
  handleExceptionEnd
end;


// 设置事件回调
procedure SetEventCallback(APtr: Pointer; AEventType: EventCallbackType); extdecl;
begin
   case AEventType of
     // LCL
     EctLCL:
       GLCLEventCallbackPtr := TLCLEventCallbackPtr(APtr);
     EctLCLRemove:
       GLCLRemoveEventCallbackPtr := TLCLRemoveEventCallPtr(APtr);
     // CEF
     {$IF defined(CEF)}
     EctCEF:
       GCEFEventCallbackPtr := TCEFEventCallbackPtr(APtr);
     EctCEFRemove:
       GCEFRemoveEventCallbackPtr := TCEFRemoveEventCallPtr(APtr);
     {$ENDIF}
     // Webview
     {$IF defined(LCLWin32) or defined(LCLGTK3) or defined(LCLCocoa)}
     EctWV:
       GWVEventCallbackPtr := TWVEventCallbackPtr(APtr);
     EctWVRemove:
       GWVRemoveEventCallbackPtr := TWVRemoveEventCallPtr(APtr);
     {$ENDIF}
     // Message
     EctMessage:
       GLCLMessageCallbackPtr := TLCLMessageCallbackPtr(APtr);
     // Exception
     EctExceptionHandler:
       GExceptionHandlerCallbackPtr := TExceptionHandlerCallbackPtr(APtr);
     // Run Main Thread Sync
     EctUIThreadSync:
       GThreadSyncCallbackPtr := TThreadSyncCallbackPtr(APtr);
     // Run Main Thread Async
     EctUIThreadAsync:
       GThreadAsyncCallbackPtr := TThreadAsyncCallbackPtr(APtr);
     // Form OnCreate
     EctFormCreate:
       GRequestCallFormCreatePtr := TRequestCallFormCreate(APtr);
     // Form OnCreateParams
     EctCreateParams:
       GRequestCallCreateParamsPtr := TRequestCallCreateParams(APtr);
  end;
end;

// 在主线程中运行 异步
procedure DRunMainAsyncCall(var EventId: PtrInt); extdecl;
begin
  // FPC > 3.2.2 , trunk
  Application.QueueAsyncCall(GRunMainThreadCallback.RunMainThreadAsyncCall(), EventId);
  // FPC = 3.2.2
  //Application.QueueAsyncCall(TRunMainThreadCallback.RunMainThreadAsyncCall(), EventId);
end;

// 在主线程中运行 同步
procedure DRunMainSyncCall(); extdecl;
begin
  handleExceptionBegin
  if MainThreadId = TThread.CurrentThread.ThreadID then
    TRunMainThreadCallback.RunMainThreadSyncCall()
  else
    TThread.Synchronize(nil, TRunMainThreadCallback.RunMainThreadSyncCall);
  handleExceptionEnd
end;

// 从string数组中获取成员
function DGetStringArrOf(P: Pointer; AIndex: NativeInt): PChar; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := PChar(PString(PByte(P) + AIndex * SizeOf(string))^);
  handleExceptionEnd
end;

function DStrLen(p: PChar): NativeInt; extdecl;
begin
  {$ifdef UsehandleException}Result := 0;{$endif}
  handleExceptionBegin
  Result := Length(p); //UTF8Length(); UTF8LengthFast
  handleExceptionEnd
end;

procedure DMove(Src, Dest: Pointer; Len: NativeInt); extdecl;
begin
  handleExceptionBegin
  Move(Src^, Dest^, Len);
  handleExceptionEnd
end;

procedure DShowMessage(AMsg: PChar); extdecl;
begin
  handleExceptionBegin
  ShowMessage(AMsg);
  handleExceptionEnd
end;

function DGetMainInstance: HINST; extdecl;
begin
{$IFDEF WINDOWS}
  Result := GetModuleHandle(nil);
{$ELSE}
  Result := 0;
{$ENDIF}
end;

function DMessageDlg(const Msg: PChar; DlgType: TMsgDlgType; Buttons: TMsgDlgButtons; HelpCtx: Longint): Integer; extdecl;
begin
  {$ifdef UsehandleException}Result := 0;{$endif}
  handleExceptionBegin
  Result := MessageDlg(Msg, DlgType, Buttons, HelpCtx);
  handleExceptionEnd
end;

function DMainThreadId: TThreadID; extdecl;
begin
  Result := MainThreadId;
end;

function DCurrentThreadId: TThreadID; extdecl;
begin
  {$ifdef UsehandleException}Result := 0;{$endif}
  handleExceptionBegin
  Result := TThread.CurrentThread.ThreadID;
  handleExceptionEnd
end;

procedure DSysOpen(FileName: PChar); extdecl;
begin
  handleExceptionBegin
  OpenURL(FileName);
  handleExceptionEnd
end;

function DExtractFilePath(AFileName: PChar): PChar; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := PChar(ExtractFilePath(AFileName));
  handleExceptionEnd
end;

function DFileExists(AFileName: PChar): LongBool; extdecl;
begin
  {$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result := FileExists(AFileName);
  handleExceptionEnd
end;

function DSelectDirectory1(var Directory: PChar; Options: TSelectDirOpts; HelpCtx: Longint): LongBool; extdecl;
var
  LDir: string;
begin
  {$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result := SelectDirectory(LDir, Options, HelpCtx);
  if Result then
    Directory := PChar(LDir);
  handleExceptionEnd
end;

function DSelectDirectory2(Caption, Root: PChar; AShowHidden: LongBool; var Directory: PChar): LongBool;  extdecl;
var
  LDir: string;
begin
  {$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  Result := SelectDirectory(Caption, Root, LDir, AShowHidden, 0);
  if Result then
    Directory := PChar(LDir);
  handleExceptionEnd
end;

function DInputBox(ACaption, APrompt, ADefault: PChar): PChar; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := PChar(InputBox(ACaption, APrompt, ADefault));
  handleExceptionEnd
end;

function DInputQuery(ACaption, APrompt: PChar; Value: PChar; out AOut: PChar): LongBool; extdecl;
var
  S: string;
begin
  {$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  S := Value;
  Result := InputQuery(string(ACaption), string(APrompt), S);
  if Result then
    AOut := PChar(S);
  handleExceptionEnd
end;

function DPasswordBox(const ACaption, APrompt : PChar): PChar; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := PChar(PasswordBox(ACaption, APrompt));
  handleExceptionEnd
end;

function DInputCombo(const ACaption, APrompt: PChar; const AList: TStrings): Integer; extdecl;
begin
  {$ifdef UsehandleException}Result := 0;{$endif}
  handleExceptionBegin
  Result := InputCombo(ACaption, APrompt, AList);
  handleExceptionEnd
end;

function DInputComboEx(const ACaption, APrompt: PChar; const AList: TStrings; AllowCustomText: LongBool): PChar; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := PChar(InputComboEx(ACaption, APrompt, AList, AllowCustomText));
  handleExceptionEnd
end;


{$IFDEF WINDOWS}

// 路径合并
function PathCombine(A1, A2: string): string; inline;
begin
  if A1[Length(A1)] <> PathDelim then
    A1 := A1 + PathDelim;
  if (Length(A2) > 0) and (A2[1] = PathDelim) then
    Delete(A2, 1, 1);
  Result := A1 + A2;
end;

// 创建URL快捷方式
procedure DCreateURLShortCut(ADestPath, AShortCutName, AURL: PChar); extdecl;
var
  Ini: TIniFile;
begin
  handleExceptionBegin
  Ini := TIniFile.Create(PathCombine(ADestPath, AShortCutName) + '.url');
  try
    Ini.WriteString('{000214A0-0000-0000-C000-000000000046}', 'Prop3', '19,2');
    Ini.WriteString('InternetShortcut', 'URL', AURL);
  finally
    Ini.Free;
  end;
  handleExceptionEnd
end;

// 创建快捷方式
function DCreateShortCut(ADestPath, AShortCutName, ASrcFileName, AIconFileName, ADescription, ACmdArgs: PChar): LongBool; extdecl;
var
  LObject : IUnknown;
  LPLink : IShellLink;
  LPPFile : IPersistFile;
  LinkFilename : WideString;
begin
  {$ifdef UsehandleException}Result := False;{$endif}
  handleExceptionBegin
  CoInitializeEx(nil, 0);
  try
    LObject := CreateComObject(CLSID_ShellLink);
    LPLink := LObject as IShellLink;
    LPPFile := LObject as IPersistFile;
    LPLink.SetPath(ASrcFileName);
    LPLink.SetWorkingDirectory(PChar(ExtractFilePath(ASrcFileName)));
    LPLink.SetDescription(ADescription);
    if AIconFileName = '' then
      LPLink.SetIconLocation(ASrcFileName, 0)
    else LPLink.SetIconLocation(AIconFileName, 0);
    LPLink.SetArguments(ACmdArgs);
    LinkFilename := WideString(PathCombine(ADestPath, AShortCutName) + '.lnk');
    Result := LPPFile.Save(PWideChar(LinkFilename), FALSE) = S_OK;
  finally
    CoUninitialize;
  end;
  handleExceptionEnd
end;
{$ENDIF}


// 属性设置，这里主要提供给多语言使用
procedure DSetPropertyValue(Instance: TObject; PropName, Value: PChar); extdecl;
var
  LPropInfo: PPropInfo;
begin
  handleExceptionBegin
  LPropInfo := GetPropInfo(Instance, PropName);
  if LPropInfo <> nil then
  begin
    case LPropInfo^.PropType^.Kind of
      tkInteger, tkInt64:
        SetInt64Prop(Instance, LPropInfo, StrToIntDef(Value, -1));
      tkChar, tkSString, tkLString, tkAString, tkWString, tkWChar, tkUString,tkUChar:
        SetStrProp(Instance, LPropInfo, Value);
    end;
  end;
  handleExceptionEnd
end;

procedure DSetPropertySecValue(Instance: TObject; PropName, SecPropName, Value: PChar); extdecl;
var
  LPropInfo: PPropInfo;
  LObj: TObject;
  LPropName: string;
  LP, LIndex: Integer;
begin
  handleExceptionBegin
  LPropName := PropName;
  LIndex := -1;
  LP := LPropName.IndexOf('[');
  if LP > 0 then
  begin
    LIndex := StrToIntDef(LPropName.Substring(LP + 1, LPropName.IndexOf(']') - LP - 1), -1);
    LPropName := LPropName.Substring(0, LP);
  end;
  LPropInfo := GetPropInfo(Instance, LPropName);
  if LPropInfo <> nil then
  begin
    LObj := GetObjectProp(Instance, LPropInfo);
    if LObj <> nil then
    begin
      if LIndex <> -1 then
      begin
        if LPropInfo^.PropType^.Kind = tkClass then
        begin
          if LObj is TListColumns then
          begin
            if (LIndex >= 0) and (LIndex < TListColumns(LObj).Count) and string(SecPropName).Equals('Caption') then
              TListColumns(LObj)[LIndex].Caption := Value;
          end else
          if LObj is TStrings then
          begin
            if (LIndex >= 0) and (LIndex < TStrings(LObj).Count) and (string(SecPropName).Equals('String') or string(SecPropName).IsEmpty) then
              TStrings(LObj)[LIndex] := Value;
          end;
        end;
      end else
        DSetPropertyValue(LObj, SecPropName, Value);
    end;
  end;
  handleExceptionEnd
end;


function DGUIDToString(var AGUID: TGUID): PChar; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := PChar(GUIDToString(AGUID));
  handleExceptionEnd
end;

procedure DStringToGUID(AGUIDStr: PChar; out AGUID: TGUID); extdecl;
begin
  handleExceptionBegin
  AGUID := StringToGUID(AGUIDStr);
  handleExceptionEnd
end;

procedure DCreateGUID(out AGUID: TGUID); extdecl;
begin
  handleExceptionBegin
  CreateGUID(AGUID);
  handleExceptionEnd
end;

// Printer
function Printer_Instance: TPrinter; extdecl;
begin
  Result := Printer;
end;

function DLibAbout: PChar; extdecl;
var
  LVal: string;
begin
  LVal := 'Author: YangHY'#13#10 +
          'Open Source Github '#13#10 +
          '    ENERGY : https://github.com/energye/energy'#13#10 +
          '       LCL : https://github.com/energye/lcl'#13#10 +
          '       CEF : https://github.com/energye/cef'#13#10 +
          '   Webview : https://github.com/energye/wv'#13#10 +
          '  Designer : https://github.com/energye/designer'#13#10 +
          'Third party library list'#13#10;
  LVal := LVal + '     CEF4Delphi'#13#10;
  LVal := LVal + ' WebView4Delphi'#13#10;
  Result := PChar(LVal);
end;

//function DGetLibResourceCount: Integer; extdecl;
//begin
//  Result := Length(GLibResouces);
//end;

//procedure DGetLibResourceItem(AIndex: Integer; out AResult: TResItem); extdecl;
//begin
//  handleExceptionBegin
//  if (AIndex >= 0)  and (AIndex < Length(GLibResouces)) then
//    AResult := GLibResouces[AIndex];
//  handleExceptionEnd
//end;

// 说不好有没有内存泄露，啊，先这样呗
//procedure DModifyLibResource(APtr: Pointer; AValue: PChar); extdecl;
//begin
//  handleExceptionBegin
//  if APtr <> nil then
//    PResStringRec(APtr)^ := string(AValue);
//  handleExceptionEnd
//end;

// 用于go编译成dll时使用
procedure DInitGoDll(AMainThreadId: TThreadID); extdecl;
begin
  handleExceptionBegin
  // 因为go编译为dll后，这个值不一定是主线程id了，所以得重新初始
  if MainThreadId <> AMainThreadId then
  begin
    if AMainThreadId <= TThreadID(0) then
      AMainThreadId := TThread.CurrentThread.ThreadID;
    MainThreadId := AMainThreadId;
  end;
  // 初始下app
  Application.MainFormOnTaskBar := True;
  Application.Initialize;
{$ifdef windows}
  WidgetSet.ThemeServices.UpdateThemes;
  // 设置App句柄
  WidgetSet.AppHandle := CreateWindowsAppHandle;
{$endif}
  handleExceptionEnd
end;

function DFindControl(AHandle: HWND): TWinControl; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := FindControl(AHandle);
  handleExceptionEnd
end;

function DFindLCLControl(var AScreenPos: TPoint): TControl; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := FindLCLControl(AScreenPos);
  handleExceptionEnd
end;

function DFindOwnerControl(Handle: HWND): TWinControl; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := FindOwnerControl(Handle);
  handleExceptionEnd
end;

function DFindControlAtPosition(var APosition: TPoint; AllowDisabled: LongBool): TControl; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := FindControlAtPosition(APosition, AllowDisabled);
  handleExceptionEnd
end;

function DFindLCLWindow(var AScreenPos: TPoint; AllowDisabled: LongBool): TWinControl; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := FindLCLWindow(AScreenPos, AllowDisabled);
  handleExceptionEnd
end;

function DFindDragTarget(var APosition: TPoint; AllowDisabled: LongBool): TControl; extdecl;
begin
  {$ifdef UsehandleException}Result := nil;{$endif}
  handleExceptionBegin
  Result := FindDragTarget(APosition, AllowDisabled);
  handleExceptionEnd
end;

procedure DFreeAndNil(var AObj: Pointer); extdecl;
begin
  FreeAndNil(AObj);
end;

procedure DSetNil(var AObj: Pointer); extdecl;
begin
  AObj := nil;
end;

procedure DFreePointer(AData: Pointer); extdecl;
begin
  if AData <> nil then
    FreeMem(AData);
end;

procedure DToUnixTime(var ADateTime: TDateTime; var Result: TUnixDateTime); extdecl;
begin
  Result := ToUnixTime(ADateTime);
end;

procedure DUnixToTime(var ADateTime: TUnixDateTime; var Result: TDateTime); extdecl;
begin
  Result := UnixToTime(ADateTime);
end;

procedure DRelease(var AObj: IUnknown); extdecl;
begin
  AObj := nil;
end;

//原函数: function TranslateLCLResourceStrings(Lang, Dir: string): string;
function LocalesLCLResourceStrings(Lang, Dir: PChar): PChar; extdecl;
begin
  Result := ToPChar(TranslateLCLResourceStrings(StrPas(Lang), StrPas(Dir)));
end;

//原函数: function TranslateUnitResourceStringsEx(Lang, Dir, LocaleFileName: string; LocaleUnitName: string = ''): string;
function LocalesUnitResourceStringsEx(Lang, Dir, LocaleFileName: PChar; LocaleUnitName: PChar): PChar; extdecl;
begin
  Result := ToPChar(TranslateUnitResourceStringsEx(StrPas(Lang), StrPas(Dir), StrPas(LocaleFileName), StrPas(LocaleUnitName)));
end;

//原函数: function SetDefaultLang(Lang: string; Dir: string = ''; LocaleFileName: string = ''; ForceUpdate: boolean = True): string;
function LocalesSetDefaultLang(Lang: PChar; Dir: PChar; LocaleFileName: PChar; ForceUpdate: LongBool): PChar; extdecl;
begin
  Result := ToPChar(SetDefaultLang(StrPas(Lang), StrPas(Dir), StrPas(LocaleFileName), Boolean(ForceUpdate)));
end;

// 翻译单元字符串, 例如 LCLStrConsts
// 参数: AStream 是 lang xx.po 文件字节流
// 参数: ALocaleUnitName 待翻译的单元资源字符串的单元名, 例如: lclstrconsts 单元名
function LocalesUnitResourceStringsFormStream(AStream: TStream; ALocaleUnitName: PChar): LongBool; extdecl;
var
  po: TPOFile;
begin
  Result := False;
  try
    po := TPOFile.Create(AStream);
    Result := Translations.TranslateUnitResourceStrings(StrPas(ALocaleUnitName), po);
  finally
    po.free;
  end;
end;

// 设置默认语言
// 参数: AStream 是 lang xx.po 文件字节流
// 参数: ALocaleUnitName 待翻译的单元资源字符串的单元名, 例如: lclstrconsts 单元名
// 参数: ForceUpdate 是否强制翻译更新组件
function LocalesSetDefaultLangFormStream(AStream: TStream; ALocaleUnitName: PChar; ForceUpdate: LongBool): LongBool; extdecl;
var
  po: TPOFile;
  LocalTranslator: TUpdateTranslator;
  i: Integer;
  LocaleUnitName: string;
begin
  Result := false;
  po := nil;
  LocalTranslator := nil;
  try
    LocaleUnitName := StrPas(ALocaleUnitName);
    po := TPOFile.Create(AStream);
    Result := TranslateResourceStrings(po);
    LocalTranslator := TPOTranslator.Create(po);

    if po <> nil then
    begin
      if LocaleUnitName = '' then
        LocaleUnitName := 'lclstrconsts';
      Translations.TranslateUnitResourceStrings(LocaleUnitName, po);
    end;

    if LocalTranslator <> nil then
    begin
      if Assigned(LRSTranslator) then
        LRSTranslator.Free;
      LRSTranslator := LocalTranslator;
      if ForceUpdate = True then
      begin
        for i := 0 to Screen.CustomFormCount - 1 do
          LocalTranslator.UpdateTranslation(Screen.CustomForms[i]);
        for i := 0 to Screen.DataModuleCount - 1 do
          LocalTranslator.UpdateTranslation(Screen.DataModules[i]);
      end;
    end;
  except
    if LocalTranslator <> nil then
      LocalTranslator.Free
    else if po <> nil then
      po.Free;
  end;
end;

function SwitchLocalesI18n(AJSONData: PChar; ALength: Integer): LongBool; extdecl;
var
  i: Integer;
begin
  Result := false;
  try
    if GI18n.UpdateDict(AJSONData, ALength) then
    begin
      for i := 0 to Screen.CustomFormCount - 1 do
        GI18n.UpdateTranslation(Screen.CustomForms[i]);
      for i := 0 to Screen.DataModuleCount - 1 do
        GI18n.UpdateTranslation(Screen.DataModules[i]);
      Result := True;
    end;
  except
    on E: Exception do
      WriteLn('switch locales i18n error: ' + E.ToString());
  end;
end;

function NewInstanceByComponentClass(const AClass: TComponentClass): TComponent; extdecl;
begin
  if AClass = nil then
  begin
    Result := nil;
    Exit;
  end;
  Result := TComponent(AClass.newinstance);
end;

function CreateObjectByComponent(const AComponent: TComponent; const AOwner: TComponent): TObject; extdecl;
begin
  if AComponent = nil then
  begin
    Result := nil;
    Exit;
  end;
  Result := AComponent.Create(AOwner);
end;

function IsObjectInstanceOf(const AObject: TObject; const ATargetClass: TClass): LongBool; extdecl;
begin
  if AObject = nil then
  begin
    Result := False;
    Exit;
  end;
  Result := LongBool(AObject is ATargetClass);
end;

function TBase_ClassName(const AObject: TObject): PChar; extdecl;
begin
  if AObject = nil then
  begin
    Result := ToPChar('');
    Exit;
  end;
  Result := ToPChar(AObject.ClassName);
end;

procedure TBase_InstanceSize(const AObject: TObject; var Result: SizeInt); extdecl;
begin
  if AObject = nil then
  begin
    Result := 0;
    Exit;
  end;
  Result := AObject.InstanceSize;
end;

exports
  // SysLocaled
  DSysLocale,

  //AddLazarusResources,
  //AddLazarusResources2,

  // 库的信息
  GetLCLVersion,
  // 组件库类型
  GetLCLWidget,

  // TApplication
  Application_Instance,
  Application_CreateForm,
  Application_Run,
  Application_Initialize,
  Application_SetRunLoopReceived,

  // TMouse
  Mouse_Instance,
  Screen_Instance,

  DSendMessage,
  DPostMessage,
  DIsIconic,
  DIsWindow,
  DIsZoomed,
  DIsWindowVisible,
  DGetDC,
  DReleaseDC,
  DSetForegroundWindow,
  DRegisterClipboardFormat,
  DWindowFromPoint,

{$IFDEF LINUX}
  GdkWindow_GetXId,
  GtkWidget_GetGtkFixed,
  GdkWindow_FromForm,
  GtkWidget_Window,
  GtkWindow_Drag,
  {$IFDEF LClgtk3}
  Gtk3Widget_GtkWindow,
  Gtk3Widget_Widget,
  Gtk3Widget_DeliverMessage,
  {$ENDIF}
{$ENDIF}

{$IFDEF LCLCocoa}
  NSWindow_FromForm,
  NSWindow_titleVisibility,
  NSWindow_setTitleVisibility,
  NSWindow_titlebarAppearsTransparent,
  NSWindow_setTitlebarAppearsTransparent,
  NSWindow_styleMask,
  NSWindow_setStyleMask,
  NSWindow_setRepresentedURL,
{$ENDIF}

  // 设置事件回调
  SetEventCallback,

  // 在UI线程运行
  DRunMainAsyncCall,
  DRunMainSyncCall,

  DGetStringArrOf,
  DStrLen,
  DMove,

  DShowMessage,
  DGetMainInstance,
  DSysOpen,
  DTextToShortCut,
  DShortCutToText,
  DMessageDlg,
  DExtractFilePath,
  DFileExists,
  DMainThreadId,
  DCurrentThreadId,

  DSelectDirectory1,
  DSelectDirectory2,
  DInputBox,
  DInputQuery,
  DPasswordBox,
  DInputCombo,
  DInputComboEx,

{$IFDEF WINDOWS}
  // ShortCut
  DCreateURLShortCut,
  DCreateShortCut,
{$ENDIF}

  // SetProperty
  DSetPropertyValue,
  DSetPropertySecValue,

  // TClipboard
  Clipboard_Instance,
  DPredefinedClipboardFormat,
  DSetClipboard,

  // TGUID
  DGUIDToString,
  DStringToGUID,
  DCreateGUID,

  // Printer
  Printer_Instance,

  // libResources
  //DGetLibResourceCount,
  //DGetLibResourceItem,
  //DModifyLibResource,
  DLibAbout,

  DInitGoDll,

  DFindControl,
  DFindLCLControl,
  DFindOwnerControl,
  DFindControlAtPosition,
  DFindLCLWindow,
  DFindDragTarget,

  DFreeAndNil,
  DSetNil,
  DFreePointer,

  DToUnixTime,
  DUnixToTime,
  DRelease,

  // Energy DesigningComponent
  SetComponentDesignMode,
  SetComponentDesignInstanceMode,
  SetComponentInlineMode,
  SetComponentAncestorMode,
  SetWidgetSetDesigning,
  GetComponentProperties,
  SetOnGetDesignerFormEvent,

  // Control
  Control_WindowProc,

  // locales translator languages
  LocalesLCLResourceStrings,
  LocalesUnitResourceStringsEx,
  LocalesSetDefaultLang,
  LocalesUnitResourceStringsFormStream,
  LocalesSetDefaultLangFormStream,
  SwitchLocalesI18n,

  // class instance and create
  NewInstanceByComponentClass,
  CreateObjectByComponent,
  IsObjectInstanceOf,

  // object class method
  TBase_ClassName,
  TBase_InstanceSize
;
