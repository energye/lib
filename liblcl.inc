// OpenGLContext begin
{$IFDEF LCLGTK}
  {$IFDEF Linux}
    {$DEFINE UseGtkGLX}
    {$DEFINE HasRGBA}
    {$DEFINE HasRGBBits}
    {$DEFINE OpenGLTargetDefined}
  {$ENDIF}
{$ENDIF}
{$IFDEF LCLGTK2}
  {$IF defined(Linux) or defined(FreeBSD)}
    {$DEFINE UseGtk2GLX}
    {$DEFINE UsesModernGL}
    {$DEFINE HasRGBA}
    {$DEFINE HasRGBBits}
    {$DEFINE HasDebugContext}
    {$DEFINE OpenGLTargetDefined}
  {$ENDIF}
{$ENDIF}
{$IFDEF LCLGTK3}
  {$IF defined(Linux) or defined(FreeBSD)}
    {$DEFINE UseGtk3GLX}
    {$DEFINE UsesModernGL}
    {$DEFINE HasRGBA}
    {$DEFINE HasRGBBits}
    {$DEFINE HasDebugContext}
    {$DEFINE OpenGLTargetDefined}
  {$ENDIF}
{$ENDIF}
{$IFDEF LCLCarbon}
  {$DEFINE UseCarbonAGL}
  {$DEFINE HasRGBA}
  {$DEFINE HasRGBBits}
  {$DEFINE OpenGLTargetDefined}
{$ENDIF}
{$IFDEF LCLCocoa}
  {$DEFINE UseCocoaNS}
  {$DEFINE UsesModernGL}
  {$DEFINE OpenGLTargetDefined}
  {$DEFINE HasMacRetinaMode}
{$ENDIF}
{$IFDEF LCLWin32}
  {$DEFINE UseWin32WGL}
  {$DEFINE HasRGBA}
  {$DEFINE HasRGBBits}
  {$DEFINE HasDebugContext}
  {$DEFINE OpenGLTargetDefined}
{$ENDIF}
{$IFDEF LCLQT}
  {$DEFINE UseQTGLX}
  {$DEFINE UsesModernGL}
  {$DEFINE HasRGBA}
  {$DEFINE HasRGBBits}
  {$DEFINE OpenGLTargetDefined}
{$ENDIF}
{$IF DEFINED(LCLQT5) OR DEFINED(LCLQt6)}
  {$DEFINE UseQTGLX}
  {$DEFINE UsesModernGL}
  {$DEFINE HasRGBA}
  {$DEFINE HasRGBBits}
  {$DEFINE OpenGLTargetDefined}
{$ENDIF}
{$IFNDEF OpenGLTargetDefined}
  {$ERROR this LCL widgetset/OS is not yet supported}
{$ENDIF}
// OpenGLContext end
