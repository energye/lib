// constructor
function TCEFOSRIMEHandler_Create(aHWND: HWND): TCEFOSRIMEHandler; extdecl;
begin
  {$define handleExceptionID := 6400}
  handleExceptionBegin
  Result := TCEFOSRIMEHandler.Create(aHWND);
  handleExceptionEnd
end;

// function
function TCEFOSRIMEHandler_GetResult(AObj: TCEFOSRIMEHandler; aParam: LPARAM; var aResult: PChar): LongBool; extdecl;
var
  OutaResult: ustring;
begin
  {$define handleExceptionID := 6401}
  handleExceptionBegin
  OutaResult := aResult;
  Result := AObj.GetResult(aParam, OutaResult);
  aResult := ToPChar(OutaResult);
  handleExceptionEnd
end;

// function
function TCEFOSRIMEHandler_GetComposition(AObj: TCEFOSRIMEHandler; aParam: LPARAM; var composition_text: PChar; var underlines: TCefCompositionUnderlineDynArray; var underlinesCount: Integer; var composition_start: integer): LongBool; extdecl;
var
  Outcomposition_text: ustring;
  Outunderlines: TCefCompositionUnderlineDynArray = nil;
  Outcomposition_start: integer;
begin
  {$define handleExceptionID := 6402}
  handleExceptionBegin
  Outcomposition_text := composition_text;
  Outcomposition_start := composition_start;
  Result := AObj.GetComposition(aParam, Outcomposition_text, Outunderlines, Outcomposition_start);
  composition_text := ToPChar(Outcomposition_text);
  underlinesCount := Length(Outunderlines);
  underlines := Outunderlines;
  composition_start := Outcomposition_start;
  handleExceptionEnd
end;

{$IFDEF MSWINDOWS}
// procedure
procedure TCEFOSRIMEHandler_SetInputLanguage(AObj: TCEFOSRIMEHandler); extdecl;
begin
  {$define handleExceptionID := 6403}
  handleExceptionBegin
  AObj.SetInputLanguage();
  handleExceptionEnd
end;
{$ENDIF}

// procedure
procedure TCEFOSRIMEHandler_CreateImeWindow(AObj: TCEFOSRIMEHandler); extdecl;
begin
  {$define handleExceptionID := 6404}
  handleExceptionBegin
  AObj.CreateImeWindow();
  handleExceptionEnd
end;

// procedure
procedure TCEFOSRIMEHandler_DestroyImeWindow(AObj: TCEFOSRIMEHandler); extdecl;
begin
  {$define handleExceptionID := 6405}
  handleExceptionBegin
  AObj.DestroyImeWindow();
  handleExceptionEnd
end;

// procedure
procedure TCEFOSRIMEHandler_CleanupComposition(AObj: TCEFOSRIMEHandler); extdecl;
begin
  {$define handleExceptionID := 6406}
  handleExceptionBegin
  AObj.CleanupComposition();
  handleExceptionEnd
end;

// procedure
procedure TCEFOSRIMEHandler_ResetComposition(AObj: TCEFOSRIMEHandler); extdecl;
begin
  {$define handleExceptionID := 6407}
  handleExceptionBegin
  AObj.ResetComposition();
  handleExceptionEnd
end;

// procedure
procedure TCEFOSRIMEHandler_EnableIME(AObj: TCEFOSRIMEHandler); extdecl;
begin
  {$define handleExceptionID := 6408}
  handleExceptionBegin
  AObj.EnableIME();
  handleExceptionEnd
end;

// procedure
procedure TCEFOSRIMEHandler_DisableIME(AObj: TCEFOSRIMEHandler); extdecl;
begin
  {$define handleExceptionID := 6409}
  handleExceptionBegin
  AObj.DisableIME();
  handleExceptionEnd
end;

// procedure
procedure TCEFOSRIMEHandler_CancelIME(AObj: TCEFOSRIMEHandler); extdecl;
begin
  {$define handleExceptionID := 6410}
  handleExceptionBegin
  AObj.CancelIME();
  handleExceptionEnd
end;

// procedure
procedure TCEFOSRIMEHandler_UpdateCaretPosition(AObj: TCEFOSRIMEHandler; index: cardinal); extdecl;
begin
  {$define handleExceptionID := 6411}
  handleExceptionBegin
  AObj.UpdateCaretPosition(index);
  handleExceptionEnd
end;

// procedure
procedure TCEFOSRIMEHandler_ChangeCompositionRange(AObj: TCEFOSRIMEHandler; var selection_range: TCefRangePtr; const character_bounds: TCefRectDynArray; character_boundsCount: Integer); extdecl;
var
  Inselection_range: TCefRange;
  Tempcharacter_bounds: TCefRectDynArray = nil;
  Tempcharacter_boundsIdx: Integer;
begin
  {$define handleExceptionID := 6412}
  handleExceptionBegin
  Inselection_range := TCefRangeToPas(selection_range);
  SetLength(Tempcharacter_bounds, character_boundsCount);
  for Tempcharacter_boundsIdx := 0 to character_boundsCount - 1 do
  begin
    Tempcharacter_bounds[Tempcharacter_boundsIdx] := character_bounds[Tempcharacter_boundsIdx]
  end;
  AObj.ChangeCompositionRange(Inselection_range, Tempcharacter_bounds);
  SetLength(Tempcharacter_bounds, 0);
  handleExceptionEnd
end;

// procedure
procedure TCEFOSRIMEHandler_MoveImeWindow(AObj: TCEFOSRIMEHandler); extdecl;
begin
  {$define handleExceptionID := 6413}
  handleExceptionBegin
  AObj.MoveImeWindow();
  handleExceptionEnd
end;

// property
function TCEFOSRIMEHandler_IsComposing(AObj: TCEFOSRIMEHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 6414}
  handleExceptionBegin
  Result := AObj.IsComposing;
  handleExceptionEnd
end;

// property
function TCEFOSRIMEHandler_InputLanguageID(AObj: TCEFOSRIMEHandler): LANGID; extdecl;
begin
  {$define handleExceptionID := 6415}
  handleExceptionBegin
  Result := AObj.InputLanguageID;
  handleExceptionEnd
end;

// property
function TCEFOSRIMEHandler_PrimaryLangID(AObj: TCEFOSRIMEHandler): word; extdecl;
begin
  {$define handleExceptionID := 6416}
  handleExceptionBegin
  Result := AObj.PrimaryLangID;
  handleExceptionEnd
end;

// property
function TCEFOSRIMEHandler_SubLangID(AObj: TCEFOSRIMEHandler): word; extdecl;
begin
  {$define handleExceptionID := 6417}
  handleExceptionBegin
  Result := AObj.SubLangID;
  handleExceptionEnd
end;

// property
function TCEFOSRIMEHandler_Initialized(AObj: TCEFOSRIMEHandler): LongBool; extdecl;
begin
  {$define handleExceptionID := 6418}
  handleExceptionBegin
  Result := AObj.Initialized;
  handleExceptionEnd
end;

exports
  TCEFOSRIMEHandler_Create,
  TCEFOSRIMEHandler_GetResult,
  TCEFOSRIMEHandler_GetComposition,
{$IFDEF MSWINDOWS}
  TCEFOSRIMEHandler_SetInputLanguage,
{$ENDIF}
  TCEFOSRIMEHandler_CreateImeWindow,
  TCEFOSRIMEHandler_DestroyImeWindow,
  TCEFOSRIMEHandler_CleanupComposition,
  TCEFOSRIMEHandler_ResetComposition,
  TCEFOSRIMEHandler_EnableIME,
  TCEFOSRIMEHandler_DisableIME,
  TCEFOSRIMEHandler_CancelIME,
  TCEFOSRIMEHandler_UpdateCaretPosition,
  TCEFOSRIMEHandler_ChangeCompositionRange,
  TCEFOSRIMEHandler_MoveImeWindow,
  TCEFOSRIMEHandler_IsComposing,
  TCEFOSRIMEHandler_InputLanguageID,
  TCEFOSRIMEHandler_PrimaryLangID,
  TCEFOSRIMEHandler_SubLangID,
  TCEFOSRIMEHandler_Initialized;