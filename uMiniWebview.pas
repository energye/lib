//----------------------------------------
//
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Lazarus.modifiedLGPL
//
//----------------------------------------

unit uMiniWebview;

{$IF Defined(MSWINDOWS)}
  {$I ./wk/WK_WebviewWin.inc}
{$ELSEIF Defined(DARWIN) or Defined(MACOS)}
  {$IFDEF LCLcocoa}
    {$I ./wk/WK_WebviewMac.inc}
  {$ELSE}
     interface
       type TMiniWebview = class end;
     implementation
  {$ENDIF}
{$ELSEIF Defined(LINUX)}
     {$IF Defined(LCLgtk2) or Defined(LCLgtk3)}
        {$I ./wk/WK_WebviewLinux.inc}
     {$ELSE}
        interface
          type TMiniWebview = class end;
        implementation
     {$ENDIF}
{$ELSE}
interface
  type TMiniWebview = class end;
implementation
{$ENDIF}

end.
