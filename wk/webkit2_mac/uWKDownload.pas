unit uWKDownload;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils,
  uWebKit, uWkInterface, uNSURLRequest;

type


  TWKDownload = class(TInterfacedObject, IWKDownload)
  private
    FData: WKDownload;
    FWebView: IWKWebView;
  protected
    function Data(): WKDownload;
    procedure doCancelCompletionHandler(resumeData: NSData);
  public
    constructor Create(AData: WKDownload; AWebView: IWKWebView);
    destructor Destroy; override;
  public
    function OriginalRequest: INSURLRequest;
    function WebView: IWKWebView;
    procedure SetDelegate(downloadDelegate: WKDownloadDelegateProtocol);
    function Delegate: WKDownloadDelegateProtocol;
    procedure Cancel ();
  end;


implementation

constructor TWKDownload.Create(AData: WKDownload; AWebView: IWKWebView);
begin
  inherited Create;
  FData := AData;
  FWebView := AWebView;
end;

destructor TWKDownload.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  FWebView := nil;
  inherited Destroy;
end;

function TWKDownload.Data(): WKDownload;
begin
  Result := FData;
end;

function TWKDownload.OriginalRequest: INSURLRequest;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := TNSURLRequest.Create(FData.OriginalRequest);
  end;
end;

function TWKDownload.WebView: IWKWebView;
begin
  Result := FWebView;
  //if Assigned(FData) then
  //begin
  //  Result := FData.webView;
  //end;
end;

procedure TWKDownload.SetDelegate(downloadDelegate: WKDownloadDelegateProtocol);
begin
  if Assigned(FData) then
  begin
    FData.setDelegate(downloadDelegate);
  end;
end;

function TWKDownload.Delegate: WKDownloadDelegateProtocol;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.delegate;
  end;
end;

procedure TWKDownload.doCancelCompletionHandler(resumeData: NSData);
begin
  if Assigned(FWebView) then
  begin
    (FWebView as IWKDownloadEvent).doCancelCompletionHandler(FData, resumeData.bytes, Integer(resumeData.length));
  end;
end;

procedure TWKDownload.Cancel();
begin
  if Assigned(FData) then
  begin
    FData.cancel(@doCancelCompletionHandler);
  end;
end;

end.
