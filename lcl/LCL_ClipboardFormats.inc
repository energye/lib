
//constructor
function ClipboardFormats_Create(AOwner: TBaseVirtualTree): TClipboardFormats; extdecl;
begin
  handleExceptionBegin
  Result := TClipboardFormats.Create(AOwner);
  handleExceptionEnd
end;

//property
function ClipboardFormats_Owner(AObj: TClipboardFormats): TBaseVirtualTree; extdecl;
begin
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

//function
function ClipboardFormats_Class(): TClass; extdecl;
begin
  Result := TClipboardFormats;
end;


exports
  ClipboardFormats_Create,
  ClipboardFormats_Owner,
  ClipboardFormats_Class;