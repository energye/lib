unit uWkWebViewParent;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes, SysUtils, Controls, ExtCtrls,
{$IFDEF LClGtk3}
  LazGtk3, gtk3widgets,
{$ENDIF}
  uLibWebkit, uWkWebview;

type

  TWkWebviewParent = class(TCustomPanel)
  protected
    FScrolledWindow: PGtkScrolledWindow;
    FWebview: TWkWebview;
    FWidget: PGtkWidget;
  protected
    procedure Resize; override;
    procedure CreateWnd; override;
    procedure SetWebview(const AValue: TWkWebview);
  public
    property ScrolledWindow: TScrolledWindow read FScrolledWindow write FScrolledWindow;
    property WebView: TWkWebview read FWebview write SetWebview;
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
  Width := 0;
  Height := 0;
end;

destructor TWkWebviewParent.Destroy;
begin
  inherited Destroy;
end;

procedure TWkWebviewParent.SetWebview(const AValue: TWkWebview);
begin
  if (FWebview = nil) and Assigned(AValue) then
  begin
    // 当前Gtk组件
    FWebview := AValue;
    FWidget := TGtk3Widget(Handle).Widget;
    // 创建一个带有滚动条的父容器
    FScrolledWindow := TGtkScrolledWindow.new(nil, nil); //gtk_scrolled_window_new(nil, nil);
    // 设置滚动条容器宽高
    FScrolledWindow^.set_size_request(Width, Height);  //gtk_widget_set_size_request(FScrolledWindow, Width, Height);
    // 设置滚动条容器行为，自动控制滚动条
    FScrolledWindow^.set_policy(GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC); //gtk_scrolled_window_set_policy(FScrolledWindow, GTK_POLICY_AUTOMATIC, GTK_POLICY_AUTOMATIC);
    // 将滚动条容器添加到当前组件
    PGtkContainer(FWidget)^.add(FScrolledWindow); //gtk_container_add(PGtkContainer(FWidget), FScrolledWindow);
    // 将 Webview 添加到滚动条容器中
    FScrolledWindow^.add(AValue.WebView); //gtk_container_add(PGtkContainer(FScrolledWindow), AValue.WebView);
    // 显示当前组件内的所有子组件, 包含滚动条容器和webview
    //FWidget^.show_all; //gtk_widget_show_all(FWidget);
  end;
end;

procedure TWkWebviewParent.CreateWnd;
begin
  inherited CreateWnd;
end;

procedure TWkWebviewParent.FreeChild();
begin
  //gtk_widget_destroy(FWidget);
  //FWebview := nil;
  //FScrolledWindow := nil;
  //FWidget := nil;
  //g_object_unref
  if FWebview <> nil then
  begin
    WriteLn('FreeChild WebView');
    // 在滚动条容器中移除webview
    //g_object_unref(FWebview.WebView);
    FScrolledWindow^.remove(FWebview.WebView); // gtk_container_remove(PGtkContainer(FScrolledWindow), FWebview.WebView);
    //gtk_widget_destroy(FWebview.WebView);
    FWebView.FreeWebview;
    FWebview := nil;
  end;
  if FScrolledWindow <> nil then
  begin
    WriteLn('FreeChild ScrolledWindow');
    // 在当前组件中移除滚动条容器
    PGtkContainer(FWidget)^.remove(FScrolledWindow); // gtk_container_remove(PGtkContainer(FWidget), FScrolledWindow);
    FScrolledWindow := nil;
  end;
  FWidget := nil;
  Free();
end;

procedure TWkWebviewParent.Resize;
begin
  if Assigned(FScrolledWindow) then
  {$IFDEF LCLgtk3}
    FScrolledWindow^.set_size_request(Width, Height); //gtk_widget_set_size_request(FScrolledWindow, Width, Height);
  {$ENDIF}
  {$IFDEF LCLgtk2}
    gtk_widget_set_usize(FScrolledWindow, Width, Height);
  {$ENDIF}
  inherited Resize;
end;

end.
