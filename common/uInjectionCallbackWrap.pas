unit uInjectionCallbackWrap;

// 注入回调包裹单元，通用单元，在这写所有回调事件参数有方法类型的。
// 在此单元实现，并通过生成时配置类名。

{$mode objfpc}{$H+}
{$Z4+}

interface

uses Types,
  SynBeautifier;

type

  // OnTSynBeautifierGetIndentEvent > TSynBeautifierSetIndentProc
  TBeautifierSetIndentCallback = class
  protected
    FCallback: TSynBeautifierSetIndentProc;
  public
    // LinePos: 1-based, the line that should be changed
    // Indent: New indent in spaces (Logical = Physical
    // RelativeToLinePos: Indent specifies +/- offset from indent on RTLine (0: for absolute indent)
    // IndentChars:
    // String used to build indent; maybe empty, single char, or string (usually 1 tab or 1 space)
    // The String will be repeated and cut as needed, then filled with spaces at the end
    // NOTE: If this is specified the TSynBeautifierIndentType is ignored
    // IndentCharsFromLinePos:
    // Use tab/space mix from this Line for indent (if specified > 0)
    // "IndentChars" will only be used, if the found tab/space mix is to short
    // NOTE: If this is specified the TSynBeautifierIndentType is ignored
    procedure Callback(LinePos: Integer; Indent: Integer; RelativeToLinePos: Integer; IndentChars: string; IndentCharsFromLinePos: Integer);
  public
    constructor Create(ACallback: TSynBeautifierSetIndentProc);
  end;



implementation

constructor TBeautifierSetIndentCallback.Create(ACallback: TSynBeautifierSetIndentProc);
begin
  FCallback := ACallback;
end;

procedure TBeautifierSetIndentCallback.Callback(LinePos: Integer; Indent: Integer; RelativeToLinePos: Integer; IndentChars: string; IndentCharsFromLinePos: Integer);
begin
  if Assigned(FCallback) then
    FCallback(LinePos, Indent, RelativeToLinePos, IndentChars, IndentCharsFromLinePos);
end;

end.
