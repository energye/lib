// constructor
function TSynGutterLineOverviewProviderList_Create(AOwner: TComponent): TSynGutterLineOverviewProviderList; extdecl;
begin
  {$define handleExceptionID := 40900}
  handleExceptionBegin
  Result := TSynGutterLineOverviewProviderList.Create(AOwner);
  handleExceptionEnd
end;

// property
function TSynGutterLineOverviewProviderList_OwnerToSynGutterLineOverview(AObj: TSynGutterLineOverviewProviderList): TSynGutterLineOverview; extdecl;
begin
  {$define handleExceptionID := 40901}
  handleExceptionBegin
  Result := AObj.Owner;
  handleExceptionEnd
end;

// property
function TSynGutterLineOverviewProviderList_Providers(AObj: TSynGutterLineOverviewProviderList; AIndex: Integer): TSynGutterLineOverviewProvider; extdecl;
begin
  {$define handleExceptionID := 40902}
  handleExceptionBegin
  Result := AObj.Providers[AIndex];
  handleExceptionEnd
end;

function TSynGutterLineOverviewProviderList_TClass(): TClass; extdecl;
begin
  Result := TSynGutterLineOverviewProviderList;
end;

exports
  TSynGutterLineOverviewProviderList_Create,
  TSynGutterLineOverviewProviderList_OwnerToSynGutterLineOverview,
  TSynGutterLineOverviewProviderList_Providers,
  TSynGutterLineOverviewProviderList_TClass;