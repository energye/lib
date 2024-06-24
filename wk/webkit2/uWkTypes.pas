unit uWkTypes;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2, LazGdk3;

type

  TWkProcessId = (WkPID_BROWSER, WkPID_RENDER);

  PWkButtonEvent = ^TWkButtonEvent;

  TWkButtonEvent = record
    EventType: TGdkEventType;
    State: TGdkModifierType;
    Button: Integer;
    X, Y: Integer;
    XRoot, YRoot: Integer;
    Time: Integer;
  end;

implementation

end.
