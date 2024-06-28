
//constructor
function PreviewFileDialog_Create(TheOwner: TComponent): TPreviewFileDialog; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TPreviewFileDialog.Create(TheOwner);
  handleExceptionEnd
end;

//property
function PreviewFileDialog_PreviewFileControl(AObj: TPreviewFileDialog): TPreviewFileControl; extdecl;
begin
  {$define handleExceptionFuncName :='PreviewFileControl'}
  handleExceptionBegin
  Result := AObj.PreviewFileControl;
  handleExceptionEnd
end;

//function
function PreviewFileDialog_Class(): TClass; extdecl;
begin
  Result := TPreviewFileDialog;
end;


exports
  PreviewFileDialog_Create,
  PreviewFileDialog_PreviewFileControl,
  PreviewFileDialog_Class;