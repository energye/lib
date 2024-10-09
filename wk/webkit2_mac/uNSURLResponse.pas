unit uNSURLResponse;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  CocoaAll, uWebKit, uWkInterface, uNSURL;

type


  TNSURLResponse = class(TInterfacedObject, INSURLResponse)
  private
    FData: NSURLResponse;
  protected
    function Data(): NSURLResponse;
  public
    constructor Create; overload;
    constructor Create(AData: NSURLResponse);
    destructor Destroy; override;
  public
    //function InitWithURLMIMETypeExpectedContentLengthTextEncodingName (URL: INSURL; MIMEType: string; length: Integer; name: String): INSURLResponse;
    //function URL: INSURL;
    //function MIMEType: string;
    //function ExpectedContentLength: int64;
    //function TextEncodingName: string;
    //function SuggestedFilename: string;
    //function InitWithURLStatusCodeHTTPVersionHeaderFields (url_: INSURL; statusCode: Integer; HTTPVersion: string; headerFields: NSDictionary): INSURLResponse;
    //function StatusCode: Integer;
    //function AllHeaderFields: NSDictionary;
    // statusCode: https://www.ietf.org/rfc/rfc2616.txt
    //class function LocalizedStringForStatusCode (statusCode_: Integer): string;
  end;


implementation


constructor TNSURLResponse.Create;
begin
  FData := NSURLResponse.alloc.init;
end;

constructor TNSURLResponse.Create(AData: NSURLResponse);
begin
  FData := AData;
end;

destructor TNSURLResponse.Destroy;
begin
  if Assigned(FData) then
  begin
    //FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TNSURLResponse.Data(): NSURLResponse;
begin
  Result := FData;
end;



end.
