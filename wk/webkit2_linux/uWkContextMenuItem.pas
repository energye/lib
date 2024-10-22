unit uWkContextMenuItem;

{$mode ObjFPC}{$H+}
{$MINENUMSIZE 4}

interface

uses
  LazGLib2, LazGio2,
  uWkInterfaces, uLibWebKit;

type

  TWkContextMenuItem = class(TInterfacedObject, IWkContextMenuItem)
  protected
    FContextMenuItem: WebKitContextMenuItem;
  public
    constructor Create(aContextMenu: WebKitContextMenuItem);
    destructor Destroy; override;
    function Data(): WebKitContextMenuItem;
    function GetSubmenu(): WebKitContextMenu;
    procedure SetSubmenu(submenu: IWkContextMenu);
    function GetAction(): WkAction;
    function GetStockAction(): WebKitContextMenuAction;
    function IsSeparator(): boolean;
  public
    class function NewFromAction(action: WkAction; aLabel: string; commandId: Integer): IWkContextMenuItem;
    class function NewFromStockAction(action: WebKitContextMenuAction): IWkContextMenuItem;
    class function NewFromStockActionWithLabel(action: WebKitContextMenuAction; aLabel: string): IWkContextMenuItem;
    class function NewWithSubmenu(aLabel: string; submenu: WebKitContextMenu): IWkContextMenuItem;
    class function NewSeparator(): IWkContextMenuItem;
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

class function TWkContextMenuItem.NewFromAction(action: WkAction; aLabel: string; commandId: Integer): IWkContextMenuItem;
var
  aCommandId: PGVariant;
begin
  aCommandId := TGVariant.new_int32(commandId);
  Result := Create(webkit_context_menu_item_new_from_gaction(action, Pgchar(aLabel), aCommandId)) as IWkContextMenuItem;
  aCommandId := nil;
end;

class function TWkContextMenuItem.NewFromStockAction(action: WebKitContextMenuAction): IWkContextMenuItem;
begin
  Result := Create(webkit_context_menu_item_new_from_stock_action(action)) as IWkContextMenuItem;
end;

class function TWkContextMenuItem.NewFromStockActionWithLabel(action: WebKitContextMenuAction; aLabel: string): IWkContextMenuItem;
begin
  Result := Create(webkit_context_menu_item_new_from_stock_action_with_label(action, Pgchar(aLabel))) as IWkContextMenuItem;
end;

class function TWkContextMenuItem.NewWithSubmenu(aLabel: string; submenu: WebKitContextMenu): IWkContextMenuItem;
begin
  Result := Create(webkit_context_menu_item_new_with_submenu(Pgchar(aLabel), submenu)) as IWkContextMenuItem;
end;

class function TWkContextMenuItem.NewSeparator(): IWkContextMenuItem;
begin
  Result := Create(webkit_context_menu_item_new_separator()) as IWkContextMenuItem;
end;

function TWkContextMenuItem.GetSubmenu(): WebKitContextMenu;
begin
  Result := nil;
  if Assigned(FContextMenuItem) then
    Result := webkit_context_menu_item_get_submenu(FContextMenuItem);
end;

procedure TWkContextMenuItem.SetSubmenu(submenu: IWkContextMenu);
begin
  if Assigned(FContextMenuItem) then
    webkit_context_menu_item_set_submenu(FContextMenuItem, submenu.Data());
end;

function TWkContextMenuItem.GetAction(): WkAction;
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
