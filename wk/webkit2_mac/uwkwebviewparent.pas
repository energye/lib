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
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  public
    procedure UpdateBounds();
    procedure Resize(); override;
    procedure SetWebview(AWebview: TWkWebview);
  end;

implementation

constructor TWkWebviewParent.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  Width := 100;
  Height := 100;
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

procedure TWkWebviewParent.SetWebview(AWebview: TWkWebview);
var
  view: NSView;
  AutoPool: NSAutoreleasePool;
begin
  if (FWebview = nil) and Assigned(AWebview) then
  begin
    FWebview := AWebview;
    if Assigned(FWebview) then
    begin
      AutoPool := NSAutoreleasePool.alloc.init;
      try
        view := NSView(self.Handle);
        view.addSubview(FWebview.WebView);
      finally
        AutoPool.Release;
      end;
    end;
  end;
end;

end.
