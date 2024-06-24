unit uWkContextMenu;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  uWkInterfaces, uLibWebKit, uWkContextMenuItem;

type

  TWkContextMenu = class(TInterfacedObject, IWkContextMenu)
  protected
    FContextMenu: WebKitContextMenu;
  public
    constructor Create();
    constructor Create(aContextMenu: WebKitContextMenu);
    destructor Destroy; override;
    function Data(): WebKitContextMenu;
    procedure Prepend(item: IWkContextMenuItem);
    procedure Append(item: IWkContextMenuItem);
    procedure Insert(item: IWkContextMenuItem; position: integer);
    function GetItemsLength(): integer;
    function GetItemAtPosition(position: integer): IWkContextMenuItem;
    procedure Remove(item: IWkContextMenuItem);
    procedure RemoveAll();
  end;

implementation

constructor TWkContextMenu.Create();
begin
  FContextMenu := webkit_context_menu_new();
end;

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

procedure TWkContextMenu.Prepend(item: IWkContextMenuItem);
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_prepend(FContextMenu, item.Data());
end;

procedure TWkContextMenu.Append(item: IWkContextMenuItem);
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_append(FContextMenu, item.Data());
end;

procedure TWkContextMenu.Insert(item: IWkContextMenuItem; position: integer);
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_insert(FContextMenu, item.Data(), position);
end;

function TWkContextMenu.GetItemsLength(): integer;
begin
  Result := 0;
  if Assigned(FContextMenu) then
    Result := integer(webkit_context_menu_get_n_items(FContextMenu));
end;

function TWkContextMenu.GetItemAtPosition(position: integer): IWkContextMenuItem;
begin
  Result := nil;
  if Assigned(FContextMenu) and (position >= 0) and (position < GetItemsLength())  then
    Result := TWkContextMenuItem.Create(webkit_context_menu_get_item_at_position(FContextMenu, position)) as IWkContextMenuItem;
end;

procedure TWkContextMenu.Remove(item: IWkContextMenuItem);
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_remove(FContextMenu, item.Data());
end;

procedure TWkContextMenu.RemoveAll();
begin
  if Assigned(FContextMenu) then
    webkit_context_menu_remove_all(FContextMenu);
end;

end.
