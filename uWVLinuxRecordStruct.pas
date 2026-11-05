unit uWVLinuxRecordStruct;

{$mode objfpc}{$H+}
{$Z4+}

interface

uses LazGLib2, LazGdk3, uWkTypes;

type


  TWkButtonEventPtr = record
    EventType: TGdkEventType; // TGdkEventType
    State: TGdkModifierType; // TGdkModifierType
    Button: Integer; // Integer
    X: Integer; // Integer
    Y: Integer; // Integer
    XRoot: Integer; // Integer
    YRoot: Integer; // Integer
    Time: Integer; // Integer
  end;

// TWkButtonEvent
function TWkButtonEventToGo(const AWkButtonEvent: TWkButtonEvent): TWkButtonEventPtr;
function TWkButtonEventToPas(const AWkButtonEvent: TWkButtonEventPtr): TWkButtonEvent;

implementation

// TWkButtonEvent
function TWkButtonEventToGo(const AWkButtonEvent: TWkButtonEvent): TWkButtonEventPtr;
begin
  Result.EventType := AWkButtonEvent.EventType; // TGdkEventType
  Result.State := AWkButtonEvent.State; // TGdkModifierType
  Result.Button := AWkButtonEvent.Button; // Integer
  Result.X := AWkButtonEvent.X; // Integer
  Result.Y := AWkButtonEvent.Y; // Integer
  Result.XRoot := AWkButtonEvent.XRoot; // Integer
  Result.YRoot := AWkButtonEvent.YRoot; // Integer
  Result.Time := AWkButtonEvent.Time; // Integer
end;

function TWkButtonEventToPas(const AWkButtonEvent: TWkButtonEventPtr): TWkButtonEvent;
begin
  Result.EventType := AWkButtonEvent.EventType; // TGdkEventType
  Result.State := AWkButtonEvent.State; // TGdkModifierType
  Result.Button := AWkButtonEvent.Button; // Integer
  Result.X := AWkButtonEvent.X; // Integer
  Result.Y := AWkButtonEvent.Y; // Integer
  Result.XRoot := AWkButtonEvent.XRoot; // Integer
  Result.YRoot := AWkButtonEvent.YRoot; // Integer
  Result.Time := AWkButtonEvent.Time; // Integer
end;


end.
