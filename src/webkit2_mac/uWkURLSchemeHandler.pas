unit uWkURLSchemeHandler;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  uWebKit, uWkInterface;

type

  NSWKURLSchemeHandler = objcclass(NSObject, WKURLSchemeHandlerProtocol)
  private
    FData: Pointer;
  public
    // Asks your handler to begin loading the data for the specified resource.
    procedure webView_startURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
    // Asks your handler to stop loading the data for the specified resource.
    procedure webView_stopURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
  end;

  // A protocol for loading resources with URL schemes that WebKit doesn't handle.
  // https://developer.apple.com/documentation/webkit/wkurlschemehandler?language=objc
  TWkURLSchemeHandler = class
  private
    FData: NSWKURLSchemeHandler;
  public
    constructor Create(event: IWKURLSchemeHandlerDelegateEvent);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKURLSchemeHandlerProtocol;
    // Freeing the class and the objects it implements.
    procedure Release();
  end;


implementation


procedure NSWKURLSchemeHandler.webView_startURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if FData = nil then
    exit;
  IWKURLSchemeHandlerDelegateEvent(FData).doStartURLSchemeTask(webView, urlSchemeTask);
end;

procedure NSWKURLSchemeHandler.webView_stopURLSchemeTask (webView: WKWebView; urlSchemeTask: WKURLSchemeTask);
begin
  if FData = nil then
    exit;
  IWKURLSchemeHandlerDelegateEvent(FData).doStopURLSchemeTask(webView, urlSchemeTask);
end;


constructor TWkURLSchemeHandler.Create(event: IWKURLSchemeHandlerDelegateEvent);
begin
  inherited Create;
  FData := NSWKURLSchemeHandler.alloc.init;
  FData.FData := event;
end;

destructor TWkURLSchemeHandler.Destroy;
begin
  if FData <> nil then
  begin
    //FData.release;
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWkURLSchemeHandler.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWkURLSchemeHandler.Data(): WKURLSchemeHandlerProtocol;
begin
  Result := FData;
end;

end.
