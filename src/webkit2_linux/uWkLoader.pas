unit uWkLoader;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, uLibWebkit, dynlibs;

type

    TWkLoader = class(TComponent)
    private
      FWebkit2Version: TWebkit2Version;
      FLoaderWebKit2DllPath: string;
      FLoaderJavascriptCoreDllPath: string;
      FLoaderSoupDllPath: string;
    protected
      function LoadWebKit2Libray(): boolean;
      procedure UnLoadWebKit2Libray();
    public
      constructor Create(aOwner: TComponent); override;
      destructor Destroy; override;
      function StartWebKit2(): boolean;
    public
      // Webkit2Version 4.0 or 4.1
      property Webkit2Version: TWebkit2Version read FWebkit2Version write FWebkit2Version;
      property LoaderWebKit2DllPath: string read FLoaderWebKit2DllPath write FLoaderWebKit2DllPath;
      property LoaderJavascriptCoreDllPath: string  read FLoaderJavascriptCoreDllPath write FLoaderJavascriptCoreDllPath;
      property LoaderSoupDllPath: string  read FLoaderSoupDllPath write FLoaderSoupDllPath;
    end;

var
  GlobalWebkit2Loader: TWkLoader;

procedure DestroyGlobalWebkit2Loader;

implementation

procedure DestroyGlobalWebkit2Loader;
begin
  if assigned(GlobalWebkit2Loader) then
  begin
    FreeAndNil(GlobalWebkit2Loader);
  end;
end;

constructor TWkLoader.Create(aOwner: TComponent);
begin
  inherited Create(aOwner);
  FLoaderWebKit2DllPath := '';
  FLoaderJavascriptCoreDllPath := '';
  FLoaderSoupDllPath := '';
end;

destructor TWkLoader.Destroy;
begin
  FLoaderWebKit2DllPath := '';
  FLoaderJavascriptCoreDllPath := '';
  FLoaderSoupDllPath := '';
  UnLoadWebKit2Libray();
  inherited Destroy;
end;

function TWkLoader.LoadWebKit2Libray(): boolean;
begin
  Result := true;

  GWebkit2Version := FWebkit2Version;

  // load LibWebKit
  if LibWebkitGtkHandle = 0 then
  begin
    if FLoaderWebKit2DllPath <> '' then
      LibWebkitGtkHandle := dynlibs.SafeLoadLibrary(FLoaderWebKit2DllPath)
    else
      LibWebkitGtkHandle := dynlibs.SafeLoadLibrary(libwebkit2gtkso);
  end;
  if LibWebkitGtkHandle = 0 then
  begin
    WriteLn('[ERROR] WebView Webkit2 lib load failed. cannot find ' + libwebkit2gtkso);
    Result := false;
  end;

  {$IFDEF LCLGtk3}
  // load LibJavascriptCore
  if LibJavascriptCoreGtkHandle = 0 then
  begin
    if FLoaderJavascriptCoreDllPath <> '' then
      LibJavascriptCoreGtkHandle := dynlibs.SafeLoadLibrary(FLoaderJavascriptCoreDllPath)
    else
      LibJavascriptCoreGtkHandle := dynlibs.SafeLoadLibrary(libjavascriptcoregtkso);
  end;
  if LibJavascriptCoreGtkHandle = 0 then
  begin
    WriteLn('[ERROR] WebView JavascriptCore lib load failed. cannot find ' + libjavascriptcoregtkso);
    Result := false;
  end;

  // load Libsoup
  if LibSoupHandle = 0 then
  begin
    if FLoaderSoupDllPath <> '' then
      LibSoupHandle := dynlibs.SafeLoadLibrary(FLoaderSoupDllPath)
    else
      LibSoupHandle := dynlibs.SafeLoadLibrary(libsoupso);
  end;
  if LibSoupHandle = 0 then
  begin
    WriteLn('[ERROR] WebView libsoup lib load failed. cannot find ' + libsoupso);
    Result := false;
  end;
  {$ENDIF}

  if Result then
    LoadLibWebkitGtkProc();
end;

procedure TWkLoader.UnLoadWebKit2Libray();
begin
  FreeLibHandle();
end;

function TWkLoader.StartWebKit2(): boolean;
begin
  Result := LoadWebKit2Libray();
end;

initialization

finalization
  DestroyGlobalWebkit2Loader();

end.
