unit uWkContextMenuItem;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2, uLibWebKit;

type

  TWkContextMenuItem = class
  protected
    FContextMenuItem: WebKitContextMenuItem;
  public
    constructor Create(aContextMenu: WebKitContextMenuItem);
    destructor Destroy; override;
    function Data(): WebKitContextMenuItem;
    function GetSubmenu(): WebKitContextMenu;
    procedure SetSubmenu(submenu: WebKitContextMenu);
    function GetAction(): PWkAction;
    function GetStockAction(): WebKitContextMenuAction;
    function IsSeparator(): boolean;
  public
    class function NewFromAction(action: PWkAction; aLabel: string; commandId: Integer): TWkContextMenuItem;
    class function NewFromStockAction(action: WebKitContextMenuAction): TWkContextMenuItem;
    class function NewFromStockActionWithLabel(action: WebKitContextMenuAction; aLabel: string): TWkContextMenuItem;
    class function NewWithSubmenu(aLabel: string; submenu: WebKitContextMenu): TWkContextMenuItem;
    class function NewSeparator(): TWkContextMenuItem;
  end;

implementation

constructor TWkContextMenuItem.Create(aContextMenu: WebKitContextMenuItem);
begin
  FContextMenuItem := aContextMenu;
end;

destructor TWkContextMenuItem.Destroy;
begin
  inherited Destroy;
  FContextMenuItem := nil;
end;

function TWkContextMenuItem.Data(): WebKitContextMenuItem;
begin
  Result := FContextMenuItem;
end;

class function TWkContextMenuItem.NewFromAction(action: PWkAction; aLabel: string; commandId: Integer): TWkContextMenuItem;
var
  aCommandId: PGVariant;
begin
  aCommandId := TGVariant.new_int32(commandId);
  Result := Create(webkit_context_menu_item_new_from_gaction(action, Pgchar(aLabel), aCommandId));
  aCommandId := nil;
end;

class function TWkContextMenuItem.NewFromStockAction(action: WebKitContextMenuAction): TWkContextMenuItem;
begin
  Result := Create(webkit_context_menu_item_new_from_stock_action(action));
end;

class function TWkContextMenuItem.NewFromStockActionWithLabel(action: WebKitContextMenuAction; aLabel: string): TWkContextMenuItem;
begin
  Result := Create(webkit_context_menu_item_new_from_stock_action_with_label(action, Pgchar(aLabel)));
end;

class function TWkContextMenuItem.NewWithSubmenu(aLabel: string; submenu: WebKitContextMenu): TWkContextMenuItem;
begin
  Result := Create(webkit_context_menu_item_new_with_submenu(Pgchar(aLabel), submenu));
end;

class function TWkContextMenuItem.NewSeparator(): TWkContextMenuItem;
begin
  Result := Create(webkit_context_menu_item_new_separator());
end;

function TWkContextMenuItem.GetSubmenu(): WebKitContextMenu;
begin
  Result := nil;
  if Assigned(FContextMenuItem) then
    Result := webkit_context_menu_item_get_submenu(FContextMenuItem);
end;

procedure TWkContextMenuItem.SetSubmenu(submenu: WebKitContextMenu);
begin
  if Assigned(FContextMenuItem) then
    webkit_context_menu_item_set_submenu(FContextMenuItem, submenu);
end;

function TWkContextMenuItem.GetAction(): PWkAction;
begin
  Result := nil;
  if Assigned(FContextMenuItem) then
    Result := webkit_context_menu_item_get_gaction(FContextMenuItem);
end;

function TWkContextMenuItem.GetStockAction(): WebKitContextMenuAction;
begin
  Result := WEBKIT_CONTEXT_MENU_ACTION_NO_ACTION;
  if Assigned(FContextMenuItem) then
    Result := webkit_context_menu_item_get_stock_action(FContextMenuItem);
end;

function TWkContextMenuItem.IsSeparator(): boolean;
begin
  Result := False;
  if Assigned(FContextMenuItem) then
    Result := boolean(webkit_context_menu_item_is_separator(FContextMenuItem));
end;

end.
