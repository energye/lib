unit uWkHeaders;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes,
  LazGLib2,
  uWkInterfaces, uLibWebKit;

type

  TWkHeaders = class(TInterfacedObject, IWkHeaders)
  protected
    FMessageHeaders: PSoupMessageHeaders;
  public
    constructor Create(aMessageHeaders: PSoupMessageHeaders);
    constructor Create(type_: TSoupMessageHeadersType);
    destructor Destroy; override;
    function List(): TStrings;
    procedure Append(aName: string; aValue: string);
    procedure Clear();
    procedure Remove(aName: string);
    procedure Replace(aName: string; aValue: string);
  end;


implementation

constructor TWkHeaders.Create(aMessageHeaders: PSoupMessageHeaders);
begin
  FMessageHeaders := aMessageHeaders;
end;

constructor TWkHeaders.Create(type_: TSoupMessageHeadersType);
begin
  FMessageHeaders := soup_message_headers_new(type_);
end;

destructor TWkHeaders.Destroy;
begin
  inherited Destroy;
  FMessageHeaders := nil;
end;

procedure SoupMessageHeadersForeach(Name: Pgchar; Value: Pgchar; user_data: gpointer); cdecl;
begin
  TStringList(user_data).AddPair(string(Name), string(Value));
end;

function TWkHeaders.List(): TStrings;
var
  rData: TStringList;
begin
  rData := nil;
  if Assigned(FMessageHeaders) then
  begin
    rData := TStringList.Create;
    soup_message_headers_foreach(FMessageHeaders, @SoupMessageHeadersForeach, rData);
  end;
  Result := rData;
end;

procedure TWkHeaders.Append(aName: string; aValue: string);
begin
  if Assigned(FMessageHeaders) then
    soup_message_headers_append(FMessageHeaders, Pgchar(aName), Pgchar(aValue));
end;

procedure TWkHeaders.Clear();
begin
  if Assigned(FMessageHeaders) then
    soup_message_headers_clear(FMessageHeaders);
end;

procedure TWkHeaders.Remove(aName: string);
begin
  if Assigned(FMessageHeaders) then
    soup_message_headers_remove(FMessageHeaders, Pgchar(aName));
end;

procedure TWkHeaders.Replace(aName: string; aValue: string);
begin
  if Assigned(FMessageHeaders) then
    soup_message_headers_replace(FMessageHeaders, Pgchar(aName), Pgchar(aValue));
end;

end.
