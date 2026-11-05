unit testapi;
{$mode objfpc}{$H+}
{$Z4+}
{$I ExtDecl.inc}

interface

uses
  Classes, SysUtils, FPCanvas, uCEFTypes, GraphType, uArrayWrap, uCEFRecordStruct, uCEFMiscFunctions;

type
  // 基础事件回调函数
  TTestEventCallbackPtr = function(f: Pointer; args: Pointer; argcout: NativeInt): Pointer; extdecl;

  TTestCls = class;
  PTestClsArray = ^TTestClsArray;

  TTestClsArray = array of TTestCls;

  PPointArray = ^TPointArray;

  PTCefCompositionUnderlineDynArray = ^TCefCompositionUnderlineDynArray;

  TTestCls = class
    Fi: string;
    FBrPatt: TBrushPattern;
    FCompositionUnderlineDynArray: TCefCompositionUnderlineDynArray;
  public
    function Test(): string;
    function TestCompositionUnderlineDynArray(): TCefCompositionUnderlineDynArray;
    property BrushPattern: TBrushPattern read FBrPatt;
    constructor Create(i: integer);
  end;

  TTestAPIEvent = function(const AParam1: Integer; AParam2: boolean): integer of object;
  TTestArrayAPIEvent = procedure(var Points: TPointArray) of object;
  TTestTCefBrowserSettings = procedure(var AValue: TCefBrowserSettings) of object;

  TTestEvent = class
    protected
      FTestAPIEvent: TTestAPIEvent;
      FTestArrayAPIEvent: TTestArrayAPIEvent;
      FTestTCefBrowserSettings: TTestTCefBrowserSettings;
    public
      constructor Create();
      destructor Destroy; override;
    public
      function TestEvent(const AParam1: Integer; AParam2: boolean): integer;
      procedure CallOnTTestArrayEvent();
      procedure CallOnTestTCefBrowserSettings();
    published
      property OnTestEvent: TTestAPIEvent read FTestAPIEvent write FTestAPIEvent;
      property OnTestArrayEvent: TTestArrayAPIEvent read FTestArrayAPIEvent write FTestArrayAPIEvent;
      property OnTestTCefBrowserSettings: TTestTCefBrowserSettings read FTestTCefBrowserSettings write FTestTCefBrowserSettings;
  end;

  TTestRecordClass = record
    FStr: PChar;
    FTestClass: TTestEvent;
    FInt: Integer;
    FTestClass2: TTestCls;
  end;

  TEvent = class
  private
    FHostDataPtr: Pointer;
  protected
    procedure SendEvent(AArgs: array of const);
  public
    constructor Create(AHostDataPtr: Pointer);
    destructor Destroy; override;
  public
    //测试事件
    procedure TTestEvent_TTestArrayEvent(var Points: TPointArray);
    procedure TTestEvent_TCefBrowserSettings(var AValue: TCefBrowserSettings);

  end;

var
  GTestEventCallbackPtr: TTestEventCallbackPtr;

implementation


procedure TEvent.SendEvent(AArgs: array of const);
var
  LParams: array[0..11] of Pointer;
  LArgLen: Integer;
  LV: TVarRec;
  I: Integer;
begin
  LArgLen := Length(AArgs);
  if LArgLen <= Length(LParams) then
  begin
    for I := 0 to LArgLen - 1 do
    begin
      LV := AArgs[I];
      case LV.VType of
        vtInteger       : LParams[I] := Pointer(LV.VInteger);
        vtBoolean       : LParams[I] := Pointer(Byte(LV.VBoolean));
        vtChar          : LParams[I] := Pointer(Ord(LV.VChar));
        vtExtended      : LParams[I] := LV.VExtended;
        vtString        : LParams[I] := {$IFDEF MSWINDOWS}LV.VString{$ELSE}LV.VAnsiString{$ENDIF};
        vtPointer       : LParams[I] := LV.VPointer;
        vtPChar         : LParams[I] := LV.VPChar;
        vtObject        : LParams[I] := LV.VObject;
        vtClass         : LParams[I] := LV.VClass;
        vtWideChar      : LParams[I] := Pointer(Ord(LV.VWideChar));
        vtPWideChar     : LParams[I] := LV.VPWideChar;
        vtAnsiString    : LParams[I] := LV.VAnsiString;
        vtInterface     : LParams[I] := LV.VInterface;
        vtWideString    : LParams[I] := LV.VWideString;
        vtInt64         : LParams[I] := LV.VInt64;
        vtUnicodeString : LParams[I] := LV.VUnicodeString;
      end;
    end;
    GTestEventCallbackPtr(FHostDataPtr, @LParams[0], LArgLen);
  end;
end;

constructor TEvent.Create(AHostDataPtr: Pointer);
begin
  FHostDataPtr:=AHostDataPtr;
end;

destructor TEvent.Destroy;
begin
end;

procedure TEvent.TTestEvent_TTestArrayEvent(var Points: TPointArray);
var
  PointsWrap: TPointArrayWrap;
begin
  PointsWrap := TPointArrayWrap.Create(Points);

  WriteLn('pas=TTestEvent_TTestArrayEvent 1 pointsLen: ', PointsWrap.Size());

  SendEvent([@PointsWrap]);
  WriteLn('pas=TTestEvent_TTestArrayEvent 2 Length: ', PointsWrap.Size());
  if PointsWrap.Size() > 0 then
    Points := PointsWrap.PointArrayData()^;
  WriteLn('pas=TTestEvent_TTestArrayEvent 3 Length: ', Length(Points));
end;

procedure TTestEvent.CallOnTTestArrayEvent();
var
  Points: TPointArray = nil;
begin
  WriteLn('pas=TTestEvent.TTestArrayEvent');
  if assigned(FTestArrayAPIEvent) then
    FTestArrayAPIEvent(Points);
  WriteLn('pas=TTestEvent.TTestArrayEvent Event End');
  if Length(Points) > 0 then
    WriteLn('pas=TTestEvent.TTestArrayEvent Length: ', Length(Points));
end;

procedure TEvent.TTestEvent_TCefBrowserSettings(var AValue: TCefBrowserSettings);
var
  Temp: TCefBrowserSettingsPtr;
begin
  WriteLn('pas=TTestEvent_TCefBrowserSettings 1 ');

  Temp := TCefBrowserSettingsToGo(AValue);

  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 ');
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 windowless_frame_rate: ', Temp.windowless_frame_rate);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 standard_font_family: ', Temp.standard_font_family);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 fixed_font_family: ', Temp.fixed_font_family);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 serif_font_family: ', Temp.serif_font_family);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 sans_serif_font_family: ', Temp.sans_serif_font_family);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 cursive_font_family: ', Temp.cursive_font_family);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 fantasy_font_family: ', Temp.fantasy_font_family);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 default_font_size: ', Temp.default_font_size);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 default_fixed_font_size: ', Temp.default_fixed_font_size);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 minimum_font_size: ', Temp.minimum_font_size);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 minimum_logical_font_size: ', Temp.minimum_logical_font_size);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 default_encoding: ', Temp.default_encoding);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 remote_fonts: ', Temp.remote_fonts);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 javascript: ', Temp.javascript);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 javascript_close_windows: ', Temp.javascript_close_windows);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 javascript_access_clipboard: ', Temp.javascript_access_clipboard);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 javascript_dom_paste: ', Temp.javascript_dom_paste);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 image_loading: ', Temp.image_loading);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 image_shrink_standalone_to_fit: ', Temp.image_shrink_standalone_to_fit);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 text_area_resize: ', Temp.text_area_resize);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 tab_to_links: ', Temp.tab_to_links);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 local_storage: ', Temp.local_storage);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 databases: ', Temp.databases);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 webgl: ', Temp.webgl);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 background_color: ', Temp.background_color);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 chrome_status_bubble: ', Temp.chrome_status_bubble);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 2 chrome_zoom_bubble: ', Temp.chrome_zoom_bubble);

  SendEvent([@Temp]);

  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 ');

  AValue := TCefBrowserSettingsToPas(Temp);

  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 windowless_frame_rate: ', AValue.windowless_frame_rate);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 standard_font_family: ', CefString(@AValue.standard_font_family));
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 fixed_font_family: ', CefString(@AValue.fixed_font_family));
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 serif_font_family: ', CefString(@AValue.serif_font_family));
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 sans_serif_font_family: ', CefString(@AValue.sans_serif_font_family));
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 cursive_font_family: ', CefString(@AValue.cursive_font_family));
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 fantasy_font_family: ', CefString(@AValue.fantasy_font_family));
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 default_font_size: ', AValue.default_font_size);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 default_fixed_font_size: ', AValue.default_fixed_font_size);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 minimum_font_size: ', AValue.minimum_font_size);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 minimum_logical_font_size: ', AValue.minimum_logical_font_size);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 default_encoding: ', CefString(@AValue.default_encoding));
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 remote_fonts: ', AValue.remote_fonts);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 javascript: ', AValue.javascript);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 javascript_close_windows: ', AValue.javascript_close_windows);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 javascript_access_clipboard: ', AValue.javascript_access_clipboard);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 javascript_dom_paste: ', AValue.javascript_dom_paste);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 image_loading: ', AValue.image_loading);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 image_shrink_standalone_to_fit: ', AValue.image_shrink_standalone_to_fit);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 text_area_resize: ', AValue.text_area_resize);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 tab_to_links: ', AValue.tab_to_links);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 local_storage: ', AValue.local_storage);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 databases: ', AValue.databases);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 webgl: ', AValue.webgl);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 background_color: ', AValue.background_color);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 chrome_status_bubble: ', AValue.chrome_status_bubble);
  WriteLn('pas=TTestEvent_TCefBrowserSettings 3 chrome_zoom_bubble: ', AValue.chrome_zoom_bubble);
end;

procedure TTestEvent.CallOnTestTCefBrowserSettings();
var
  Temp: TCefBrowserSettings;
begin
  if assigned(FTestTCefBrowserSettings) then
  begin
    FillChar(Temp, SizeOf(Temp), 0);
    FTestTCefBrowserSettings(Temp);
  end;
end;

constructor TTestCls.Create(i: integer);
var
  idx: integer;
begin
  Fi := IntToStr(i);
  idx := 0;
  for idx := 0 to 32 - 1 do
  begin
    FBrPatt[idx] := idx + 1;
  end;
end;

function TTestCls.Test(): string;
begin
  Result := Fi + ': call TTestCls.Test';
  WriteLn('pas=TTestCls.Test');
end;


function NewComposition(idx: integer): TCefCompositionUnderline;
begin
  Result.range.from := idx;
  Result.thick := idx*10;
  Result.color:=idx;
  Result.background_color:=idx;
  Result.range.to_:=idx;
end;

function TTestCls.TestCompositionUnderlineDynArray(): TCefCompositionUnderlineDynArray;
var
  underlinesCount: Integer;
  TempunderlinesIdx: Integer;
  aComp: TCefCompositionUnderline;
begin
  underlinesCount := 10;
  SetLength(FCompositionUnderlineDynArray, underlinesCount);
  for TempunderlinesIdx := 0 to underlinesCount - 1 do
  begin
    aComp := NewComposition(TempunderlinesIdx);
    FCompositionUnderlineDynArray[TempunderlinesIdx] := aComp;
  end;
  for TempunderlinesIdx := 0 to underlinesCount - 1 do
  begin
    aComp := FCompositionUnderlineDynArray[TempunderlinesIdx];
    WriteLn('pas= aComp.range.from: ', aComp.range.from, ' thick: ', aComp.thick);
  end;
  Result := FCompositionUnderlineDynArray;
end;

constructor TTestEvent.Create();
begin
  FTestAPIEvent := nil;
end;

destructor TTestEvent.Destroy;
begin
  WriteLn('pas=TTestEvent.Destroy');
  FTestAPIEvent := nil;
  inherited;
end;

function TTestEvent.TestEvent(const AParam1: Integer; AParam2: boolean): integer;
begin
  Result := 0;
  WriteLn('pas=TTestEvent.TestEvent');
  if assigned(FTestAPIEvent) then
    Result := FTestAPIEvent(AParam1, AParam2);
end;

end.
