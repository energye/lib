// constructor
function TPreviewFileControl_Create(TheOwner: TComponent): TPreviewFileControl; extdecl;
begin
  {$define handleExceptionID := 25800}
  handleExceptionBegin
  Result := TPreviewFileControl.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TPreviewFileControl_PreviewFileDialog(ASet: LongBool; AObj: TPreviewFileControl; AValue: TPreviewFileDialog): TPreviewFileDialog; extdecl;
begin
  {$define handleExceptionID := 25801}
  handleExceptionBegin
  if ASet then
  begin
    AObj.PreviewFileDialog := AValue
  end else
    Result := AObj.PreviewFileDialog;
  handleExceptionEnd
end;

function TPreviewFileControl_TClass(): TClass; extdecl;
begin
  Result := TPreviewFileControl;
end;

exports
  TPreviewFileControl_Create,
  TPreviewFileControl_PreviewFileDialog,
  TPreviewFileControl_TClass;