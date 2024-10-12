unit uWKDownloadDelegateProtocol;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, uWebKit, uWkInterface;

type

  NSWKDownloadDelegateProtocol = objcclass(NSObject, WKDownloadDelegateProtocol)
  private
    FData: Pointer;
  public
    procedure download_decideDestinationUsingResponse_suggestedFilename_completionHandler (download: WKDownload; response: NSURLResponse; suggestedFilename: NSString;
      completionHandler: WKDownloadDelegateDownloadCallback);
    procedure download_willPerformHTTPRedirection_newRequest_decisionHandler (download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest;
      decisionHandler: WKDownloadDelegateDownloadCallback);
    procedure download_didReceiveAuthenticationChallenge_completionHandler (download: WKDownload; challenge: NSURLAuthenticationChallenge;
      completionHandler: WKDownloadDelegateDownloadCallback);
    procedure downloadDidFinish (download: WKDownload);
    procedure download_didFailWithError_resumeData (download: WKDownload; error: NSError; resumeData: NSData);
  end;

  TWKDownloadDelegate = class(TInterfacedObject, IWKDownloadDelegate)
  private
    FData: NSWKDownloadDelegateProtocol;
  protected
    function Data(): WKDownloadDelegateProtocol;
  public
    constructor Create(event: IWKDownloadEvent);
    destructor Destroy; override;
  end;


implementation


procedure NSWKDownloadDelegateProtocol.download_decideDestinationUsingResponse_suggestedFilename_completionHandler (download: WKDownload; response: NSURLResponse; suggestedFilename: NSString;
  completionHandler: WKDownloadDelegateDownloadCallback);
begin
  if FData <> nil then
  begin
    IWKDownloadEvent(FData).doDownloadDecideDestinationUsingResponseSuggestedFilename(download, response, suggestedFilename, completionHandler);
  end;
end;

procedure NSWKDownloadDelegateProtocol.download_willPerformHTTPRedirection_newRequest_decisionHandler (download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest;
  decisionHandler: WKDownloadDelegateDownloadCallback);
begin
  if FData <> nil then
  begin
    IWKDownloadEvent(FData).doDownloadWillPerformHTTPRedirectionNewRequest(download, response, request, decisionHandler);
  end;
end;

procedure NSWKDownloadDelegateProtocol.download_didReceiveAuthenticationChallenge_completionHandler (download: WKDownload; challenge: NSURLAuthenticationChallenge;
  completionHandler: WKDownloadDelegateDownloadCallback);
begin
  if FData <> nil then
  begin
    IWKDownloadEvent(FData).doDownloadReceiveAuthenticationChallenge(download, challenge, completionHandler);
  end;
end;

procedure NSWKDownloadDelegateProtocol.downloadDidFinish (download: WKDownload);
begin
  if FData <> nil then
  begin
    IWKDownloadEvent(FData).doDownloadFinish(download);
  end;
end;

procedure NSWKDownloadDelegateProtocol.download_didFailWithError_resumeData (download: WKDownload; error: NSError; resumeData: NSData);
begin
  if FData <> nil then
  begin
    IWKDownloadEvent(FData).doDownloadFailWithError(download, error, resumeData);
  end;
end;

constructor TWKDownloadDelegate.Create(event: IWKDownloadEvent);
begin
  inherited Create;
  FData := NSWKDownloadDelegateProtocol.alloc.init;
  FData.FData := event;
end;

destructor TWKDownloadDelegate.Destroy;
begin
  if FData <> nil then
  begin
    //FData.release;
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKDownloadDelegate.Data(): WKDownloadDelegateProtocol;
begin
  Result := FData;
end;

end.
