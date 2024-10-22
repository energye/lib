unit uChildForm;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs,
  uWkInterfaces, uLibWebkit, uWkFunctions, uWkTypes,
  uWkWebViewParent, uWkWebview,
  uWkJSValue, uWkURISchemeRequest, uWkHeaders, uWkCookieManager, uWkPolicyDecision,
  uWkContextMenu, uWkContextMenuItem;

type
  TChildForm = class(TForm)
  private
    FwebViewParent: TWkWebViewParent;
    FWebView: TWkWebview;
    FUrl: string;
  public
    IsCloseing, FCanClose: boolean;
    constructor CreateNew(AOwner: TComponent; Num: integer = 0); override;
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure FormCloseQuery(Sender: TObject; var CanClose: boolean);
    procedure CreateBrowser(aUrl: string);
    procedure CloseWebkit(Data: PtrInt);
    procedure IPCClose(Data: PtrInt);
    procedure StartDarg(Data: PtrInt);
    procedure OnProcessMessageEvent(Sender: TObject; const jsValue: TWkJSValue; processId: TWkProcessId);
    procedure OnWebProcessTerminatedEvent(Sender: TObject; reason: WebKitWebProcessTerminationReason);
    procedure OnLoadChangeEvent(Sender: TObject; loadEvent: WebKitLoadEvent);
  end;


implementation

constructor TChildForm.CreateNew(AOwner: TComponent; Num: integer = 0);
begin
  inherited CreateNew(AOwner, Num);
  self.OnCreate := @FormCreate;
  self.OnShow := @FormShow;
  self.OnCloseQuery := @FormCloseQuery;
end;


procedure TChildForm.FormCreate(Sender: TObject);
begin
  WriteLn('TChildForm.FormCreate');
  // webview
  FwebViewParent := TWkWebViewParent.Create(self);
  FwebViewParent.Parent := self;
  FwebViewParent.Align := alClient;
end;

procedure TChildForm.FormShow(Sender: TObject);
begin
  FWebView.LoadURL(FUrl);
end;

procedure TChildForm.FormCloseQuery(Sender: TObject; var CanClose: boolean);
begin
  WriteLn('FormCloseQuery CanClose: ', FCanClose);
  if not FCanClose then
  begin
    Application.QueueAsyncCall(@CloseWebkit, 0);
  end;
  CanClose := FCanClose;
end;

procedure TChildForm.OnWebProcessTerminatedEvent(Sender: TObject; reason: WebKitWebProcessTerminationReason);
begin
  WriteLn('OnWebProcessTerminatedEvent reason: ', reason, ' IsAPI: ', reason = WEBKIT_WEB_PROCESS_TERMINATED_BY_API);
  if reason = WEBKIT_WEB_PROCESS_TERMINATED_BY_API then
  begin
    Application.QueueAsyncCall(@IPCClose, 0);
  end;
end;

procedure TChildForm.OnProcessMessageEvent(Sender: TObject; const jsValue: TWkJSValue; processId: TWkProcessId);
begin
  if jsValue.StringValue() = 'startdarg' then
    Application.QueueAsyncCall(@StartDarg, 0);
end;

procedure TChildForm.OnLoadChangeEvent(Sender: TObject; loadEvent: WebKitLoadEvent);
begin
  WriteLn('OnLoadChangeEvent loadEvent: ', loadEvent, ' title: ', FWebView.GetTitle());
  self.Caption := FWebView.GetTitle();
end;

procedure TChildForm.StartDarg(Data: PtrInt);
begin
  FWebView.StartDrag(self);
end;

procedure TChildForm.IPCClose(Data: PtrInt);
begin
  Close();
end;

procedure TChildForm.CloseWebkit(Data: PtrInt);
begin
  FWebView.Stop;
  FWebView.TryClose();
  FWebView.TerminateWebProcess();
  FwebViewParent.FreeChild();
  FCanClose := True;
  //self.Visible := False;
end;

procedure TChildForm.CreateBrowser(aUrl: string);
begin
  FUrl := aUrl;
  FWebView := TWkWebview.Create(self);
  FWebView.EnabledDevtools(True);
  FWebView.OnProcessMessage := @OnProcessMessageEvent;
  FWebView.OnWebProcessTerminated := @OnWebProcessTerminatedEvent;
  FWebView.OnLoadChange := @OnLoadChangeEvent;
  FWebView.RegisterScriptMessageHandler('processMessage');
  FWebView.CreateBrowser();
  FwebViewParent.WebView := FWebView;
end;

end.
