
//constructor
function Timer_Create(AOwner: TComponent): TTimer; extdecl;
begin
  handleExceptionBegin
  Result := TTimer.Create(AOwner);
  handleExceptionEnd
end;

//function
function Timer_Class(): TClass; extdecl;
begin
  Result := TTimer;
end;


exports
  Timer_Create,
  Timer_Class;