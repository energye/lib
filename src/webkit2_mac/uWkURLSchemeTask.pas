unit uWkURLSchemeTask;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CocoaUtils,
  uWebKit;

type

  // An interface that WebKit uses to request custom resources from your app.
  // https://developer.apple.com/documentation/webkit/wkurlschemetask?language=objc
  TWkURLSchemeTask = class
  private
    FData: WKURLSchemeTask;
  public
    constructor Create(AData: WKURLSchemeTask);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKURLSchemeTask;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Information about the resource to load.
    function Request(): NSURLRequest;
    // Returns a URL response to WebKit with information about the requested resource.
    procedure ReceiveResponse (response: NSURLResponse);
    // Sends some or all of the resource data to WebKit.
    procedure ReceiveData(ADataBytes: Pointer; ALength: Integer {NSData});
    // Signals the successful completion of the task.
    procedure Finish ();
    // Completes the task and reports the specified error back to WebKit.
    procedure FailWithError (code: Integer; error: string {NSError});
  end;


implementation


constructor TWkURLSchemeTask.Create(AData: WKURLSchemeTask);
begin
  inherited Create;
  FData := AData;
end;

destructor TWkURLSchemeTask.Destroy;
begin
  if FData <> nil then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWkURLSchemeTask.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TWkURLSchemeTask.Data(): WKURLSchemeTask;
begin
  Result := FData;
end;

function TWkURLSchemeTask.Request(): NSURLRequest;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := FData.request();
  end;
end;

procedure TWkURLSchemeTask.ReceiveResponse (response: NSURLResponse);
begin
  if Assigned(FData) then
  begin
    FData.didReceiveResponse(response);
  end;
end;

procedure TWkURLSchemeTask.ReceiveData (ADataBytes: Pointer; ALength: Integer {NSData});
var
  TempData: NSData;
begin
  if Assigned(FData) then
  begin
    TempData := NSData.dataWithBytes_length(ADataBytes, NSUInteger(ALength));
    FData.didReceiveData(TempData);
  end;
end;

procedure TWkURLSchemeTask.Finish ();
begin
  if Assigned(FData) then
  begin
    FData.didFinish();
  end;
end;

procedure TWkURLSchemeTask.FailWithError (code: Integer; error: string {NSError});
var
  TempDict: NSDictionary;
  TempError: NSError;
  AutoPool: NSAutoreleasePool;
begin
  if Assigned(FData) then
  begin
    AutoPool := NSAutoreleasePool.alloc.init;
    try
      TempDict := NSDictionary.dictionaryWithObject_forKey(NSStringUTF8(error), NSLocalizedDescriptionKey);
      TempError := NSError.errorWithDomain_code_userInfo(NSURLErrorDomain, NSUInteger(code), TempDict);
      FData.didFailWithError(TempError);
    finally
      AutoPool.Release;
    end;
  end;
end;


end.
