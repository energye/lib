// constructor
function TPreviewFileDialog_Create(TheOwner: TComponent): TPreviewFileDialog; extdecl;
begin
  {$define handleExceptionID := 7400}
  handleExceptionBegin
  Result := TPreviewFileDialog.Create(TheOwner);
  handleExceptionEnd
end;

// property
function TPreviewFileDialog_PreviewFileControl(AObj: TPreviewFileDialog): TPreviewFileControl; extdecl;
begin
  {$define handleExceptionID := 7401}
  handleExceptionBegin
  Result := AObj.PreviewFileControl;
  handleExceptionEnd
end;

function TPreviewFileDialog_TClass(): TClass; extdecl;
begin
  Result := TPreviewFileDialog;
end;

exports
  TPreviewFileDialog_Create,
  TPreviewFileDialog_PreviewFileControl,
  TPreviewFileDialog_TClass;