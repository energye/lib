// constructor
function TClipboardFormats_Create(AOwner: TBaseVirtualTree): TClipboardFormats; extdecl;
begin
  {$define handleExceptionID := 29300}
  handleExceptionBegin
  Result := TClipboardFormats.Create(AOwner);
  handleExceptionEnd
end;

// property
function TClipboardFormats_Owner(AObj: TClipboardFormats): TBaseVirtualTree; extdecl;
begin
  {$define handleExceptionID := 29301}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

exports
  TClipboardFormats_Create,
  TClipboardFormats_Owner;