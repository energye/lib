
procedure BufferPanel_ChangeCompositionRange(AObj: TBufferPanel; var selectionrange: TCefRange; const ACharacterbounds: PCefRectArray; ASize: Integer); extdecl;
{$IFDEF MSWINDOWS}
var
  characterbounds: TCefRectDynArray;
  idx: Integer;
{$ENDIF}
begin
{$IFDEF MSWINDOWS}
  {$define handleExceptionFuncName :='ChangeCompositionRange'}
  handleExceptionBegin
  SetLength(characterbounds, ASize);
  for idx := 0 to ASize - 1 do
  begin
    characterbounds[idx] := ACharacterbounds^[idx];
  end;
  AObj.ChangeCompositionRange(selectionrange, characterbounds);
  SetLength(characterbounds, 0);
  handleExceptionEnd
{$ENDIF}
end;

exports
  BufferPanel_ChangeCompositionRange;
