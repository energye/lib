unit uNSWkWebview;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils, CocoaAll,
  uWebKit, uWkInterface;

type

  TNSWKWebView = objcclass(WKWebView)
  public
    FData: Pointer;
    procedure mouseDown(event: NSEvent); override;
    procedure mouseUp(event: NSEvent); override;
    procedure mouseMoved(event: NSEvent); override;
    procedure mouseDragged(event: NSEvent); override;
    procedure rightMouseDown(event: NSEvent); override;
    procedure rightMouseUp(event: NSEvent); override;
    procedure rightMouseDragged(event: NSEvent); override;
    procedure otherMouseDown(event: NSEvent); override;
    procedure otherMouseUp(event: NSEvent); override;
    procedure otherMouseDragged(event: NSEvent); override;

    function draggingEntered (sender: NSDraggingInfoProtocol): NSDragOperation; override;
    function draggingUpdated (sender: NSDraggingInfoProtocol): NSDragOperation; override;
    procedure draggingExited (sender: NSDraggingInfoProtocol); override;
    function prepareForDragOperation (sender: NSDraggingInfoProtocol): ObjCBOOL; override;
    function performDragOperation (sender: NSDraggingInfoProtocol): ObjCBOOL; override;
    procedure concludeDragOperation (sender: NSDraggingInfoProtocol); override;
    procedure draggingEnded (sender: NSDraggingInfoProtocol); override;
    function wantsPeriodicDraggingUpdates: ObjCBOOL; override;
    procedure updateDraggingItemsForDrag (sender: NSDraggingInfoProtocol); override;
  end;

implementation


procedure TNSWKWebView.mouseDown(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doMouseDown(event) then
    inherited;
end;

procedure TNSWKWebView.mouseUp(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doMouseUp(event) then
    inherited;
end;

procedure TNSWKWebView.mouseMoved(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doMouseMoved(event) then
    inherited;
end;

procedure TNSWKWebView.mouseDragged(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doMouseDragged(event) then
    inherited;
end;

procedure TNSWKWebView.rightMouseDown(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doRightMouseDown(event) then
    inherited;
end;

procedure TNSWKWebView.rightMouseUp(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doRightMouseUp(event) then
    inherited;
end;

procedure TNSWKWebView.rightMouseDragged(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doRightMouseDragged(event) then
    inherited;
end;

procedure TNSWKWebView.otherMouseDown(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doOtherMouseDown(event) then
    inherited;
end;

procedure TNSWKWebView.otherMouseUp(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doOtherMouseUp(event) then
    inherited;
end;

procedure TNSWKWebView.otherMouseDragged(event: NSEvent);
begin
  if not Assigned(FData) or not IWKUIDelegateEvent(FData).doOtherMouseDragged(event) then
    inherited;
end;

// drag

function TNSWKWebView.draggingEntered(sender: NSDraggingInfoProtocol): NSDragOperation;
var
  TmpHandle: Boolean;
  TmpOper: Integer;
begin
  TmpHandle := False;
  if Assigned(FData)  then
  begin
    TmpOper := IWKUIDelegateEvent(FData).doDraggingEntered(sender, TmpHandle);
  end;
  if not TmpHandle then
     Result := inherited
  else
     Result := NSDragOperation(TmpOper);
end;

function TNSWKWebView.draggingUpdated(sender: NSDraggingInfoProtocol): NSDragOperation;
var
  TmpHandle: Boolean;
  TmpOper: Integer;
begin
  TmpHandle := False;
  if Assigned(FData)  then
  begin
    TmpOper := IWKUIDelegateEvent(FData).doDraggingUpdated(sender, TmpHandle);
  end;
  if not TmpHandle then
     Result := inherited
  else
     Result := NSDragOperation(TmpOper);
end;

procedure TNSWKWebView.draggingExited(sender: NSDraggingInfoProtocol);
var
  TmpHandle: Boolean;
begin
  TmpHandle := False;
  if Assigned(FData)  then
  begin
    IWKUIDelegateEvent(FData).doDraggingExited(sender, TmpHandle);
  end;
end;

function TNSWKWebView.prepareForDragOperation(sender: NSDraggingInfoProtocol): ObjCBOOL;
var
  TmpHandle: Boolean;
begin
  if Assigned(FData)  then
  begin
    TmpHandle := IWKUIDelegateEvent(FData).doPrepareForDragOperation(sender);
  end;
  if not TmpHandle then
     Result := inherited
  else
     Result := ObjCBOOL(TmpHandle);
end;

function TNSWKWebView.performDragOperation(sender: NSDraggingInfoProtocol): ObjCBOOL;
var
  TmpHandle: Boolean;
begin
  if Assigned(FData)  then
  begin
    TmpHandle := IWKUIDelegateEvent(FData).doPerformDragOperation(sender);
  end;
  if not TmpHandle then
     Result := inherited
  else
     Result := ObjCBOOL(TmpHandle);
end;

procedure TNSWKWebView.concludeDragOperation(sender: NSDraggingInfoProtocol);
var
  TmpHandle: Boolean;
begin
  TmpHandle := False;
  if Assigned(FData)  then
  begin
    IWKUIDelegateEvent(FData).doConcludeDragOperation(sender, TmpHandle);
  end;
end;

procedure TNSWKWebView.draggingEnded(sender: NSDraggingInfoProtocol);
var
  TmpHandle: Boolean;
begin
  TmpHandle := False;
  if Assigned(FData)  then
  begin
    IWKUIDelegateEvent(FData).doDraggingEnded(sender, TmpHandle);
  end;
end;

function TNSWKWebView.wantsPeriodicDraggingUpdates: ObjCBOOL;
var
  TmpHandle: Boolean;
begin
  TmpHandle := False;
  if Assigned(FData)  then
  begin
    TmpHandle := IWKUIDelegateEvent(FData).doWantsPeriodicDraggingUpdates();
  end;
  Result := ObjCBOOL(TmpHandle);
end;

procedure TNSWKWebView.updateDraggingItemsForDrag(sender: NSDraggingInfoProtocol);
var
  TmpHandle: Boolean;
begin
  TmpHandle := False;
  if Assigned(FData)  then
  begin
    IWKUIDelegateEvent(FData).doUpdateDraggingItemsForDrag(sender, TmpHandle);
  end;
end;


end.
