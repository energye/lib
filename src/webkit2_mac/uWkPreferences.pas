unit uWkPreferences;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}

interface

uses
  Classes, SysUtils, Forms,
  CocoaAll, CGBase, CocoaUtils,
  uWebKit;

type

  // An object that encapsulates the standard behaviors to apply to websites.
  // https://developer.apple.com/documentation/webkit/wkpreferences?language=objc
  TWkPreferences = class
  private
    FData: WKPreferences;
  public
    constructor Create(AData: WKPreferences);
    destructor Destroy; override;
    // Returns the object implemented by this class.
    function Data(): WKPreferences;
    // Freeing the class and the objects it implements.
    procedure Release();
  public
    // Creates and returns an WKPreferences object.
    class function New(): TWkPreferences;
    // Sets The minimum font size, in points.
    procedure SetMinimumFontSize(newValue: double);
    // Returns The minimum font size, in points.
    function MinimumFontSize: double;
    // Sets A Boolean value that indicates whether JavaScript is enabled.
    procedure SetJavaScriptEnabled(newValue: LongBool);
    // Returns A Boolean value that indicates whether JavaScript is enabled.
    function JavaScriptEnabled: LongBool;
    // Sets A Boolean value that indicates whether JavaScript can open windows without user interaction.
    procedure SetJavaScriptCanOpenWindowsAutomatically(newValue: LongBool);
    // Returns A Boolean value that indicates whether JavaScript can open windows without user interaction.
    function JavaScriptCanOpenWindowsAutomatically: LongBool;
    // Sets A Boolean value that indicates whether Java is enabled.
    procedure SetJavaEnabled(newValue: LongBool);
    // Returns A Boolean value that indicates whether Java is enabled.
    function JavaEnabled: LongBool;
    // Sets A Boolean value that indicates whether plug-ins are enabled.
    procedure SetPlugInsEnabled(newValue: LongBool);
    // Returns A Boolean value that indicates whether plug-ins are enabled.
    function PlugInsEnabled: LongBool;
    // Sets A Boolean value that indicates whether pressing the tab key changes the focus to links and form controls.
    procedure SetTabFocusesLinks(newValue: LongBool);
    // Sets A Boolean value that indicates whether the web view shows warnings for suspected fraudulent content, such as malware or phishing attemps.
    procedure SetFraudulentWebsiteWarningEnabled(newValue: LongBool);
    // Sets A Boolean value that indicates whether to allow people to select or otherwise interact with text. 11.3
    procedure SetTextInteractionEnabled(newValue: LongBool);
    // Sets A Boolean value that indicates whether a web view can display content full screen. 12.3
    procedure SetElementFullscreenEnabled(newValue: LongBool);
    // Writes a custom value to a field
    procedure SetValueForKey(value: NSObject; key: string);
    // Writes a custom value to a field
    procedure SetBoolValueForKey(value: LongBool; key: string);
    // Writes a custom value to a field
    procedure SetStringValueForKey(value: string; key: string);
    // Writes a custom value to a field
    procedure SetNumberValueForKey(value: Integer; key: string);
    // Writes a custom value to a field
    procedure SetDoubleValueForKey(value: Double; key: string);
  end;


implementation

constructor TWkPreferences.Create(AData: WKPreferences);
begin
  FData := AData;
  inherited Create();
end;

destructor TWkPreferences.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TWkPreferences.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

class function TWkPreferences.New(): TWkPreferences;
begin
  Result := Create(WKPreferences.alloc.init);
end;

function TWkPreferences.Data(): WKPreferences;
begin
  Result := FData;
end;

procedure TWkPreferences.SetMinimumFontSize(newValue: double);
begin
  if Assigned(FData) then
  begin
    FData.setMinimumFontSize(CGFloat(newValue));
  end;
end;

function TWkPreferences.MinimumFontSize: double;
begin
  Result := 0.0;
  if Assigned(FData) then
  begin
    Result := double(FData.minimumFontSize());
  end;
end;

procedure TWkPreferences.SetTabFocusesLinks(newValue: LongBool);
begin
    FData.setTabFocusesLinks(ObjCBOOL(newValue));
end;

procedure TWkPreferences.SetJavaScriptEnabled(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setJavaScriptEnabled(ObjCBOOL(newValue));
  end;
end;

function TWkPreferences.JavaScriptEnabled: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.javaScriptEnabled);
  end;
end;

procedure TWkPreferences.SetJavaScriptCanOpenWindowsAutomatically(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setJavaScriptCanOpenWindowsAutomatically(ObjCBOOL(newValue));
  end;
end;

function TWkPreferences.JavaScriptCanOpenWindowsAutomatically: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.javaScriptCanOpenWindowsAutomatically);
  end;
end;

procedure TWkPreferences.SetJavaEnabled(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setJavaEnabled(ObjCBOOL(newValue));
  end;
end;

function TWkPreferences.JavaEnabled: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.javaEnabled);
  end;
end;

procedure TWkPreferences.SetPlugInsEnabled(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setPlugInsEnabled(ObjCBOOL(newValue));
  end;
end;

function TWkPreferences.PlugInsEnabled: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.plugInsEnabled);
  end;
end;

procedure TWkPreferences.SetFraudulentWebsiteWarningEnabled(newValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setFraudulentWebsiteWarningEnabled(ObjCBOOL(newValue));
  end;
end;

procedure TWkPreferences.SetTextInteractionEnabled(newValue: LongBool);// 11.3
begin
  if Assigned(FData) then
  begin
    FData.setTextInteractionEnabled(ObjCBOOL(newValue));
  end;
end;

procedure TWkPreferences.SetElementFullscreenEnabled(newValue: LongBool);// 12.3
begin
  if Assigned(FData) then
  begin
    FData.setElementFullscreenEnabled(ObjCBOOL(newValue));
  end;
end;

procedure TWkPreferences.SetValueForKey(value: NSObject; key: string);
begin
  if Assigned(FData) then
  begin
    FData.setValue_forKey(value, NSStringUTF8(key));
  end;
end;

procedure TWkPreferences.SetBoolValueForKey(value: LongBool; key: string);
var
  TempValue: NSNumber;
begin
  TempValue := NSNumber.numberWithBool(ObjCBOOL(value));
  SetValueForKey(TempValue, key);
  TempValue.release;
end;

procedure TWkPreferences.SetStringValueForKey(value: string; key: string);
var
  TempValue: NSNumber;
begin
  TempValue := NSNumber.numberWithChar(PAnsiChar(value)^);
  SetValueForKey(TempValue, key);
  TempValue.release;
end;

procedure TWkPreferences.SetNumberValueForKey(value: Integer; key: string);
var
  TempValue: NSNumber;
begin
  TempValue := NSNumber.numberWithInteger(NSInteger(value));
  SetValueForKey(TempValue, key);
  TempValue.release;
end;

procedure TWkPreferences.SetDoubleValueForKey(value: Double; key: string);
var
  TempValue: NSNumber;
begin
  TempValue := NSNumber.numberWithDouble(value);
  SetValueForKey(TempValue, key);
  TempValue.release;
end;

end.
