// constructor
function TTrayIcon_Create(TheOwner: TComponent): TTrayIcon; extdecl;
begin
  {$define handleExceptionID := 24300}
  handleExceptionBegin
  Result := TTrayIcon.Create(TheOwner);
  handleExceptionEnd
end;

function TTrayIcon_TClass(): TClass; extdecl;
begin
  Result := TTrayIcon;
end;

exports
  TTrayIcon_Create,
  TTrayIcon_TClass;