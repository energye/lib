unit uWkWebviewParent;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Controls, ExtCtrls, Graphics,
  CocoaAll, uWebKit;

type


  TWkWebviewParent = class(TCustomControl)
  private
    FWebview: WKWebView;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  public
    procedure Resize(); override;
    procedure SetWebview(AWebview: WKWebView);
  published
    property OnResize;
  end;

implementation

constructor TWkWebviewParent.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  Width := 100;
  Height := 100;
  Visible := True;
  FWebview := nil;
end;

destructor TWkWebviewParent.Destroy;
begin
  FWebview := nil;
  inherited Destroy;
end;

procedure TWkWebviewParent.Resize;
var
  LR: NSRect;
begin
  inherited Resize;
  if Assigned(FWebview) then
  begin
    LR.origin.x := 0;
    LR.origin.y := 0;
    LR.size.Width := Width;
    LR.size.Height := Height;
    FWebview.setFrame(LR);
  end;
end;

procedure TWkWebviewParent.SetWebview(AWebview: WKWebView);
var
  view: NSView;
  AutoPool: NSAutoreleasePool;
begin
  if (FWebview = nil) and Assigned(AWebview) then
  begin
    FWebview := AWebview;
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      view := NSView(self.Handle);
      view.addSubview(FWebview);
    finally
      AutoPool.Release;
    end;
  end;
end;

end.
