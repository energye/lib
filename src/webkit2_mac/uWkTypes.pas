unit uWkTypes;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface


uses
  CocoaUtils, CocoaAll;

type

  PWKButtonEvent = ^TWKButtonEvent;

  TWKButtonEvent = record
    EventType: Integer;
    WindowX, WindowY: Double;
    LocalX, LocalY: Double;
    Timestamp: Double;
    ClickCount: Integer;
    DeltaX: Double;
    DeltaY: Double;
    Event: NSEvent;
  end;

implementation

end.
