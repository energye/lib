program project1;

{$mode objfpc}{$H+}

uses
  {$IFDEF UNIX}
  cthreads,
  {$ENDIF}
  {$IFDEF HASAMIGA}
  athreads,
  {$ENDIF}
  Interfaces, // this includes the LCL widgetset
  Forms, unit1;

{$R *.res}

begin
  //RequireDerivedFormResource:=True;
  //IsMultiThread := True;
  //Application.Scaled:=True;
  CreateGlobal();
  Application.Scaled:=True;
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.


{
 关于 class Destroy 函数，Objective-C release 正常

 开发者工具 - X
 自定义scheme不显示页面 - OK：原因，未添加 MIME 类型
 WKNavigationAction - OK
 WKWindowFeatures - OK
 WKFrameInfo - OK
 WKNavigation - OK
 NSURLAuthenticationChallenge - X
 WKDownload - OK
 WKDownloadDelegateProtocol - OK
}
