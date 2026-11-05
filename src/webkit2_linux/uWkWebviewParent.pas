unit uWkWebviewParent;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes, SysUtils, Controls, ExtCtrls,
{$IFDEF LClGtk3}
  LazGtk3, gtk3widgets, Gtk3Procs,
{$ENDIF}
  uLibWebkit, uWkWebview;

type

  TWkWebviewParent = class(TCustomPanel)
  protected
    FScrolledWindowAdded: Boolean;
    FScrolledWindow: PGtkScrolledWindow;
    FWebview: TWkWebview;
    FWidget: PGtkWidget;
  protected
    procedure CreateWnd; override;
    procedure Resize; override;
    procedure SetWebview(const AValue: TWkWebview);
  public
    procedure UpdateSize(aWidth, aHeight: Integer);
  public
    property Webview: TWkWebview read FWebview write SetWebview;
    property ScrolledWindow: TScrolledWindow read FScrolledWindow write FScrolledWindow;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    procedure FreeChild();
  end;

implementation

constructor TWkWebviewParent.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  BevelOuter := bvNone;
  BevelInner := bvNone;
  BevelWidth := 1;
  FScrolledWindow := nil;
  FWebview := nil;
  Width := 200;
  Height := 100;
  // 创建一个带有滚动条的父容器
  FScrolledWindow := TGtkScrolledWindow.new(nil, nil); //gtk_scrolled_window_new(nil, nil);
  // 设置滚动条容器宽高
  FScrolledWindow^.set_size_request(Width, Height);  //gtk_widget_set_size_request(FScrolledWindow, Width, Height);
  // 设置滚动条容器行为，自动控制滚动条
  FScrolledWindow^.set_policy(GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC); //gtk_scrolled_window_set_policy(FScrolledWindow, GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
end;

destructor TWkWebviewParent.Destroy;
begin
  inherited Destroy;
end;

function GetViewportFromScrolledWindow(ScrolledWindow: PGtkWidget): PGtkWidget;
var
  Child: PGtkWidget;
begin
  Result := nil;
  if not Gtk3IsScrolledWindow(ScrolledWindow) then
    Exit;
  Child := gtk_bin_get_child(PGtkBin(ScrolledWindow));
  if Gtk3IsViewPort(Child) then
    Result := Child;
end;

procedure TWkWebviewParent.SetWebview(const AValue: TWkWebview);
var
  lWidget: PGtkWidget;
  lViewport: PGtkWidget;
  lOldWebView: PGtkWidget;
begin
  lWidget := TGtk3Widget(Handle).Widget;
  if (lWidget = nil) or not GTK3IsWidget(lWidget) then
    Exit;

  if not FScrolledWindowAdded then
  begin
    gtk_container_add(PGtkContainer(lWidget), FScrolledWindow);
    FScrolledWindowAdded := True;
  end;

  // 移除旧的 WebView
  if (FWebview <> nil) and (FWebview.Webview <> nil) then
  begin
    lViewport := GetViewportFromScrolledWindow(FScrolledWindow);
    if lViewport <> nil then
    begin
      lOldWebView := gtk_bin_get_child(PGtkBin(lViewport));
      if lOldWebView = FWebview.Webview then
      begin
        gtk_container_remove(PGtkContainer(lViewport), lOldWebView);
      end;
    end;
  end;

  FWebview := AValue;

  // 添加新的 WebView
  if (FWebview <> nil) and (FWebview.Webview <> nil) then
  begin
    lViewport := GetViewportFromScrolledWindow(FScrolledWindow);
    if lViewport = nil then
      gtk_container_add(PGtkContainer(FScrolledWindow), FWebview.Webview)
    else
      gtk_container_add(PGtkContainer(lViewport), FWebview.Webview);
    gtk_widget_show(FWebview.Webview);
  end;

  // 确保滚动窗口及其内容可见
  gtk_widget_show_all(FScrolledWindow);

  // 如果顶层窗口尚未可见，则显示它
  if not gtk_widget_get_visible(lWidget) then
    gtk_widget_show_all(lWidget);
end;

procedure TWkWebviewParent.CreateWnd;
begin
  inherited CreateWnd;
end;

procedure TWkWebviewParent.FreeChild();
begin
  if FWebview <> nil then
  begin
    FScrolledWindow^.remove(FWebview.WebView); // gtk_container_remove(PGtkContainer(FScrolledWindow), FWebview.WebView);
    FWebView.FreeWebview;
    FWebview := nil;
  end;
  if FScrolledWindow <> nil then
  begin
    PGtkContainer(FWidget)^.remove(FScrolledWindow); // gtk_container_remove(PGtkContainer(FWidget), FScrolledWindow);
    FScrolledWindow := nil;
  end;
  FWidget := nil;
  Free();
end;

procedure TWkWebviewParent.Resize;
begin
  inherited Resize;
  if FWebview <> nil then
  begin
    UpdateSize(Width, Height);
  end;
end;

procedure TWkWebviewParent.UpdateSize(aWidth, aHeight: Integer);
begin
  Width := aWidth;
  Height := aHeight;
  if Assigned(FScrolledWindow) then
  begin
  {$IFDEF LCLgtk3}
    FScrolledWindow^.set_size_request(aWidth, aHeight);
  {$ENDIF}
  {$IFDEF LCLgtk2}
    gtk_widget_set_usize(FScrolledWindow, aWidth, aHeight);
  {$ENDIF}
  end;
end;

end.
