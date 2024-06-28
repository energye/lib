
//constructor
function TrayIcon_Create(TheOwner: TComponent): TTrayIcon; extdecl;
begin
  {$define handleExceptionFuncName :='Create'}
  handleExceptionBegin
  Result := TTrayIcon.Create(TheOwner);
  handleExceptionEnd
end;

//function
function TrayIcon_Class(): TClass; extdecl;
begin
  Result := TTrayIcon;
end;


exports
  TrayIcon_Create,
  TrayIcon_Class;