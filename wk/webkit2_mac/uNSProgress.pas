unit uNSProgress;

{$mode ObjFPC}{$H+}
{$modeswitch objectivec2}
{$modeswitch cblocks}

interface

uses
  CocoaAll, CTypes,
  CocoaUtils;

type
  // The NSProgress class provides a self-contained mechanism for progress reporting.
  // It makes it easy for code that performs work to report the progress of that work,
  // and for user interface code to observe that progress for presentation to the user.
  // Specifically, you can use a progress object to show the user a progress bar and
  // explanatory text that update as you do work. It also allows the user to cancel or pause work.
  // https://developer.apple.com/documentation/foundation/nsprogress?language=objc
  TNSProgress = class
  private
    FData: NSProgress;
  public
    constructor Create(AData: NSProgress);
    destructor Destroy; override;
    function Data(): NSProgress;
    // Release the current object and Data pointer
    procedure Release();
  public
    // Returns the progress instance, if any.
    class function CurrentProgress: TNSProgress;
    // Sets the progress object as the current object of the current thread, and assigns the amount of work for the next suboperation progress object to perform.
    class function ProgressWithTotalUnitCount (aCount: int64): TNSProgress;
    // Sets The total number of tracked units of work for the current progress.
    procedure SetTotalUnitCount(aValue: int64);
    // Returns The total number of tracked units of work for the current progress.
    function TotalUnitCount: int64;
    // Sets The number of completed units of work for the current job.
    procedure SetCompletedUnitCount(aValue: int64);
    // Returns The number of completed units of work for the current job.
    function CompletedUnitCount: int64;
    // Sets A localized description of tracked progress for the receiver.
    procedure SetLocalizedDescription(aValue: string);
    // Returns A localized description of tracked progress for the receiver.
    function LocalizedDescription: string;
    // Sets A more specific localized description of tracked progress for the receiver.
    procedure SetLocalizedAdditionalDescription(aValue: string);
    // Returns A more specific localized description of tracked progress for the receiver.
    function LocalizedAdditionalDescription: string;
    //
    procedure SetCancellable(aValue: LongBool);
    //
    function IsCancellable: LongBool;
    //
    procedure SetPausable(aValue: LongBool);
    //
    function IsPausable: LongBool;
    //
    function IsCancelled: LongBool;
    //
    function IsPaused: LongBool;
    //
    procedure SetCancellationHandler(aValue: Pointer);
    //
    function CancellationHandler: Pointer;
    //
    procedure SetPausingHandler(aValue: Pointer);
    //
    function PausingHandler: Pointer;
    //
    function IsIndeterminate: LongBool;
    //
    function FractionCompleted: double;
    //
    procedure Cancel;
    //
    procedure Pause;
    //
    procedure Publish;
    //
    procedure Unpublish;
  end;


implementation

constructor TNSProgress.Create(AData: NSProgress);
begin
  FData := AData;
  inherited Create;
end;

destructor TNSProgress.Destroy;
begin
  if Assigned(FData) then
  begin
    FData := nil;
  end;
  inherited Destroy;
end;

procedure TNSProgress.Release();
begin
  if Assigned(FData) then
  begin
    FData.release;
    self.Free;
  end;
end;

function TNSProgress.Data(): NSProgress;
begin
  Result := FData;
end;

class function TNSProgress.CurrentProgress: TNSProgress;
begin
  Result := Create(NSProgress.alloc.currentProgress);
end;

class function TNSProgress.ProgressWithTotalUnitCount (aCount: int64): TNSProgress;
begin
  Result := Create(NSProgress.alloc.progressWithTotalUnitCount(cint64(aCount)));
end;

procedure TNSProgress.SetTotalUnitCount(aValue: int64);
begin
  if Assigned(FData) then
  begin
    FData.setTotalUnitCount(cint64(aValue));
  end;
end;

function TNSProgress.TotalUnitCount: int64;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := int64(FData.totalUnitCount);
  end;
end;

procedure TNSProgress.SetCompletedUnitCount(aValue: int64);
begin
  if Assigned(FData) then
  begin
    FData.setCompletedUnitCount(cint64(aValue));
  end;
end;

function TNSProgress.CompletedUnitCount: int64;
begin
  Result := 0;
  if Assigned(FData) then
  begin
    Result := int64(FData.completedUnitCount);
  end;
end;

procedure TNSProgress.SetLocalizedDescription(aValue: string);
begin
  if Assigned(FData) then
  begin
    FData.setLocalizedDescription(NSStringUtf8(aValue));
  end;
end;

function TNSProgress.LocalizedDescription: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.localizedDescription);
  end;
end;

procedure TNSProgress.SetLocalizedAdditionalDescription(aValue: string);
begin
  if Assigned(FData) then
  begin
    FData.setLocalizedAdditionalDescription(NSStringUtf8(aValue));
  end;
end;

function TNSProgress.LocalizedAdditionalDescription: string;
begin
  Result := '';
  if Assigned(FData) then
  begin
    Result := NSStringToString(FData.localizedAdditionalDescription);
  end;
end;

procedure TNSProgress.SetCancellable(aValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.SetCancellable(ObjCBOOL(aValue));
  end;
end;

function TNSProgress.IsCancellable: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.isCancellable);
  end;
end;

procedure TNSProgress.SetPausable(aValue: LongBool);
begin
  if Assigned(FData) then
  begin
    FData.setPausable(ObjCBOOL(aValue));
  end;
end;

function TNSProgress.IsPausable: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.isPausable);
  end;
end;

function TNSProgress.IsCancelled: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.isCancelled);
  end;
end;

function TNSProgress.IsPaused: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.isPaused);
  end;
end;

procedure TNSProgress.SetCancellationHandler(aValue: Pointer);
begin
  if Assigned(FData) then
  begin
    FData.setCancellationHandler(OpaqueCBlock(aValue));
  end;
end;

function TNSProgress.CancellationHandler: Pointer;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := Pointer(FData.cancellationHandler);
  end;
end;

procedure TNSProgress.SetPausingHandler(aValue: Pointer);
begin
  if Assigned(FData) then
  begin
    FData.setPausingHandler(OpaqueCBlock(aValue));
  end;
end;

function TNSProgress.PausingHandler: Pointer;
begin
  Result := nil;
  if Assigned(FData) then
  begin
    Result := Pointer(FData.pausingHandler);
  end;
end;

function TNSProgress.IsIndeterminate: LongBool;
begin
  Result := False;
  if Assigned(FData) then
  begin
    Result := LongBool(FData.isIndeterminate);
  end;
end;

function TNSProgress.FractionCompleted: double;
begin
  Result := 0.0;
  if Assigned(FData) then
  begin
    Result := double(FData.fractionCompleted);
  end;
end;

procedure TNSProgress.Cancel;
begin
  if Assigned(FData) then
  begin
    FData.cancel;
  end;
end;

procedure TNSProgress.Pause;
begin
  if Assigned(FData) then
  begin
    FData.pause;
  end;
end;

procedure TNSProgress.Publish;
begin
  if Assigned(FData) then
  begin
    FData.publish;
  end;
end;

procedure TNSProgress.Unpublish;
begin
  if Assigned(FData) then
  begin
    FData.unpublish;
  end;
end;


end.
