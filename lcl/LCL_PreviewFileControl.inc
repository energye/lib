
//constructor
function PreviewFileControl_Create(TheOwner: TComponent): TPreviewFileControl; extdecl;
begin
  handleExceptionBegin
  Result := TPreviewFileControl.Create(TheOwner);
  handleExceptionEnd
end;

//property
function PreviewFileControl_PreviewFileDialog(AIsSet: LongBool; AObj: TPreviewFileControl; AValue: TPreviewFileDialog): TPreviewFileDialog; extdecl;
begin
  handleExceptionBegin
  if AIsSet then
  begin
    AObj.PreviewFileDialog := AValue;
  end else
    Result := AObj.PreviewFileDialog;
  handleExceptionEnd
end;

//function
function PreviewFileControl_Class(): TClass; extdecl;
begin
  Result := TPreviewFileControl;
end;


exports
  PreviewFileControl_Create,
  PreviewFileControl_PreviewFileDialog,
  PreviewFileControl_Class;