unit LazSynGtk3IMM;

{$mode objfpc}{$H+}


interface

uses
  {$IFDEF LCLGTK3}
  Gtk3Globals,
  {$ENDIF}
  Classes, SysUtils, Messages, LMessages, LazSynIMMBase, SynEditKeyCmds;

// fix4.x SynEdit 输入中文

type
  LazSynImeGtk3 = class(LazSynIme)
  private
    FIMESelText: string;
  public
    procedure WMImeComposition(var Message: TMessage); override;
  end;

implementation

uses
  SynEdit;

procedure LazSynImeGtk3.WMImeComposition(var Message: TMessage);
{$IFDEF LCLGTK3}
var
  IMStr: string;
  i: Integer;
{$ENDIF}
begin
  {$IFDEF LCLGTK3}
  if (not FriendEdit.ReadOnly) then
  begin
    // set candidate position
    if (Message.WParam and (GTK_IM_FLAG_START or GTK_IM_FLAG_PREEDIT)) <> 0 then
      IM_Context_Set_Cursor_Pos(FriendEdit.CaretXPix, FriendEdit.CaretYPix + FriendEdit.LineHeight);

    // valid string at composition & commit
    if (Message.WParam and (GTK_IM_FLAG_COMMIT or GTK_IM_FLAG_PREEDIT)) <> 0 then
    begin
      // save selected text
      if Message.WParam and GTK_IM_FLAG_REPLACE = 0 then
        FIMESelText := FriendEdit.SelText;

      // insert preedit or commit string
      IMStr := PChar(Message.LParam);

      // for IBUS IM
      if (Length(IMStr) = 0) and (Message.WParam and GTK_IM_FLAG_REPLACE <> 0) then
        TSynEdit(FriendEdit).CommandProcessor(ecDeleteChar, #0, nil)
      else
        for i := 1 to Length(IMStr) do
          TSynEdit(FriendEdit).CommandProcessor(ecChar, IMStr[i], nil);

      // select last preedit
      if (Message.WParam and GTK_IM_FLAG_COMMIT = 0) then
      begin
        if Length(IMStr) > 0 then
          for i := 1 to Length(UTF8Decode(IMStr)) do
            TSynEdit(FriendEdit).CommandProcessor(ecSelLeft, #0, nil);
      end
      else
        FIMESelText := '';
    end;

    // end composition and complete composition
    if (Message.WParam and GTK_IM_FLAG_END <> 0) and (FIMESelText <> '') then
    begin
      TSynEdit(FriendEdit).ClearSelection;
      // restore selection before preedit.
      for i := 1 to Length(FIMESelText) do
        TSynEdit(FriendEdit).CommandProcessor(ecChar, FIMESelText[i], nil);
      FIMESelText := '';
    end;
  end;
  {$ENDIF}
end;

end.
