unit uWKWebViewConfiguration;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec1}

interface

uses
  Classes, SysUtils, Forms,
  CocoaUtils,
  uWebKit;

type

  TWKWebViewConfiguration = class(TInterfacedObject)
  private
    FData: WKWebViewConfiguration;
  public
    constructor Create; overload;
    destructor Destroy; override;
  public
    function Data(): WKWebViewConfiguration;
  public
    //procedure setProcessPool(newValue: WKProcessPool);
    //function processPool: WKProcessPool;
    procedure SetPreferences(newValue: WKPreferences);
    function Preferences: WKPreferences;
    procedure SetUserContentController(newValue: WKUserContentController);
    function UserContentController: WKUserContentController;
    procedure SetSuppressesIncrementalRendering(newValue: LongBool);
    function SuppressesIncrementalRendering: LongBool;
    // Adopted protocols
    //function copyWithZone (zone: NSZonePtr): id;
  published
    //property OnReceiveScriptMessage;
  end;


implementation

constructor TWKWebViewConfiguration.Create;
begin
  FData := WKWebViewConfiguration.alloc.init;
end;

destructor TWKWebViewConfiguration.Destroy;
begin
  if Assigned(FData) then
  begin
    FData.release;
    FData := nil;
  end;
  inherited Destroy;
end;

function TWKWebViewConfiguration.Data(): WKWebViewConfiguration;
begin
  Result := FData;
end;

procedure TWKWebViewConfiguration.SetPreferences(newValue: WKPreferences);
begin

end;

function TWKWebViewConfiguration.Preferences: WKPreferences;
begin

end;

procedure TWKWebViewConfiguration.SetUserContentController(newValue: WKUserContentController);
begin

end;

function TWKWebViewConfiguration.UserContentController: WKUserContentController;
begin

end;

procedure TWKWebViewConfiguration.SetSuppressesIncrementalRendering(newValue: LongBool);
begin

end;

function TWKWebViewConfiguration.SuppressesIncrementalRendering: LongBool;
begin

end;

end.
