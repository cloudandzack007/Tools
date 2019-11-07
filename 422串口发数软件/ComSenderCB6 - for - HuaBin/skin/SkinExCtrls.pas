{*******************************************************************}
{                                                                   }
{       Almediadev Visual Component Library                         }
{       DynamicSkinForm                                             }
{       Version 9.37                                                }
{                                                                   }
{       Copyright (c) 2000-2008 Almediadev                          }
{       ALL RIGHTS RESERVED                                         }
{                                                                   }
{       Home:  http://www.almdev.com                                }
{       Support: support@almdev.com                                 }
{                                                                   }
{*******************************************************************}

unit SkinExCtrls;

{$P+,S-,W-,R-}
{$WARNINGS OFF}
{$HINTS OFF}

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms,
  Menus, ExtCtrls, SkinData, spUtils, SkinCtrls, StdCtrls;

type
  TspSkinAnimateGauge = class(TspSkinCustomControl)
  protected
    FImitation: Boolean;
    FCountFrames: Integer;
    FAnimationFrame: Integer;
    FAnimationPauseTimer: TTimer;
    FAnimationTimer: TTimer;
    FAnimationPause: Integer;
    FProgressText: String;
    FShowProgressText: Boolean;
    procedure OnAnimationPauseTimer(Sender: TObject);
    procedure OnAnimationTimer(Sender: TObject);
    procedure SetShowProgressText(Value: Boolean);
    procedure SetProgressText(Value: String);
    procedure GetSkinData; override;
    procedure CreateImage(B: TBitMap);
    procedure DrawProgressText(C: TCanvas);
    procedure CreateControlDefaultImage(B: TBitMap); override;
    procedure CreateControlSkinImage(B: TBitMap); override;
    procedure WMEraseBkgnd(var Msg: TWMEraseBkgnd); message WM_ERASEBKGND;
    function GetAnimationFrameRect: TRect;
    procedure CalcSize(var W, H: Integer); override;
    function CalcProgressRect: TRect;
    procedure StartInternalAnimation;
    procedure StopInternalAnimation;
  public
    ProgressRect, ProgressArea: TRect;
    NewProgressArea: TRect;
    BeginOffset, EndOffset: Integer;
    FontName: String;
    FontStyle: TFontStyles;
    FontHeight: Integer;
    FontColor: TColor;
    ProgressTransparent: Boolean;
    ProgressTransparentColor: TColor;
    ProgressStretch: Boolean;
    AnimationBeginOffset,
    AnimationEndOffset: Integer; 
    //
    AnimationSkinRect: TRect;
    AnimationCountFrames: Integer;
    AnimationTimerInterval: Integer;
    //
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    procedure StartAnimation;
    procedure StopAnimation;
    procedure SetAnimationPause(Value: Integer);
    procedure ChangeSkinData; override;
  published
    property ProgressText: String read FProgressText write SetProgressText;
    property ShowProgressText: Boolean read FShowProgressText write SetShowProgressText;
    property AnimationPause: Integer
      read  FAnimationPause write SetAnimationPause;
    property Align;
    property Enabled;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnResize;
    property PopupMenu;
    property ShowHint;
  end;

  TspSkinShadowLabel = class(TspGraphicSkinControl)
  private
    FFocusControl: TWinControl;
    FAlignment: TAlignment;
    FAutoSize: Boolean;
    FLayout: TTextLayout;
    FWordWrap: Boolean;
    FShowAccelChar: Boolean;
    FUseSkinColor: Boolean;
    procedure SetAlignment(Value: TAlignment);
    procedure SetFocusControl(Value: TWinControl);
    procedure SetShowAccelChar(Value: Boolean);
    procedure SetLayout(Value: TTextLayout);
    procedure SetWordWrap(Value: Boolean);
    procedure CMTextChanged(var Message: TMessage); message CM_TEXTCHANGED;
    procedure CMFontChanged(var Message: TMessage); message CM_FONTCHANGED;
    procedure CMDialogChar(var Message: TCMDialogChar); message CM_DIALOGCHAR;
  protected
    procedure AdjustBounds; dynamic;
    procedure DoDrawText(Cnvs: TCanvas; var Rect: TRect; Flags: Longint); dynamic;
    function GetLabelText: string; virtual;
    procedure Loaded; override;
    procedure Notification(AComponent: TComponent;
     Operation: TOperation); override;
    procedure Paint; override;
    procedure SetAutoSize(Value: Boolean); 
    procedure WMMOVE(var Msg: TWMMOVE); message WM_MOVE;
  public
    constructor Create(AOwner: TComponent); override;
  published
    property AutoSize: Boolean read FAutoSize write SetAutoSize;
    property Layout: TTextLayout read FLayout write SetLayout default tlTop;
    property Alignment: TAlignment read FAlignment write SetAlignment
      default taLeftJustify;
    property FocusControl: TWinControl read FFocusControl write SetFocusControl;
    property ShowAccelChar: Boolean read FShowAccelChar write SetShowAccelChar default True;
    property WordWrap: Boolean read FWordWrap write SetWordWrap default False;
    property Caption;
    property UseSkinColor: Boolean read FUseSkinColor write FUseSkinColor;
    property Align;
    property Anchors;
    property BiDiMode;
    property Constraints;
    property DragCursor;
    property DragKind;
    property DragMode;
    property Enabled;
    property Font;
    property ParentBiDiMode;
    property ParentShowHint;
    property PopupMenu;
    property ShowHint;
    property Visible;
    property OnClick;
    property OnContextPopup;
    property OnDblClick;
    property OnDragDrop;
    property OnDragOver;
    property OnEndDock;
    property OnEndDrag;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnMouseEnter;
    property OnMouseLeave;
    property OnStartDock;
    property OnStartDrag;
  end;


 TspSkinWaveLabel = class(TspGraphicSkinControl)
 private
   FXDiv, FYDiv, FRatioVal: Integer;
   FUseSkinColor: Boolean;
   FAntialiasing: Boolean;
   FAlignment: TAlignment;
   procedure SetAlignment(Value: TAlignment);
   procedure SetXDiv(Value: Integer);
   procedure SetYDiv(Value: Integer);
   procedure SetRatioVal(Value: Integer);
   procedure SetAntialiasing(Value: Boolean);
 protected
    procedure CMTextChanged(var Message: TMessage); message CM_TEXTCHANGED;
    procedure WMMOVE(var Msg: TWMMOVE); message WM_MOVE;
 public
   procedure Paint; override;
   constructor Create(AOwner: TComponent); override;
 published
   property Antialiasing: Boolean read FAntialiasing write SetAntialiasing;
   property UseSkinColor: Boolean read FUseSkinColor write FUseSkinColor;
   property XDiv: Integer read FXDiv write SetXDiv;
   property YDiv: Integer read FYDiv write SetYDiv;
   property RatioVal: Integer read FRatioVal write SetRatioVal;
   property Caption;
   property Font;
   property Align;
   property Alignment: TAlignment read FAlignment write SetAlignment;
   property Anchors;
   property Constraints;
   property DragCursor;
   property DragKind;
   property DragMode;
   property Enabled;
   property PopupMenu;
   property ShowHint;
   property Visible;
   property OnClick;
   property OnDblClick;
   property OnDragDrop;
   property OnDragOver;
   property OnEndDock;
   property OnEndDrag;
   property OnMouseDown;
   property OnMouseMove;
   property OnMouseUp;
   property OnStartDock;
   property OnStartDrag;
 end;

 TspFrameSkinControl = class(TspSkinControl)
  protected
    FRgn: HRgn;
    FFrame: Integer;
    FrameW, FrameH: Integer;
    Picture, MaskPicture: TBitMap;

    FDefaultImage: TBitMap;
    FDefaultMask: TBitMap;
    FDefaultFramesCount: Integer;
    FDefaultFramesPlacement: TFramesPlacement;

    procedure CalcDefaultFrameSize; virtual;
    procedure SetDefaultImage(Value: TBitMap);
    procedure SetDefaultMask(Value: TBitMap);
    procedure SetDefaultFramesCount(Value: Integer);
    procedure SetDefaultFramesPlacement(Value: TFramesPlacement);

    procedure SetFrame(Value: Integer);
    procedure SetControlRegion;
    procedure GetSkinData; override;
    procedure CreateControlDefaultImage(B: TBitMap); override;
    procedure CreateControlSkinImage(B: TBitMap); override;
    procedure Loaded; override;
    procedure WMEraseBkgnd(var Msg: TWMEraseBkgnd); message WM_ERASEBKGND;
  public
    SkinRect: TRect;
    FramesCount: Integer;
    FramesPlacement: TFramesPlacement;
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    procedure SetBounds(ALeft, ATop, AWidth, AHeight: Integer); override;
    procedure ChangeSkinData; override;
    property Frame: Integer read FFrame write SetFrame;
  published
    property DefaultImage: TBitMap read FDefaultImage write SetDefaultImage;
    property DefaultMask: TBitMap read FDefaultMask write SetDefaultMask;
    property DefaultFramesPlacement: TFramesPlacement
      read FDefaultFramesPlacement write SetDefaultFramesPlacement;
    property DefaultFramesCount: Integer
      read FDefaultFramesCount write SetDefaultFramesCount;
    property ShowHint;  
  end;

  TspSkinSwitchState = (swOff, swOn);

  TspSkinSwitch = class(TspFrameSkinControl)
  protected
    FAnimateTimer: TTimer;
    FState: TspSkinSwitchState;
    FOnChange: TNotifyEvent;
    FMouseIn: Boolean;
    function GetTimerInterval: Cardinal;
    procedure SetTimerInterval(Value: Cardinal);
    procedure SetState(Value: TspSkinSwitchState);
    procedure ChangeState(Value: TspSkinSwitchState);
    procedure MouseUp(Button: TMouseButton; Shift: TShiftState;
      X, Y: Integer); override;
    procedure CMMouseLeave(var Message: TMessage); message CM_MOUSELEAVE;
    procedure CMMouseEnter(var Message: TMessage); message CM_MOUSEENTER;
    procedure DoAnimate(Sender: TObject);
    procedure Start;
    procedure Stop;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    procedure ChangeSkinData; override;
  published
    property TimerInterval: Cardinal read GetTimerInterval write SetTimerInterval;
    property State: TspSkinSwitchState read FState write SetState;
    property OnChange: TNotifyEvent read FOnChange write FOnChange;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnClick;
  end;

  TspSkinAnimate = class(TspFrameSkinControl)
  protected
    FAnimateTimer: TTimer;
    FCycleMode: Boolean;
    FButtonMode: Boolean;
    FMouseIn: Boolean;
    FOnStart: TNotifyEvent;
    FOnStop: TNotifyEvent;
    FActive: Boolean;
    procedure SetActive(Value: Boolean);
    function GetTimerInterval: Cardinal;
    procedure SetTimerInterval(Value: Cardinal);
    procedure DoAnimate(Sender: TObject);
    procedure CMMouseLeave(var Message: TMessage); message CM_MOUSELEAVE;
    procedure CMMouseEnter(var Message: TMessage); message CM_MOUSEENTER;
  public
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    procedure Start;
    procedure Stop;
  published
    property Active: Boolean read FActive write SetActive;
    property Enabled;
    property CycleMode: Boolean read FCycleMode write FCycleMode;
    property ButtonMode: Boolean read FButtonMode write FButtonMode;
    property TimerInterval: Cardinal read GetTimerInterval write SetTimerInterval;
    property OnStart: TNotifyEvent read FOnStart write FOnStart;
    property OnStop: TNotifyEvent read FOnStop write FOnStop;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnClick;
  end;

  TspSkinFrameGauge = class(TspFrameSkinControl)
  protected
    FMinValue, FMaxValue, FValue: Integer;
    FVertical: Boolean;
    FOnChange: TNotifyEvent;
    procedure SetMinValue(AValue: Integer);
    procedure SetMaxValue(AValue: Integer);
    procedure SetValue(AValue: Integer);
    procedure CalcFrame;
  public
    procedure ChangeSkinData; override;
    constructor Create(AOwner: TComponent); override;
  published
    property Value: Integer read FValue write SetValue;
    property MinValue: Integer read FMinValue write SetMinValue;
    property MaxValue: Integer read FMaxValue write SetMaxValue;
    property Align;
    property Enabled;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnResize;
    property PopupMenu;
    property ShowHint;
  end;

  TspSkinFrameRegulator = class(TspFrameSkinControl)
  protected
    FPixInc, FValInc: Integer;
    FDown: Boolean;
    StartV, CurV, OldCurV, TempValue: Integer;
    FMinValue, FMaxValue, FValue: Integer;
    FOnChange: TNotifyEvent;
    FDefaultKind: TRegulatorKind;
    function GetRoundValue(X, Y: Integer): Integer;
    procedure CalcDefaultFrameSize; override;
    procedure SetDefaultKind(Value: TRegulatorKind);
    procedure SetMinValue(AValue: Integer);
    procedure SetMaxValue(AValue: Integer);
    procedure SetValue(AValue: Integer);
    procedure GetSkinData; override;
    procedure MouseDown(Button: TMouseButton; Shift: TShiftState;
      X, Y: Integer); override;
    procedure MouseUp(Button: TMouseButton; Shift: TShiftState;
      X, Y: Integer); override;
    procedure MouseMove(Shift: TShiftState; X, Y: Integer); override;
    procedure CalcValue;
    procedure CalcRoundValue;
    procedure CalcFrame;
  public
    Kind: TRegulatorKind;
    constructor Create(AOwner: TComponent); override;
    procedure ChangeSkinData; override;
  published
    property DefaultKind: TRegulatorKind read FDefaultKind write SetDefaultKind;
    property Value: Integer read FValue write SetValue;
    property MinValue: Integer read FMinValue write SetMinValue;
    property MaxValue: Integer read FMaxValue write SetMaxValue;
    property OnChange: TNotifyEvent read FOnChange write FOnChange;
    property Align;
    property Enabled;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnResize;
    property PopupMenu;
    property ShowHint;
  end;

  TspSkinBitLabel = class(TspSkinCustomControl)
  protected
    FAutoSize: Boolean;
    FFixLength: Integer;
    function GetFixWidth: Integer;
    procedure SetFixLength(Value: Integer);
    procedure AdjustBounds;
    procedure GetSkinData; override;
    procedure PaintLabel(B: TBitMap);
    procedure CalcSize(var W, H: Integer); override;
    procedure CMTextChanged(var Message: TMessage); message CM_TEXTCHANGED;

    procedure CreateControlDefaultImage(B: TBitMap); override;
    procedure CreateControlSkinImage(B: TBitMap); override;
  public
    SkinTextRect: TRect;
    SymbolWidth: Integer;
    SymbolHeight: Integer;
    Symbols: TStrings;
    procedure SetAutoSizeX(Value: Boolean);
    constructor Create(AOwner: TComponent); override;
  published
    property Caption;
    property AutoSize: Boolean read FAutoSize write SetAutoSizeX;
    property FixLength: Integer read FFixLength write SetFixLength;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
  end;

 TspSkinXFormButton = class(TspSkinButton)
 private
   FDefImage: TBitMap;
   FDefActiveImage: TBitMap;
   FDefDownImage: TBitMap;
   FDefMask: TBitMap;
   FDefActiveFontColor: TColor;
   FDefDownFontColor: TColor;
   procedure SetDefImage(Value: TBitMap);
   procedure SetDefActiveImage(Value: TBitMap);
   procedure SetDefDownImage(Value: TBitMap);
   procedure SetDefMask(Value: TBitMap);
 protected
    procedure SetControlRegion; override;
    procedure DrawDefaultButton(C: TCanvas);
    procedure CreateControlDefaultImage(B: TBitMap); override;
    procedure Loaded; override;
 public
   constructor Create(AOwner: TComponent); override;
   destructor Destroy; override;
   procedure ChangeSkinData; override;
   procedure SetBounds(ALeft, ATop, AWidth, AHeight: Integer); override;
 published
   property DefImage: TBitMap read FDefImage write SetDefImage;
   property DefActiveImage: TBitMap read FDefActiveImage write SetDefActiveImage;
   property DefDownImage: TBitMap read FDefDownImage write SetDefDownImage;
   property DefMask: TBitMap read FDefMask write SetDefMask;
   property DefActiveFontColor: TColor
    read FDefActiveFontColor write FDefActiveFontColor;
   property DefDownFontColor: TColor
    read FDefDownFontColor write FDefDownFontColor;
 end;

  TspSkinLinkImage = class(TImage)
  private
    FURL: String;
  protected
    procedure Click; override;
  public
    constructor Create(AOwner : TComponent); override;
  published
    property URL: string read FURL write FURL;
  end;

  TspSkinLinkLabel = class(TCustomLabel)
  protected
    FMouseIn: Boolean;
    FIndex: Integer;
    FSD: TspSkinData;
    FSkinDataName: String;
    FDefaultFont: TFont;
    FUseSkinFont: Boolean;
    FDefaultActiveFontColor: TColor;
    FUseUnderLine: Boolean;
    FURL: String;
    procedure SetUseUnderLine(Value: Boolean);
    procedure Notification(AComponent: TComponent;
      Operation: TOperation); override;
    procedure SetSkinData(Value: TspSkinData);
    procedure SetDefaultFont(Value: TFont);
    property Transparent;
    procedure CMMouseLeave(var Message: TMessage); message CM_MOUSELEAVE;
    procedure CMMouseEnter(var Message: TMessage); message CM_MOUSEENTER;
    procedure GetSkinData;
    procedure DoDrawText(var Rect: TRect; Flags: Longint); override;
  public
    FontName: String;
    FontStyle: TFontStyles;
    FontHeight: Integer;
    FontColor, ActiveFontColor: TColor;
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    procedure ChangeSkinData;
    procedure Click; override;
  published
    property UseUnderLine: Boolean read FUseUnderLine write SetUseUnderLine;
    property UseSkinFont: Boolean read FUseSkinFont write FUseSkinFont;
    property DefaultActiveFontColor: TColor
      read FDefaultActiveFontColor write FDefaultActiveFontColor;
    property URL: String read FURL write FURL;
    property DefaultFont: TFont read FDefaultFont write SetDefaultFont;
    property SkinData: TspSkinData read FSD write SetSkinData;
    property SkinDataName: String read FSkinDataName write FSkinDataName;
    property Font;
    property Align;
    property Alignment;
    property Anchors;
    property AutoSize;
    property BiDiMode;
    property Caption;
    property Color;
    property Constraints;
    property DragCursor;
    property DragKind;
    property DragMode;
    property Enabled;
    property FocusControl;
    property ParentBiDiMode;
    property ParentColor;
    property ParentFont;
    property ParentShowHint;
    property PopupMenu;
    property ShowAccelChar;
    property ShowHint;
    property Layout;
    property Visible;
    property WordWrap;
    property OnClick;
    property OnDblClick;
    property OnDragDrop;
    property OnDragOver;
    property OnEndDock;
    property OnEndDrag;
    property OnMouseDown;
    property OnMouseMove;
    property OnMouseUp;
    property OnStartDock;
    property OnStartDrag;
  end;


implementation
  Uses spEffBmp, ShellAPI;

  
const
  DEF_GAUGE_FRAMES = 10;

// TspSkinAnimateGauge

constructor TspSkinAnimateGauge.Create;
begin
  inherited;
  Width := 100;
  Height := 20;
  BeginOffset := 0;
  EndOffset := 0;
  FProgressText := '';
  FShowProgressText := False;
  FSkinDataName := 'gauge';
  FAnimationPause := 1000;
  FAnimationPauseTimer := nil;
  FAnimationTimer := nil;
  FAnimationFrame := 0;
  FCountFrames := 0;
  FImitation := False;
end;

destructor TspSkinAnimateGauge.Destroy;
begin
  if FAnimationPauseTimer <> nil then FAnimationPauseTimer.Free;
  if FAnimationTimer <> nil then FAnimationTimer.Free;
  inherited;
end;

procedure TspSkinAnimateGauge.OnAnimationPauseTimer(Sender: TObject);
begin
  StartInternalAnimation;
end;

procedure TspSkinAnimateGauge.OnAnimationTimer(Sender: TObject);
begin
  Inc(FAnimationFrame);
  if FAnimationFrame > FCountFrames
  then
    StopInternalAnimation;
  RePaint;
end;

procedure TspSkinAnimateGauge.SetAnimationPause;
begin
  if Value >= 0
  then
    FAnimationPause := Value;
end;

procedure TspSkinAnimateGauge.StartInternalAnimation;
begin
  if FAnimationPauseTimer <> nil then FAnimationPauseTimer.Enabled := False;
  FAnimationFrame := 0;
  FAnimationTimer.Enabled := True;
  RePaint;
end;

procedure TspSkinAnimateGauge.StopInternalAnimation;
begin
  if FAnimationPauseTimer <> nil then FAnimationPauseTimer.Enabled := True;
  FAnimationTimer.Enabled := False;
  FAnimationFrame := 0;
  RePaint;
end;

procedure TspSkinAnimateGauge.StartAnimation;
begin
  if (FIndex = -1) or ((FIndex <> -1) and
     IsNullRect(Self.AnimationSkinRect))
  then
    begin
      FImitation := True;
      FCountFrames := DEF_GAUGE_FRAMES + 5;
    end
  else
    begin
      FImitation := False;
      if AnimationCountFrames = 1
      then
        FCountFrames :=  (RectWidth(NewProgressArea) + RectWidth(AnimationSkinRect) * 2)
         div (RectWidth(AnimationSkinRect) div 3)
      else
        FCountFrames := AnimationCountFrames;
    end;

  if FAnimationPauseTimer <> nil then FAnimationPauseTimer.Free;
  if FAnimationTimer <> nil then FAnimationTimer.Free;

  FAnimationPauseTimer := TTimer.Create(Self);
  FAnimationPauseTimer.Enabled := False;
  FAnimationPauseTimer.OnTimer := OnAnimationPauseTimer;
  FAnimationPauseTimer.Interval := FAnimationPause;
  FAnimationPauseTimer.Enabled := True;

  FAnimationTimer := TTimer.Create(Self);
  FAnimationTimer.Enabled := False;
  FAnimationTimer.OnTimer := OnAnimationTimer;
  if FImitation
  then
    FAnimationTimer.Interval := 40
  else
    FAnimationTimer.Interval := Self.AnimationTimerInterval;
  StartInternalAnimation;
end;

procedure TspSkinAnimateGauge.StopAnimation;
begin
  FAnimationFrame := 0;

  if FAnimationTimer = nil then  Exit;


  if FAnimationPauseTimer <> nil
  then
    begin
      FAnimationPauseTimer.Enabled := False;
      FAnimationPauseTimer.Free;
      FAnimationPauseTimer := nil;

    end;

  if FAnimationTimer <> nil
  then
    begin
      FAnimationTimer.Enabled := False;
      FAnimationTimer.Free;
      FAnimationTimer := nil;
    end;
  RePaint;  
end;


procedure TspSkinAnimateGauge.WMEraseBkgnd;
begin
  if not FromWMPaint
  then
    PaintWindow(Msg.DC);
end;

procedure TspSkinAnimateGauge.DrawProgressText;
var
  S: String;
  TX, TY: Integer;
  F: TLogFont;
begin
  if (FIndex = -1)
  then
    C.Font.Assign(FDefaultFont)
  else
  if (FIndex <> -1) and not FUseSkinFont
  then
    begin
      C.Font.Assign(FDefaultFont);
      C.Font.Color := FontColor;
    end
  else
    with C do
    begin
      Font.Name := FontName;
      Font.Height := FontHeight;
      Font.Style := FontStyle;
      Font.Color := FontColor;
    end;

   if (SkinData <> nil) and (SkinData.ResourceStrData <> nil)
   then
     C.Font.Charset := SkinData.ResourceStrData.CharSet
   else
     C.Font.CharSet := FDefaultFont.Charset;

  S := '';
  if FShowProgressText then S := S + FProgressText;
  if S = '' then Exit;
  with C do
  begin
    TX := Width div 2 - TextWidth(S) div 2;
    TY := Height div 2 - TextHeight(S) div 2;
    Brush.Style := bsClear;
    TextOut(TX, TY, S);
  end;
end;

procedure TspSkinAnimateGauge.SetShowProgressText;
begin
  FShowProgressText := Value;
  RePaint;
end;

procedure TspSkinAnimateGauge.SetProgressText;
begin
  FProgressText := Value;
  RePaint;
end;

procedure TspSkinAnimateGauge.CalcSize;
var
  Offset: Integer;
  W1, H1: Integer;
begin
  inherited;
  if ResizeMode > 0
  then
    begin
      Offset := W - RectWidth(SkinRect);
      NewProgressArea := ProgressArea;
      Inc(NewProgressArea.Right, Offset);
     end
  else
    NewProgressArea := ProgressArea;

  if (FIndex <> -1) and not IsNullRect(AnimationSkinRect) and
     (Self.AnimationCountFrames = 1)
   then
     begin
       FCountFrames :=  (RectWidth(NewProgressArea) + RectWidth(AnimationSkinRect) * 2)
       div (RectWidth(AnimationSkinRect) div 3);
       if (FAnimationTimer <> nil) and FAnimationTimer.Enabled
       then
         if FAnimationFrame > FCountFrames then  FAnimationFrame := 1;
     end;
end;

function TspSkinAnimateGauge.GetAnimationFrameRect;
var
  fs: Integer;
begin
  if RectWidth(AnimationSkinRect) > RectWidth(AnimationSkinRect)
  then
    begin
      fs := RectWidth(AnimationSkinRect) div AnimationCountFrames;
      Result := Rect(AnimationSkinRect.Left + (FAnimationFrame - 1) * fs,
                 AnimationSkinRect.Top,
                 AnimationSkinRect.Left + FAnimationFrame * fs,
                 AnimationSkinRect.Bottom);
    end
  else
    begin
      fs := RectHeight(AnimationSkinRect) div AnimationCountFrames;
      Result := Rect(AnimationSkinRect.Left,
                     AnimationSkinRect.Top + (FAnimationFrame - 1) * fs,
                     AnimationSkinRect.Right,
                     AnimationSkinRect.Top + FAnimationFrame * fs);
    end;
end;

function TspSkinAnimateGauge.CalcProgressRect: TRect;
var
  R: TRect;
  FrameWidth: Integer;
begin
  R.Top := NewProgressArea.Top;
  R.Bottom := R.Top + RectHeight(ProgressRect);
  FrameWidth := Width div DEF_GAUGE_FRAMES;
  R.Left := NewProgressArea.Left + (FAnimationFrame - 1) * FrameWidth - 3 * FrameWidth;
  R.Right := R.Left + FrameWidth;
  Result := R;
end;

procedure TspSkinAnimateGauge.CreateControlSkinImage;
var
  Buffer: TBitMap;
  R, R1: TRect;
  X, Y: Integer;
  XStep: Integer;
begin
  inherited;
  if (FAnimationTimer = nil) or (FCountFrames = 0) or (FAnimationFrame = 0)
  then
    begin
      if ShowProgressText then DrawProgressText(B.Canvas);
      Exit;
    end;
  if FImitation
  then
    begin
      R := CalcProgressRect;
      R.Left := R.Left - RectWidth(R) div 2;
      R.Right := R.Right + RectWidth(R) div 2;
      Buffer := TBitMap.Create;
      Buffer.Width := RectWidth(R);
      Buffer.Height := RectHeight(R);
      CreateHSkinImage(BeginOffset, EndOffset, Buffer, Picture, ProgressRect,
                  Buffer.Width, Buffer.Height, ProgressStretch);
      if ProgressTransparent
      then
        begin
          Buffer.Transparent := True;
          Buffer.TransparentMode := tmFixed;
          Buffer.TransparentColor := ProgressTransparentColor;
        end;
      IntersectClipRect(B.Canvas.Handle,
        NewProgressArea.Left, NewProgressArea.Top,
        NewProgressArea.Right, NewProgressArea.Bottom);
      B.Canvas.Draw(R.Left, R.Top, Buffer);
      if ShowProgressText then DrawProgressText(B.Canvas);
      Buffer.Free;
    end
  else
  if not FImitation and (AnimationCountFrames > 1)
  then
    begin
      R := NewProgressArea;
      R1 := GetAnimationFrameRect;
      Buffer := TBitMap.Create;
      Buffer.Width := RectWidth(R);
      Buffer.Height := RectHeight(R);
      CreateHSkinImage(AnimationBeginOffset,
        AnimationEndOffset, Buffer, Picture, R1,
          Buffer.Width, Buffer.Height, True);
      IntersectClipRect(B.Canvas.Handle,
        NewProgressArea.Left, NewProgressArea.Top,
        NewProgressArea.Right, NewProgressArea.Bottom);
      B.Canvas.Draw(R.Left, R.Top, Buffer);
      if ShowProgressText then DrawProgressText(B.Canvas);
      Buffer.Free;
    end
  else
  if not FImitation and (AnimationCountFrames = 1)
  then
    begin
      FCountFrames :=  (RectWidth(NewProgressArea) + RectWidth(AnimationSkinRect) * 2)
         div (RectWidth(AnimationSkinRect) div 3);
      if FAnimationFrame > FCountFrames then  FAnimationFrame := 1;
      Buffer := TBitMap.Create;
      Buffer.Width := RectWidth(AnimationSkinRect);
      Buffer.Height := RectHeight(AnimationSkinRect);
      Buffer.Canvas.CopyRect(Rect(0, 0, Buffer.Width, Buffer.Height), Picture.Canvas,
       AnimationSkinRect);
      XStep := RectWidth(AnimationSkinRect) div 3;
      X := NewProgressArea.Left +  XStep * (FAnimationFrame - 1) -
        RectWidth(AnimationSkinRect);
      Y := NewProgressArea.Top;
      IntersectClipRect(B.Canvas.Handle,
        NewProgressArea.Left, NewProgressArea.Top,
        NewProgressArea.Right, NewProgressArea.Bottom);
      B.Canvas.Draw(X, Y, Buffer);
      if ShowProgressText then DrawProgressText(B.Canvas);
      Buffer.Free;
    end;
end;

procedure TspSkinAnimateGauge.CreateImage;
begin
  CreateSkinControlImage(B, Picture, SkinRect);
end;

procedure TspSkinAnimateGauge.CreateControlDefaultImage(B: TBitMap);
var
  R, PR: TRect;
  V: Integer;
begin
  R := ClientRect;
  B.Canvas.Brush.Color := clWindow;
  B.Canvas.FillRect(R);
  Frame3D(B.Canvas, R, clbtnShadow, clbtnShadow, 1);
  DrawProgressText(B.Canvas);
end;

procedure TspSkinAnimateGauge.GetSkinData;
begin
  inherited;
  if FIndex <> -1
  then
    if TspDataSkinControl(FSD.CtrlList.Items[FIndex]) is TspDataSkinGaugeControl
    then
      with TspDataSkinGaugeControl(FSD.CtrlList.Items[FIndex]) do
      begin
        Self.ProgressRect := ProgressRect;
        Self.ProgressArea := ProgressArea;
        Self.BeginOffset := BeginOffset;
        Self.EndOffset := EndOffset;
        Self.FontName := FontName;
        Self.FontStyle := FontStyle;
        Self.FontHeight := FontHeight;
        Self.FontColor := FontColor;
        Self.ProgressTransparent := ProgressTransparent;
        Self.ProgressTransparentColor := ProgressTransparentColor;
        Self.ProgressStretch := ProgressStretch;
        Self.AnimationSkinRect := AnimationSkinRect;
        Self.AnimationCountFrames := AnimationCountFrames;
        Self.AnimationTimerInterval := AnimationTimerInterval;
        Self.AnimationBeginOffset := AnimationBeginOffset;
        Self.AnimationEndOffset := AnimationEndOffset;
      end;
end;

procedure TspSkinAnimateGauge.ChangeSkinData;
var
  FAnimation: Boolean;
begin
  FAnimation := FAnimationTimer <> nil;
  if FAnimation then StopAnimation;
  inherited;
  if FAnimation then StartAnimation;
end;

// ===================== TpSkinWaveLabel ==================== //

constructor TspSkinWaveLabel.Create(AOwner: TComponent);
begin
  inherited;
  ControlStyle := ControlStyle + [csOpaque];
  FSkinDataName := 'stdlabel';
  Width := 200;
  Height := 40;
  //
  Font.Name := 'Arial';
  Font.Size := 16;
  Font.Style := [fsBold];
  //
  FAntialiasing := True;
  FXDiv := 20;
  FYDiv := 20;
  FRatioVal := 5;
  FUseSkinColor := True;
  FAlignment := taCenter;
end;

procedure TspSkinWaveLabel.WMMOVE;
begin
  inherited;
  if not AlphaBlend then RePaint;
end;

procedure TspSkinWaveLabel.Paint;
var
  MaskBuffer: TBitMap;
  FXMaskBuffer: TspEffectBmp;
  TX, TY: Integer;
  ParentImage: TBitMap;
  FXBuffer: TspEffectBmp;
  C: TColor;
begin
  if (Width < 1) or (Height < 1) then Exit;
  // create mask
  MaskBuffer := TBitMap.Create;
  MaskBuffer.Width := Width;
  MaskBuffer.Height := Height;
  with MaskBuffer.Canvas do
  begin
    Brush.Color := clWhite;
    FillRect(Rect(0, 0, Width, Height));
    Font.Assign(Self.Font);
    Font.Color := clBlack;
    case Alignment of
      taLeftJustify: TX := 10;
      taCenter:  TX := Width div 2 - TextWidth(Caption) div 2;
      taRightJustify: TX := Width - 10 - TextWidth(Caption);
    end;
    TY := Height div 2 - TextHeight(Caption) div 2;
    if TX < 0 then TX := 0;
    if TY < 0 then TY := 0;
    Canvas.Brush.Style := bsClear;
    TextOut(TX, TY, Caption);
  end;
  FXMaskBuffer := TspEffectBmp.CreateFromhWnd(MaskBuffer.Handle);
  MaskBuffer.Free;
  // create parent image
  ParentImage := TBitMap.Create;
  ParentImage.Width := Width;
  ParentImage.Height := Height;
  GetParentImage(Self, ParentImage.Canvas);
  FXBuffer := TspEffectBmp.CreateFromhWnd(ParentImage.Handle);
  ParentImage.Free;
  // add effects
  FXMaskBuffer.Wave(FXDiv, FYDiv, FRatioVal);
  //
  GetSkinData;
  if FUseSkinColor and (SkinData <> nil) and (not SkinData.Empty) and (FIndex <> -1)
  then
    begin
      if TspDataSkinControl(FSD.CtrlList.Items[FIndex]) is TspDataSkinStdLabelControl
      then
        C := TspDataSkinStdLabelControl(FSD.CtrlList.Items[FIndex]).FontColor
      else
        C := Font.Color;
     end
  else
    C := Font.Color;
  //
  if FAlphaBlend
  then
    FXBuffer.MaskFillColor(FXMaskBuffer, C, FAlphaBlendValue / 255)
  else
    FXBuffer.MaskFillColor(FXMaskBuffer, C, 1);
  if FAntialiasing
  then
    FXBuffer.MaskAntialiasing(FXMaskBuffer, 1);
  FXBuffer.Draw(Canvas.Handle, 0, 0);
  //
  FXBuffer.Free;
  FXMaskBuffer.Free;
end;

procedure TspSkinWaveLabel.CMTextChanged;
begin
  inherited;
  RePaint;
end;

procedure TspSkinWaveLabel.SetXDiv;
begin
  FXDiv := Value;
  RePaint;
end;

procedure TspSkinWaveLabel.SetYDiv;
begin
  FYDiv := Value;
  RePaint;
end;


procedure TspSkinWaveLabel.SetRatioVal;
begin
  FRatioVal := Value;
  RePaint;
end;

procedure TspSkinWaveLabel.SetAntialiasing;
begin
  FAntialiasing := Value;
  RePaint;
end;

procedure TspSkinWaveLabel.SetAlignment(Value: TAlignment);
begin
  FAlignment := Value;
  RePaint;
end;

{ TspSkinShadowLabel }

constructor TspSkinShadowLabel.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  ControlStyle := ControlStyle + [csReplicatable, csOpaque];
  FSkinDataName := 'stdlabel';
  Width := 65;
  Height := 17;
  FAutoSize := True;
  FShowAccelChar := True;
  FUseSkinColor := True;
  //
  Font.Name := 'Arial';
  Font.Height := 16;
  Font.Style := [fsBold];
  //
end;

function TspSkinShadowLabel.GetLabelText: string;
begin
  Result := Caption;
end;

procedure TspSkinShadowLabel.WMMOVE;
begin
  inherited;
  if not AlphaBlend then RePaint;
end;

procedure TspSkinShadowLabel.DoDrawText(Cnvs: TCanvas; var Rect: TRect; Flags: Longint);
var
  Text: string;
begin
  Text := GetLabelText;
  if (Flags and DT_CALCRECT <> 0) and ((Text = '') or ShowAccelChar and
    (Text[1] = '&') and (Text[2] = #0)) then Text := Text + ' ';
  if not ShowAccelChar then Flags := Flags or DT_NOPREFIX;
  Flags := DrawTextBiDiModeFlags(Flags);
  DrawText(Cnvs.Handle, PChar(Text), Length(Text), Rect, Flags);
end;

procedure TspSkinShadowLabel.Paint;
const
  Alignments: array[TAlignment] of Word = (DT_LEFT, DT_RIGHT, DT_CENTER);
  WordWraps: array[Boolean] of Word = (0, DT_WORDBREAK);
var
  MaskBuffer: TBitMap;
  FXMaskBuffer: TspEffectBmp;
  TX, TY: Integer;
  ParentImage: TBitMap;
  FXBuffer: TspEffectBmp;
  C: TColor;
  R: TRect;
  CR: TRect;
  DrawStyle: Longint;
begin
  if (Width < 1) or (Height < 1) then Exit;
  //
  Canvas.Font.Assign(Self.Font);
  // create mask
  MaskBuffer := TBitMap.Create;
  MaskBuffer.Width := Width;
  MaskBuffer.Height := Height;
  // draw shadow in mask
  with MaskBuffer.Canvas do
  begin
    //
    Brush.Color := clWhite;
    FillRect(Rect(0, 0, Width, Height));
    Font.Assign(Self.Font);
    Font.Color := clBlack;
    //
    Brush.Style := bsClear;
    R := ClientRect;
    R.Right := R.Right - 3;
    R.Bottom := R.Bottom - 3;
    DrawStyle := DT_EXPANDTABS or WordWraps[FWordWrap] or Alignments[FAlignment];
    if FLayout <> tlTop then
    begin
      CR := ClientRect;
      DoDrawText(MaskBuffer.Canvas, CR, DrawStyle or DT_CALCRECT);
      if FLayout = tlBottom then OffsetRect(R, 0, Height - CR.Bottom - 2)
      else OffsetRect(R, 0, (Height - CR.Bottom) div 2 - 2);
    end;
    OffsetRect(R, 1, 1);
    DoDrawText(MaskBuffer.Canvas, R, DrawStyle);
    OffsetRect(R, 1, 1);
    DoDrawText(MaskBuffer.Canvas, R, DrawStyle);
  end;
  FXMaskBuffer := TspEffectBmp.CreateFromhWnd(MaskBuffer.Handle);
  MaskBuffer.Free;
  // create parent image
  ParentImage := TBitMap.Create;
  ParentImage.Width := Width;
  ParentImage.Height := Height;
  GetParentImage(Self, ParentImage.Canvas);
  FXBuffer := TspEffectBmp.CreateFromhWnd(ParentImage.Handle);
  FXBuffer.MaskFillColor(FXMaskBuffer, clBlack, 0.3);
  FXBuffer.MaskAntialiasing(FXMaskBuffer, 1);
  FXBuffer.Draw(ParentImage.Canvas.Handle, 0, 0);
  // draw text
  GetSkinData;
  if FUseSkinColor and (SkinData <> nil) and (not SkinData.Empty) and (FIndex <> -1)
  then
    begin
      if TspDataSkinControl(FSD.CtrlList.Items[FIndex]) is TspDataSkinStdLabelControl
      then
        C := TspDataSkinStdLabelControl(FSD.CtrlList.Items[FIndex]).FontColor
      else
        C := Font.Color;
     end
  else
    C := Font.Color;
  //
  with ParentImage.Canvas do
  begin
    Font.Assign(Self.Font);
    Font.Color := C;
    Brush.Style := bsClear;
    R := ClientRect;
    R.Right := R.Right - 3;
    R.Bottom := R.Bottom - 3;
    DrawStyle := DT_EXPANDTABS or WordWraps[FWordWrap] or Alignments[FAlignment];
    if FLayout <> tlTop then
    begin
      CR := ClientRect;
      DoDrawText(ParentImage.Canvas, CR, DrawStyle or DT_CALCRECT);
      if FLayout = tlBottom then OffsetRect(R, 0, Height - CR.Bottom - 2)
      else OffsetRect(R, 0, (Height - CR.Bottom) div 2 - 2);
    end;
    DoDrawText(ParentImage.Canvas, R, DrawStyle);
  end;
  Canvas.Draw(0, 0, ParentImage);
  FXBuffer.Free;
  FXMaskBuffer.Free;
  ParentImage.Free;
end;

procedure TspSkinShadowLabel.Loaded;
begin
  inherited Loaded;
  AdjustBounds;
end;

procedure TspSkinShadowLabel.AdjustBounds;
const
  WordWraps: array[Boolean] of Word = (0, DT_WORDBREAK);
var
  DC: HDC;
  X: Integer;
  Rect: TRect;
  AAlignment: TAlignment;
begin
  if not (csReading in ComponentState) and FAutoSize then
  begin
    Canvas.Font := Self.Font;
    Rect := ClientRect;
    DC := GetDC(0);
    Canvas.Handle := DC;
    DoDrawText(Canvas, Rect, (DT_EXPANDTABS or DT_CALCRECT) or WordWraps[FWordWrap]);
    Canvas.Handle := 0;
    ReleaseDC(0, DC);
    X := Left;
    AAlignment := FAlignment;
    if UseRightToLeftAlignment then ChangeBiDiModeAlignment(AAlignment);
    if AAlignment = taRightJustify then Inc(X, Width - Rect.Right);
    Rect.Right := Rect.Right + 3;
    Rect.Bottom := Rect.Bottom + 3;
    SetBounds(X, Top, Rect.Right, Rect.Bottom);
  end;
end;

procedure TspSkinShadowLabel.SetAlignment(Value: TAlignment);
begin
  if FAlignment <> Value then
  begin
    FAlignment := Value;
    Invalidate;
  end;
end;

procedure TspSkinShadowLabel.SetAutoSize(Value: Boolean);
begin
  if FAutoSize <> Value then
  begin
    FAutoSize := Value;
    AdjustBounds;
  end;
end;

procedure TspSkinShadowLabel.SetFocusControl(Value: TWinControl);
begin
  FFocusControl := Value;
  if Value <> nil then Value.FreeNotification(Self);
end;

procedure TspSkinShadowLabel.SetShowAccelChar(Value: Boolean);
begin
  if FShowAccelChar <> Value then
  begin
    FShowAccelChar := Value;
    Invalidate;
  end;
end;

procedure TspSkinShadowLabel.SetLayout(Value: TTextLayout);
begin
  if FLayout <> Value then
  begin
    FLayout := Value;
    Invalidate;
  end;
end;

procedure TspSkinShadowLabel.SetWordWrap(Value: Boolean);
begin
  if FWordWrap <> Value then
  begin
    FWordWrap := Value;
    AdjustBounds;
    Invalidate;
  end;
end;

procedure TspSkinShadowLabel.Notification(AComponent: TComponent;
  Operation: TOperation);
begin
  inherited Notification(AComponent, Operation);
  if (Operation = opRemove) and (AComponent = FFocusControl) then
    FFocusControl := nil;
end;

procedure TspSkinShadowLabel.CMTextChanged(var Message: TMessage);
begin
  Invalidate;
  AdjustBounds;
end;

procedure TspSkinShadowLabel.CMFontChanged(var Message: TMessage);
begin
  inherited;
  AdjustBounds;
end;

procedure TspSkinShadowLabel.CMDialogChar(var Message: TCMDialogChar);
begin
  if (FFocusControl <> nil) and Enabled and ShowAccelChar and
    IsAccel(Message.CharCode, Caption) then
    with FFocusControl do
      if CanFocus then
      begin
        SetFocus;
        Message.Result := 1;
      end;
end;

constructor TspFrameSkinControl.Create(AOwner: TComponent);
begin
  inherited;
  FFrame := 1;
  FrameW := 0;
  FrameH := 0;
  Picture := nil;
  MaskPicture := nil;
  FDefaultImage := TBitMap.Create;
  FDefaultMask := TBitMap.Create;
  FDefaultFramesCount := 1;
end;

destructor TspFrameSkinControl.Destroy;
begin
  FDefaultImage.Free;
  FDefaultMask.Free;
  if FRgn <> 0
  then
    begin
      DeleteObject(FRgn);
      FRgn := 0;
    end;
  inherited;
end;

procedure TspFrameSkinControl.WMEraseBkgnd;
begin
  if not FromWMPaint
  then
    PaintWindow(Msg.DC);
end;

procedure TspFrameSkinControl.Loaded;
begin
  inherited;
  CalcDefaultFrameSize;
  if (FIndex = -1) and (FSD = nil)
  then
    SetControlRegion;
end;

procedure TspFrameSkinControl.CalcDefaultFrameSize;
begin
  if FDefaultImage.Empty then Exit;
  FramesCount := FDefaultFramesCount;
  FramesPlacement := FDefaultFramesPlacement;
  case FramesPlacement of
   fpHorizontal:
     begin
       FrameW := FDefaultImage.Width div FramesCount;
       FrameH := FDefaultImage.Height;
     end;
   fpVertical:
     begin
       FrameW := FDefaultImage.Width;
       FrameH := FDefaultImage.Height div FramesCount;
     end;
  end;
end;

procedure TspFrameSkinControl.SetDefaultMask;
begin
  FDefaultMask.Assign(Value);
  SetControlRegion;
  RePaint;
end;

procedure TspFrameSkinControl.SetDefaultImage;
begin
  FDefaultImage.Assign(Value);
  FFrame := 1;
  CalcDefaultFrameSize;
  if not FDefaultImage.Empty
  then
    SetBounds(Left, Top, FrameW, FrameH);
  RePaint;
end;

procedure TspFrameSkinControl.SetDefaultFramesCount;
begin
  if Value <= 0
  then
    FDefaultFramesCount := 1
  else
    FDefaultFramesCount := Value;
  CalcDefaultFrameSize;
  if not FDefaultImage.Empty
  then
    SetBounds(Left, Top, FrameW, FrameH);
  RePaint;
end;

procedure TspFrameSkinControl.SetDefaultFramesPlacement;
begin
  FDefaultFramesPlacement := Value;
  CalcDefaultFrameSize;
  if not FDefaultImage.Empty
  then
    SetBounds(Left, Top, FrameW, FrameH);
  RePaint;
end;

procedure TspFrameSkinControl.GetSkinData;
begin
  inherited;
  if FIndex <> -1
  then
    if TspDataSkinControl(FSD.CtrlList.Items[FIndex]) is TspDataSkinFrameControl
    then
      begin
        with TspDataSkinFrameControl(FSD.CtrlList.Items[FIndex]) do
        begin
          Self.SkinRect := SkinRect;
          Self.CursorIndex := CursorIndex;
          if (PictureIndex <> -1) and (PictureIndex < FSD.FActivePictures.Count)
          then
            Picture := TBitMap(FSD.FActivePictures.Items[PictureIndex])
          else
            Picture := nil;
          if (MaskPictureIndex <> -1) and (MaskPictureIndex < FSD.FActivePictures.Count)
          then
            MaskPicture := TBitMap(FSD.FActivePictures.Items[MaskPictureIndex])
          else
            MaskPicture := nil;
          Self.FramesCount := FramesCount;
          Self.FramesPlacement := FramesPlacement;
        end;
        if FramesCount < 2 then FramesCount := 2;
        case FramesPlacement of
          fpHorizontal:
             begin
               FrameW := RectWidth(SkinRect) div FramesCount;
               FrameH := RectHeight(SkinRect);
             end;
          fpVertical:
            begin
              FrameH := RectHeight(SkinRect) div FramesCount;
              FrameW := RectWidth(SkinRect);
            end;
        end;
      end;
end;

procedure TspFrameSkinControl.SetBounds;
var
  UpDate: Boolean;
begin
  GetSkinData;
  UpDate := ((Width <> AWidth) or (Height <> AHeight)) and
  ((FIndex <> -1) or (not FDefaultImage.Empty and (FIndex = -1)));

  if UpDate
  then
    begin
      AWidth := FrameW;
      AHeight := FrameH;
    end;  

  inherited;

  if UpDate
  then
    begin
      SetControlRegion;
      RePaint;
    end;
end;

procedure TspFrameSkinControl.ChangeSkinData;
var
  UpDate: Boolean;
begin
  GetSkinData;

  if (FIndex = -1) and (not FDefaultImage.Empty)
  then
    begin
      CalcDefaultFrameSize;
      SetControlRegion;
      if not FDefaultImage.Empty
      then
        SetBounds(Left, Top, FrameW, FrameH);
      RePaint;
      Exit;
    end;

  if (FIndex <> -1) and (FFrame > FramesCount)
  then FFrame := FramesCount;

  if FUseSkinCursor
  then
  if (CursorIndex <> -1) and (FIndex <> -1)
  then
    Cursor := FSD.StartCursorIndex + CursorIndex
  else
    Cursor := crDefault;

  if FIndex <> -1
  then
    begin
      UpDate := (Width <> FrameW) or (Height <> FrameH);
      SetBounds(Left, Top, FrameW, FrameH);
    end
  else
    UpDate := False;

  if not UpDate
  then
    begin
      SetControlRegion;
      RePaint;
    end;
end;

procedure TspFrameSkinControl.CreateControlDefaultImage;
var
  R: TRect;
begin
  if FDefaultImage.Empty
  then
    begin
      with B.Canvas do
      begin
        R := ClientRect;
        Brush.Color := clBtnFace;
        FillRect(R);
      end;
      Frame3D(B.Canvas, R, clBtnShadow, clBtnShadow, 1);
    end
  else
    begin
      CalcDefaultFrameSize;
      if B.Width <> FrameW then B.Width := FrameW;
      if B.Height <> FrameH then B.Height := FrameH;
      case FramesPlacement of
         fpHorizontal:
           R := Rect((FFrame - 1) * FrameW, 0,
                      FFrame * FrameW, FrameH);
         fpVertical:
           R := Rect(0, (FFrame - 1) * FrameH,
                     FrameW, FFrame * FrameH);
      end;
      B.Canvas.CopyRect(Rect(0, 0, FrameW, FrameH), FDefaultImage.Canvas, R);
    end;
end;

procedure TspFrameSkinControl.CreateControlSkinImage;
var
  R: TRect;
begin
  if B.Width <> FrameW then B.Width := FrameW;
  if B.Height <> FrameH then B.Height := FrameH;
  case FramesPlacement of
    fpHorizontal:
       R := Rect(SkinRect.Left + (FFrame - 1) * FrameW, SkinRect.Top,
                 SkinRect.Left + FFrame * FrameW, SkinRect.Top + FrameH);
   fpVertical:
       R := Rect(SkinRect.Left, SkinRect.Top + (FFrame - 1) * FrameH,
                 SkinRect.Left + FrameW, SkinRect.Top + FFrame * FrameH);
  end;
  B.Canvas.CopyRect(Rect(0, 0, FrameW, FrameH), Picture.Canvas, R);
end;

procedure TspFrameSkinControl.SetControlRegion;
var
  TempRgn: HRgn;
begin
  if (FIndex = -1) and not FDefaultMask.Empty
  then
    begin
      TempRgn := FRgn;
      CreateSkinSimplyRegion(FRgn, FDefaultMask);
      SetWindowRgn(Handle, FRgn, True);
      if TempRgn <> 0 then DeleteObject(TempRgn);
    end
  else  
  if ((MaskPicture = nil) or (FIndex = -1)) and (FRgn <> 0)
  then
    begin
      SetWindowRgn(Handle, 0, True);
      DeleteObject(FRgn);
      FRgn := 0;
    end
  else
    if (MaskPicture <> nil) and (FIndex <> -1)
    then
      begin
        TempRgn := FRgn;
        CreateSkinSimplyRegion(FRgn, MaskPicture);
        SetWindowRgn(Handle, FRgn, True);
        if TempRgn <> 0 then DeleteObject(TempRgn);
      end;
end;

procedure TspFrameSkinControl.SetFrame;
begin
  if (FIndex = -1) and FDefaultImage.Empty then Exit;
  if Value < 1 then Value := 1 else
  if Value > FramesCount then Value := FramesCount;
  if FFrame <> Value
  then
    begin
      FFrame := Value;
      RePaint;
    end;
end;

constructor TspSkinSwitch.Create;
begin
  inherited Create(AOwner);
  Width := 25;
  Height := 50;
  FMouseIn := False;
  FAnimateTimer := TTimer.Create(Self);
  FAnimateTimer.Interval := 50;
  FAnimateTimer.Enabled := False;
  FAnimateTimer.OnTimer := DoAnimate;
end;

destructor TspSkinSwitch.Destroy;
begin
  FAnimateTimer.Free;
  inherited;
end;

procedure TspSkinSwitch.DoAnimate;
begin
  if (FIndex = -1) and FDefaultImage.Empty then Exit;
  if State = swOff
  then
    begin
      if Frame > 0 then Frame := Frame - 1 else Stop;
    end
  else
    begin
      if Frame < FramesCount then Frame := Frame + 1 else Stop;
    end;
end;

procedure TspSkinSwitch.Start;
begin
  FAnimateTimer.Enabled := True;
end;

procedure TspSkinSwitch.Stop;
begin
  FAnimateTimer.Enabled := False;
end;

procedure TspSkinSwitch.CMMouseEnter;
begin
  inherited;
  if (csDesigning in ComponentState) then Exit;
  FMouseIn := True;
end;

procedure TspSkinSwitch.CMMouseLeave;
begin
  inherited;
  if (csDesigning in ComponentState) then Exit;
  FMouseIn := False;
end;


procedure TspSkinSwitch.MouseUp(Button: TMouseButton; Shift: TShiftState;
                                X, Y: Integer);
begin
  if (Button = mbLeft) and FMouseIn
  then
    begin
      if State = swOff then State := swOn else State := swOff;
    end;
  inherited;
end;

procedure TspSkinSwitch.ChangeSkinData;
begin
  inherited;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty)
  then
    if FState = swOn
    then Frame := FramesCount
    else Frame := 1;
end;

procedure TspSkinSwitch.ChangeState;
begin
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty)
  then
    begin
      if FramesCount = 2
      then
        begin
          if FState = swOn
          then Frame := 2
          else Frame := 1;
        end
      else
        Start;  
    end
  else
    RePaint;
end;

procedure TspSkinSwitch.SetState;
begin
  FState := Value;
  ChangeState(Value);
  if not (csDesigning in ComponentState)
  then
    if Assigned(FOnChange) then FOnChange(Self);
end;

procedure TspSkinSwitch.SetTimerInterval;
begin
  FAnimateTimer.Interval := Value;
end;

function TspSkinSwitch.GetTimerInterval;
begin
  Result := FAnimateTimer.Interval;
end;

constructor TspSkinAnimate.Create(AOwner: TComponent);
begin
  inherited Create(AOwner);
  FAnimateTimer := TTimer.Create(Self);
  FAnimateTimer.Interval := 50;
  FAnimateTimer.Enabled := False;
  FAnimateTimer.OnTimer := DoAnimate;
  Width := 50;
  Height := 50;
end;

destructor TspSkinAnimate.Destroy;
begin
  FAnimateTimer.Enabled := False;
  FAnimateTimer.Free;
  inherited;
end;

procedure TspSkinAnimate.SetActive;
begin
  FActive := Value;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty)
  then
    if FActive then Start else Stop;
end;

procedure TspSkinAnimate.SetTimerInterval;
begin
  FAnimateTimer.Interval := Value;
end;

function TspSkinAnimate.GetTimerInterval;
begin
  Result := FAnimateTimer.Interval;
end;

procedure TspSkinAnimate.DoAnimate;
begin
  if (FIndex = -1) and FDefaultImage.Empty then Exit;

  if FButtonMode and not FMouseIn
  then
    begin
      if Frame > 0 then Frame := Frame - 1 else Stop;
    end
  else
    begin
      if Frame = FramesCount
      then
        begin
          if FCycleMode then Frame := 0
        end
      else
        begin
          if Frame < FramesCount then Frame := Frame + 1 else Stop;
        end;
    end;
end;

procedure TspSkinAnimate.CMMouseEnter(var Message: TMessage);
begin
  inherited;
  if (csDesigning in ComponentState) then Exit;
  if (FIndex = -1) and FDefaultImage.Empty then Exit;
  FMouseIn := True;
  if FButtonMode then Start;
end;

procedure TspSkinAnimate.CMMouseLeave(var Message: TMessage);
begin
  inherited;
  if (csDesigning in ComponentState) then Exit;
  if (FIndex = -1) and FDefaultImage.Empty then Exit;
  FMouseIn := False;
  if FButtonMode then Start;
end;

procedure TspSkinAnimate.Start;
begin
  if not FCycleMode and not FButtonMode then FFrame := 1;
  FAnimateTimer.Enabled := True;
  if Assigned(FOnStart) then FOnStart(Self);
end;

procedure TspSkinAnimate.Stop;
begin
  FAnimateTimer.Enabled := False;
  if Assigned(FOnStop) then FOnStop(Self);
end;

constructor TspSkinFrameGauge.Create;
begin
  inherited;
  FMinValue := 0;
  FMaxValue := 100;
  FValue := 50;
  Width := 50;
  Height := 50;
end;

procedure TspSkinFrameGauge.ChangeSkinData;
begin
  inherited;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty)
  then CalcFrame;
end;

procedure TspSkinFrameGauge.CalcFrame;
var
  FValInc: Integer;
begin
  FValInc := (FMaxValue - FMinValue) div (FramesCount - 1);
  Frame := Abs(FValue - FMinValue) div FValInc + 1;
end;

procedure TspSkinFrameGauge.SetMinValue;
begin
  FMinValue := AValue;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty)
  then
    begin
      if FValue < FMinValue then FValue := FMinValue;
      CalcFrame;
    end;
end;

procedure TspSkinFrameGauge.SetMaxValue;
begin
  FMaxValue := AValue;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty)
  then
    begin
      if FValue > FMaxValue then FValue := FMaxValue;
      CalcFrame;
    end;
end;

procedure TspSkinFrameGauge.SetValue;
begin
  if (FValue = AValue) or (AValue > FMaxValue) or
     (AValue < FMinValue) then Exit;
  FValue := AValue;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty) then CalcFrame;
end;

constructor TspSkinFrameRegulator.Create;
begin
  inherited;
  FMinValue := 0;
  FMaxValue := 100;
  FValue := 50;
  Width := 50;
  Height := 50;
  FDown := False;
  FFrame := 1;
  Kind := rkRound;
end;

procedure TspSkinFrameRegulator.SetDefaultKind;
begin
  FDefaultKind := Value;
  Kind := FDefaultKind;
end;

procedure TspSkinFrameRegulator.CalcDefaultFrameSize;
begin
  inherited;
  Kind := FDefaultKind;
end;

procedure TspSkinFrameRegulator.ChangeSkinData;
begin
  inherited;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty) then CalcFrame;
end;

procedure TspSkinFrameRegulator.CalcValue;
var
  Offset: Integer;
  Plus: Boolean;
  FW: Integer;
  FC: Integer;
begin
  if (FIndex = -1) and not FDefaultImage.Empty then CalcDefaultFrameSize;

  FW := 0;

  case Kind of
    rkRound: if FrameW > FrameH then FW := FrameH else FW := FrameW;
    rkVertical: FW := FrameH;
    rkHorizontal: FW := FrameW;
  end;

  if FramesCount - 1 > 0 then FC := FramesCount - 1 else FC := 1;

  FPixInc := FW div FC;
  FValInc := (FMaxValue - FMinValue) div FC;

  if FPixInc = 0 then FPixInc := 1;
  if FValInc = 0 then FValInc := 1;

  Plus := CurV >= StartV;

  if Plus
  then Offset := CurV - StartV
  else Offset := StartV - CurV;

  if Offset >= FPixInc
  then
    begin
      StartV := CurV;
      if Plus
      then TempValue := TempValue + FValInc
      else TempValue := TempValue - FValInc;

      if TempValue < FMinValue then TempValue := FMinValue;
      if TempValue > FMaxValue then TempValue := FMaxValue;

      Value := TempValue;
    end;
end;

procedure TspSkinFrameRegulator.CalcRoundValue;
var
  Offset: Integer;
  Plus: Boolean;
  FW: Integer;
  FC: Integer;
  OffsetCount: Integer;
begin
  if (FIndex = -1) and not FDefaultImage.Empty then CalcDefaultFrameSize;
  if FramesCount - 1 > 0 then FC := FramesCount - 1 else FC := 1;

  FPixInc := 360 div FC;
  FValInc := (FMaxValue - FMinValue) div FC;

  if FPixInc = 0 then FPixInc := 1;
  if FValInc = 0 then FValInc := 1;

  if Abs(CurV - OldCurV) > 300
  then
    begin
      StartV := CurV;
      Offset := FPixInc;
      Plus := CurV < OldCurV
    end
  else
    begin
      Plus := CurV >= StartV;
      if Plus
      then Offset := CurV - StartV
      else Offset := StartV - CurV;
    end;

  if Offset >= FPixInc
  then
    begin
      StartV := CurV;
      if Plus
      then TempValue := TempValue + FValInc
      else TempValue := TempValue - FValInc;
      if TempValue < FMinValue then TempValue := FMinValue;
      if TempValue > FMaxValue then TempValue := FMaxValue;
      Value := TempValue;
    end;

end;

procedure TspSkinFrameRegulator.CalcFrame;
var
  FC: Integer;
begin
  if (FIndex = -1) and not FDefaultImage.Empty then CalcDefaultFrameSize;
  if FramesCount - 1 > 0 then FC := FramesCount - 1 else FC := 1;
  FValInc := (FMaxValue - FMinValue) div FC;
  Frame := Abs(FValue - FMinValue) div FValInc + 1;
end;

procedure TspSkinFrameRegulator.SetMinValue;
begin
  FMinValue := AValue;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty)
  then
    begin
      if FValue < FMinValue then FValue := FMinValue;
      CalcFrame;
    end;
end;

procedure TspSkinFrameRegulator.SetMaxValue;
begin
  FMaxValue := AValue;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty)
  then
    begin
      if FValue > FMaxValue then FValue := FMaxValue;
      CalcFrame;
    end;
end;

procedure TspSkinFrameRegulator.SetValue;
begin
  if (FValue = AValue) or (AValue > FMaxValue) or
     (AValue < FMinValue) then Exit;
  FValue := AValue;
  if (FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty) then CalcFrame;
  if Assigned(FOnChange) then FOnChange(Self);
end;

procedure TspSkinFrameRegulator.GetSkinData;
begin
  inherited;
  if (FIndex <> -1) 
  then
    if TspDataSkinControl(FSD.CtrlList.Items[FIndex]) is TspDataSkinFrameRegulator
    then
      with TspDataSkinFrameRegulator(FSD.CtrlList.Items[FIndex]) do
      begin
        Self.Kind := Kind;
      end;
end;

procedure TspSkinFrameRegulator.MouseDown;
begin
  FDown := True;
  TempValue := FValue;
  case Kind of
    rkRound:
      begin
        StartV := GetRoundValue(X, Y);
        OldCurV := StartV;
      end;
    rkVertical: StartV := -Y;
    rkHorizontal: StartV := X;
  end;
  inherited;
end;

procedure TspSkinFrameRegulator.MouseUp;
begin
  FDown := False;
  inherited;
end;

function TspSkinFrameRegulator.GetRoundValue(X, Y: Integer): Integer;
var
  CX, CY: Integer;
  X1, Y1: Integer;
  midAngle: Integer;
  sinMidAngle, MidAngle1: Double;
begin
  CX := Width div 2;
  CY := Height div 2;
  X1 := CX - X;
  Y1 := CY - Y;
  if (X <= CX) and (Y < CY) then midAngle := 90;
  if (X < CX) and (Y >= CY) then midAngle := 180;
  If (X >= CX) and (Y > CY) then midAngle := 270;
  If (X > CX) and (Y <= CY) Then midAngle := 0;
  if (midAngle = 0) or (midAngle = 180)
  then sinMidAngle := Abs(Trunc(Y1))/(Sqrt(Sqr(X1)+Sqr(Y1)));
  if (midAngle = 90) or (midAngle = 270)
  then sinMidAngle:= Abs(Trunc(X1))/(Sqrt(Sqr(X1)+Sqr(Y1)));
  midAngle1 := ArcTan(sinMidAngle/Sqrt(1-sqr(sinMidAngle)));
  midAngle1 := (midAngle1/Pi) * 180;
  midAngle := Trunc(midAngle + midAngle1);
  Result := 270 - MidAngle;
  if Result < 0 then Result := Result + 360;
end;

procedure TspSkinFrameRegulator.MouseMove;
begin
  if FDown and ((FIndex <> -1) or ((FIndex = -1) and not FDefaultImage.Empty))
  then
    begin
      case Kind of
        rkRound: CurV := GetRoundValue(X, Y);
        rkVertical: CurV := -Y;
        rkHorizontal: CurV := X;
      end;
      if Kind = rkRound then CalcRoundValue else CalcValue;
      OldCurV := CurV;
    end;
  inherited;
end;

constructor TspSkinBitLabel.Create;
begin
  inherited;
  Symbols := nil;
  Width := 100;
  Height := 20;
  FSkinDataName := 'bitlabel';
end;

function TspSkinBitLabel.GetFixWidth;
var
  LO, RO: Integer;
begin
  LO := ClRect.Left;
  RO := RectWidth(SkinRect) - ClRect.Right;
  Result := SymbolWidth * FFixLength + LO + RO;
end;

procedure TspSkinBitLabel.SetFixLength;
begin
  FFixLength := Value;
  if FFixLength > 0
  then
    begin
      FAutoSize := False;
      if FIndex <> -1
      then
        Width := GetFixWidth;
    end;
end;

procedure TspSkinBitLabel.CMTextChanged(var Message: TMessage);
begin
  if FAutoSize then AdjustBounds;
  RePaint;
end;

procedure TspSkinBitLabel.AdjustBounds;
var
  Offset: Integer;
begin
  if Align <> alNone then Exit;
  if FIndex = -1
  then Offset := 0
  else Offset := Length(Caption) * SymbolWidth - RectWidth(NewClRect);
  if Offset <> 0 then Width := Width + Offset;
end;

procedure TspSkinBitLabel.CalcSize;
var
  Offset: Integer;
begin
  inherited;
  if FFixLength > 0
  then
    begin
      if FIndex <> -1
      then
        W := GetFixWidth;
    end
  else
    begin
      if FIndex = -1
      then Offset := 0
      else Offset := Length(Caption) * SymbolWidth - RectWidth(NewClRect);
      if (Offset > 0) or FAutoSize then W := W + Offset;
    end;  
end;

procedure TspSkinBitLabel.CreateControlDefaultImage;
begin
  inherited;
  with B.Canvas do
  begin
    Brush.Style := bsClear;
    TextRect(Rect(1, 1, Width - 1, Height - 1), 2,
             Height div 2 - TextHeight(Caption) div 2,
             Caption);
  end;
end;

procedure TspSkinBitLabel.PaintLabel;
begin
  CreateSkinControlImage(B, Picture, SkinRect);
end;

procedure TspSkinBitLabel.GetSkinData;
begin
  inherited;
  if FIndex <> -1
  then
    if TspDataSkinControl(FSD.CtrlList.Items[FIndex]) is TspDataSkinBitLabelControl
    then
      begin
        with TspDataSkinBitLabelControl(FSD.CtrlList.Items[FIndex]) do
        begin
          Self.SkinTextRect := SkinTextRect;
          Self.SymbolWidth := SymbolWidth;
          Self.SymbolHeight := SymbolHeight;
          Self.Symbols := Symbols;
        end;
      end;
end;

procedure TspSkinBitLabel.CreateControlSkinImage;
var
  SymbolX, SymbolY: Integer;
  i: Integer;
  XO: Integer;
  LO, RO: Integer;

procedure GetSymbolPos(Ch: Char);
var
  i, j: Integer;
begin
  SymbolX := -1;
  SymbolY := -1;
  for i := 0 to Symbols.Count - 1 do
  begin
    j := Pos(Ch, Symbols[i]);
    if j <> 0
    then
      begin
        SymbolX := j - 1;
        SymbolY := i;
        Exit;
      end;
  end;
end;

begin
  inherited;
  LO := ClRect.Left;
  RO := RectWidth(SkinRect) - ClRect.Right;
  with B.Canvas do
  begin
    for i := 1 to Length(Caption) do
    begin
      if (i * SymbolWidth) > B.Width
      then XO := i * SymbolWidth - B.Width - LO - RO
      else XO := 0;
      GetSymbolPos(Caption[i]);
      if SymbolX <> -1
      then
        begin
          CopyRect(
            Rect(LO + (i - 1) * SymbolWidth, NewClRect.Top, LO + i * SymbolWidth - XO, NewClRect.Top + SymbolHeight),
            Picture.Canvas,
            Rect(SkinTextRect.Left + SymbolX * SymbolWidth,
                 SkinTextRect.Top + SymbolY * SymbolHeight,
                 SkinTextRect.Left + (SymbolX + 1) * SymbolWidth - XO,
                 SkinTextRect.Top + (SymbolY + 1) * SymbolHeight));
          if XO > 0 then Break;
        end;
    end;
  end;
end;

procedure TspSkinBitLabel.SetAutoSizeX;
begin
  FAutoSize := Value;
  AdjustBounds;
  RePaint;
end;


constructor TspSkinXFormButton.Create(AOwner: TComponent);
begin
  inherited;
  FDefImage := TBitMap.Create;
  FDefActiveImage := TBitMap.Create;
  FDefDownImage := TBitMap.Create;
  FDefMask := TBitMap.Create;
  CanFocused := False;
  FDefActiveFontColor := 0;
  FDefDownFontColor := 0;
end;

destructor TspSkinXFormButton.Destroy;
begin
  FDefImage.Free;
  FDefActiveImage.Free;
  FDefDownImage.Free;
  FDefMask.Free;
  inherited;
end;

procedure TspSkinXFormButton.SetControlRegion;
var
  TempRgn: HRGN;
begin
  if (FIndex = -1) and (FDefImage <> nil) and not FDefImage.Empty
  then
    begin
      TempRgn := FRgn;
      
      if FDefMask.Empty and (FRgn <> 0)
      then
        begin
          SetWindowRgn(Handle, 0, True);
        end
      else
        begin
          CreateSkinSimplyRegion(FRgn, FDefMask);
          SetWindowRgn(Handle, FRgn, True);
        end;
        
      if TempRgn <> 0 then DeleteObject(TempRgn);
    end
  else
    inherited;
end;

procedure TspSkinXFormButton.SetBounds;
begin
  inherited;
  if (FIndex = -1) and (FDefImage <> nil) and not FDefImage.Empty
  then
    begin
      if Width <> FDefImage.Width then Width := FDefImage.Width;
      if Height <> FDefImage.Height then Height := FDefImage.Height;
    end;
end;

procedure TspSkinXFormButton.DrawDefaultButton;
var
  IsDown: Boolean;
  R: TRect;
begin
  with C do
  begin
    R := ClientRect;
    Font.Assign(FDefaultFont);
    if (SkinData <> nil) and (SkinData.ResourceStrData <> nil)
    then
      Font.Charset := SkinData.ResourceStrData.CharSet
    else
      Font.Charset := FDefaultFont.CharSet;
    IsDown := FDown and (((FMouseIn or (IsFocused and not FMouseDown)) and
             (GroupIndex = 0)) or (GroupIndex  <> 0));
    if IsDown and not FDefDownImage.Empty
    then
      Draw(0, 0, FDefDownImage)
    else
    if (FMouseIn or IsFocused) and not FDefActiveImage.Empty
    then
      Draw(0, 0, FDefActiveImage)
    else
      Draw(0, 0, FDefImage);
    if IsDown
    then
      Font.Color := FDefDownFontColor
    else
    if FMouseIn or IsFocused
    then
      Font.Color := FDefActiveFontColor;
    DrawGlyphAndText(C, ClientRect, FMargin, FSpacing, FLayout,
     Caption, FGlyph, FNumGlyphs, GetGlyphNum(FDown, FMouseIn), IsDown, False, 0);
  end;
end;

procedure TspSkinXFormButton.CreateControlDefaultImage;
begin
  if (FIndex = -1) and not FDefImage.Empty
  then
    DrawDefaultButton(B.Canvas)
  else
    inherited;
end;

procedure TspSkinXFormButton.ChangeSkinData;
begin
  GetSkinData;
  if (FIndex = -1) and not FDefImage.Empty
  then
    begin
      Width := FDefImage.Width;
      Height := FDEfImage.Height;
      SetControlRegion;
      RePaint;
    end
  else
    inherited;
end;

procedure TspSkinXFormButton.SetDefImage(Value: TBitMap);
begin
  FDefImage.Assign(Value);
  if not FDefImage.Empty
  then
    begin
      DefaultHeight := FDefImage.Height;
      DefaultWidth := FDefImage.Width;
    end;
end;

procedure TspSkinXFormButton.SetDefActiveImage(Value: TBitMap);
begin
  FDefActiveImage.Assign(Value);
end;

procedure TspSkinXFormButton.SetDefDownImage(Value: TBitMap);
begin
  FDefDownImage.Assign(Value);
end;

procedure TspSkinXFormButton.SetDefMask(Value: TBitMap);
begin
  FDefMask.Assign(Value);
  if not FDefImage.Empty
  then
    SetControlRegion;
end;

procedure TspSkinXFormButton.Loaded;
begin
  inherited;
  if (FIndex = -1) and (FDefMask <> nil) and not FDefMask.Empty
  then
    SetControlRegion;
end;


constructor TspSkinLinkImage.Create(AOwner : TComponent);
begin
  inherited Create(AOwner);
  AutoSize := True;
  Cursor := crHandPoint;
end;

procedure TspSkinLinkImage.Click;
begin
  inherited Click;
  if FURL <> ''
  then
    ShellExecute(0, 'open', PChar(FURL), nil, nil, SW_SHOWNORMAL);
end;

constructor TspSkinLinkLabel.Create;
begin
  inherited;
  FUseUnderLine := True;
  FIndex := -1;
  Transparent := True;
  FSD := nil;
  FSkinDataName := 'stdlabel';
  FDefaultFont := TFont.Create;
  with FDefaultFont do
  begin
    Name := 'Arial';
    Height := 14;
    Style := [fsUnderLine];
  end;
  Font.Assign(FDefaultFont);
  Cursor := crHandPoint;
  FUseSkinFont := True;
  FDefaultActiveFontColor := clBlue;
  FURL := '';
end;

destructor TspSkinLinkLabel.Destroy;
begin
  FDefaultFont.Free;
  inherited;
end;

procedure TspSkinLinkLabel.SetUseUnderLine;
begin
  if FUseUnderLine <> Value
  then
    begin
      FUseUnderLine := Value;
      RePaint;
    end;
end;

procedure TspSkinLinkLabel.DoDrawText(var Rect: TRect; Flags: Longint);
var
  Text: string;
begin
 GetSkinData;

  Text := GetLabelText;
  if (Flags and DT_CALCRECT <> 0) and ((Text = '') or ShowAccelChar and
    (Text[1] = '&') and (Text[2] = #0)) then Text := Text + ' ';
  if not ShowAccelChar then Flags := Flags or DT_NOPREFIX;
  Flags := DrawTextBiDiModeFlags(Flags);

  if FIndex <> -1
  then
    with Canvas.Font do
    begin
      if FUseSkinFont
      then
        begin
          Name := FontName;
          Style := FontStyle;
          Height := FontHeight;
          if FUseUnderLine
          then
            Style := Style + [fsUnderLine]
          else
            Style := Style - [fsUnderLine];
        end
      else
        begin
          Canvas.Font := Self.Font;
          if FUseUnderLine
          then
            Style := Style + [fsUnderLine]
          else
            Style := Style - [fsUnderLine];
        end;  
      if (SkinData <> nil) and (SkinData.ResourceStrData <> nil)
      then
        Charset := SkinData.ResourceStrData.CharSet
      else
        CharSet := FDefaultFont.Charset;
      if FMouseIn
      then
        Color := ActiveFontColor
      else
        Color := FontColor;
    end
  else
    begin
      if FUseSkinFont
      then
        Canvas.Font := DefaultFont
      else
        Canvas.Font := Self.Font;

      if (SkinData <> nil) and (SkinData.ResourceStrData <> nil)
      then
        Canvas.Font.Charset := SkinData.ResourceStrData.CharSet
      else
        Canvas.Font.CharSet := FDefaultFont.Charset;

      if FMouseIn then Canvas.Font.Color := FDefaultActiveFontColor;
      Canvas.Font.Style := Canvas.Font.Style + [fsUnderLine];
    end;

  if not Enabled then
  begin
    OffsetRect(Rect, 1, 1);
    if FIndex <> -1
    then
      Canvas.Font.Color := FSD.SkinColors.cBtnHighLight
    else
      Canvas.Font.Color := clBtnHighlight;
    DrawText(Canvas.Handle, PChar(Text), Length(Text), Rect, Flags);
    OffsetRect(Rect, -1, -1);
    if FIndex <> -1
    then
      Canvas.Font.Color := FSD.SkinColors.cBtnShadow
    else
      Canvas.Font.Color := clBtnShadow;
    DrawText(Canvas.Handle, PChar(Text), Length(Text), Rect, Flags);
  end
  else
    begin
      if FUseUnderLine
      then
        Canvas.Font.Style := Canvas.Font.Style + [fsUnderLine]
      else
        Canvas.Font.Style := Canvas.Font.Style - [fsUnderLine];
      DrawText(Canvas.Handle, PChar(Text), Length(Text), Rect, Flags);
    end;
end;

procedure TspSkinLinkLabel.Click;
begin
  inherited;
  if FURL <> ''
  then
    ShellExecute(0, 'open', PChar(FURL), nil, nil, SW_SHOWNORMAL);
end;

procedure TspSkinLinkLabel.CMMouseEnter;
begin
  inherited;
  if (csDesigning in ComponentState) then Exit;
  FMouseIn := True;
  RePaint;
end;

procedure TspSkinLinkLabel.CMMouseLeave;
begin
  inherited;
  if (csDesigning in ComponentState) then Exit;
  FMouseIn := False;
  RePaint;
end;

procedure TspSkinLinkLabel.SetDefaultFont;
begin
  FDefaultFont.Assign(Value);
end;

procedure TspSkinLinkLabel.Notification;
begin
  inherited Notification(AComponent, Operation);
  if (Operation = opRemove) and (AComponent = FSD) then FSD := nil;
end;

procedure TspSkinLinkLabel.GetSkinData;
begin
  if (FSD = nil) or FSD.Empty
  then
    FIndex := -1
  else
    FIndex := FSD.GetControlIndex(FSkinDataName);
  if (FIndex <> -1)
  then
    if TspDataSkinControl(FSD.CtrlList.Items[FIndex]) is TspDataSkinStdLabelControl
    then
      with TspDataSkinStdLabelControl(FSD.CtrlList.Items[FIndex]) do
      begin
        Self.FontName := FontName;
        Self.FontColor := FontColor;
        Self.FontStyle := FontStyle;
        Self.FontHeight := FontHeight;
        Self.ActiveFontColor := ActiveFontColor;
      end
end;

procedure TspSkinLinkLabel.ChangeSkinData;
begin
  GetSkinData;
  RePaint;
end;

procedure TspSkinLinkLabel.SetSkinData;
begin
  FSD := Value;
  if (FSD <> nil) then ChangeSkinData;
end;

end.
