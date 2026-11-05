unit uWVDarwinRecordStruct;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses CocoaUtils, CocoaAll, uWkTypes;

type


  TWKButtonEventPtr = record
    EventType: Integer; // Integer
    WindowX: Double; // Double
    WindowY: Double; // Double
    LocalX: Double; // Double
    LocalY: Double; // Double
    Timestamp: Double; // Double
    ClickCount: Integer; // Integer
    DeltaX: Double; // Double
    DeltaY: Double; // Double
    Event: NSEvent; // NSEvent
  end;

// TWKButtonEvent
function TWKButtonEventToGo(const AWKButtonEvent: TWKButtonEvent): TWKButtonEventPtr;
function TWKButtonEventToPas(const AWKButtonEvent: TWKButtonEventPtr): TWKButtonEvent;

implementation

// TWKButtonEvent
function TWKButtonEventToGo(const AWKButtonEvent: TWKButtonEvent): TWKButtonEventPtr;
begin
  Result.EventType := AWKButtonEvent.EventType; // Integer
  Result.WindowX := AWKButtonEvent.WindowX; // Double
  Result.WindowY := AWKButtonEvent.WindowY; // Double
  Result.LocalX := AWKButtonEvent.LocalX; // Double
  Result.LocalY := AWKButtonEvent.LocalY; // Double
  Result.Timestamp := AWKButtonEvent.Timestamp; // Double
  Result.ClickCount := AWKButtonEvent.ClickCount; // Integer
  Result.DeltaX := AWKButtonEvent.DeltaX; // Double
  Result.DeltaY := AWKButtonEvent.DeltaY; // Double
  Result.Event := AWKButtonEvent.Event; // NSEvent
end;

function TWKButtonEventToPas(const AWKButtonEvent: TWKButtonEventPtr): TWKButtonEvent;
begin
  Result.EventType := AWKButtonEvent.EventType; // Integer
  Result.WindowX := AWKButtonEvent.WindowX; // Double
  Result.WindowY := AWKButtonEvent.WindowY; // Double
  Result.LocalX := AWKButtonEvent.LocalX; // Double
  Result.LocalY := AWKButtonEvent.LocalY; // Double
  Result.Timestamp := AWKButtonEvent.Timestamp; // Double
  Result.ClickCount := AWKButtonEvent.ClickCount; // Integer
  Result.DeltaX := AWKButtonEvent.DeltaX; // Double
  Result.DeltaY := AWKButtonEvent.DeltaY; // Double
  Result.Event := AWKButtonEvent.Event; // NSEvent
end;


end.
