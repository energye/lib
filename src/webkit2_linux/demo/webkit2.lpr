program webkit2;

{$mode objfpc}{$H+}

uses
  {$IFDEF UNIX}
  cthreads,
  {$ENDIF}
  {$IFDEF HASAMIGA}
  athreads,
  {$ENDIF}
  Interfaces, // this includes the LCL widgetset
  Forms,
  webkit2form,
  uWkLoader;

  {$R *.res}

begin
  //RequireDerivedFormResource := True;

  GlobalWebkit2Loader := TWkLoader.Create(nil);

  {
  查找库文件位置
  sudo find / -name "libwebkit2gtk-4.0.so"
  sudo find / -name "libjavascriptcoregtk-4.0.so"
  sudo find / -name "libsoup-2.4.so.1"
  }
  GlobalWebkit2Loader.LoaderWebKit2DllPath := '/usr/lib/x86_64-linux-gnu/libwebkit2gtk-4.0.so.37';
  GlobalWebkit2Loader.LoaderJavascriptCoreDllPath := '/usr/lib/x86_64-linux-gnu/libjavascriptcoregtk-4.0.so.18';
  GlobalWebkit2Loader.LoaderSoupDllPath := '/usr/lib/x86_64-linux-gnu/libsoup-2.4.so.1';
  if GlobalWebkit2Loader.StartWebKit2() then
  begin
    Application.Title := 'demo-webkit2';
    Application.Scaled := True;
    Application.Initialize;
    Application.CreateForm(TForm1, Form1);
    Application.Run;
  end;
end.
