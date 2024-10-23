unit uWkHeaders;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  Classes,
  LazGLib2, uLibWebKit;

type

  TWkHeaders = class
  protected
    FMessageHeaders: PSoupMessageHeaders;
  public
    constructor Create(aMessageHeaders: PSoupMessageHeaders);
    destructor Destroy; override;
    function Data(): PSoupMessageHeaders;
    function List(): TStrings;
    procedure Append(aName: string; aValue: string);
    procedure Clear();
    procedure Remove(aName: string);
    procedure Replace(aName: string; aValue: string);
  public
    class function NewMessageHeadersType(type_: TSoupMessageHeadersType): TWkHeaders;
  end;


implementation

constructor TWkHeaders.Create(aMessageHeaders: PSoupMessageHeaders);
begin
  FMessageHeaders := aMessageHeaders;
end;

destructor TWkHeaders.Destroy;
begin
  inherited Destroy;
  FMessageHeaders := nil;
end;

function TWkHeaders.Data(): PSoupMessageHeaders;
begin
  Result := FMessageHeaders;
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

class function TWkHeaders.NewMessageHeadersType(type_: TSoupMessageHeadersType): TWkHeaders;
begin
  Result := Create(soup_message_headers_new(type_));
end;

end.
