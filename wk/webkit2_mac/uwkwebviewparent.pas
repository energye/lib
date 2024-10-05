unit uWkWebviewParent;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Controls, ExtCtrls, Graphics,
  CocoaAll, uWebKit, uWkWebview;

type


  TWkWebviewParent = class(TCustomControl)
  private
    FWebview: TWkWebview;
  private
    procedure UpdateBounds();
    procedure CreateWnd(); override;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  public
    procedure Paint(); override;
    procedure Resize(); override;
    procedure SetWebview(AWebview: TWkWebview);
  end;

implementation

constructor TWkWebviewParent.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  Width := 300;
  Height := 200;
  Visible := True;
end;

destructor TWkWebviewParent.Destroy;
begin
  inherited Destroy;
end;

procedure TWkWebviewParent.UpdateBounds;
var
  LR: NSRect;
begin
  if Assigned(FWebview) then
  begin
    LR.origin.x := 0;
    LR.origin.y := 0;
    LR.size.Width := Width;
    LR.size.Height := Height;
    FWebview.WebView.setFrame(LR);
  end;
end;

procedure TWkWebviewParent.Resize;
begin
  inherited Resize;
  UpdateBounds;
end;

procedure TWkWebviewParent.Paint;
begin
  inherited Paint;
  Canvas.Brush.Color := clWhite;
  Canvas.FillRect(ClientRect);
end;

procedure TWkWebviewParent.CreateWnd();
var
  view: NSView;
  AutoPool: NSAutoreleasePool;
begin
  inherited CreateWnd();
  if Assigned(FWebview) then
  begin
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      view := NSView(self.Handle);//.lclContentView; //GetNSObjectView(NSObject(Handle));
      view.addSubview(FWebview.WebView);
    finally
      AutoPool.Release;
    end;
  end;
end;

procedure TWkWebviewParent.SetWebview(AWebview: TWkWebview);
begin
  if (FWebview = nil) and Assigned(AWebview) then
  begin
    FWebview := AWebview;
  end;
end;

end.
