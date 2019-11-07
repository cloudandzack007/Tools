// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SkinExCtrls.pas' rev: 6.00

#ifndef SkinExCtrlsHPP
#define SkinExCtrlsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <StdCtrls.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
#include <SPUtils.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Skinexctrls
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TspSkinAnimateGauge;
class PASCALIMPLEMENTATION TspSkinAnimateGauge : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
protected:
	bool FImitation;
	int FCountFrames;
	int FAnimationFrame;
	Extctrls::TTimer* FAnimationPauseTimer;
	Extctrls::TTimer* FAnimationTimer;
	int FAnimationPause;
	AnsiString FProgressText;
	bool FShowProgressText;
	void __fastcall OnAnimationPauseTimer(System::TObject* Sender);
	void __fastcall OnAnimationTimer(System::TObject* Sender);
	void __fastcall SetShowProgressText(bool Value);
	void __fastcall SetProgressText(AnsiString Value);
	virtual void __fastcall GetSkinData(void);
	void __fastcall CreateImage(Graphics::TBitmap* B);
	void __fastcall DrawProgressText(Graphics::TCanvas* C);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	Types::TRect __fastcall GetAnimationFrameRect();
	virtual void __fastcall CalcSize(int &W, int &H);
	Types::TRect __fastcall CalcProgressRect();
	void __fastcall StartInternalAnimation(void);
	void __fastcall StopInternalAnimation(void);
	
public:
	#pragma pack(push, 1)
	Types::TRect ProgressRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ProgressArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewProgressArea;
	#pragma pack(pop)
	
	int BeginOffset;
	int EndOffset;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	bool ProgressTransparent;
	Graphics::TColor ProgressTransparentColor;
	bool ProgressStretch;
	int AnimationBeginOffset;
	int AnimationEndOffset;
	#pragma pack(push, 1)
	Types::TRect AnimationSkinRect;
	#pragma pack(pop)
	
	int AnimationCountFrames;
	int AnimationTimerInterval;
	__fastcall virtual TspSkinAnimateGauge(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinAnimateGauge(void);
	void __fastcall StartAnimation(void);
	void __fastcall StopAnimation(void);
	void __fastcall SetAnimationPause(int Value);
	virtual void __fastcall ChangeSkinData(void);
	
__published:
	__property AnsiString ProgressText = {read=FProgressText, write=SetProgressText};
	__property bool ShowProgressText = {read=FShowProgressText, write=SetShowProgressText, nodefault};
	__property int AnimationPause = {read=FAnimationPause, write=SetAnimationPause, nodefault};
	__property Align  = {default=0};
	__property Enabled  = {default=1};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property PopupMenu ;
	__property ShowHint ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinAnimateGauge(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinShadowLabel;
class PASCALIMPLEMENTATION TspSkinShadowLabel : public Skinctrls::TspGraphicSkinControl 
{
	typedef Skinctrls::TspGraphicSkinControl inherited;
	
private:
	Controls::TWinControl* FFocusControl;
	Classes::TAlignment FAlignment;
	bool FAutoSize;
	Stdctrls::TTextLayout FLayout;
	bool FWordWrap;
	bool FShowAccelChar;
	bool FUseSkinColor;
	void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetFocusControl(Controls::TWinControl* Value);
	void __fastcall SetShowAccelChar(bool Value);
	void __fastcall SetLayout(Stdctrls::TTextLayout Value);
	void __fastcall SetWordWrap(bool Value);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMDialogChar(Messages::TWMKey &Message);
	
protected:
	DYNAMIC void __fastcall AdjustBounds(void);
	DYNAMIC void __fastcall DoDrawText(Graphics::TCanvas* Cnvs, Types::TRect &Rect, int Flags);
	virtual AnsiString __fastcall GetLabelText();
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall Paint(void);
	HIDESBASE void __fastcall SetAutoSize(bool Value);
	HIDESBASE MESSAGE void __fastcall WMMOVE(Messages::TWMMove &Msg);
	
public:
	__fastcall virtual TspSkinShadowLabel(Classes::TComponent* AOwner);
	
__published:
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, nodefault};
	__property Stdctrls::TTextLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Controls::TWinControl* FocusControl = {read=FFocusControl, write=SetFocusControl};
	__property bool ShowAccelChar = {read=FShowAccelChar, write=SetShowAccelChar, default=1};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
	__property Caption ;
	__property bool UseSkinColor = {read=FUseSkinColor, write=FUseSkinColor, nodefault};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property ParentBiDiMode  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnMouseEnter ;
	__property OnMouseLeave ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TspGraphicSkinControl.Destroy */ inline __fastcall virtual ~TspSkinShadowLabel(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinWaveLabel;
class PASCALIMPLEMENTATION TspSkinWaveLabel : public Skinctrls::TspGraphicSkinControl 
{
	typedef Skinctrls::TspGraphicSkinControl inherited;
	
private:
	int FXDiv;
	int FYDiv;
	int FRatioVal;
	bool FUseSkinColor;
	bool FAntialiasing;
	Classes::TAlignment FAlignment;
	void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetXDiv(int Value);
	void __fastcall SetYDiv(int Value);
	void __fastcall SetRatioVal(int Value);
	void __fastcall SetAntialiasing(bool Value);
	
protected:
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMOVE(Messages::TWMMove &Msg);
	
public:
	virtual void __fastcall Paint(void);
	__fastcall virtual TspSkinWaveLabel(Classes::TComponent* AOwner);
	
__published:
	__property bool Antialiasing = {read=FAntialiasing, write=SetAntialiasing, nodefault};
	__property bool UseSkinColor = {read=FUseSkinColor, write=FUseSkinColor, nodefault};
	__property int XDiv = {read=FXDiv, write=SetXDiv, nodefault};
	__property int YDiv = {read=FYDiv, write=SetYDiv, nodefault};
	__property int RatioVal = {read=FRatioVal, write=SetRatioVal, nodefault};
	__property Caption ;
	__property Font ;
	__property Align  = {default=0};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, nodefault};
	__property Anchors  = {default=3};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TspGraphicSkinControl.Destroy */ inline __fastcall virtual ~TspSkinWaveLabel(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspFrameSkinControl;
class PASCALIMPLEMENTATION TspFrameSkinControl : public Skinctrls::TspSkinControl 
{
	typedef Skinctrls::TspSkinControl inherited;
	
protected:
	HRGN FRgn;
	int FFrame;
	int FrameW;
	int FrameH;
	Graphics::TBitmap* Picture;
	Graphics::TBitmap* MaskPicture;
	Graphics::TBitmap* FDefaultImage;
	Graphics::TBitmap* FDefaultMask;
	int FDefaultFramesCount;
	Skindata::TFramesPlacement FDefaultFramesPlacement;
	virtual void __fastcall CalcDefaultFrameSize(void);
	void __fastcall SetDefaultImage(Graphics::TBitmap* Value);
	void __fastcall SetDefaultMask(Graphics::TBitmap* Value);
	void __fastcall SetDefaultFramesCount(int Value);
	void __fastcall SetDefaultFramesPlacement(Skindata::TFramesPlacement Value);
	void __fastcall SetFrame(int Value);
	void __fastcall SetControlRegion(void);
	virtual void __fastcall GetSkinData(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall Loaded(void);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	
public:
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	int FramesCount;
	Skindata::TFramesPlacement FramesPlacement;
	__fastcall virtual TspFrameSkinControl(Classes::TComponent* AOwner);
	__fastcall virtual ~TspFrameSkinControl(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall ChangeSkinData(void);
	__property int Frame = {read=FFrame, write=SetFrame, nodefault};
	
__published:
	__property Graphics::TBitmap* DefaultImage = {read=FDefaultImage, write=SetDefaultImage};
	__property Graphics::TBitmap* DefaultMask = {read=FDefaultMask, write=SetDefaultMask};
	__property Skindata::TFramesPlacement DefaultFramesPlacement = {read=FDefaultFramesPlacement, write=SetDefaultFramesPlacement, nodefault};
	__property int DefaultFramesCount = {read=FDefaultFramesCount, write=SetDefaultFramesCount, nodefault};
	__property ShowHint ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspFrameSkinControl(HWND ParentWindow) : Skinctrls::TspSkinControl(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspSkinSwitchState { swOff, swOn };
#pragma option pop

class DELPHICLASS TspSkinSwitch;
class PASCALIMPLEMENTATION TspSkinSwitch : public TspFrameSkinControl 
{
	typedef TspFrameSkinControl inherited;
	
protected:
	Extctrls::TTimer* FAnimateTimer;
	TspSkinSwitchState FState;
	Classes::TNotifyEvent FOnChange;
	bool FMouseIn;
	unsigned __fastcall GetTimerInterval(void);
	void __fastcall SetTimerInterval(unsigned Value);
	void __fastcall SetState(TspSkinSwitchState Value);
	void __fastcall ChangeState(TspSkinSwitchState Value);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	void __fastcall DoAnimate(System::TObject* Sender);
	void __fastcall Start(void);
	void __fastcall Stop(void);
	
public:
	__fastcall virtual TspSkinSwitch(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinSwitch(void);
	virtual void __fastcall ChangeSkinData(void);
	
__published:
	__property unsigned TimerInterval = {read=GetTimerInterval, write=SetTimerInterval, nodefault};
	__property TspSkinSwitchState State = {read=FState, write=SetState, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnClick ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinSwitch(HWND ParentWindow) : TspFrameSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinAnimate;
class PASCALIMPLEMENTATION TspSkinAnimate : public TspFrameSkinControl 
{
	typedef TspFrameSkinControl inherited;
	
protected:
	Extctrls::TTimer* FAnimateTimer;
	bool FCycleMode;
	bool FButtonMode;
	bool FMouseIn;
	Classes::TNotifyEvent FOnStart;
	Classes::TNotifyEvent FOnStop;
	bool FActive;
	void __fastcall SetActive(bool Value);
	unsigned __fastcall GetTimerInterval(void);
	void __fastcall SetTimerInterval(unsigned Value);
	void __fastcall DoAnimate(System::TObject* Sender);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	
public:
	__fastcall virtual TspSkinAnimate(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinAnimate(void);
	void __fastcall Start(void);
	void __fastcall Stop(void);
	
__published:
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property Enabled  = {default=1};
	__property bool CycleMode = {read=FCycleMode, write=FCycleMode, nodefault};
	__property bool ButtonMode = {read=FButtonMode, write=FButtonMode, nodefault};
	__property unsigned TimerInterval = {read=GetTimerInterval, write=SetTimerInterval, nodefault};
	__property Classes::TNotifyEvent OnStart = {read=FOnStart, write=FOnStart};
	__property Classes::TNotifyEvent OnStop = {read=FOnStop, write=FOnStop};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnClick ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinAnimate(HWND ParentWindow) : TspFrameSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFrameGauge;
class PASCALIMPLEMENTATION TspSkinFrameGauge : public TspFrameSkinControl 
{
	typedef TspFrameSkinControl inherited;
	
protected:
	int FMinValue;
	int FMaxValue;
	int FValue;
	bool FVertical;
	Classes::TNotifyEvent FOnChange;
	void __fastcall SetMinValue(int AValue);
	void __fastcall SetMaxValue(int AValue);
	void __fastcall SetValue(int AValue);
	void __fastcall CalcFrame(void);
	
public:
	virtual void __fastcall ChangeSkinData(void);
	__fastcall virtual TspSkinFrameGauge(Classes::TComponent* AOwner);
	
__published:
	__property int Value = {read=FValue, write=SetValue, nodefault};
	__property int MinValue = {read=FMinValue, write=SetMinValue, nodefault};
	__property int MaxValue = {read=FMaxValue, write=SetMaxValue, nodefault};
	__property Align  = {default=0};
	__property Enabled  = {default=1};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property PopupMenu ;
	__property ShowHint ;
public:
	#pragma option push -w-inl
	/* TspFrameSkinControl.Destroy */ inline __fastcall virtual ~TspSkinFrameGauge(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinFrameGauge(HWND ParentWindow) : TspFrameSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFrameRegulator;
class PASCALIMPLEMENTATION TspSkinFrameRegulator : public TspFrameSkinControl 
{
	typedef TspFrameSkinControl inherited;
	
protected:
	int FPixInc;
	int FValInc;
	bool FDown;
	int StartV;
	int CurV;
	int OldCurV;
	int TempValue;
	int FMinValue;
	int FMaxValue;
	int FValue;
	Classes::TNotifyEvent FOnChange;
	Skindata::TRegulatorKind FDefaultKind;
	int __fastcall GetRoundValue(int X, int Y);
	virtual void __fastcall CalcDefaultFrameSize(void);
	void __fastcall SetDefaultKind(Skindata::TRegulatorKind Value);
	void __fastcall SetMinValue(int AValue);
	void __fastcall SetMaxValue(int AValue);
	void __fastcall SetValue(int AValue);
	virtual void __fastcall GetSkinData(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	void __fastcall CalcValue(void);
	void __fastcall CalcRoundValue(void);
	void __fastcall CalcFrame(void);
	
public:
	Skindata::TRegulatorKind Kind;
	__fastcall virtual TspSkinFrameRegulator(Classes::TComponent* AOwner);
	virtual void __fastcall ChangeSkinData(void);
	
__published:
	__property Skindata::TRegulatorKind DefaultKind = {read=FDefaultKind, write=SetDefaultKind, nodefault};
	__property int Value = {read=FValue, write=SetValue, nodefault};
	__property int MinValue = {read=FMinValue, write=SetMinValue, nodefault};
	__property int MaxValue = {read=FMaxValue, write=SetMaxValue, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Align  = {default=0};
	__property Enabled  = {default=1};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property PopupMenu ;
	__property ShowHint ;
public:
	#pragma option push -w-inl
	/* TspFrameSkinControl.Destroy */ inline __fastcall virtual ~TspSkinFrameRegulator(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinFrameRegulator(HWND ParentWindow) : TspFrameSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinBitLabel;
class PASCALIMPLEMENTATION TspSkinBitLabel : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
protected:
	bool FAutoSize;
	int FFixLength;
	int __fastcall GetFixWidth(void);
	void __fastcall SetFixLength(int Value);
	void __fastcall AdjustBounds(void);
	virtual void __fastcall GetSkinData(void);
	void __fastcall PaintLabel(Graphics::TBitmap* B);
	virtual void __fastcall CalcSize(int &W, int &H);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	
public:
	#pragma pack(push, 1)
	Types::TRect SkinTextRect;
	#pragma pack(pop)
	
	int SymbolWidth;
	int SymbolHeight;
	Classes::TStrings* Symbols;
	void __fastcall SetAutoSizeX(bool Value);
	__fastcall virtual TspSkinBitLabel(Classes::TComponent* AOwner);
	
__published:
	__property Caption ;
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSizeX, nodefault};
	__property int FixLength = {read=FFixLength, write=SetFixLength, nodefault};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomControl.Destroy */ inline __fastcall virtual ~TspSkinBitLabel(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinBitLabel(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinXFormButton;
class PASCALIMPLEMENTATION TspSkinXFormButton : public Skinctrls::TspSkinButton 
{
	typedef Skinctrls::TspSkinButton inherited;
	
private:
	Graphics::TBitmap* FDefImage;
	Graphics::TBitmap* FDefActiveImage;
	Graphics::TBitmap* FDefDownImage;
	Graphics::TBitmap* FDefMask;
	Graphics::TColor FDefActiveFontColor;
	Graphics::TColor FDefDownFontColor;
	void __fastcall SetDefImage(Graphics::TBitmap* Value);
	void __fastcall SetDefActiveImage(Graphics::TBitmap* Value);
	void __fastcall SetDefDownImage(Graphics::TBitmap* Value);
	void __fastcall SetDefMask(Graphics::TBitmap* Value);
	
protected:
	virtual void __fastcall SetControlRegion(void);
	void __fastcall DrawDefaultButton(Graphics::TCanvas* C);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TspSkinXFormButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinXFormButton(void);
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property Graphics::TBitmap* DefImage = {read=FDefImage, write=SetDefImage};
	__property Graphics::TBitmap* DefActiveImage = {read=FDefActiveImage, write=SetDefActiveImage};
	__property Graphics::TBitmap* DefDownImage = {read=FDefDownImage, write=SetDefDownImage};
	__property Graphics::TBitmap* DefMask = {read=FDefMask, write=SetDefMask};
	__property Graphics::TColor DefActiveFontColor = {read=FDefActiveFontColor, write=FDefActiveFontColor, nodefault};
	__property Graphics::TColor DefDownFontColor = {read=FDefDownFontColor, write=FDefDownFontColor, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinXFormButton(HWND ParentWindow) : Skinctrls::TspSkinButton(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinLinkImage;
class PASCALIMPLEMENTATION TspSkinLinkImage : public Extctrls::TImage 
{
	typedef Extctrls::TImage inherited;
	
private:
	AnsiString FURL;
	
protected:
	DYNAMIC void __fastcall Click(void);
	
public:
	__fastcall virtual TspSkinLinkImage(Classes::TComponent* AOwner);
	
__published:
	__property AnsiString URL = {read=FURL, write=FURL};
public:
	#pragma option push -w-inl
	/* TImage.Destroy */ inline __fastcall virtual ~TspSkinLinkImage(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinLinkLabel;
class PASCALIMPLEMENTATION TspSkinLinkLabel : public Stdctrls::TCustomLabel 
{
	typedef Stdctrls::TCustomLabel inherited;
	
protected:
	bool FMouseIn;
	int FIndex;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	Graphics::TColor FDefaultActiveFontColor;
	bool FUseUnderLine;
	AnsiString FURL;
	void __fastcall SetUseUnderLine(bool Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	__property Transparent  = {default=0};
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	void __fastcall GetSkinData(void);
	DYNAMIC void __fastcall DoDrawText(Types::TRect &Rect, int Flags);
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	__fastcall virtual TspSkinLinkLabel(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinLinkLabel(void);
	void __fastcall ChangeSkinData(void);
	DYNAMIC void __fastcall Click(void);
	
__published:
	__property bool UseUnderLine = {read=FUseUnderLine, write=SetUseUnderLine, nodefault};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Graphics::TColor DefaultActiveFontColor = {read=FDefaultActiveFontColor, write=FDefaultActiveFontColor, nodefault};
	__property AnsiString URL = {read=FURL, write=FURL};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Font ;
	__property Align  = {default=0};
	__property Alignment  = {default=0};
	__property Anchors  = {default=3};
	__property AutoSize  = {default=1};
	__property BiDiMode ;
	__property Caption ;
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property FocusControl ;
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowAccelChar  = {default=1};
	__property ShowHint ;
	__property Layout  = {default=0};
	__property Visible  = {default=1};
	__property WordWrap  = {default=0};
	__property OnClick ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Skinexctrls */
using namespace Skinexctrls;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SkinExCtrls
