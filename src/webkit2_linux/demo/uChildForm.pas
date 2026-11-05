unit uChildForm;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs,
  uWkInterfaces, uLibWebkit, uWkFunctions, uWkTypes,
  uWkWebviewParent, uWkWebview,
  uWkJSValue, uWkURISchemeRequest, uWkHeaders, uWkCookieManager, uWkPolicyDecision,
  uWkContextMenu, uWkContextMenuItem;

type
  TChildForm = class(TForm)
  private
    FwebviewParent: TWkWebviewParent;
    FWebview: TWkWebview;
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
  FwebviewParent := TWkWebviewParent.Create(self);
  FwebviewParent.Parent := self;
  FwebviewParent.Align := alClient;
end;

procedure TChildForm.FormShow(Sender: TObject);
begin
  FWebview.LoadURL(FUrl);
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
  WriteLn('OnLoadChangeEvent loadEvent: ', loadEvent, ' title: ', FWebview.GetTitle());
  self.Caption := FWebview.GetTitle();
end;

procedure TChildForm.StartDarg(Data: PtrInt);
begin
  FWebview.StartDrag(self);
end;

procedure TChildForm.IPCClose(Data: PtrInt);
begin
  Close();
end;

procedure TChildForm.CloseWebkit(Data: PtrInt);
begin
  FWebview.Stop;
  FWebview.TryClose();
  FWebview.TerminateWebProcess();
  FwebviewParent.FreeChild();
  FCanClose := True;
  //self.Visible := False;
end;

procedure TChildForm.CreateBrowser(aUrl: string);
begin
  FUrl := aUrl;
  FWebview := TWkWebview.Create(self);
  FWebview.EnabledDevtools(True);
  FWebview.OnProcessMessage := @OnProcessMessageEvent;
  FWebview.OnWebProcessTerminated := @OnWebProcessTerminatedEvent;
  FWebview.OnLoadChange := @OnLoadChangeEvent;
  FWebview.RegisterScriptMessageHandler('processMessage');
  FWebview.CreateBrowser();
  FwebviewParent.SetWebview(FWebview);
end;

end.
