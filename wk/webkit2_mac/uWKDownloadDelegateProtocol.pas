unit uWKDownloadDelegateProtocol;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, uWebKit, uWkInterface;

type

  NSWKDownloadDelegateProtocol = objcclass(NSObject, WKDownloadDelegateProtocol)
  private
    FData: Pointer;
  public
    procedure download_decideDestinationUsingResponse_suggestedFilename_completionHandler (download: WKDownload; response: NSURLResponse; suggestedFilename: NSString; completionHandler: WKDownloadDecideDestinationUsingResponseSuggestedFilename);
    procedure download_willPerformHTTPRedirection_newRequest_decisionHandler (download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest; decisionHandler: WKDownloadWillPerformHTTPRedirectionNewRequest);
    //procedure download_didReceiveAuthenticationChallenge_completionHandler (download: WKDownload; challenge: NSURLAuthenticationChallenge; completionHandler: WKReceiveAuthenticationChallenge);
    procedure downloadDidFinish (download: WKDownload);
    procedure download_didFailWithError_resumeData (download: WKDownload; error: NSError; resumeData: NSData);
  end;

  // A protocol you implement to track download progress and handle redirects, authentication challenges, and failures.
  // https://developer.apple.com/documentation/webkit/wkdownloaddelegate?language=objc
  TWKDownloadDelegate = class
  private
    FData: NSWKDownloadDelegateProtocol;
  public
    constructor Create(event: IWKDownloadDelegateEvent);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKDownloadDelegateProtocol;
    // Freeing the class and the objects it implements.
    procedure Release();
  end;


implementation


procedure NSWKDownloadDelegateProtocol.download_decideDestinationUsingResponse_suggestedFilename_completionHandler (download: WKDownload; response: NSURLResponse;
  suggestedFilename: NSString; completionHandler: WKDownloadDecideDestinationUsingResponseSuggestedFilename);
begin
  if FData <> nil then
  begin
    IWKDownloadDelegateEvent(FData).doDownloadDecideDestinationUsingResponseSuggestedFilename(download, response, suggestedFilename);
  end;
  completionHandler(response.URL);
end;

procedure NSWKDownloadDelegateProtocol.download_willPerformHTTPRedirection_newRequest_decisionHandler (download: WKDownload; response: NSHTTPURLResponse; request: NSURLRequest;
  decisionHandler: WKDownloadWillPerformHTTPRedirectionNewRequest);
begin
  if FData <> nil then
  begin
    IWKDownloadDelegateEvent(FData).doDownloadWillPerformHTTPRedirectionNewRequest(download, response, request);
  end;
  decisionHandler(WKDownloadRedirectPolicyAllow);
end;

//procedure NSWKDownloadDelegateProtocol.download_didReceiveAuthenticationChallenge_completionHandler (download: WKDownload; challenge: NSURLAuthenticationChallenge;
//  completionHandler: WKReceiveAuthenticationChallenge);
//begin
//  if FData <> nil then
//  begin
//    IWKDownloadDelegateEvent(FData).doDownloadReceiveAuthenticationChallenge(download, challenge);
//  end;
//  //NSURLSessionAuthChallengeUseCredential // 使用指定的凭证，可能是 .nil
//  //NSURLSessionAuthChallengePerformDefaultHandling //对质询使用默认处理方式，就好像没有实现这个委托方法一样。提供的 credential 参数将被忽略。
//  //NSURLSessionAuthChallengeCancelAuthenticationChallenge //取消整个请求。提供的 credential 参数将被忽略。
//  //NSURLSessionAuthChallengeRejectProtectionSpace // 拒绝此质询，并使用下一个身份验证保护空间再次调用 authentication delegate 方法。提供的 credential 参数将被忽略。
//  completionHandler(NSURLSessionAuthChallengePerformDefaultHandling, nil);
//end;

procedure NSWKDownloadDelegateProtocol.downloadDidFinish (download: WKDownload);
begin
  if FData <> nil then
  begin
    IWKDownloadDelegateEvent(FData).doDownloadFinish(download);
  end;
end;

procedure NSWKDownloadDelegateProtocol.download_didFailWithError_resumeData (download: WKDownload; error: NSError; resumeData: NSData);
begin
  if FData <> nil then
  begin
    IWKDownloadDelegateEvent(FData).doDownloadFailWithError(download, error, resumeData);
  end;
end;

constructor TWKDownloadDelegate.Create(event: IWKDownloadDelegateEvent);
begin
  inherited Create;
  FData := NSWKDownloadDelegateProtocol.alloc.init;
  FData.FData := event;
end;

destructor TWKDownloadDelegate.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData.FData := nil;
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWKDownloadDelegate.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWKDownloadDelegate.Data(): WKDownloadDelegateProtocol;
begin
  Result := FData;
end;

end.
