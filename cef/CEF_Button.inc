
//function
procedure CefButton_UnWrap(data: Pointer; var Result: ICefButton); extdecl;
begin
  Result := TCefButtonRef.UnWrap(data);
end;

//function
procedure CefButton_AsLabelButton(AObj: ICefButton; var Result: ICefLabelButton); extdecl;
begin
  {$define handleExceptionFuncName :='AsLabelButton'}
  handleExceptionBegin
  Result := AObj.AsLabelButton();
  handleExceptionEnd
end;

//function
function CefButton_GetState(AObj: ICefButton): TCefButtonState; extdecl;
begin
  {$define handleExceptionFuncName :='GetState'}
  handleExceptionBegin
  Result := AObj.GetState();
  handleExceptionEnd
end;

//procedure
procedure CefButton_SetState(AObj: ICefButton; state: TCefButtonState); extdecl;
begin
  {$define handleExceptionFuncName :='SetState'}
  handleExceptionBegin
  AObj.SetState(state);
  handleExceptionEnd
end;

//procedure
procedure CefButton_SetInkDropEnabled(AObj: ICefButton; enabled: LongBool); extdecl;
begin
  {$define handleExceptionFuncName :='SetInkDropEnabled'}
  handleExceptionBegin
  AObj.SetInkDropEnabled(enabled);
  handleExceptionEnd
end;

//procedure
procedure CefButton_SetTooltipText(AObj: ICefButton; const tooltiptext: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetTooltipText'}
  handleExceptionBegin
  AObj.SetTooltipText(tooltiptext);
  handleExceptionEnd
end;

//procedure
procedure CefButton_SetAccessibleName(AObj: ICefButton; const name: PChar); extdecl;
begin
  {$define handleExceptionFuncName :='SetAccessibleName'}
  handleExceptionBegin
  AObj.SetAccessibleName(name);
  handleExceptionEnd
end;


exports
  CefButton_UnWrap,
  CefButton_AsLabelButton,
  CefButton_GetState,
  CefButton_SetState,
  CefButton_SetInkDropEnabled,
  CefButton_SetTooltipText,
  CefButton_SetAccessibleName;