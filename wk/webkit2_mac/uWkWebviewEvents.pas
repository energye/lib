unit uWkWebviewEvents;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  uWebkit;

type

    TWkProcessMessageEvent = procedure(Sender: TObject; name, data: string) of object;

implementation

end.
