unit uWkWebviewParent;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Controls, ExtCtrls, Graphics,
  CocoaAll, uWkInterface;

type


  TWkWebviewParent = class(TCustomControl)
  private
    FWebview: IWkWebview;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
  public
    procedure UpdateBounds();
    procedure Resize(); override;
    procedure SetWebview(AWebview: IWkWebview);
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
    FWebview.Data().setFrame(LR);
  end;
end;

procedure TWkWebviewParent.Resize;
begin
  inherited Resize;
  UpdateBounds;
end;

procedure TWkWebviewParent.SetWebview(AWebview: IWkWebview);
var
  view: NSView;
  AutoPool: NSAutoreleasePool;
begin
  if (FWebview = nil) and Assigned(AWebview) and Assigned(AWebview.Data()) then
  begin
    FWebview := AWebview;
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      view := NSView(self.Handle);
      view.addSubview(FWebview.Data());
    finally
      AutoPool.Release;
    end;
  end;
end;

end.
