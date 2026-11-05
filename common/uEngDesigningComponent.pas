//----------------------------------------
//
// Copyright © yanghy. All Rights Reserved.
//
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uEngDesigningComponent;

{$I ExtDecl.inc}
{$mode objfpc}{$H+}

interface

uses InterfaceBase, Classes, SysUtils, Graphics, ComCtrls, Forms, Controls, TypInfo,
     uLCLEventCallback;

type
  TEngSetDesigningComponent = class(TComponent)
  public
    FOnDesignerFormEventData: Pointer;
  public
    class procedure SetDesigningOfComponent(AComponent: TComponent; Value: Boolean);
    class procedure SetDesignInstanceOfComponent(AComponent: TComponent; Value: Boolean);
    class procedure SetInlineOfComponent(AComponent: TComponent; Value: Boolean);
  public
    function GetDesignerFormEvent(APersistent: TPersistent): TCustomForm;
  end;

// 组件设计模式相关
procedure SetComponentDesignMode(AComponent: TComponent; Value: Boolean); extdecl;
procedure SetComponentDesignInstanceMode(AComponent: TComponent; Value: Boolean); extdecl;
procedure SetComponentInlineMode(AComponent: TComponent; Value: Boolean); extdecl;
procedure SetComponentAncestorMode(AComponent: TComponent; Value: Boolean); extdecl;
procedure SetWidgetSetDesigning(AComponent: TComponent); extdecl;
procedure SetOnGetDesignerFormEvent(AEventData: Pointer); extdecl;

// 组件信息
procedure GetComponentProperties(AComponent: TObject; APropList: TStringList); extdecl;

var
  GEngSetDesigningComponent: TEngSetDesigningComponent;

implementation

procedure GetComponentProperties(AComponent: TObject; APropList: TStringList); extdecl;
var
  PropList: PPropList;
  PropCount, I, J, EnumCount: Integer;
  PropInfo: PPropInfo;
  PropTypeData: PTypeData;
  PropValue, PropType, PropTypeKind: string;
  EnumTypeName: string;
  Options: TStringList;
begin
  if (AComponent = nil) or (APropList = nil) then Exit;

  Options := TStringList.Create;
  // 获取published属性列表
  PropCount := GetPropList(AComponent.ClassType, PropList);
  try
    // 遍历属性
    for I := 0 to PropCount - 1 do
    begin
      Options.Clear;

      PropInfo := PropList^[I]; // 属性信息
      if PropInfo = nil then Continue;

      // 处理属性
      // GetPropValue：简单类型（字符串、整数、布尔等）转字符串
      PropValue := GetPropValue(AComponent, PropInfo^.Name, True);

      // 属性类型数据: 复杂类型, 现在只简单的使用
      PropTypeData := GetTypeData(PropInfo^.PropType);

      PropType := PropInfo^.PropType^.Name;
      PropTypeKind := GetEnumName(TypeInfo(TTypeKind), Ord(PropInfo^.PropType^.Kind));

      case PropInfo^.PropType^.Kind of
        tkEnumeration:
          begin
            // 枚举所有值
            EnumCount := Integer(GetEnumNameCount(PropInfo^.PropType));
            for J := 0 to EnumCount - 1 do
            begin
              EnumTypeName := GetEnumName(PropInfo^.PropType, J);
              Options.Add(EnumTypeName);
            end;
          end;
         tkSet:
           begin
           // 集合对应的枚举值
            EnumCount := Integer(GetEnumNameCount(PropTypeData^.CompType));
            for J := 0 to EnumCount - 1 do
            begin
              EnumTypeName := GetEnumName(PropTypeData^.CompType, J);
              Options.Add(EnumTypeName);
            end;
           end;
       end;

      APropList.Add(Format(
        '{"name":"%s", "value":"%s", "kind":"%s", "type":"%s", "options":"%s"}',
        [
          StringReplace(PropInfo^.Name, '"', '\\"', [rfReplaceAll]),
          StringReplace(PropValue, '"', '\\"', [rfReplaceAll]),
          StringReplace(PropTypeKind, '"', '\\"', [rfReplaceAll]),
          StringReplace(PropType, '"', '\\"', [rfReplaceAll]),
          StringReplace(Options.CommaText, '"', '\\"', [rfReplaceAll])
        ]
      ));
    end;
  finally
    FreeMem(PropList);
    Options.Free;
  end;
end;


procedure SetComponentDesignMode(AComponent: TComponent; Value: Boolean); extdecl;
begin
  TEngSetDesigningComponent.SetDesigningOfComponent(AComponent, Value);
end;

procedure SetComponentDesignInstanceMode(AComponent: TComponent; Value: Boolean); extdecl;
begin
  TEngSetDesigningComponent.SetDesignInstanceOfComponent(AComponent, Value);
end;

procedure SetComponentInlineMode(AComponent: TComponent; Value: Boolean); extdecl;
begin
  TEngSetDesigningComponent.SetInlineOfComponent(AComponent, Value);
end;

procedure SetComponentAncestorMode(AComponent: TComponent; Value: Boolean); extdecl;
begin
  TEngSetDesigningComponent(AComponent).SetAncestor(Value);
end;

procedure SetWidgetSetDesigning(AComponent: TComponent); extdecl;
begin
  WidgetSet.SetDesigning(AComponent);
end;

procedure SetOnGetDesignerFormEvent(AEventData: Pointer); extdecl;
begin
  if Assigned(GEngSetDesigningComponent) and not(AEventData = nil) then
  begin
    GEngSetDesigningComponent.FOnDesignerFormEventData := AEventData;
    OnGetDesignerForm := @GEngSetDesigningComponent.GetDesignerFormEvent;
  end
  else
  begin
    if Assigned(GEngSetDesigningComponent) then
      GEngSetDesigningComponent.FOnDesignerFormEventData := nil;
    OnGetDesignerForm := nil;
  end;
end;

class procedure TEngSetDesigningComponent.SetDesigningOfComponent(AComponent: TComponent; Value: Boolean);
begin
  TEngSetDesigningComponent(AComponent).SetDesigning(Value);
end;

class procedure TEngSetDesigningComponent.SetDesignInstanceOfComponent(AComponent: TComponent; Value: Boolean);
begin
  TEngSetDesigningComponent(AComponent).SetDesignInstance(Value);
end;

class procedure TEngSetDesigningComponent.SetInlineOfComponent(AComponent: TComponent; Value: Boolean);
begin
  TEngSetDesigningComponent(AComponent).SetInline(Value);
end;

function TEngSetDesigningComponent.GetDesignerFormEvent(APersistent: TPersistent): TCustomForm;
begin
  Result := nil;
  if Assigned(FOnDesignerFormEventData) then
  begin
    LCLSendEventByPointer(FOnDesignerFormEventData, [APersistent, @Result])
  end;
end;

initialization
  GEngSetDesigningComponent := TEngSetDesigningComponent.Create(nil);

finalization
  GEngSetDesigningComponent.Free;
  GEngSetDesigningComponent := nil;

end.

