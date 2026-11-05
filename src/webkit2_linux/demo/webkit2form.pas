unit webkit2form;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, StdCtrls, ExtCtrls, DateUtils,
  Menus,
  uWkInterfaces, uLibWebkit, uWkFunctions, uWkTypes,
  uWkWebviewParent, uWkWebview, uWkInputStream,
  uWkJSValue, uWkURISchemeRequest, uWkHeaders, uWkCookieManager, uWkPolicyDecision,
  uWkContextMenu, uWkContextMenuItem, uWkWebContext, uWkURIRequest, uWkNavigationAction,
  uChildForm;

type

  { TForm1 }

  TForm1 = class(TForm)
    CookieBtn: TButton;
    OpenDialogBtn: TButton;
    URLListBox: TListBox;
    StopLoadBtn: TButton;
    LoadURLBtn: TButton;
    ExecuteJSBtn: TButton;
    CloseTimer: TTimer;
    FwebViewParent: TWkWebviewParent;
    FWebView: TWkWebview;
    FChildTForm1: TChildForm;
    procedure CloseTimerTimer(Sender: TObject);
    procedure CookieBtnClick(Sender: TObject);
    procedure FormMouseDown(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: integer);
    procedure LoadURLBtnClick(Sender: TObject);
    procedure ExecuteJSBtnClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var CloseAction: TCloseAction);
    procedure FormCloseQuery(Sender: TObject; var CanClose: boolean);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure StopLoadBtnClick(Sender: TObject);
  public
    IsCloseing, FCanClose: boolean;
    destructor Destroy; override;
    procedure SubMenuClick(Sender: TObject);
    procedure ShowDevToolsMenuClick(Sender: TObject);
    procedure OnExecuteScriptFinished(Sender: TObject; const jsValue: TWkJSValue; id: Integer);
    procedure OnProcessMessageEvent(Sender: TObject; const jsValue: TWkJSValue; processId: TWkProcessId);
    procedure OnURISchemeRequestEvent(Sender: TObject; const uriSchemeRequest: WebKitURISchemeRequest);
    procedure OnLoadChangeEvent(Sender: TObject; loadEvent: WebKitLoadEvent);
    procedure OnGetAcceptPolicyFinishEvent(Sender: TObject; policy: WebKitCookieAcceptPolicy; error: string);
    procedure OnAddCookieFinishEvent(Sender: TObject; aResult: boolean; error: string);
    procedure OnGetCookiesFinishEvent(Sender: TObject; cookieList: PList; error: string);
    procedure OnDeleteCookieFinishEvent(Sender: TObject; aResult: boolean; error: string);
    function OnDecidePolicyEvent(Sender: TObject; decision: WebKitPolicyDecision; type_: WebKitPolicyDecisionType): boolean;
    procedure OnWebProcessTerminatedEvent(Sender: TObject; reason: WebKitWebProcessTerminationReason);
    function OnContextMenuEvent(Sender: TObject; contextMenu: WebKitContextMenu; defaultAction: PWkAction): boolean;
    procedure OnContextMenuCommandEvent(Sender: TObject; menuID: integer);
    function OnMouseEvent(Sender: TObject; event: PWkButtonEvent): boolean;
    procedure OnEnterFullscreenEvent(Sender: TObject);
    procedure ExecuteJS(Data: PtrInt);
    procedure CloseWebkit(Data: PtrInt);
    procedure IPCWindowState(Data: PtrInt);
    procedure IPCClose(Data: PtrInt);
    procedure StartDarg(Data: PtrInt);
    procedure CreateChildForm(Data: PtrInt);

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

destructor TForm1.Destroy;
begin
  inherited Destroy;
  WriteLn('TForm1.Destroy');
end;

function ReadHtmlFile(fileName: string): string;
var
  fileHandle: TextFile;
  line: string;
begin
  Result := 'not file: ' + fileName;
  if FileExists(fileName) then
  begin
    Result := '';
    AssignFile(fileHandle, fileName);
    Reset(fileHandle);
    while not EOF(fileHandle) do
    begin
      ReadLn(fileHandle, line);
      Result := Result + #13 + line;
    end;
    CloseFile(fileHandle);
  end;
end;

procedure TForm1.OnURISchemeRequestEvent(Sender: TObject; const uriSchemeRequest: WebKitURISchemeRequest);
var
  contents: PChar;
  contentsStream: TWkInputStream;
  TempHeaders: TWkHeaders;
  headerList: TStrings;
  idx: integer;
  headName, headValue: string;
  TempURISchemeRequest: TWkURISchemeRequest;
begin
  TempURISchemeRequest := TWkURISchemeRequest.Create(uriSchemeRequest);
  WriteLn('OnURISchemeRequestEvent Method: ', TempURISchemeRequest.Method(), ' Uri: ', TempURISchemeRequest.Uri(), ' Path: ', TempURISchemeRequest.Path(), ' Scheme: ', TempURISchemeRequest.Scheme());

  contents := PChar(ReadHtmlFile('index.html'));
  contentsStream := TWkInputStream.New(PChar(contents), strlen(contents));
  TempURISchemeRequest.Finish(contentsStream.Data(), strlen(contents), 'text/html');

  TempHeaders := TWkHeaders.Create(TempURISchemeRequest.Headers());
  TempHeaders.Append('test', 'test');
  headerList := TempHeaders.List();
  if headerList <> nil then
  begin
    for idx := 0 to headerList.Count - 1 do
    begin
      headName := headerList.Names[idx];
      headValue := headerList.Values[headName];
      WriteLn('header name: ', headName, ' value: ', headValue);
    end;
    headerList.Free;
  end;
  //contentsStream.Free;
end;

procedure TForm1.OnExecuteScriptFinished(Sender: TObject; const jsValue: TWkJSValue; id: Integer);
begin
  WriteLn('OnExecuteScriptFinished 类型: [', jsValue.ValueType, '] 返回结果: [', jsValue.StringValue(), '] JS异常: [', jsValue.ExceptionMessage(), ']');
end;

procedure TForm1.OnLoadChangeEvent(Sender: TObject; loadEvent: WebKitLoadEvent);
begin
  WriteLn('OnLoadChangeEvent loadEvent: ', loadEvent, ' title: ', FWebView.GetTitle());
end;

procedure TForm1.OnGetAcceptPolicyFinishEvent(Sender: TObject; policy: WebKitCookieAcceptPolicy; error: string);
begin
  WriteLn('OnGetAcceptPolicyFinishEvent policy: ', policy, ' error: ', error);
end;

procedure TForm1.OnAddCookieFinishEvent(Sender: TObject; aResult: boolean; error: string);
begin
  WriteLn('OnAddCookieFinishEvent result: ', aResult, ' error: ', error);
end;

procedure TForm1.OnDeleteCookieFinishEvent(Sender: TObject; aResult: boolean; error: string);
begin
  WriteLn('OnDeleteCookieFinishEvent result: ', aResult, ' error: ', error);
end;

procedure TForm1.OnGetCookiesFinishEvent(Sender: TObject; cookieList: PList; error: string);
var
  idx: integer;
  aCookie: TWkCookie;
  aCookieDate: TWkCookieDate;
  aCookieManage: TWkCookieManager;
  TempCookieList: TWkCookieList;
begin
  TempCookieList := TWkCookieList.Create(cookieList);
  WriteLn('OnGetCookiesFinishEvent cookie-length: ', TempCookieList.Length(), ' error: ', error);
  aCookieManage := FWebview.CookieManager();
  for idx := 0 to TempCookieList.Length() - 1 do
  begin
    aCookie := TWkCookie.Create(TempCookieList.GetCookie(idx));
    aCookieDate := TWkCookieDate.Create(aCookie.Expires);
    if aCookie.Name = 'webkit2-custom-cookie-key' then
    begin
      aCookieManage.DeleteCookie(aCookie);
    end;
    WriteLn('  cookie name: ', aCookie.Name, ' value: ', aCookie.Value, ' path: ', aCookie.Path, ' Domain: ', aCookie.Domain, ' date: ',
      aCookieDate.Year(), ' ', aCookieDate.ToStringTime(SOUP_DATE_COOKIE));
  end;
end;

function TForm1.OnDecidePolicyEvent(Sender: TObject; decision: WebKitPolicyDecision; type_: WebKitPolicyDecisionType): boolean;
var
  aNavigationAction: TWkNavigationAction;
  aNavigationPolicyDecision: TWkNavigationPolicyDecision;
  aResponsePolicyDecision: TWkResponsePolicyDecision;
  aURIRequest: TWkURIRequest;
  headers: TWkHeaders;
  headerList: TStrings;
  idx: integer;
  headName, headValue: string;
begin
  Result := True;
  WriteLn('OnDecidePolicyEvent type: ', type_);
  if (type_ = WEBKIT_POLICY_DECISION_TYPE_NEW_WINDOW_ACTION) or (type_ = WEBKIT_POLICY_DECISION_TYPE_NAVIGATION_ACTION) then
  begin
    aNavigationPolicyDecision := TWkNavigationPolicyDecision.Create(decision);
    aNavigationAction := TWkNavigationAction.Create(aNavigationPolicyDecision.GetNavigationAction());
    aURIRequest := TWkURIRequest.Create(aNavigationAction.GetRequest());
    WriteLn('    URL: ', aURIRequest.URI, ' Method: ', aURIRequest.Method());
    // new window
    if (FChildTForm1 <> nil) and (type_ = WEBKIT_POLICY_DECISION_TYPE_NEW_WINDOW_ACTION) then
    begin
      WriteLn('    new window');
      FChildTForm1.CreateBrowser(aURIRequest.URI);
      FChildTForm1.Show;
      Application.QueueAsyncCall(@CreateChildForm, 0);
    end;
  end
  else
  begin
    aResponsePolicyDecision := TWkResponsePolicyDecision.Create(decision);
    aURIRequest := TWkURIRequest.Create(aResponsePolicyDecision.GetRequest());
    WriteLn('    URL: ', aURIRequest.URI, ' Method: ', aURIRequest.Method());
  end;
  // 头信息
  headers := TWkHeaders.Create(aURIRequest.Headers());
  headerList := headers.List();
  if headerList <> nil then
  begin
    for idx := 0 to headerList.Count - 1 do
    begin
      headName := headerList.Names[idx];
      headValue := headerList.Values[headName];
      WriteLn('header name: ', headName, ' value: ', headValue);
    end;
    headerList.Free;
  end;
end;

procedure TForm1.OnWebProcessTerminatedEvent(Sender: TObject; reason: WebKitWebProcessTerminationReason);
begin
  WriteLn('OnWebProcessTerminatedEvent reason: ', reason, ' IsAPI: ', reason = WEBKIT_WEB_PROCESS_TERMINATED_BY_API);
  if reason = WEBKIT_WEB_PROCESS_TERMINATED_BY_API then
  begin
    Application.QueueAsyncCall(@IPCClose, 0);
  end;
end;

function TForm1.OnContextMenuEvent(Sender: TObject; contextMenu: WebKitContextMenu; defaultAction: PWkAction): boolean;
var
  aTestMenuItem: TWkContextMenuItem;
  subTestMenuItem: TWkContextMenuItem;
  aSubMenu: TWkContextMenu;
  TempcontextMenu: TWkContextMenu;
begin
  TempcontextMenu := TWkContextMenu.Create(contextMenu);
  //contextMenu.RemoveAll();
  TempcontextMenu.Append(TWkContextMenuItem.NewSeparator().Data());

  aTestMenuItem := TWkContextMenuItem.NewFromAction(defaultAction, '关闭', 10001);
  TempcontextMenu.Append(aTestMenuItem.Data());

  aTestMenuItem := TWkContextMenuItem.NewFromAction(defaultAction, '测试', 0);
  TempcontextMenu.Append(aTestMenuItem.Data());

  aSubMenu := TWkContextMenu.New();
  subTestMenuItem := TWkContextMenuItem.NewFromAction(defaultAction, 'Sub测试1', 10003);
  aSubMenu.Append(subTestMenuItem.Data());
  subTestMenuItem := TWkContextMenuItem.NewFromAction(defaultAction, 'Sub测试2', 10004);
  aSubMenu.Append(subTestMenuItem.Data());

  aTestMenuItem.SetSubmenu(aSubMenu.Data());

  WriteLn('OnContextMenuEvent');
  Result := False;
end;


function TForm1.OnMouseEvent(Sender: TObject; event: PWkButtonEvent): boolean;
begin
  Result := false;
end;

procedure TForm1.OnContextMenuCommandEvent(Sender: TObject; menuID: integer);
begin
  WriteLn('OnContextMenuCommandEvent menuID: ', menuID);
  if menuID = 10001 then
  begin
    Application.QueueAsyncCall(@IPCClose, 0);
  end;
end;

procedure TForm1.OnEnterFullscreenEvent(Sender: TObject);
begin
  WriteLn('OnEnterFullscreenEvent');
  //Self.WindowState:=wsFullScreen;
end;

procedure TForm1.IPCWindowState(Data: PtrInt);
begin
  // wsNormal, wsMinimized, wsMaximized, wsFullScreen
  if Data = 0 then
    WindowState := wsMinimized
  else
  begin
    if WindowState = wsMaximized then
      WindowState := wsNormal
    else
      WindowState := wsMaximized;
  end;
end;

procedure TForm1.IPCClose(Data: PtrInt);
begin
  Close();
end;

procedure TForm1.StartDarg(Data: PtrInt);
begin
  FWebView.StartDrag(self);
end;

procedure TForm1.OnProcessMessageEvent(Sender: TObject; const jsValue: TWkJSValue; processId: TWkProcessId);
begin
  if jsValue.ValueType = jtString then
    WriteLn('OnProcessMessageEvent 类型: [', jsValue.ValueType, '] 返回结果: [', jsValue.StringValue(), '] JS异常: [', jsValue.ExceptionMessage(), '] processId: [', processId, ']')
  else if jsValue.ValueType = jtNumber then
    WriteLn('OnProcessMessageEvent 类型: [', jsValue.ValueType, '] 返回结果: [', jsValue.IntegerValue(), '] JS异常: [', jsValue.ExceptionMessage(), '] processId: [', processId, ']')
  else if jsValue.ValueType = jtBoolean then
    WriteLn('OnProcessMessageEvent 类型: [', jsValue.ValueType, '] 返回结果: [', jsValue.BooleanValue(), '] JS异常: [', jsValue.ExceptionMessage(), '] processId: [', processId, ']');
  if jsValue.StringValue() = 'minimize' then
    Application.QueueAsyncCall(@IPCWindowState, 0)
  else if jsValue.StringValue() = 'maximize' then
    Application.QueueAsyncCall(@IPCWindowState, 1)
  else if jsValue.StringValue() = 'close' then
    Application.QueueAsyncCall(@IPCClose, 0)
  else if jsValue.StringValue() = 'startdarg' then
    Application.QueueAsyncCall(@StartDarg, 0);
end;

procedure TForm1.CookieBtnClick(Sender: TObject);
var
  aCookieManage: TWkCookieManager;
  aCookie: TWkCookie;
begin
  aCookieManage := FWebView.CookieManager();
  aCookieManage.GetAcceptPolicy();
  aCookie := TWkCookie.NewCookie('webkit2-custom-cookie-key', 'value-data-energy-custom-cookie', 'www.baidu.com', '/', 100000);
  aCookieManage.AddCookie(aCookie);
  aCookieManage.GetCookies(URLListBox.GetSelectedText);
  aCookieManage.DeleteCookiesForDomain('www.baidu.com');
end;

procedure TForm1.SubMenuClick(Sender: TObject);
begin
  Application.MessageBox('title', 'title');
end;

procedure TForm1.ShowDevToolsMenuClick(Sender: TObject);
begin
  FWebView.ShowDevtools();
end;

procedure TForm1.FormCreate(Sender: TObject);
var
  aMainMenu: TMainMenu;
  aMenu, aShowDevToolsMenu: TMenuItem;
  aSubMenu: TMenuItem;
  aContext: TWkWebContext;
begin
  FwebViewParent := nil;
  FWebView := nil;

  // Gtk3先给初始大小，不然没办法拖拽更小了，在Show时设置默认显示大小
  // 先固定100，再小的话需要计算一下
  Width := 100;
  Height := 100;

  aMainMenu := TMainMenu.Create(self);

  aMenu := TMenuItem.Create(self);
  aMenu.Caption := 'File';
  aMainMenu.Items.Add(aMenu);

  aSubMenu := TMenuItem.Create(self);
  aSubMenu.Caption := 'message-test';
  aSubMenu.OnClick := @SubMenuClick;
  aMenu.Add(aSubMenu);

  aShowDevToolsMenu := TMenuItem.Create(self);
  aShowDevToolsMenu.Caption := 'ShowDevTools';
  aShowDevToolsMenu.OnClick := @ShowDevToolsMenuClick;
  aMainMenu.Items.Add(aShowDevToolsMenu);

  // webview
  FwebViewParent := TWkWebviewParent.Create(self);
  FwebViewParent.Parent := self;
  FwebViewParent.Top := 100;
  FwebViewParent.Left := 30;
  FwebViewParent.Width := Width - 60;
  FwebViewParent.Height := Height - 100;
  FwebViewParent.Anchors := [akLeft, akTop, akRight, akBottom];

  FWebView := TWkWebview.Create(self);
  FWebView.EnabledDevtools(True);
  FWebView.RegisterScriptCode('let test = {"name": "zhangsan"} ');
  FWebView.OnExecuteScriptFinished := @OnExecuteScriptFinished;
  FWebView.OnURISchemeRequest := @OnURISchemeRequestEvent;
  FWebView.OnLoadChange := @OnLoadChangeEvent;
  FWebView.OnProcessMessage := @OnProcessMessageEvent;
  FWebView.OnGetAcceptPolicyFinish := @OnGetAcceptPolicyFinishEvent;
  FWebView.OnAddCookieFinish := @OnAddCookieFinishEvent;
  FWebView.OnGetCookiesFinish := @OnGetCookiesFinishEvent;
  FWebView.OnDeleteCookieFinish := @OnDeleteCookieFinishEvent;
  FWebView.OnDecidePolicy := @OnDecidePolicyEvent;
  FWebView.OnWebProcessTerminated := @OnWebProcessTerminatedEvent;
  FWebView.OnContextMenu := @OnContextMenuEvent;
  FWebView.OnContextMenuCommand := @OnContextMenuCommandEvent;
  FWebView.OnMouseMove := @OnMouseEvent;
  //FWebView.OnEnterFullscreen := @OnEnterFullscreenEvent;

  aContext := TWkWebContext.Default();
  aContext.RegisterURIScheme('energy', FWebView);
  aContext := nil;

  FWebView.RegisterScriptMessageHandler('processMessage');
  FWebView.GetSettings().set_hardware_acceleration_policy(WEBKIT_HARDWARE_ACCELERATION_POLICY_NEVER);

  FWebView.CreateBrowser();
  FwebViewParent.SetWebview(FWebView);
  WriteLn('webkit-version major: ', webkit_major_version(), ' minor: ', webkit_minor_version());

  // child form
  CreateChildForm(0);
  WriteLn('create end');
end;

procedure TForm1.CreateChildForm(Data: PtrInt);
begin
  FChildTForm1 := TChildForm.Create(self);
  FChildTForm1.Caption := 'new-window';
  FChildTForm1.Left := 400;
  FChildTForm1.Top := 300;
end;

procedure TForm1.LoadURLBtnClick(Sender: TObject);
begin
  FWebView.LoadURL(URLListBox.GetSelectedText);
  // https://www.baidu.com
  // https://gitee.com/energye/energy
  // energy://test/index.html
  //FWebView.LoadURL('https://www.baidu.com');
  //webkit_web_view_load_uri(webview, 'https://gitee.com/energye/energy');
  //webkit_web_view_load_uri(webview, 'https://vfx.mtime.cn/Video/2019/03/21/mp4/190321153853126488.mp4');
end;

procedure TForm1.CloseTimerTimer(Sender: TObject);
begin
  //Close(); //延迟一下调用Close才不会报错 ???
  //Application.QueueAsyncCall(@IPCClose, 0);
  Application.Terminate();
end;

procedure TForm1.FormMouseDown(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: integer);
begin
  //gtk_window_begin_move_drag
  WriteLn('FormMouseDown');
end;

procedure TForm1.ExecuteJSBtnClick(Sender: TObject);
begin
  CloseTimer.Enabled := False;
  Application.QueueAsyncCall(@ExecuteJS, 0);
  //ExecuteJS(0);
end;

procedure TForm1.StopLoadBtnClick(Sender: TObject);
begin
  FwebView.Stop;
end;

procedure TForm1.ExecuteJS(Data: PtrInt);
begin
  FwebView.ExecuteScript('document.title;', 0);
  FwebView.ExecuteScript(
    'document.getElementById("kw").value = "go energy - ' + FormatDateTime('yyyy-mm-dd hh:nn:ss', now()) + '"; document.getElementById("kw").value;', 0);
end;

procedure TForm1.FormClose(Sender: TObject; var CloseAction: TCloseAction);
begin
  WriteLn('FormClose: ', CloseAction);
  //CloseAction := caNone;
  CloseAction := caFree;
end;

procedure TForm1.CloseWebkit(Data: PtrInt);
begin
  FWebView.Stop;
  FWebView.TryClose();
  FWebView.TerminateWebProcess();
  FwebViewParent.FreeChild();
  FCanClose := True;
  //CloseTimer.Enabled := True;
  //self.Visible := False;
end;

procedure TForm1.FormCloseQuery(Sender: TObject; var CanClose: boolean);
begin
  WriteLn('FormCloseQuery CanClose: ', FCanClose);
  if not FCanClose then
  begin
    Application.QueueAsyncCall(@CloseWebkit, 0);
  end;
  CanClose := FCanClose;
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  FWebView.LoadURL('energy://test/index.html');
  //Application.QueueAsyncCall(@LoadURL, 0);
  //LoadURLBtnClick(Sender);
  WriteLn('FormShow');
end;

end.
