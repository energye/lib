unit uWkContextMenu;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  uLibWebKit;

type

  TWkContextMenu = class
  protected
    FContextMenu: WebKitContextMenu;
  public
    constructor Create(aContextMenu: WebKitContextMenu);
    destructor Destroy; override;
    function Data(): WebKitContextMenu;
    procedure Prepend(item: WebKitContextMenuItem);
    procedure Append(item: WebKitContextMenuItem);
    procedure Insert(item: WebKitContextMenuItem; position: integer);
    function GetItemsLength(): integer;
    function GetItemAtPosition(position: integer): WebKitContextMenuItem;
    procedure Remove(item: WebKitContextMenuItem);
    procedure RemoveAll();
  public
    class function New(): TWkContextMenu;
  end;

implementation

constructor TWkContextMenu.Create(aContextMenu: WebKitContextMenu);
begin
  FContextMenu := aContextMenu;
end;

destructor TWkContextMenu.Destroy;
begin
  inherited Destroy;
  FContextMenu := nil;
end;

function TWkContextMenu.Data(): WebKitContextMenu;
begin
  Result := FContextMenu;
end;

procedure TWkContextMenu.Prepend(item: WebKitContextMenuItem);
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_prepend(FContextMenu, item);
end;

procedure TWkContextMenu.Append(item: WebKitContextMenuItem);
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_append(FContextMenu, item);
end;

procedure TWkContextMenu.Insert(item: WebKitContextMenuItem; position: integer);
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_insert(FContextMenu, item, position);
end;

function TWkContextMenu.GetItemsLength(): integer;
begin
  Result := 0;
  if Assigned(FContextMenu) then
    Result := integer(webkit_context_menu_get_n_items(FContextMenu));
end;

function TWkContextMenu.GetItemAtPosition(position: integer): WebKitContextMenuItem;
begin
  Result := nil;
  if Assigned(FContextMenu) and (position >= 0) and (position < GetItemsLength())  then
    Result := webkit_context_menu_get_item_at_position(FContextMenu, position);
end;

procedure TWkContextMenu.Remove(item: WebKitContextMenuItem);
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_remove(FContextMenu, item);
end;

procedure TWkContextMenu.RemoveAll();
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_remove_all(FContextMenu);
end;

class function TWkContextMenu.New(): TWkContextMenu;
begin
  Result := Create(webkit_context_menu_new());
end;

end.
