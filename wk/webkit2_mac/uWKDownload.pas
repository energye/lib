unit uWKDownload;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll,
  uWebKit, uWkInterface, uWKDownloadDelegateProtocol;

type

  // An object that represents the download of a web resource.
  // https://developer.apple.com/documentation/webkit/wkdownload?language=objc
  TWKDownload = class
  private
    FData: WKDownload;
    FWebViewDelegate: IWKDownloadDelegateEvent;
  protected
    procedure doCancelCompletionHandler(resumeData: NSData);
  public
    constructor Create(AData: WKDownload; AWebViewDelegate: IWKDownloadDelegateEvent);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKDownload;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // An object that represents the request that initiated the download.
    function OriginalRequest: NSURLRequest;
    // An object you use to track download progress and handle redirects, authentication challenges, and failures.
    procedure SetDelegate(downloadDelegate: TWKDownloadDelegate);
    // Cancels the download, and optionally captures data so that you can resume the download later.
    procedure Cancel ();
    // An object that conveys ongoing progress to the user for a specified task.
    // https://developer.apple.com/documentation/foundation/nsprogress?language=objc
    function Progress: NSProgress;
  end;


implementation

constructor TWKDownload.Create(AData: WKDownload; AWebViewDelegate: IWKDownloadDelegateEvent);
begin
  inherited Create;
  FData := AData;
  FWebViewDelegate := AWebViewDelegate;
end;

destructor TWKDownload.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  FWebViewDelegate := nil;
  inherited Destroy;
end;

procedure TWKDownload.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWKDownload.Data(): WKDownload;
begin
  Result := FData;
end;

function TWKDownload.OriginalRequest: NSURLRequest;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.OriginalRequest;
  end;
end;

procedure TWKDownload.SetDelegate(downloadDelegate: TWKDownloadDelegate);
begin
  if Assigned(FData) then
  begin
    FData.setDelegate(downloadDelegate.Data);
  end;
end;

procedure TWKDownload.doCancelCompletionHandler(resumeData: NSData);
begin
  if Assigned(FData) and Assigned(FWebViewDelegate) then
  begin
    FWebViewDelegate.doDownloadCancelCompletionHandler(FData, resumeData.bytes, Integer(resumeData.length));
  end;
end;

procedure TWKDownload.Cancel();
begin
  if Assigned(FData) then
  begin
    FData.cancel(@doCancelCompletionHandler);
  end;
end;

function TWKDownload.Progress: NSProgress;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.progress;
  end;
end;

end.
