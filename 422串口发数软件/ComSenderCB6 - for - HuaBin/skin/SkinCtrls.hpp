// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SkinCtrls.pas' rev: 6.00

#ifndef SkinCtrlsHPP
#define SkinCtrlsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ToolWin.hpp>	// Pascal unit
#include <SPUtils.hpp>	// Pascal unit
#include <SkinHint.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <SkinMenus.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <spEffBmp.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
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

namespace Skinctrls
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 1)
struct TspControlButton
{
	Types::TRect R;
	bool MouseIn;
	bool Down;
	bool Visible;
} ;
#pragma pack(pop)

class DELPHICLASS TspSkinControl;
class PASCALIMPLEMENTATION TspSkinControl : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
protected:
	bool FromWMPaint;
	Skindata::TspSkinData* FSD;
	AnsiString FAreaName;
	AnsiString FSkinDataName;
	HRGN FRgn;
	bool FDrawDefault;
	int CursorIndex;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FUseSkinCursor;
	AnsiString FHintTitle;
	int FHintImageIndex;
	Imglist::TCustomImageList* FHintImageList;
	virtual void __fastcall SetAlphaBlend(bool AValue);
	virtual void __fastcall SetAlphaBlendValue(Byte AValue);
	virtual void __fastcall Paint(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall WMMOVE(Messages::TWMMove &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	virtual void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall SetSkinDataName(AnsiString Value);
	MESSAGE void __fastcall WMCHECKPARENTBG(Messages::TWMEraseBkgnd &Msg);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	
public:
	int FIndex;
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall BeforeChangeSkinData(void);
	__fastcall virtual ~TspSkinControl(void);
	__fastcall virtual TspSkinControl(Classes::TComponent* AOwner);
	virtual void __fastcall CheckParentBackground(void);
	void __fastcall CheckControlsBackground(void);
	
__published:
	__property AnsiString HintTitle = {read=FHintTitle, write=FHintTitle};
	__property int HintImageIndex = {read=FHintImageIndex, write=FHintImageIndex, nodefault};
	__property Imglist::TCustomImageList* HintImageList = {read=FHintImageList, write=FHintImageList};
	__property Anchors  = {default=3};
	__property TabOrder  = {default=-1};
	__property Visible  = {default=1};
	__property bool DrawDefault = {read=FDrawDefault, write=FDrawDefault, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString AreaName = {read=FAreaName, write=FAreaName};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=SetSkinDataName};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property bool AlphaBlend = {read=FAlphaBlend, write=SetAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=SetAlphaBlendValue, nodefault};
	__property bool UseSkinCursor = {read=FUseSkinCursor, write=FUseSkinCursor, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinControl(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCustomControl;
class PASCALIMPLEMENTATION TspSkinCustomControl : public TspSkinControl 
{
	typedef TspSkinControl inherited;
	
protected:
	bool FForceBackground;
	bool FDrawbackground;
	bool FUseSkinFont;
	int FDefaultWidth;
	int FDefaultHeight;
	Graphics::TFont* FDefaultFont;
	#pragma pack(push, 1)
	Types::TPoint LTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewClRect;
	#pragma pack(pop)
	
	Graphics::TBitmap* Picture;
	Graphics::TBitmap* MaskPicture;
	int ResizeMode;
	bool StretchEffect;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	Sputils::TspStretchType StretchType;
	void __fastcall OnDefaultFontChange(System::TObject* Sender);
	void __fastcall SetDefaultWidth(int Value);
	void __fastcall SetDefaultHeight(int Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	virtual void __fastcall DefaultFontChange(void);
	Types::TRect __fastcall GetNewRect(const Types::TRect &R);
	int __fastcall GetResizeMode(void);
	virtual void __fastcall CalcSize(int &W, int &H);
	void __fastcall CreateSkinControlImage(Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R);
	virtual void __fastcall GetSkinData(void);
	void __fastcall CreateControlRegion(void);
	virtual void __fastcall SetControlRegion(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	int __fastcall GetRealClientWidth(void);
	int __fastcall GetRealClientHeight(void);
	int __fastcall GetRealClientLeft(void);
	int __fastcall GetRealClientTop(void);
	
public:
	__fastcall virtual TspSkinCustomControl(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomControl(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall ChangeSkinData(void);
	__property Types::TRect RealClientRect = {read=NewClRect};
	__property int RealClientWidth = {read=GetRealClientWidth, nodefault};
	__property int RealClientHeight = {read=GetRealClientHeight, nodefault};
	__property int RealClientLeft = {read=GetRealClientLeft, nodefault};
	__property int RealClientTop = {read=GetRealClientTop, nodefault};
	__property bool ForcebackGround = {read=FForceBackground, write=FForceBackground, nodefault};
	__property bool DrawbackGround = {read=FDrawbackground, write=FDrawbackground, nodefault};
	virtual void __fastcall Paint(void);
	
__published:
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property int DefaultWidth = {read=FDefaultWidth, write=SetDefaultWidth, nodefault};
	__property int DefaultHeight = {read=FDefaultHeight, write=SetDefaultHeight, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomControl(HWND ParentWindow) : TspSkinControl(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspSkinBorderStyle { bvFrame, bvRaised, bvLowered, bvNone };
#pragma option pop

typedef Shortint TspSkinPanelNumGlyphs;

#pragma option push -b-
enum TspImagePosition { spipDefault, spipLeft };
#pragma option pop

class DELPHICLASS TspSkinPanel;
class PASCALIMPLEMENTATION TspSkinPanel : public TspSkinCustomControl 
{
	typedef TspSkinCustomControl inherited;
	
protected:
	bool FInChangingRollUp;
	TspImagePosition FImagePosition;
	bool FTransparentMode;
	int FCMaxWidth;
	int FCMinWidth;
	int FCMaxHeight;
	int FCMinHeight;
	Classes::TNotifyEvent FOnChangeRollUpState;
	bool FCheckedMode;
	bool FChecked;
	Classes::TNotifyEvent FOnChecked;
	bool FAutoEnabledControls;
	Graphics::TBitmap* FGlyph;
	TspSkinPanelNumGlyphs FNumGlyphs;
	int FSpacing;
	int FRealHeight;
	bool FRollUpState;
	bool FRollUpMode;
	bool FCaptionMode;
	TspSkinBorderStyle FBorderStyle;
	int FDefaultCaptionHeight;
	Classes::TAlignment FDefaultAlignment;
	Imglist::TCustomImageList* FCaptionImageList;
	int FCaptionImageIndex;
	Types::TRect __fastcall GetTranparentClientRect();
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetTransparentMode(bool Value);
	void __fastcall SetCaptionImageIndex(int Value);
	void __fastcall SetCheckedMode(bool Value);
	void __fastcall SetChecked(bool Value);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	void __fastcall SetNumGlyphs(TspSkinPanelNumGlyphs Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetRollUpMode(bool Value);
	void __fastcall SetDefaultAlignment(Classes::TAlignment Value);
	virtual void __fastcall SetDefaultCaptionHeight(int Value);
	void __fastcall SetBorderStyle(TspSkinBorderStyle Value);
	void __fastcall SetRollUpState(bool Value);
	virtual void __fastcall SetCaptionMode(bool Value);
	virtual void __fastcall SetAlphaBlend(bool AValue);
	virtual void __fastcall SetAlphaBlendValue(Byte AValue);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall AdjustClientRect(Types::TRect &Rect);
	virtual void __fastcall GetSkinData(void);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	void __fastcall HideControls(void);
	void __fastcall ShowControls(void);
	void __fastcall SkinDrawCheckImage(int X, int Y, Graphics::TCanvas* Cnvs, const Types::TRect &IR, Graphics::TCanvas* DestCnvs);
	HIDESBASE MESSAGE void __fastcall WMMOVE(Messages::TWMMove &Msg);
	HIDESBASE MESSAGE void __fastcall WMCHECKPARENTBG(Messages::TWMEraseBkgnd &Msg);
	virtual void __fastcall PaintTransparent(Graphics::TCanvas* C);
	void __fastcall SetImagePosition(TspImagePosition Value);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Classes::TAlignment Alignment;
	#pragma pack(push, 1)
	Types::TRect CaptionRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewCaptionRect;
	#pragma pack(pop)
	
	int BGPictureIndex;
	#pragma pack(push, 1)
	Types::TRect CheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MarkFrameRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FrameRect;
	#pragma pack(pop)
	
	int FrameLeftOffset;
	int FrameRightOffset;
	#pragma pack(push, 1)
	Types::TRect FrameTextRect;
	#pragma pack(pop)
	
	__fastcall virtual TspSkinPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinPanel(void);
	virtual void __fastcall ChangeSkinData(void);
	void __fastcall DoRollUp(bool ARollUp);
	virtual void __fastcall Paint(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	Types::TRect __fastcall GetSkinClientRect();
	
__published:
	__property TspImagePosition ImagePosition = {read=FImagePosition, write=SetImagePosition, nodefault};
	__property bool TransparentMode = {read=FTransparentMode, write=SetTransparentMode, nodefault};
	__property Imglist::TCustomImageList* CaptionImageList = {read=FCaptionImageList, write=FCaptionImageList};
	__property int CaptionImageIndex = {read=FCaptionImageIndex, write=SetCaptionImageIndex, nodefault};
	__property int RealHeight = {read=FRealHeight, write=FRealHeight, nodefault};
	__property bool AutoEnabledControls = {read=FAutoEnabledControls, write=FAutoEnabledControls, nodefault};
	__property bool CheckedMode = {read=FCheckedMode, write=SetCheckedMode, nodefault};
	__property bool Checked = {read=FChecked, write=SetChecked, nodefault};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property TspSkinPanelNumGlyphs NumGlyphs = {read=FNumGlyphs, write=SetNumGlyphs, nodefault};
	__property int Spacing = {read=FSpacing, write=SetSpacing, nodefault};
	__property Classes::TAlignment DefaultAlignment = {read=FDefaultAlignment, write=SetDefaultAlignment, nodefault};
	__property int DefaultCaptionHeight = {read=FDefaultCaptionHeight, write=SetDefaultCaptionHeight, nodefault};
	__property TspSkinBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, nodefault};
	__property bool CaptionMode = {read=FCaptionMode, write=SetCaptionMode, nodefault};
	__property bool RollUpMode = {read=FRollUpMode, write=SetRollUpMode, nodefault};
	__property bool RollUpState = {read=FRollUpState, write=SetRollUpState, nodefault};
	__property Constraints ;
	__property Caption ;
	__property Align  = {default=0};
	__property AutoSize  = {default=0};
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property Classes::TNotifyEvent OnChecked = {read=FOnChecked, write=FOnChecked};
	__property Classes::TNotifyEvent OnChangeRollUpState = {read=FOnChangeRollUpState, write=FOnChangeRollUpState};
	__property OnCanResize ;
	__property OnClick ;
	__property OnConstrainedResize ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetSiteInfo ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property OnUnDock ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinPanel(HWND ParentWindow) : TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TspPaintPanelEvent)(Graphics::TCanvas* Cnvs, const Types::TRect &R);

class DELPHICLASS TspSkinPaintPanel;
class PASCALIMPLEMENTATION TspSkinPaintPanel : public TspSkinPanel 
{
	typedef TspSkinPanel inherited;
	
private:
	TspPaintPanelEvent FOnPanelPaint;
	
protected:
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	virtual void __fastcall PaintTransparent(Graphics::TCanvas* C);
	
public:
	__fastcall virtual TspSkinPaintPanel(Classes::TComponent* AOwner);
	
__published:
	__property TspPaintPanelEvent OnPanelPaint = {read=FOnPanelPaint, write=FOnPanelPaint};
public:
	#pragma option push -w-inl
	/* TspSkinPanel.Destroy */ inline __fastcall virtual ~TspSkinPaintPanel(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinPaintPanel(HWND ParentWindow) : TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspExPanelRollKind { rkRollHorizontal, rkRollVertical };
#pragma option pop

class DELPHICLASS TspSkinExPanel;
class PASCALIMPLEMENTATION TspSkinExPanel : public TspSkinCustomControl 
{
	typedef TspSkinCustomControl inherited;
	
private:
	int FCMaxWidth;
	int FCMinWidth;
	int FCMaxHeight;
	int FCMinHeight;
	Graphics::TBitmap* FGlyph;
	TspSkinPanelNumGlyphs FNumGlyphs;
	int FSpacing;
	Classes::TNotifyEvent FOnChangeRollState;
	Classes::TNotifyEvent FOnClose;
	bool StopCheckSize;
	bool FRollState;
	TspExPanelRollKind FRollKind;
	int FDefaultCaptionHeight;
	int FRealWidth;
	int FRealHEight;
	bool FShowRollButton;
	bool FShowCloseButton;
	Imglist::TCustomImageList* FCaptionImageList;
	int FCaptionImageIndex;
	bool FMoveable;
	bool FSizeable;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetCaptionImageIndex(int Value);
	int __fastcall GetRollWidth(void);
	int __fastcall GetRollHeight(void);
	void __fastcall SetShowRollButton(bool Value);
	void __fastcall SetShowCloseButton(bool Value);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	void __fastcall SetNumGlyphs(TspSkinPanelNumGlyphs Value);
	void __fastcall SetSpacing(int Value);
	
protected:
	TspControlButton Buttons[2];
	int OldActiveButton;
	int ActiveButton;
	int CaptureButton;
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	void __fastcall SetDefaultCaptionHeight(int Value);
	virtual void __fastcall AdjustClientRect(Types::TRect &Rect);
	void __fastcall HideControls(void);
	void __fastcall ShowControls(void);
	void __fastcall SetRollState(bool Value);
	void __fastcall SetRollKind(TspExPanelRollKind Value);
	void __fastcall ButtonDown(int I, int X, int Y);
	void __fastcall ButtonUp(int I, int X, int Y);
	void __fastcall ButtonEnter(int I);
	void __fastcall ButtonLeave(int I);
	void __fastcall DrawButton(Graphics::TCanvas* Cnvs, int i);
	void __fastcall TestActive(int X, int Y);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	virtual void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	MESSAGE void __fastcall WMSIZING(Messages::TWMSize &Message);
	
public:
	#pragma pack(push, 1)
	Types::TRect RollHSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RollVSkinRect;
	#pragma pack(pop)
	
	int RollLeftOffset;
	int RollRightOffset;
	int RollTopOffset;
	int RollBottomOffset;
	#pragma pack(push, 1)
	Types::TRect RollVCaptionRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RollHCaptionRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRollButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRollButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRollButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRestoreButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRestoreButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRestoreButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRollButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRollButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRollButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRestoreButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRestoreButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRestoreButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CaptionRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	bool ButtonsTransparent;
	Graphics::TColor ButtonsTransparentColor;
	__fastcall virtual TspSkinExPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinExPanel(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall ChangeSkinData(void);
	void __fastcall Close(void);
	
__published:
	__property Imglist::TCustomImageList* CaptionImageList = {read=FCaptionImageList, write=FCaptionImageList};
	__property int CaptionImageIndex = {read=FCaptionImageIndex, write=SetCaptionImageIndex, nodefault};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property TspSkinPanelNumGlyphs NumGlyphs = {read=FNumGlyphs, write=SetNumGlyphs, nodefault};
	__property int Spacing = {read=FSpacing, write=SetSpacing, nodefault};
	__property int RealWidth = {read=FRealWidth, write=FRealWidth, nodefault};
	__property int RealHeight = {read=FRealHEight, write=FRealHEight, nodefault};
	__property bool ShowRollButton = {read=FShowRollButton, write=SetShowRollButton, nodefault};
	__property bool ShowCloseButton = {read=FShowCloseButton, write=SetShowCloseButton, nodefault};
	__property int DefaultCaptionHeight = {read=FDefaultCaptionHeight, write=SetDefaultCaptionHeight, nodefault};
	__property bool RollState = {read=FRollState, write=SetRollState, nodefault};
	__property TspExPanelRollKind RollKind = {read=FRollKind, write=SetRollKind, nodefault};
	__property bool Moveable = {read=FMoveable, write=FMoveable, nodefault};
	__property bool Sizeable = {read=FSizeable, write=FSizeable, nodefault};
	__property Align  = {default=0};
	__property Caption ;
	__property Constraints ;
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnCanResize ;
	__property OnClick ;
	__property OnConstrainedResize ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetSiteInfo ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property OnUnDock ;
	__property Classes::TNotifyEvent OnChangeRollState = {read=FOnChangeRollState, write=FOnChangeRollState};
	__property Classes::TNotifyEvent OnClose = {read=FOnClose, write=FOnClose};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinExPanel(HWND ParentWindow) : TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinStatusBar;
class PASCALIMPLEMENTATION TspSkinStatusBar : public TspSkinPanel 
{
	typedef TspSkinPanel inherited;
	
private:
	bool FSizeGrip;
	bool FShowGrip;
	void __fastcall SetSizeGrip(bool Value);
	void __fastcall SetShowGrip(bool Value);
	
protected:
	virtual void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall GetSkinData(void);
	virtual void __fastcall AdjustClientRect(Types::TRect &Rect);
	void __fastcall DrawDefaultGripper(const Types::TRect &R, Graphics::TCanvas* Cnvs, Graphics::TColor C1, Graphics::TColor C2);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	Types::TRect __fastcall GetGripRect();
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	
public:
	#pragma pack(push, 1)
	Types::TRect GripperRect;
	#pragma pack(pop)
	
	bool GripperTransparent;
	Graphics::TColor GripperTransparentColor;
	__fastcall virtual TspSkinStatusBar(Classes::TComponent* AOwner);
	__property bool ShowGrip = {read=FShowGrip, write=SetShowGrip, nodefault};
	
__published:
	__property bool SizeGrip = {read=FSizeGrip, write=SetSizeGrip, nodefault};
public:
	#pragma option push -w-inl
	/* TspSkinPanel.Destroy */ inline __fastcall virtual ~TspSkinStatusBar(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinStatusBar(HWND ParentWindow) : TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinToolBar;
class PASCALIMPLEMENTATION TspSkinToolBar : public TspSkinPanel 
{
	typedef TspSkinPanel inherited;
	
private:
	bool FAdjustControls;
	bool FCanScroll;
	bool FHotScroll;
	int TimerMode;
	int SMax;
	int SPosition;
	int SPage;
	int SOldPosition;
	int FHSizeOffset;
	int FScrollOffset;
	int FScrollTimerInterval;
	TspControlButton Buttons[2];
	Skindata::TspDataSkinButtonControl* ButtonData;
	Imglist::TCustomImageList* FImages;
	Imglist::TCustomImageList* FDisabledImages;
	Imglist::TCustomImageList* FHotImages;
	bool FFlat;
	bool FAutoShowHideCaptions;
	bool FShowCaptions;
	int FWidthWithCaptions;
	int FWidthWithoutCaptions;
	void __fastcall SetFlat(bool Value);
	void __fastcall SetDisabledImages(Imglist::TCustomImageList* Value);
	void __fastcall SetHotImages(Imglist::TCustomImageList* Value);
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall SetShowCaptions(bool Value);
	void __fastcall SetScrollOffset(int Value);
	void __fastcall SetScrollTimerInterval(int Value);
	void __fastcall DrawButton(Graphics::TCanvas* Cnvs, int i);
	
protected:
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall GetSkinData(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall SetSkinDataName(AnsiString Value);
	HIDESBASE MESSAGE void __fastcall WMSETCURSOR(Messages::TWMSetCursor &Message);
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall SetButtonsVisible(bool AVisible);
	void __fastcall ButtonClick(int I);
	void __fastcall ButtonDown(int I);
	void __fastcall ButtonUp(int I);
	void __fastcall GetHRange(void);
	void __fastcall GetScrollInfo(void);
	void __fastcall HScrollControls(int AOffset);
	virtual void __fastcall AdjustClientRect(Types::TRect &Rect);
	void __fastcall StartTimer(void);
	void __fastcall StopTimer(void);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Messages::TWMWindowPosMsg &Message);
	void __fastcall AdjustAllControls(void);
	
public:
	__fastcall virtual TspSkinToolBar(Classes::TComponent* AOwner);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property bool AdjustControls = {read=FAdjustControls, write=FAdjustControls, nodefault};
	__property bool CanScroll = {read=FCanScroll, write=FCanScroll, nodefault};
	__property bool HotScroll = {read=FHotScroll, write=FHotScroll, nodefault};
	__property int ScrollOffset = {read=FScrollOffset, write=SetScrollOffset, nodefault};
	__property int ScrollTimerInterval = {read=FScrollTimerInterval, write=SetScrollTimerInterval, nodefault};
	__property int WidthWithCaptions = {read=FWidthWithCaptions, write=FWidthWithCaptions, nodefault};
	__property int WidthWithoutCaptions = {read=FWidthWithoutCaptions, write=FWidthWithoutCaptions, nodefault};
	__property bool AutoShowHideCaptions = {read=FAutoShowHideCaptions, write=FAutoShowHideCaptions, nodefault};
	__property bool ShowCaptions = {read=FShowCaptions, write=SetShowCaptions, nodefault};
	__property bool Flat = {read=FFlat, write=SetFlat, nodefault};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Imglist::TCustomImageList* HotImages = {read=FHotImages, write=SetHotImages};
	__property Imglist::TCustomImageList* DisabledImages = {read=FDisabledImages, write=SetDisabledImages};
public:
	#pragma option push -w-inl
	/* TspSkinPanel.Destroy */ inline __fastcall virtual ~TspSkinToolBar(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinToolBar(HWND ParentWindow) : TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinGroupBox;
class PASCALIMPLEMENTATION TspSkinGroupBox : public TspSkinPanel 
{
	typedef TspSkinPanel inherited;
	
public:
	__fastcall virtual TspSkinGroupBox(Classes::TComponent* AOwner);
public:
	#pragma option push -w-inl
	/* TspSkinPanel.Destroy */ inline __fastcall virtual ~TspSkinGroupBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinGroupBox(HWND ParentWindow) : TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TspButtonPaintEvent)(Graphics::TCanvas* Cnvs, const Types::TRect &R, bool ADown, bool AMouseIn, bool &DrawDefault);

class DELPHICLASS TspSkinButton;
class PASCALIMPLEMENTATION TspSkinButton : public TspSkinCustomControl 
{
	typedef TspSkinCustomControl inherited;
	
protected:
	Extctrls::TTimer* AnimateTimer;
	int CurrentFrame;
	bool AnimateInc;
	Skinmenus::TspSkinImagesMenu* FSkinImagesMenu;
	bool FUseImagesMenuImage;
	bool FUseImagesMenuCaption;
	bool FSpaceSupport;
	bool FUseSkinFontColor;
	bool FUseSkinSize;
	Extctrls::TTimer* RepeatTimer;
	bool FRepeatMode;
	int FRepeatInterval;
	bool FActive;
	bool FAllowAllUp;
	bool FAllowAllUpCheck;
	bool FDefault;
	bool FCancel;
	Controls::TModalResult FModalResult;
	bool FClicksDisabled;
	bool FCanFocused;
	double FMorphKf;
	bool FDown;
	bool FMouseIn;
	bool FMouseDown;
	int FGroupIndex;
	Graphics::TBitmap* FGlyph;
	Sputils::TspNumGlyphs FNumGlyphs;
	Classes::TNotifyEvent FOnClick;
	TspButtonPaintEvent FOnPaint;
	int FMargin;
	int FSpacing;
	Sputils::TspButtonLayout FLayout;
	Extctrls::TTimer* MorphTimer;
	Imglist::TCustomImageList* FImageList;
	int FImageIndex;
	void __fastcall SetImageIndex(int Value);
	void __fastcall StartAnimate(bool AInc);
	void __fastcall StopAnimate(void);
	void __fastcall DoAnimate(System::TObject* Sender);
	Types::TRect __fastcall GetAnimationFrameRect();
	int __fastcall GetGlyphNum(bool AIsDown, bool AIsMouseIn);
	void __fastcall RepeatTimerProc(System::TObject* Sender);
	void __fastcall BeforeRepeatTimerProc(System::TObject* Sender);
	void __fastcall StartRepeat(void);
	void __fastcall StopRepeat(void);
	void __fastcall StartMorph(void);
	void __fastcall StopMorph(void);
	void __fastcall SetDefault(bool Value);
	bool __fastcall IsFocused(void);
	void __fastcall SetCanFocused(bool Value);
	void __fastcall DoMorph(System::TObject* Sender);
	void __fastcall CreateStrechButtonImage(Graphics::TBitmap* B, const Types::TRect &R, bool ADown, bool AMouseIn);
	virtual void __fastcall CreateButtonImage(Graphics::TBitmap* B, const Types::TRect &R, bool ADown, bool AMouseIn);
	void __fastcall SetLayout(Sputils::TspButtonLayout Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetDown(bool Value);
	void __fastcall SetMargin(int Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall DoAllUp(void);
	void __fastcall SetNumGlyphs(Sputils::TspNumGlyphs Value);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	virtual void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFocusChanged(Controls::TCMFocusChanged &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall ReDrawControl(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TWMKillFocus &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogKey(Messages::TWMKey &Message);
	virtual void __fastcall ButtonClick(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall CalcSize(int &W, int &H);
	bool __fastcall EnableMorphing(void);
	bool __fastcall EnableAnimation(void);
	void __fastcall DrawMenuMarker(Graphics::TCanvas* C, const Types::TRect &R, bool AActive, bool ADown);
	void __fastcall OnImagesMenuChanged(System::TObject* Sender);
	void __fastcall SetSkinImagesMenu(Skinmenus::TspSkinImagesMenu* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	__property Skinmenus::TspSkinImagesMenu* SkinImagesMenu = {read=FSkinImagesMenu, write=SetSkinImagesMenu};
	__property bool UseImagesMenuImage = {read=FUseImagesMenuImage, write=FUseImagesMenuImage, nodefault};
	__property bool UseImagesMenuCaption = {read=FUseImagesMenuCaption, write=FUseImagesMenuCaption, nodefault};
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor DownFontColor;
	Graphics::TColor DisabledFontColor;
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DisabledSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusedSkinRect;
	#pragma pack(pop)
	
	bool Morphing;
	Skindata::TMorphKind MorphKind;
	#pragma pack(push, 1)
	Types::TRect AnimateSkinRect;
	#pragma pack(pop)
	
	int FrameCount;
	int AnimateInterval;
	bool ShowFocus;
	#pragma pack(push, 1)
	Types::TRect MenuMarkerFlatRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MenuMarkerRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MenuMarkerActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MenuMarkerDownRect;
	#pragma pack(pop)
	
	Graphics::TColor MenuMarkerTransparentColor;
	__fastcall virtual TspSkinButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinButton(void);
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall Click(void);
	void __fastcall RefreshButton(void);
	
__published:
	__property Imglist::TCustomImageList* ImageList = {read=FImageList, write=FImageList};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property bool UseSkinSize = {read=FUseSkinSize, write=FUseSkinSize, nodefault};
	__property bool UseSkinFontColor = {read=FUseSkinFontColor, write=FUseSkinFontColor, nodefault};
	__property bool RepeatMode = {read=FRepeatMode, write=FRepeatMode, nodefault};
	__property int RepeatInterval = {read=FRepeatInterval, write=FRepeatInterval, nodefault};
	__property bool AllowAllUp = {read=FAllowAllUp, write=FAllowAllUp, nodefault};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabStop  = {default=0};
	__property TabOrder  = {default=-1};
	__property bool CanFocused = {read=FCanFocused, write=SetCanFocused, nodefault};
	__property Action ;
	__property bool Down = {read=FDown, write=SetDown, nodefault};
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, nodefault};
	__property Caption ;
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property Sputils::TspNumGlyphs NumGlyphs = {read=FNumGlyphs, write=SetNumGlyphs, nodefault};
	__property Align  = {default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property Sputils::TspButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property Enabled  = {default=1};
	__property bool Cancel = {read=FCancel, write=FCancel, default=0};
	__property bool Default = {read=FDefault, write=SetDefault, default=0};
	__property Controls::TModalResult ModalResult = {read=FModalResult, write=FModalResult, default=0};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property TspButtonPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnEnter ;
	__property OnExit ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinButton(HWND ParentWindow) : TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMenuButton;
class PASCALIMPLEMENTATION TspSkinMenuButton : public TspSkinButton 
{
	typedef TspSkinButton inherited;
	
protected:
	Classes::TNotifyEvent FOnShowTrackMenu;
	Classes::TNotifyEvent FOnHideTrackMenu;
	bool FTrackButtonMode;
	bool FMenuTracked;
	Skinmenus::TspSkinPopupMenu* FSkinPopupMenu;
	virtual void __fastcall CreateButtonImage(Graphics::TBitmap* B, const Types::TRect &R, bool ADown, bool AMouseIn);
	bool __fastcall CanMenuTrack(int X, int Y);
	void __fastcall TrackMenu(void);
	void __fastcall SetTrackButtonMode(bool Value);
	virtual void __fastcall GetSkinData(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	MESSAGE void __fastcall WMCLOSESKINMENU(Messages::TMessage &Message);
	Types::TRect __fastcall GetNewTrackButtonRect();
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Messages::TWMKey &Message);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	void __fastcall CreateControlSkinResizeImage(Graphics::TBitmap* B);
	void __fastcall CreateControlSkinResizeImage2(Graphics::TBitmap* B);
	void __fastcall OnImagesMenuClose(System::TObject* Sender);
	
public:
	#pragma pack(push, 1)
	Types::TRect TrackButtonRect;
	#pragma pack(pop)
	
	__fastcall virtual TspSkinMenuButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinMenuButton(void);
	
__published:
	__property SkinImagesMenu ;
	__property UseImagesMenuImage ;
	__property UseImagesMenuCaption ;
	__property Skinmenus::TspSkinPopupMenu* SkinPopupMenu = {read=FSkinPopupMenu, write=FSkinPopupMenu};
	__property bool TrackButtonMode = {read=FTrackButtonMode, write=SetTrackButtonMode, nodefault};
	__property Classes::TNotifyEvent OnShowTrackMenu = {read=FOnShowTrackMenu, write=FOnShowTrackMenu};
	__property Classes::TNotifyEvent OnHideTrackMenu = {read=FOnHideTrackMenu, write=FOnHideTrackMenu};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinMenuButton(HWND ParentWindow) : TspSkinButton(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCheckRadioBox;
class PASCALIMPLEMENTATION TspSkinCheckRadioBox : public TspSkinCustomControl 
{
	typedef TspSkinCustomControl inherited;
	
protected:
	bool FUseSkinFontColor;
	bool FWordWrap;
	bool FAllowGrayed;
	Stdctrls::TCheckBoxState FState;
	Imglist::TCustomImageList* FImages;
	int FImageIndex;
	bool FFlat;
	bool FClicksDisabled;
	bool FCanFocused;
	bool FMouseIn;
	int FGroupIndex;
	Classes::TNotifyEvent FOnClick;
	bool FChecked;
	#pragma pack(push, 1)
	Types::TRect CIRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewTextArea;
	#pragma pack(pop)
	
	bool FRadio;
	Extctrls::TTimer* MorphTimer;
	double FMorphKf;
	void __fastcall SetWordWrap(bool Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall StartMorph(void);
	void __fastcall StopMorph(void);
	bool __fastcall IsFocused(void);
	void __fastcall SetCheckState(void);
	void __fastcall SetFlat(bool Value);
	void __fastcall SetCanFocused(bool Value);
	void __fastcall SetRadio(bool Value);
	void __fastcall SetChecked(bool Value);
	void __fastcall DoMorph(System::TObject* Sender);
	void __fastcall CreateImage(Graphics::TBitmap* B, const Types::TRect &R, bool AMouseIn);
	void __fastcall UnCheckAll(void);
	virtual void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall ReDrawControl(void);
	virtual void __fastcall CalcSize(int &W, int &H);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMMOVE(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TWMKillFocus &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMDialogChar(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	void __fastcall SkinDrawCheckImage(int X, int Y, Graphics::TCanvas* Cnvs, const Types::TRect &IR, Graphics::TCanvas* DestCnvs);
	void __fastcall SkinDrawGrayedCheckImage(int X, int Y, Graphics::TCanvas* Cnvs, const Types::TRect &IR, Graphics::TCanvas* DestCnvs);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	bool __fastcall EnableMorphing(void);
	void __fastcall SetState(Stdctrls::TCheckBoxState Value);
	void __fastcall SetAllowGrayed(bool Value);
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor FrameFontColor;
	Graphics::TColor UnEnabledFontColor;
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CheckImageArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TextArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveUnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnEnabledCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnEnabledUnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect GrayedCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveGrayedCheckImageRect;
	#pragma pack(pop)
	
	bool Morphing;
	Skindata::TMorphKind MorphKind;
	__fastcall virtual TspSkinCheckRadioBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCheckRadioBox(void);
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall Paint(void);
	virtual void __fastcall CheckParentBackground(void);
	
__published:
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, nodefault};
	__property bool AllowGrayed = {read=FAllowGrayed, write=SetAllowGrayed, nodefault};
	__property Stdctrls::TCheckBoxState State = {read=FState, write=SetState, nodefault};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property bool UseSkinFontColor = {read=FUseSkinFontColor, write=FUseSkinFontColor, nodefault};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabStop  = {default=0};
	__property TabOrder  = {default=-1};
	__property bool CanFocused = {read=FCanFocused, write=SetCanFocused, nodefault};
	__property Action ;
	__property bool Radio = {read=FRadio, write=SetRadio, nodefault};
	__property bool Checked = {read=FChecked, write=SetChecked, nodefault};
	__property int GroupIndex = {read=FGroupIndex, write=FGroupIndex, nodefault};
	__property bool Flat = {read=FFlat, write=SetFlat, nodefault};
	__property Caption ;
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property Align  = {default=0};
	__property Enabled  = {default=1};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnEnter ;
	__property OnExit ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCheckRadioBox(HWND ParentWindow) : TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TspGaugePaintEvent)(Graphics::TCanvas* Cnvs, const Types::TRect &AProgressArea, const Types::TRect &AProgressRect);

class DELPHICLASS TspSkinGauge;
class PASCALIMPLEMENTATION TspSkinGauge : public TspSkinCustomControl 
{
	typedef TspSkinCustomControl inherited;
	
protected:
	int FAnimationFrame;
	Extctrls::TTimer* FAnimationPauseTimer;
	Extctrls::TTimer* FAnimationTimer;
	int FProgressAnimationPause;
	bool FUseSkinSize;
	int FMinValue;
	int FMaxValue;
	int FValue;
	bool FVertical;
	AnsiString FProgressText;
	bool FShowPercent;
	bool FShowProgressText;
	bool FTextAlphaBlend;
	Byte FTextAlphaBlendValue;
	TspGaugePaintEvent FOnGaugePaint;
	void __fastcall OnAnimationPauseTimer(System::TObject* Sender);
	void __fastcall OnAnimationTimer(System::TObject* Sender);
	void __fastcall SetTextAlphaBlendValue(Byte Value);
	void __fastcall SetTextAlphaBlend(bool Value);
	void __fastcall SetShowProgressText(bool Value);
	void __fastcall SetShowPercent(bool Value);
	void __fastcall SetProgressText(AnsiString Value);
	void __fastcall SetVertical(bool AValue);
	void __fastcall SetMinValue(int AValue);
	void __fastcall SetMaxValue(int AValue);
	void __fastcall SetValue(int AValue);
	virtual void __fastcall GetSkinData(void);
	void __fastcall CreateImage(Graphics::TBitmap* B);
	virtual void __fastcall CalcSize(int &W, int &H);
	void __fastcall DrawProgressText(Graphics::TCanvas* C);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	Types::TRect __fastcall GetAnimationFrameRect();
	void __fastcall SetProgressAnimationPause(int Value);
	
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
	#pragma pack(push, 1)
	Types::TRect ProgressAnimationSkinRect;
	#pragma pack(pop)
	
	int ProgressAnimationCountFrames;
	int ProgressAnimationTimerInterval;
	void __fastcall StartProgressAnimation(void);
	void __fastcall StopProgressAnimation(void);
	void __fastcall StartInternalAnimation(void);
	void __fastcall StopInternalAnimation(void);
	__fastcall virtual TspSkinGauge(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinGauge(void);
	Types::TRect __fastcall CalcProgressRect(const Types::TRect &R, bool AV);
	virtual void __fastcall Paint(void);
	virtual void __fastcall ChangeSkinData(void);
	
__published:
	__property int ProgressAnimationPause = {read=FProgressAnimationPause, write=SetProgressAnimationPause, nodefault};
	__property bool UseSkinSize = {read=FUseSkinSize, write=FUseSkinSize, nodefault};
	__property bool TextAlphaBlend = {read=FTextAlphaBlend, write=SetTextAlphaBlend, nodefault};
	__property Byte TextAlphaBlendValue = {read=FTextAlphaBlendValue, write=SetTextAlphaBlendValue, nodefault};
	__property AnsiString ProgressText = {read=FProgressText, write=SetProgressText};
	__property bool ShowProgressText = {read=FShowProgressText, write=SetShowProgressText, nodefault};
	__property bool ShowPercent = {read=FShowPercent, write=SetShowPercent, nodefault};
	__property int MinValue = {read=FMinValue, write=SetMinValue, nodefault};
	__property int MaxValue = {read=FMaxValue, write=SetMaxValue, nodefault};
	__property int Value = {read=FValue, write=SetValue, nodefault};
	__property bool Vertical = {read=FVertical, write=SetVertical, nodefault};
	__property TspGaugePaintEvent OnGaugePaint = {read=FOnGaugePaint, write=FOnGaugePaint};
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
	/* TWinControl.CreateParented */ inline __fastcall TspSkinGauge(HWND ParentWindow) : TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinButtonLabel;
class PASCALIMPLEMENTATION TspSkinButtonLabel : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
protected:
	bool FWebStyle;
	bool FMouseIn;
	bool FDown;
	int FIndex;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	Graphics::TColor FDefaultActiveFontColor;
	Graphics::TBitmap* FGlyph;
	Sputils::TspNumGlyphs FNumGlyphs;
	int FMargin;
	int FSpacing;
	Sputils::TspButtonLayout FLayout;
	Imglist::TCustomImageList* FImageList;
	int FImageIndex;
	void __fastcall SetImageIndex(int Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetLayout(Sputils::TspButtonLayout Value);
	void __fastcall SetMargin(int Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetNumGlyphs(Sputils::TspNumGlyphs Value);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall SetWebStyle(bool Value);
	
public:
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	AnsiString FontName;
	int FontHeight;
	Graphics::TFontStyles FontStyle;
	__fastcall virtual TspSkinButtonLabel(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinButtonLabel(void);
	void __fastcall ChangeSkinData(void);
	virtual void __fastcall Paint(void);
	
__published:
	__property Imglist::TCustomImageList* ImageList = {read=FImageList, write=FImageList};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property bool WebStyle = {read=FWebStyle, write=SetWebStyle, nodefault};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property Sputils::TspNumGlyphs NumGlyphs = {read=FNumGlyphs, write=SetNumGlyphs, nodefault};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property Sputils::TspButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Graphics::TColor DefaultActiveFontColor = {read=FDefaultActiveFontColor, write=FDefaultActiveFontColor, nodefault};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property AutoSize  = {default=0};
	__property BiDiMode ;
	__property Caption ;
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
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
};


class DELPHICLASS TspSkinTextLabel;
class PASCALIMPLEMENTATION TspSkinTextLabel : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
private:
	int FIndex;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	bool FUseSkinColor;
	Classes::TStrings* FLines;
	Classes::TAlignment FAlignment;
	bool FAutoSize;
	Stdctrls::TTextLayout FLayout;
	bool FWordWrap;
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetLines(Classes::TStrings* Value);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetLayout(Stdctrls::TTextLayout Value);
	void __fastcall SetWordWrap(bool Value);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	void __fastcall OnTextChange(System::TObject* Sender);
	
protected:
	DYNAMIC void __fastcall AdjustBounds(void);
	virtual AnsiString __fastcall GetLabelText();
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	HIDESBASE virtual void __fastcall SetAutoSize(bool Value);
	void __fastcall DoDrawText(Types::TRect &Rect, int Flags);
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	__fastcall virtual TspSkinTextLabel(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinTextLabel(void);
	__property Canvas ;
	void __fastcall ChangeSkinData(void);
	void __fastcall GetSkinData(void);
	virtual void __fastcall Paint(void);
	
__published:
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property bool UseSkinColor = {read=FUseSkinColor, write=FUseSkinColor, nodefault};
	__property Classes::TStrings* Lines = {read=FLines, write=SetLines};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Font ;
	__property Align  = {default=0};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property Stdctrls::TTextLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
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
};


#pragma option push -b-
enum TspEllipsType { spetNone, spetEndEllips, spetPathEllips };
#pragma option pop

class DELPHICLASS TspSkinStdLabel;
class PASCALIMPLEMENTATION TspSkinStdLabel : public Stdctrls::TCustomLabel 
{
	typedef Stdctrls::TCustomLabel inherited;
	
protected:
	TspEllipsType FEllipsType;
	int FIndex;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	bool FUseSkinColor;
	void __fastcall SetEllipsType(const TspEllipsType Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	__property Transparent  = {default=0};
	DYNAMIC void __fastcall DoDrawText(Types::TRect &Rect, int Flags);
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	__fastcall virtual TspSkinStdLabel(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinStdLabel(void);
	void __fastcall GetSkinData(void);
	void __fastcall ChangeSkinData(void);
	
__published:
	__property TspEllipsType EllipsType = {read=FEllipsType, write=SetEllipsType, nodefault};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property bool UseSkinColor = {read=FUseSkinColor, write=FUseSkinColor, nodefault};
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


#pragma option push -b-
enum TspEllipsType2 { spetNoneEllips, spetEllips };
#pragma option pop

class DELPHICLASS TspSkinLabel;
class PASCALIMPLEMENTATION TspSkinLabel : public TspSkinCustomControl 
{
	typedef TspSkinCustomControl inherited;
	
protected:
	TspEllipsType2 FEllipsType;
	bool FUseSkinSize;
	Classes::TAlignment FAlignment;
	bool FAutoSize;
	TspSkinBorderStyle FBorderStyle;
	bool FUseSkinFontColor;
	void __fastcall SetEllipsType(TspEllipsType2 Value);
	void __fastcall SetBorderStyle(TspSkinBorderStyle Value);
	void __fastcall DrawLabelText(Graphics::TCanvas* Cnvs, const Types::TRect &R);
	virtual int __fastcall CalcWidthOffset(void);
	void __fastcall AdjustBounds(void);
	void __fastcall PaintLabel(Graphics::TBitmap* B);
	void __fastcall SetAutoSizeX(bool Value);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	virtual void __fastcall CalcSize(int &W, int &H);
	virtual void __fastcall GetSkinData(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall SetControlRegion(void);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	__fastcall virtual TspSkinLabel(Classes::TComponent* AOwner);
	
__published:
	__property TspEllipsType2 EllipsType = {read=FEllipsType, write=SetEllipsType, nodefault};
	__property bool UseSkinSize = {read=FUseSkinSize, write=FUseSkinSize, nodefault};
	__property bool UseSkinFontColor = {read=FUseSkinFontColor, write=FUseSkinFontColor, nodefault};
	__property TspSkinBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, nodefault};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Align  = {default=0};
	__property Caption ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property Visible  = {default=1};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSizeX, nodefault};
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
	/* TspSkinCustomControl.Destroy */ inline __fastcall virtual ~TspSkinLabel(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinLabel(HWND ParentWindow) : TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinTrackBar;
class PASCALIMPLEMENTATION TspSkinTrackBar : public TspSkinCustomControl 
{
	typedef TspSkinCustomControl inherited;
	
protected:
	bool FClicksDisabled;
	bool FCanFocused;
	int Offset1;
	int Offset2;
	int BOffset;
	#pragma pack(push, 1)
	Types::TRect BR;
	#pragma pack(pop)
	
	int FMinValue;
	int FMaxValue;
	int FValue;
	bool FVertical;
	bool FMouseSupport;
	bool FDown;
	int OMPos;
	int OldBOffset;
	Classes::TNotifyEvent FOnChange;
	Classes::TNotifyEvent FOnLastChange;
	Classes::TNotifyEvent FOnStartDragButton;
	bool FJumpWhenClick;
	bool __fastcall IsFocused(void);
	void __fastcall SetCanFocused(bool Value);
	void __fastcall SetVertical(bool AValue);
	void __fastcall SetMinValue(int AValue);
	void __fastcall SetMaxValue(int AValue);
	void __fastcall SetValue(int AValue);
	virtual void __fastcall GetSkinData(void);
	void __fastcall CreateImage(Graphics::TBitmap* B);
	virtual void __fastcall CalcSize(int &W, int &H);
	Types::TRect __fastcall CalcButtonRect(const Types::TRect &R, bool AV);
	int __fastcall CalcValue(int AOffset);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMMOUSEWHEEL(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TWMKillFocus &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Messages::TWMKey &Msg);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	
public:
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TrackArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewTrackArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveButtonRect;
	#pragma pack(pop)
	
	bool ButtonTransparent;
	Graphics::TColor ButtonTransparentColor;
	__fastcall virtual TspSkinTrackBar(Classes::TComponent* AOwner);
	
__published:
	__property bool JumpWhenClick = {read=FJumpWhenClick, write=FJumpWhenClick, nodefault};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabStop  = {default=0};
	__property TabOrder  = {default=-1};
	__property bool CanFocused = {read=FCanFocused, write=SetCanFocused, nodefault};
	__property bool MouseSupport = {read=FMouseSupport, write=FMouseSupport, nodefault};
	__property int MinValue = {read=FMinValue, write=SetMinValue, nodefault};
	__property int MaxValue = {read=FMaxValue, write=SetMaxValue, nodefault};
	__property int Value = {read=FValue, write=SetValue, nodefault};
	__property bool Vertical = {read=FVertical, write=SetVertical, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Classes::TNotifyEvent OnLastChange = {read=FOnLastChange, write=FOnLastChange};
	__property Classes::TNotifyEvent OnStartDragButton = {read=FOnStartDragButton, write=FOnStartDragButton};
	__property Align  = {default=0};
	__property Enabled  = {default=1};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomControl.Destroy */ inline __fastcall virtual ~TspSkinTrackBar(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinTrackBar(HWND ParentWindow) : TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinScrollBar;
class PASCALIMPLEMENTATION TspSkinScrollBar : public TspSkinCustomControl 
{
	typedef TspSkinCustomControl inherited;
	
private:
	AnsiString FNormalSkinDataName;
	AnsiString FBothSkinDataName;
	int Offset1;
	int Offset2;
	int BOffset;
	#pragma pack(push, 1)
	Types::TRect NewTrackArea;
	#pragma pack(pop)
	
	bool FDown;
	int OMPos;
	int OldPosition;
	int FScrollWidth;
	int OldBOffset;
	bool WaitMode;
	int MX;
	int MY;
	bool MouseD;
	
protected:
	int FBothMarkerWidth;
	bool FClicksDisabled;
	bool FCanFocused;
	Classes::TNotifyEvent FOnChange;
	Classes::TNotifyEvent FOnLastChange;
	Classes::TNotifyEvent FOnUpButtonClick;
	Classes::TNotifyEvent FOnDownButtonClick;
	Classes::TNotifyEvent FOnPageUp;
	Classes::TNotifyEvent FOnPageDown;
	int TimerMode;
	int ActiveButton;
	int OldActiveButton;
	int CaptureButton;
	TspControlButton Buttons[3];
	int FMin;
	int FMax;
	int FSmallChange;
	int FLargeChange;
	int FPosition;
	Forms::TScrollBarKind FKind;
	int FPageSize;
	void __fastcall SetBothMarkerWidth(int Value);
	bool __fastcall IsFocused(void);
	void __fastcall SetCanFocused(bool Value);
	void __fastcall TestActive(int X, int Y);
	void __fastcall SetPageSize(int AValue);
	void __fastcall ButtonDown(int I, int X, int Y);
	void __fastcall ButtonUp(int I, int X, int Y);
	void __fastcall ButtonEnter(int I);
	void __fastcall ButtonLeave(int I);
	void __fastcall CalcRects(void);
	int __fastcall CalcValue(int AOffset);
	void __fastcall SetKind(Forms::TScrollBarKind AValue);
	void __fastcall SetPosition(int AValue);
	void __fastcall SetMin(int AValue);
	void __fastcall SetMax(int AValue);
	void __fastcall SetSmallChange(int AValue);
	void __fastcall SetLargeChange(int AValue);
	void __fastcall SetBoth(bool Value);
	virtual void __fastcall CalcSize(int &W, int &H);
	virtual void __fastcall GetSkinData(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	void __fastcall StartScroll(void);
	void __fastcall StopTimer(void);
	void __fastcall DrawButton(Graphics::TCanvas* Cnvs, int i);
	HIDESBASE MESSAGE void __fastcall WMMOUSEWHEEL(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Messages::TWMKey &Msg);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	
public:
	bool FBoth;
	#pragma pack(push, 1)
	Types::TRect TrackArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveDownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownDownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ThumbRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveThumbRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownThumbRect;
	#pragma pack(pop)
	
	int ThumbOffset1;
	int ThumbOffset2;
	bool ThumbTransparent;
	Graphics::TColor ThumbTransparentColor;
	#pragma pack(push, 1)
	Types::TRect GlyphRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveGlyphRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownGlyphRect;
	#pragma pack(pop)
	
	bool ThumbStretchEffect;
	Graphics::TColor ThumbMinSize;
	Graphics::TColor ThumbMinPageSize;
	bool GlyphTransparent;
	Graphics::TColor GlyphTransparentColor;
	void __fastcall SimplySetPosition(int AValue);
	__fastcall virtual TspSkinScrollBar(Classes::TComponent* AOwner);
	void __fastcall SetRange(int AMin, int AMax, int APosition, int APageSize);
	
__published:
	__property bool Both = {read=FBoth, write=SetBoth, nodefault};
	__property int BothMarkerWidth = {read=FBothMarkerWidth, write=SetBothMarkerWidth, nodefault};
	__property AnsiString BothSkinDataName = {read=FBothSkinDataName, write=FBothSkinDataName};
	__property TabStop  = {default=0};
	__property TabOrder  = {default=-1};
	__property bool CanFocused = {read=FCanFocused, write=SetCanFocused, nodefault};
	__property Align  = {default=0};
	__property Forms::TScrollBarKind Kind = {read=FKind, write=SetKind, nodefault};
	__property int PageSize = {read=FPageSize, write=SetPageSize, nodefault};
	__property int Min = {read=FMin, write=SetMin, nodefault};
	__property int Max = {read=FMax, write=SetMax, nodefault};
	__property int Position = {read=FPosition, write=SetPosition, nodefault};
	__property int SmallChange = {read=FSmallChange, write=SetSmallChange, nodefault};
	__property int LargeChange = {read=FLargeChange, write=SetLargeChange, nodefault};
	__property Classes::TNotifyEvent OnUpButtonClick = {read=FOnUpButtonClick, write=FOnUpButtonClick};
	__property Classes::TNotifyEvent OnDownButtonClick = {read=FOnDownButtonClick, write=FOnDownButtonClick};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Classes::TNotifyEvent OnLastChange = {read=FOnLastChange, write=FOnLastChange};
	__property Classes::TNotifyEvent OnPageUp = {read=FOnPageUp, write=FOnPageUp};
	__property Classes::TNotifyEvent OnPageDown = {read=FOnPageDown, write=FOnPageDown};
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomControl.Destroy */ inline __fastcall virtual ~TspSkinScrollBar(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinScrollBar(HWND ParentWindow) : TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCoolBar;
class PASCALIMPLEMENTATION TspSkinCoolBar : public Comctrls::TCoolBar 
{
	typedef Comctrls::TCoolBar inherited;
	
protected:
	bool FSkinBevel;
	int FIndex;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	void __fastcall DrawGrip(Graphics::TCanvas* C, const Types::TRect &R);
	void __fastcall PaintNCSkin(HDC ADC, bool AUseExternalDC);
	void __fastcall SetSkinBevel(bool Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TMessage &Message);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	MESSAGE void __fastcall CMBENCPaint(Messages::TMessage &Message);
	virtual void __fastcall AlignControls(Controls::TControl* AControl, Types::TRect &Rect);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE int __fastcall GetCaptionSize(Comctrls::TCoolBand* Band);
	HIDESBASE int __fastcall GetCaptionFontHeight(void);
	void __fastcall CheckControlsBackground(void);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	#pragma pack(push, 1)
	Types::TPoint LTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRBPoint;
	#pragma pack(pop)
	
	Graphics::TBitmap* FSkinPicture;
	int BGPictureIndex;
	#pragma pack(push, 1)
	Types::TRect HGripRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VGripRect;
	#pragma pack(pop)
	
	int GripOffset1;
	int GripOffset2;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	Sputils::TspStretchType StretchType;
	bool StretchEffect;
	bool ItemStretchEffect;
	bool GripTransparent;
	Graphics::TColor GripTransparentColor;
	__fastcall virtual TspSkinCoolBar(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCoolBar(void);
	void __fastcall GetSkinData(void);
	void __fastcall ChangeSkinData(void);
	
__published:
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property bool SkinBevel = {read=FSkinBevel, write=SetSkinBevel, nodefault};
	__property Align  = {default=1};
	__property Anchors  = {default=3};
	__property AutoSize  = {default=0};
	__property BevelEdges  = {default=15};
	__property BevelInner  = {index=0, default=2};
	__property BevelOuter  = {index=1, default=1};
	__property BevelKind  = {default=0};
	__property BevelWidth  = {default=1};
	__property BorderWidth  = {default=0};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnCanResize ;
	__property OnClick ;
	__property OnConstrainedResize ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetSiteInfo ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property OnUnDock ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCoolBar(HWND ParentWindow) : Comctrls::TCoolBar(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinControlBar;
class PASCALIMPLEMENTATION TspSkinControlBar : public Extctrls::TCustomControlBar 
{
	typedef Extctrls::TCustomControlBar inherited;
	
protected:
	bool FSkinBevel;
	int FIndex;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	void __fastcall PaintNCSkin(HDC ADC, bool AUseExternalDC);
	void __fastcall SetSkinBevel(bool Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TMessage &Message);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall PaintControlFrame(Graphics::TCanvas* Canvas, Controls::TControl* AControl, Types::TRect &ARect);
	MESSAGE void __fastcall CMBENCPaint(Messages::TMessage &Message);
	void __fastcall CheckControlsBackground(void);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	#pragma pack(push, 1)
	Types::TPoint LTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRBPoint;
	#pragma pack(pop)
	
	Graphics::TBitmap* FSkinPicture;
	int BGPictureIndex;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	bool StretchEffect;
	Sputils::TspStretchType StretchType;
	bool ItemStretchEffect;
	int ItemOffset1;
	int ItemOffset2;
	bool ItemTransparent;
	Graphics::TColor ItemTransparentColor;
	__fastcall virtual TspSkinControlBar(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinControlBar(void);
	virtual void __fastcall Paint(void);
	__property Canvas ;
	void __fastcall GetSkinData(void);
	void __fastcall ChangeSkinData(void);
	
__published:
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property bool SkinBevel = {read=FSkinBevel, write=SetSkinBevel, nodefault};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property AutoDrag  = {default=1};
	__property AutoSize  = {default=0};
	__property BevelEdges  = {default=15};
	__property BevelInner  = {index=0, default=2};
	__property BevelOuter  = {index=1, default=1};
	__property BevelKind  = {default=1};
	__property BevelWidth  = {default=1};
	__property BorderWidth  = {default=0};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property DockSite  = {default=1};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property Picture ;
	__property PopupMenu ;
	__property RowSize  = {default=26};
	__property RowSnap  = {default=1};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnBandDrag ;
	__property OnBandInfo ;
	__property OnBandMove ;
	__property OnBandPaint ;
	__property OnCanResize ;
	__property OnClick ;
	__property OnConstrainedResize ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetSiteInfo ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnPaint ;
	__property OnResize ;
	__property OnStartDock ;
	__property OnStartDrag ;
	__property OnUnDock ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinControlBar(HWND ParentWindow) : Extctrls::TCustomControlBar(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspCustomSplitter;
class PASCALIMPLEMENTATION TspCustomSplitter : public TspSkinControl 
{
	typedef TspSkinControl inherited;
	
private:
	Controls::TWinControl* FActiveControl;
	bool FAutoSnap;
	Controls::TControl* FControl;
	#pragma pack(push, 1)
	Types::TPoint FDownPos;
	#pragma pack(pop)
	
	Extctrls::NaturalNumber FMinSize;
	int FMaxSize;
	int FNewSize;
	Controls::TKeyEvent FOldKeyDown;
	int FOldSize;
	int FSplit;
	Extctrls::TCanResizeEvent FOnCanResize;
	Classes::TNotifyEvent FOnMoved;
	Classes::TNotifyEvent FOnPaint;
	void __fastcall CalcSplitSize(int X, int Y, int &NewSize, int &Split);
	Controls::TControl* __fastcall FindControl(void);
	void __fastcall FocusKeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	void __fastcall UpdateControlSize(void);
	void __fastcall UpdateSize(int X, int Y);
	
protected:
	HIDESBASE virtual bool __fastcall CanResize(int &NewSize);
	HIDESBASE virtual bool __fastcall DoCanResize(int &NewSize);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall RequestAlign(void);
	DYNAMIC void __fastcall StopSizing(void);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	
public:
	__fastcall virtual TspCustomSplitter(Classes::TComponent* AOwner);
	__fastcall virtual ~TspCustomSplitter(void);
	__property Canvas ;
	
__published:
	__property Align  = {default=3};
	__property bool AutoSnap = {read=FAutoSnap, write=FAutoSnap, default=1};
	__property Color  = {default=-2147483643};
	__property Cursor  = {default=-14};
	__property Constraints ;
	__property Extctrls::NaturalNumber MinSize = {read=FMinSize, write=FMinSize, default=30};
	__property ParentColor  = {default=1};
	__property Visible  = {default=1};
	__property Width  = {default=3};
	__property Extctrls::TCanResizeEvent OnCanResize = {read=FOnCanResize, write=FOnCanResize};
	__property Classes::TNotifyEvent OnMoved = {read=FOnMoved, write=FOnMoved};
	__property Classes::TNotifyEvent OnPaint = {read=FOnPaint, write=FOnPaint};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspCustomSplitter(HWND ParentWindow) : TspSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinSplitterEx;
class PASCALIMPLEMENTATION TspSkinSplitterEx : public TspCustomSplitter 
{
	typedef TspCustomSplitter inherited;
	
protected:
	int FDefaultSize;
	
public:
	#pragma pack(push, 1)
	Types::TPoint LTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	Graphics::TBitmap* FSkinPicture;
	bool StretchEffect;
	#pragma pack(push, 1)
	Types::TRect GripperRect;
	#pragma pack(pop)
	
	bool GripperTransparent;
	Graphics::TColor GripperTransparentColor;
	virtual void __fastcall GetSkinData(void);
	virtual void __fastcall ChangeSkinData(void);
	__fastcall virtual TspSkinSplitterEx(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinSplitterEx(void);
	virtual void __fastcall Paint(void);
	
__published:
	__property int DefaultSize = {read=FDefaultSize, write=FDefaultSize, nodefault};
	__property OnClick ;
	__property OnDblClick ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinSplitterEx(HWND ParentWindow) : TspCustomSplitter(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinSplitter;
class PASCALIMPLEMENTATION TspSkinSplitter : public Extctrls::TSplitter 
{
	typedef Extctrls::TSplitter inherited;
	
protected:
	bool FTransparent;
	int FDefaultSize;
	int FIndex;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	bool StretchEffect;
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetTransparent(bool Value);
	DYNAMIC void __fastcall RequestAlign(void);
	
public:
	#pragma pack(push, 1)
	Types::TPoint LTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	Graphics::TBitmap* FSkinPicture;
	#pragma pack(push, 1)
	Types::TRect GripperRect;
	#pragma pack(pop)
	
	bool GripperTransparent;
	Graphics::TColor GripperTransparentColor;
	void __fastcall GetSkinData(void);
	void __fastcall ChangeSkinData(void);
	__fastcall virtual TspSkinSplitter(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinSplitter(void);
	virtual void __fastcall Paint(void);
	
__published:
	__property bool Transparent = {read=FTransparent, write=SetTransparent, nodefault};
	__property int DefaultSize = {read=FDefaultSize, write=FDefaultSize, nodefault};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property OnClick ;
	__property OnDblClick ;
};


class DELPHICLASS TspSkinCustomRadioGroup;
class PASCALIMPLEMENTATION TspSkinCustomRadioGroup : public TspSkinGroupBox 
{
	typedef TspSkinGroupBox inherited;
	
private:
	Imglist::TCustomImageList* FImages;
	AnsiString FButtonSkinDataName;
	Classes::TList* FButtons;
	Classes::TStrings* FItems;
	int FItemIndex;
	int FColumns;
	bool FReading;
	bool FUpdating;
	Graphics::TFont* FButtonDefaultFont;
	void __fastcall SetButtonDefaultFont(Graphics::TFont* Value);
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall SetButtonSkinDataName(AnsiString Value);
	void __fastcall ArrangeButtons(void);
	void __fastcall ButtonClick(System::TObject* Sender);
	void __fastcall ItemsChange(System::TObject* Sender);
	void __fastcall SetButtonCount(int Value);
	void __fastcall SetColumns(int Value);
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetItems(Classes::TStrings* Value);
	void __fastcall UpdateButtons(void);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	
protected:
	virtual void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	virtual bool __fastcall CanModify(void);
	DYNAMIC void __fastcall GetChildren(Classes::TGetChildProc Proc, Classes::TComponent* Root);
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property Classes::TStrings* Items = {read=FItems, write=SetItems};
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinCustomRadioGroup(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomRadioGroup(void);
	virtual void __fastcall ChangeSkinData(void);
	void __fastcall UpdateButtonsFont(void);
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	__property Graphics::TFont* ButtonDefaultFont = {read=FButtonDefaultFont, write=SetButtonDefaultFont};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=SetButtonSkinDataName};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomRadioGroup(HWND ParentWindow) : TspSkinGroupBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCustomCheckGroup;
class PASCALIMPLEMENTATION TspSkinCustomCheckGroup : public TspSkinGroupBox 
{
	typedef TspSkinGroupBox inherited;
	
private:
	Imglist::TCustomImageList* FImages;
	int FItemIndex;
	AnsiString FButtonSkinDataName;
	Classes::TList* FButtons;
	Classes::TStrings* FItems;
	int FColumns;
	bool FReading;
	bool FUpdating;
	Graphics::TFont* FButtonDefaultFont;
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall SetButtonDefaultFont(Graphics::TFont* Value);
	void __fastcall SetButtonSkinDataName(AnsiString Value);
	void __fastcall ArrangeButtons(void);
	void __fastcall ButtonClick(System::TObject* Sender);
	void __fastcall ItemsChange(System::TObject* Sender);
	void __fastcall SetButtonCount(int Value);
	void __fastcall SetColumns(int Value);
	void __fastcall SetItems(Classes::TStrings* Value);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	
protected:
	void __fastcall UpdateButtons(void);
	virtual void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	virtual bool __fastcall CanModify(void);
	DYNAMIC void __fastcall GetChildren(Classes::TGetChildProc Proc, Classes::TComponent* Root);
	bool __fastcall GetCheckedStatus(int Index);
	void __fastcall SetCheckedStatus(int Index, bool Value);
	__property int Columns = {read=FColumns, write=SetColumns, default=1};
	__property Classes::TStrings* Items = {read=FItems, write=SetItems};
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinCustomCheckGroup(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomCheckGroup(void);
	virtual void __fastcall ChangeSkinData(void);
	void __fastcall UpdateButtonsFont(void);
	DYNAMIC void __fastcall FlipChildren(bool AllLevels);
	__property Graphics::TFont* ButtonDefaultFont = {read=FButtonDefaultFont, write=SetButtonDefaultFont};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=SetButtonSkinDataName};
	__property bool ItemChecked[int Index] = {read=GetCheckedStatus, write=SetCheckedStatus};
	__property int ItemIndex = {read=FItemIndex, nodefault};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomCheckGroup(HWND ParentWindow) : TspSkinGroupBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCheckGroup;
class PASCALIMPLEMENTATION TspSkinCheckGroup : public TspSkinCustomCheckGroup 
{
	typedef TspSkinCustomCheckGroup inherited;
	
__published:
	__property Images ;
	__property ButtonSkinDataName ;
	__property ButtonDefaultFont ;
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Caption ;
	__property Color  = {default=-2147483643};
	__property Columns  = {default=1};
	__property Ctl3D ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property Items ;
	__property ItemIndex ;
	__property Constraints ;
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomCheckGroup.Create */ inline __fastcall virtual TspSkinCheckGroup(Classes::TComponent* AOwner) : TspSkinCustomCheckGroup(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomCheckGroup.Destroy */ inline __fastcall virtual ~TspSkinCheckGroup(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCheckGroup(HWND ParentWindow) : TspSkinCustomCheckGroup(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinRadioGroup;
class PASCALIMPLEMENTATION TspSkinRadioGroup : public TspSkinCustomRadioGroup 
{
	typedef TspSkinCustomRadioGroup inherited;
	
__published:
	__property Images ;
	__property ButtonSkinDataName ;
	__property ButtonDefaultFont ;
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Caption ;
	__property Color  = {default=-2147483643};
	__property Columns  = {default=1};
	__property Ctl3D ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property ItemIndex  = {default=-1};
	__property Items ;
	__property Constraints ;
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomRadioGroup.Create */ inline __fastcall virtual TspSkinRadioGroup(Classes::TComponent* AOwner) : TspSkinCustomRadioGroup(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomRadioGroup.Destroy */ inline __fastcall virtual ~TspSkinRadioGroup(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinRadioGroup(HWND ParentWindow) : TspSkinCustomRadioGroup(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCustomTreeView;
class PASCALIMPLEMENTATION TspSkinCustomTreeView : public Comctrls::TCustomTreeView 
{
	typedef Comctrls::TCustomTreeView inherited;
	
protected:
	bool FInCheckScrollBars;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	int FIndex;
	Graphics::TFont* FDefaultFont;
	Graphics::TColor FDefaultColor;
	bool FUseSkinFont;
	TspSkinScrollBar* FVScrollBar;
	TspSkinScrollBar* FHScrollBar;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetDefaultColor(Graphics::TColor Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SetVScrollBar(TspSkinScrollBar* Value);
	void __fastcall SetHScrollBar(TspSkinScrollBar* Value);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TWMNCPaint &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Messages::TMessage &Message);
	void __fastcall OnVScrollBarChange(System::TObject* Sender);
	void __fastcall OnHScrollBarChange(System::TObject* Sender);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall Change(Comctrls::TTreeNode* Node);
	virtual void __fastcall Loaded(void);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	__fastcall virtual TspSkinCustomTreeView(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomTreeView(void);
	virtual void __fastcall ChangeSkinData(void);
	void __fastcall UpDateScrollBars(void);
	__property TspSkinScrollBar* HScrollBar = {read=FHScrollBar, write=SetHScrollBar};
	__property TspSkinScrollBar* VScrollBar = {read=FVScrollBar, write=SetVScrollBar};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Graphics::TColor DefaultColor = {read=FDefaultColor, write=SetDefaultColor, nodefault};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomTreeView(HWND ParentWindow) : Comctrls::TCustomTreeView(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinTreeView;
class PASCALIMPLEMENTATION TspSkinTreeView : public TspSkinCustomTreeView 
{
	typedef TspSkinCustomTreeView inherited;
	
__published:
	__property UseSkinFont ;
	__property Items ;
	__property HScrollBar ;
	__property VScrollBar ;
	__property DefaultFont ;
	__property SkinData ;
	__property SkinDataName ;
	__property DefaultColor ;
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property AutoExpand  = {default=0};
	__property BiDiMode ;
	__property ChangeDelay  = {default=0};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property DragKind  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property HideSelection  = {default=1};
	__property HotTrack  = {default=0};
	__property Images ;
	__property Indent ;
	__property MultiSelect  = {default=0};
	__property MultiSelectStyle  = {default=1};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ReadOnly  = {default=0};
	__property RightClickSelect  = {default=0};
	__property RowSelect  = {default=0};
	__property ShowButtons  = {default=1};
	__property ShowHint ;
	__property ShowLines  = {default=1};
	__property ShowRoot  = {default=1};
	__property SortType  = {default=0};
	__property StateImages ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property ToolTips  = {default=1};
	__property Visible  = {default=1};
	__property OnAddition ;
	__property OnCreateNodeClass ;
	__property OnAdvancedCustomDraw ;
	__property OnAdvancedCustomDrawItem ;
	__property OnChange ;
	__property OnChanging ;
	__property OnClick ;
	__property OnCollapsed ;
	__property OnCollapsing ;
	__property OnCompare ;
	__property OnContextPopup ;
	__property OnCustomDraw ;
	__property OnCustomDrawItem ;
	__property OnDblClick ;
	__property OnDeletion ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEdited ;
	__property OnEditing ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnExpanding ;
	__property OnExpanded ;
	__property OnGetImageIndex ;
	__property OnGetSelectedIndex ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomTreeView.Create */ inline __fastcall virtual TspSkinTreeView(Classes::TComponent* AOwner) : TspSkinCustomTreeView(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomTreeView.Destroy */ inline __fastcall virtual ~TspSkinTreeView(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinTreeView(HWND ParentWindow) : TspSkinCustomTreeView(ParentWindow) { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TspDrawHeaderSectionEvent)(Graphics::TCanvas* Cnvs, Comctrls::TListColumn* Column, bool Pressed, const Types::TRect &R);

class DELPHICLASS TspSkinCustomListView;
class PASCALIMPLEMENTATION TspSkinCustomListView : public Comctrls::TCustomListView 
{
	typedef Comctrls::TCustomListView inherited;
	
protected:
	AnsiString FHeaderSkinDataName;
	bool FInCheckScrollBars;
	bool FromSB;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	int FIndex;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	Graphics::TColor FDefaultColor;
	TspSkinScrollBar* FVScrollBar;
	TspSkinScrollBar* FHScrollBar;
	int FOldVScrollBarPos;
	int FOldHScrollBarPos;
	HWND FHeaderHandle;
	void *FHeaderInstance;
	void *FDefHeaderProc;
	int FActiveSection;
	bool FHeaderDown;
	bool FHeaderInDivider;
	int FHIndex;
	#pragma pack(push, 1)
	Types::TPoint HLTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HRTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HLBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HRBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HNewLTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HNewRTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HNewLBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HNewRBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HNewClRect;
	#pragma pack(pop)
	
	Graphics::TBitmap* HPicture;
	Graphics::TColor HFontColor;
	Graphics::TColor HActiveFontColor;
	Graphics::TColor HDownFontColor;
	#pragma pack(push, 1)
	Types::TRect HActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HDownSkinRect;
	#pragma pack(pop)
	
	TspDrawHeaderSectionEvent FOnDrawHeaderSection;
	bool HStretchEffect;
	bool HLeftStretch;
	bool HTopStretch;
	bool HRightStretch;
	bool HBottomStretch;
	Sputils::TspStretchType HStretchType;
	void __fastcall HGetSkinData(void);
	Types::TRect __fastcall GetHeaderSectionRect(int Index);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetDefaultColor(Graphics::TColor Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall UpDateScrollBars1(void);
	void __fastcall UpDateScrollBars2(void);
	void __fastcall UpDateScrollBars3(void);
	void __fastcall SetVScrollBar(TspSkinScrollBar* Value);
	void __fastcall SetHScrollBar(TspSkinScrollBar* Value);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Messages::TMessage &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall OnVScrollBarChange(System::TObject* Sender);
	void __fastcall OnHScrollBarChange(System::TObject* Sender);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall Loaded(void);
	HIDESBASE void __fastcall HeaderWndProc(Messages::TMessage &Message);
	void __fastcall DrawHeaderSection(Graphics::TCanvas* Cnvs, Comctrls::TListColumn* Column, bool Active, bool Pressed, const Types::TRect &R);
	void __fastcall PaintHeader(HDC DC);
	virtual void __fastcall CreateWnd(void);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	MESSAGE void __fastcall CMSEPaint(Messages::TMessage &Message);
	
public:
	__fastcall virtual TspSkinCustomListView(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomListView(void);
	void __fastcall UpDateScrollBars(void);
	void __fastcall ChangeSkinData(void);
	__property TspSkinScrollBar* HScrollBar = {read=FHScrollBar, write=SetHScrollBar};
	__property TspSkinScrollBar* VScrollBar = {read=FVScrollBar, write=SetVScrollBar};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Graphics::TColor DefaultColor = {read=FDefaultColor, write=SetDefaultColor, nodefault};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property AnsiString HeaderSkinDataName = {read=FHeaderSkinDataName, write=FHeaderSkinDataName};
	__property TspDrawHeaderSectionEvent OnDrawHeaderSection = {read=FOnDrawHeaderSection, write=FOnDrawHeaderSection};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomListView(HWND ParentWindow) : Comctrls::TCustomListView(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinListView;
class PASCALIMPLEMENTATION TspSkinListView : public TspSkinCustomListView 
{
	typedef TspSkinCustomListView inherited;
	
__published:
	__property DefaultFont ;
	__property SkinData ;
	__property SkinDataName ;
	__property DefaultColor ;
	__property UseSkinFont ;
	__property Action ;
	__property Align  = {default=0};
	__property AllocBy  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Checkboxes  = {default=0};
	__property Color  = {default=-2147483643};
	__property Columns ;
	__property ColumnClick  = {default=1};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property FullDrag  = {default=0};
	__property GridLines  = {default=0};
	__property HideSelection  = {default=1};
	__property HotTrack  = {default=0};
	__property HotTrackStyles  = {default=0};
	__property HoverTime  = {default=-1};
	__property IconOptions ;
	__property Items ;
	__property LargeImages ;
	__property MultiSelect  = {default=0};
	__property OwnerData  = {default=0};
	__property OwnerDraw  = {default=0};
	__property ReadOnly  = {default=0};
	__property RowSelect  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowColumnHeaders  = {default=1};
	__property ShowWorkAreas  = {default=0};
	__property ShowHint ;
	__property SmallImages ;
	__property SortType  = {default=0};
	__property StateImages ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property ViewStyle  = {default=0};
	__property Visible  = {default=1};
	__property HeaderSkinDataName ;
	__property HScrollBar ;
	__property VScrollBar ;
	__property OnAdvancedCustomDraw ;
	__property OnAdvancedCustomDrawItem ;
	__property OnAdvancedCustomDrawSubItem ;
	__property OnChange ;
	__property OnChanging ;
	__property OnClick ;
	__property OnColumnClick ;
	__property OnColumnDragged ;
	__property OnColumnRightClick ;
	__property OnCompare ;
	__property OnContextPopup ;
	__property OnCustomDraw ;
	__property OnCustomDrawItem ;
	__property OnCustomDrawSubItem ;
	__property OnDrawHeaderSection ;
	__property OnData ;
	__property OnDataFind ;
	__property OnDataHint ;
	__property OnDataStateChange ;
	__property OnDblClick ;
	__property OnDeletion ;
	__property OnDrawItem ;
	__property OnEdited ;
	__property OnEditing ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetImageIndex ;
	__property OnGetSubItemImage ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnInfoTip ;
	__property OnInsert ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
	__property OnSelectItem ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomListView.Create */ inline __fastcall virtual TspSkinListView(Classes::TComponent* AOwner) : TspSkinCustomListView(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomListView.Destroy */ inline __fastcall virtual ~TspSkinListView(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinListView(HWND ParentWindow) : TspSkinCustomListView(ParentWindow) { }
	#pragma option pop
	
};


typedef Shortint TspStatusPanelNumGlyphs;

class DELPHICLASS TspSkinStatusPanel;
class PASCALIMPLEMENTATION TspSkinStatusPanel : public TspSkinLabel 
{
	typedef TspSkinLabel inherited;
	
private:
	Imglist::TCustomImageList* FImageList;
	int FImageIndex;
	Graphics::TBitmap* FGlyph;
	TspStatusPanelNumGlyphs FNumGlyphs;
	void __fastcall SetNumGlyphs(TspStatusPanelNumGlyphs Value);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	void __fastcall SetImageIndex(int Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual int __fastcall CalcWidthOffset(void);
	
public:
	__fastcall virtual TspSkinStatusPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinStatusPanel(void);
	
__published:
	__property Imglist::TCustomImageList* ImageList = {read=FImageList, write=FImageList};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property TspStatusPanelNumGlyphs NumGlyphs = {read=FNumGlyphs, write=SetNumGlyphs, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinStatusPanel(HWND ParentWindow) : TspSkinLabel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinRichEdit;
class PASCALIMPLEMENTATION TspSkinRichEdit : public Comctrls::TCustomRichEdit 
{
	typedef Comctrls::TCustomRichEdit inherited;
	
protected:
	bool FSkinSupport;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	int FIndex;
	Graphics::TFont* FDefaultFont;
	Graphics::TColor FDefaultColor;
	TspSkinScrollBar* FVScrollBar;
	TspSkinScrollBar* FHScrollBar;
	int FOldVScrollBarPos;
	int FOldHScrollBarPos;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetDefaultColor(Graphics::TColor Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SetVScrollBar(TspSkinScrollBar* Value);
	void __fastcall SetHScrollBar(TspSkinScrollBar* Value);
	bool __fastcall VScrollDisabled(void);
	bool __fastcall HScrollDisabled(void);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TWMNCPaint &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall OnVScrollBarChange(System::TObject* Sender);
	void __fastcall OnHScrollBarChange(System::TObject* Sender);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	void __fastcall OnVScrollBarUpButtonClick(System::TObject* Sender);
	void __fastcall OnVScrollBarDownButtonClick(System::TObject* Sender);
	DYNAMIC void __fastcall Change(void);
	
public:
	__fastcall virtual TspSkinRichEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinRichEdit(void);
	void __fastcall UpDateScrollBars(void);
	void __fastcall ChangeSkinData(void);
	
__published:
	__property Align  = {default=0};
	__property Alignment  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Color  = {default=-2147483643};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property HideSelection  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property Constraints ;
	__property Lines ;
	__property MaxLength  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PlainText  = {default=0};
	__property PopupMenu ;
	__property ReadOnly  = {default=0};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property WantTabs  = {default=0};
	__property WantReturns  = {default=1};
	__property WordWrap  = {default=1};
	__property bool SkinSupport = {read=FSkinSupport, write=FSkinSupport, nodefault};
	__property TspSkinScrollBar* HScrollBar = {read=FHScrollBar, write=SetHScrollBar};
	__property TspSkinScrollBar* VScrollBar = {read=FVScrollBar, write=SetVScrollBar};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Graphics::TColor DefaultColor = {read=FDefaultColor, write=SetDefaultColor, nodefault};
	__property OnChange ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnMouseWheel ;
	__property OnMouseWheelDown ;
	__property OnMouseWheelUp ;
	__property OnProtectChange ;
	__property OnResizeRequest ;
	__property OnSaveClipboard ;
	__property OnSelectionChange ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinRichEdit(HWND ParentWindow) : Comctrls::TCustomRichEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspGraphicSkinControl;
class PASCALIMPLEMENTATION TspGraphicSkinControl : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
protected:
	Skindata::TspSkinData* FSD;
	AnsiString FAreaName;
	AnsiString FSkinDataName;
	bool FDrawDefault;
	int CursorIndex;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FUseSkinCursor;
	AnsiString FHintTitle;
	int FHintImageIndex;
	Imglist::TCustomImageList* FHintImageList;
	virtual void __fastcall SetAlphaBlend(bool AValue);
	virtual void __fastcall SetAlphaBlendValue(Byte AValue);
	virtual void __fastcall Paint(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall GetSkinData(void);
	MESSAGE void __fastcall WMCHECKPARENTBG(Messages::TWMEraseBkgnd &Msg);
	MESSAGE void __fastcall WMMOVE(Messages::TWMMove &Msg);
	MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	virtual void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	
public:
	int FIndex;
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall BeforeChangeSkinData(void);
	__fastcall virtual ~TspGraphicSkinControl(void);
	__fastcall virtual TspGraphicSkinControl(Classes::TComponent* AOwner);
	
__published:
	__property AnsiString HintTitle = {read=FHintTitle, write=FHintTitle};
	__property int HintImageIndex = {read=FHintImageIndex, write=FHintImageIndex, nodefault};
	__property Imglist::TCustomImageList* HintImageList = {read=FHintImageList, write=FHintImageList};
	__property Anchors  = {default=3};
	__property Visible  = {default=1};
	__property bool DrawDefault = {read=FDrawDefault, write=FDrawDefault, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString AreaName = {read=FAreaName, write=FAreaName};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property bool AlphaBlend = {read=FAlphaBlend, write=SetAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=SetAlphaBlendValue, nodefault};
	__property bool UseSkinCursor = {read=FUseSkinCursor, write=FUseSkinCursor, nodefault};
};


class DELPHICLASS TspGraphicSkinCustomControl;
class PASCALIMPLEMENTATION TspGraphicSkinCustomControl : public TspGraphicSkinControl 
{
	typedef TspGraphicSkinControl inherited;
	
protected:
	int FDefaultWidth;
	int FDefaultHeight;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	#pragma pack(push, 1)
	Types::TPoint LTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewClRect;
	#pragma pack(pop)
	
	Graphics::TBitmap* Picture;
	int ResizeMode;
	bool StretchEffect;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	Sputils::TspStretchType StretchType;
	void __fastcall OnDefaultFontChange(System::TObject* Sender);
	void __fastcall SetDefaultWidth(int Value);
	void __fastcall SetDefaultHeight(int Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	virtual void __fastcall DefaultFontChange(void);
	Types::TRect __fastcall GetNewRect(const Types::TRect &R);
	int __fastcall GetResizeMode(void);
	virtual void __fastcall CalcSize(int &W, int &H);
	void __fastcall CreateSkinControlImage(Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R);
	virtual void __fastcall GetSkinData(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	int __fastcall GetRealClientWidth(void);
	int __fastcall GetRealClientHeight(void);
	int __fastcall GetRealClientLeft(void);
	int __fastcall GetRealClientTop(void);
	
public:
	__fastcall virtual TspGraphicSkinCustomControl(Classes::TComponent* AOwner);
	__fastcall virtual ~TspGraphicSkinCustomControl(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall ChangeSkinData(void);
	__property Types::TRect RealClientRect = {read=NewClRect};
	__property int RealClientWidth = {read=GetRealClientWidth, nodefault};
	__property int RealClientHeight = {read=GetRealClientHeight, nodefault};
	__property int RealClientLeft = {read=GetRealClientLeft, nodefault};
	__property int RealClientTop = {read=GetRealClientTop, nodefault};
	
__published:
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property int DefaultWidth = {read=FDefaultWidth, write=SetDefaultWidth, nodefault};
	__property int DefaultHeight = {read=FDefaultHeight, write=SetDefaultHeight, nodefault};
};


class DELPHICLASS TspSkinSpeedButton;
class PASCALIMPLEMENTATION TspSkinSpeedButton : public TspGraphicSkinCustomControl 
{
	typedef TspGraphicSkinCustomControl inherited;
	
protected:
	Extctrls::TTimer* AnimateTimer;
	int CurrentFrame;
	bool AnimateInc;
	Skinmenus::TspSkinImagesMenu* FSkinImagesMenu;
	bool FUseImagesMenuImage;
	bool FUseImagesMenuCaption;
	bool FDrawColorMarker;
	Graphics::TColor FColorMarkerValue;
	bool FUseSkinSize;
	bool FUseSkinFontColor;
	Imglist::TCustomImageList* FButtonImages;
	int FImageIndex;
	Extctrls::TTimer* RepeatTimer;
	bool FRepeatMode;
	int FRepeatInterval;
	bool FFlat;
	bool FAllowAllUp;
	bool FAllowAllUpCheck;
	bool FClicksDisabled;
	double FMorphKf;
	bool FDown;
	bool FMouseIn;
	bool FMouseDown;
	int FGroupIndex;
	Graphics::TBitmap* FGlyph;
	Sputils::TspNumGlyphs FNumGlyphs;
	int FMargin;
	int FSpacing;
	Sputils::TspButtonLayout FLayout;
	Extctrls::TTimer* MorphTimer;
	int FWidthWithCaption;
	int FWidthWithoutCaption;
	bool FShowCaption;
	void __fastcall StartAnimate(bool AInc);
	void __fastcall StopAnimate(void);
	void __fastcall DoAnimate(System::TObject* Sender);
	Types::TRect __fastcall GetAnimationFrameRect();
	int __fastcall GetGlyphNum(bool AIsDown, bool AIsMouseIn);
	void __fastcall SetShowCaption(const bool Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall RepeatTimerProc(System::TObject* Sender);
	void __fastcall BeforeRepeatTimerProc(System::TObject* Sender);
	void __fastcall StartRepeat(void);
	void __fastcall StopRepeat(void);
	void __fastcall SetFlat(bool Value);
	void __fastcall StartMorph(void);
	void __fastcall StopMorph(void);
	void __fastcall DoMorph(System::TObject* Sender);
	void __fastcall CreateStrechButtonImage(Graphics::TBitmap* B, const Types::TRect &R, bool ADown, bool AMouseIn);
	virtual void __fastcall CreateButtonImage(Graphics::TBitmap* B, const Types::TRect &R, bool ADown, bool AMouseIn);
	void __fastcall SetLayout(Sputils::TspButtonLayout Value);
	void __fastcall SetGroupIndex(int Value);
	void __fastcall SetDown(bool Value);
	void __fastcall SetMargin(int Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall DoAllUp(void);
	void __fastcall SetNumGlyphs(Sputils::TspNumGlyphs Value);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	virtual void __fastcall GetSkinData(void);
	MESSAGE void __fastcall CMDialogChar(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall ReDrawControl(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall ButtonClick(void);
	virtual void __fastcall CalcSize(int &W, int &H);
	bool __fastcall EnableMorphing(void);
	bool __fastcall EnableAnimation(void);
	void __fastcall DrawMenuMarker(Graphics::TCanvas* C, const Types::TRect &R, bool AActive, bool ADown, bool AFlat);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetSkinImagesMenu(Skinmenus::TspSkinImagesMenu* Value);
	void __fastcall OnImagesMenuChanged(System::TObject* Sender);
	__property Skinmenus::TspSkinImagesMenu* SkinImagesMenu = {read=FSkinImagesMenu, write=SetSkinImagesMenu};
	__property bool UseImagesMenuImage = {read=FUseImagesMenuImage, write=FUseImagesMenuImage, nodefault};
	__property bool UseImagesMenuCaption = {read=FUseImagesMenuCaption, write=FUseImagesMenuCaption, nodefault};
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor DownFontColor;
	Graphics::TColor DisabledFontColor;
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DisabledSkinRect;
	#pragma pack(pop)
	
	bool Morphing;
	Skindata::TMorphKind MorphKind;
	#pragma pack(push, 1)
	Types::TRect AnimateSkinRect;
	#pragma pack(pop)
	
	int FrameCount;
	int AnimateInterval;
	#pragma pack(push, 1)
	Types::TRect MenuMarkerRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MenuMarkerActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MenuMarkerDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MenuMarkerFlatRect;
	#pragma pack(pop)
	
	Graphics::TColor MenuMarkerTransparentColor;
	__fastcall virtual TspSkinSpeedButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinSpeedButton(void);
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall Paint(void);
	void __fastcall RefreshButton(void);
	
__published:
	__property Imglist::TCustomImageList* ImageList = {read=FButtonImages, write=FButtonImages};
	__property bool UseSkinSize = {read=FUseSkinSize, write=FUseSkinSize, nodefault};
	__property bool UseSkinFontColor = {read=FUseSkinFontColor, write=FUseSkinFontColor, nodefault};
	__property int WidthWithCaption = {read=FWidthWithCaption, write=FWidthWithCaption, nodefault};
	__property int WidthWithoutCaption = {read=FWidthWithoutCaption, write=FWidthWithoutCaption, nodefault};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property bool RepeatMode = {read=FRepeatMode, write=FRepeatMode, nodefault};
	__property int RepeatInterval = {read=FRepeatInterval, write=FRepeatInterval, nodefault};
	__property bool Flat = {read=FFlat, write=SetFlat, nodefault};
	__property bool AllowAllUp = {read=FAllowAllUp, write=FAllowAllUp, nodefault};
	__property PopupMenu ;
	__property ShowHint ;
	__property Action ;
	__property bool Down = {read=FDown, write=SetDown, nodefault};
	__property int GroupIndex = {read=FGroupIndex, write=SetGroupIndex, nodefault};
	__property Caption ;
	__property bool ShowCaption = {read=FShowCaption, write=SetShowCaption, nodefault};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property Sputils::TspNumGlyphs NumGlyphs = {read=FNumGlyphs, write=SetNumGlyphs, nodefault};
	__property Align  = {default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=-1};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=4};
	__property Sputils::TspButtonLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property Enabled  = {default=1};
	__property OnClick ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
};


#pragma option push -b-
enum TspTrackPosition { sptpRight, sptpBottom };
#pragma option pop

class DELPHICLASS TspSkinMenuSpeedButton;
class PASCALIMPLEMENTATION TspSkinMenuSpeedButton : public TspSkinSpeedButton 
{
	typedef TspSkinSpeedButton inherited;
	
protected:
	Classes::TNotifyEvent FOnShowTrackMenu;
	Classes::TNotifyEvent FOnHideTrackMenu;
	bool FTrackButtonMode;
	bool FMenuTracked;
	Skinmenus::TspSkinPopupMenu* FSkinPopupMenu;
	bool FNewStyle;
	TspTrackPosition FTrackPosition;
	virtual void __fastcall CreateButtonImage(Graphics::TBitmap* B, const Types::TRect &R, bool ADown, bool AMouseIn);
	bool __fastcall CanMenuTrack(int X, int Y);
	void __fastcall TrackMenu(void);
	void __fastcall SetTrackButtonMode(bool Value);
	virtual void __fastcall GetSkinData(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	MESSAGE void __fastcall WMCLOSESKINMENU(Messages::TMessage &Message);
	Types::TRect __fastcall GetNewTrackButtonRect();
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	void __fastcall CreateControlSkinResizeImage(Graphics::TBitmap* B, bool ADown, bool AMouseIn);
	void __fastcall CreateControlSkinResizeImage2(Graphics::TBitmap* B, bool ADown, bool AMouseIn);
	void __fastcall CreateNewStyleControlSkinResizeImage(Graphics::TBitmap* B, bool ADown, bool AMouseIn);
	void __fastcall OnImagesMenuClose(System::TObject* Sender);
	void __fastcall CreateNewStyleControlDefaultImage(Graphics::TBitmap* B);
	void __fastcall SetNewStyle(bool Value);
	void __fastcall SetTrackPosition(TspTrackPosition Value);
	void __fastcall DrawResizeButton(Skindata::TspDataSkinButtonControl* ButtonData, Graphics::TCanvas* C, const Types::TRect &ButtonR, bool AMouseIn, bool ADown);
	
public:
	#pragma pack(push, 1)
	Types::TRect TrackButtonRect;
	#pragma pack(pop)
	
	bool FDrawStandardArrow;
	int FArrowType;
	__fastcall virtual TspSkinMenuSpeedButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinMenuSpeedButton(void);
	virtual void __fastcall Paint(void);
	
__published:
	__property bool NewStyle = {read=FNewStyle, write=SetNewStyle, nodefault};
	__property TspTrackPosition TrackPosition = {read=FTrackPosition, write=SetTrackPosition, nodefault};
	__property SkinImagesMenu ;
	__property UseImagesMenuImage ;
	__property UseImagesMenuCaption ;
	__property Skinmenus::TspSkinPopupMenu* SkinPopupMenu = {read=FSkinPopupMenu, write=FSkinPopupMenu};
	__property bool TrackButtonMode = {read=FTrackButtonMode, write=SetTrackButtonMode, nodefault};
	__property Classes::TNotifyEvent OnShowTrackMenu = {read=FOnShowTrackMenu, write=FOnShowTrackMenu};
	__property Classes::TNotifyEvent OnHideTrackMenu = {read=FOnHideTrackMenu, write=FOnHideTrackMenu};
};


typedef void __fastcall (__closure *TspCustomDrawSkinSectionEvent)(Comctrls::THeaderControl* HeaderControl, Comctrls::THeaderSection* Section, const Types::TRect &Rect, bool Active, bool Pressed, Graphics::TCanvas* Cnvs);

class DELPHICLASS TspSkinHeaderControl;
class PASCALIMPLEMENTATION TspSkinHeaderControl : public Comctrls::THeaderControl 
{
	typedef Comctrls::THeaderControl inherited;
	
protected:
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	int FIndex;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	int FDefaultHeight;
	bool InDivider;
	bool FDown;
	bool FDownInDivider;
	bool FInTracking;
	int FActiveSection;
	int FOldActiveSection;
	Comctrls::TSectionNotifyEvent FOnSkinSectionClick;
	TspCustomDrawSkinSectionEvent FOnDrawSkinSection;
	void __fastcall SetDefaultHeight(int Value);
	Types::TRect __fastcall GetSkinItemRect(int Index);
	virtual void __fastcall PaintWindow(HDC DC);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	Types::TRect __fastcall DrawSkinSection(Graphics::TCanvas* Cnvs, int Index, bool Active, bool Pressed);
	void __fastcall DrawSkinSectionR(Graphics::TCanvas* Cnvs, Comctrls::THeaderSection* Section, bool Active, bool Pressed, const Types::TRect &R);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	void __fastcall TestActive(int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC void __fastcall DrawSection(Comctrls::THeaderSection* Section, const Types::TRect &Rect, bool Pressed);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	#pragma pack(push, 1)
	Types::TPoint LTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPt;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewClRect;
	#pragma pack(pop)
	
	Graphics::TBitmap* Picture;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor DownFontColor;
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownSkinRect;
	#pragma pack(pop)
	
	bool StretchEffect;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	Sputils::TspStretchType StretchType;
	__fastcall virtual TspSkinHeaderControl(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinHeaderControl(void);
	void __fastcall GetSkinData(void);
	void __fastcall ChangeSkinData(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property int DefaultHeight = {read=FDefaultHeight, write=SetDefaultHeight, nodefault};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Comctrls::TSectionNotifyEvent OnSkinSectionClick = {read=FOnSkinSectionClick, write=FOnSkinSectionClick};
	__property TspCustomDrawSkinSectionEvent OnDrawSkinSection = {read=FOnDrawSkinSection, write=FOnDrawSkinSection};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinHeaderControl(HWND ParentWindow) : Comctrls::THeaderControl(ParentWindow) { }
	#pragma option pop
	
};


typedef Shortint TspNumThumbStates;

#pragma option push -b-
enum TspSliderOrientation { soHorizontal, soVertical };
#pragma option pop

#pragma option push -b-
enum TspSliderOption { soShowFocus, soShowPoints, soSmooth, soRulerOpaque, soThumbOpaque };
#pragma option pop

typedef Set<TspSliderOption, soShowFocus, soThumbOpaque>  TspSliderOptions;

#pragma option push -b-
enum TspSliderImage { siHThumb, siHRuler, siVThumb, siVRuler };
#pragma option pop

typedef Set<TspSliderImage, siHThumb, siVRuler>  TspSliderImages;

typedef Graphics::TBitmap* TspSliderImageArray[4];

#pragma option push -b-
enum TspJumpMode { jmNone, jmHome, jmEnd, jmNext, jmPrior };
#pragma option pop

class DELPHICLASS TspSkinCustomSlider;
class PASCALIMPLEMENTATION TspSkinCustomSlider : public TspSkinControl 
{
	typedef TspSkinControl inherited;
	
private:
	bool FUseSkinThumb;
	bool FTransparent;
	TspSliderImages FUserImages;
	Graphics::TBitmap* FImages[4];
	int FEdgeSize;
	Graphics::TBitmap* FRuler;
	bool FPaintBuffered;
	#pragma pack(push, 1)
	Types::TPoint FRulerOrg;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FThumbRect;
	#pragma pack(pop)
	
	bool FThumbDown;
	TspNumThumbStates FNumThumbStates;
	#pragma pack(push, 1)
	Types::TRect FPointsRect;
	#pragma pack(pop)
	
	TspSliderOrientation FOrientation;
	TspSliderOptions FOptions;
	int FBevelWidth;
	int FMinValue;
	int FMaxValue;
	int FIncrement;
	int FValue;
	int FHit;
	bool FFocused;
	bool FSliding;
	bool FTracking;
	bool FTimerActive;
	#pragma pack(push, 1)
	Types::TPoint FMousePos;
	#pragma pack(pop)
	
	TspJumpMode FStartJump;
	bool FReadOnly;
	Classes::TNotifyEvent FOnChange;
	Classes::TNotifyEvent FOnChanged;
	Classes::TNotifyEvent FOnDrawPoints;
	void __fastcall SetTransparent(bool Value);
	Graphics::TBitmap* __fastcall GetImage(int Index);
	void __fastcall SetImage(int Index, Graphics::TBitmap* Value);
	void __fastcall SliderImageChanged(System::TObject* Sender);
	void __fastcall SetEdgeSize(int Value);
	TspNumThumbStates __fastcall GetNumThumbStates(void);
	void __fastcall SetNumThumbStates(TspNumThumbStates Value);
	void __fastcall SetOrientation(TspSliderOrientation Value);
	void __fastcall SetOptions(TspSliderOptions Value);
	void __fastcall SetMinValue(int Value);
	void __fastcall SetMaxValue(int Value);
	void __fastcall SetIncrement(int Value);
	void __fastcall SetReadOnly(bool Value);
	int __fastcall GetThumbOffset(void);
	void __fastcall SetThumbOffset(int Value);
	void __fastcall SetValue(int Value);
	void __fastcall ThumbJump(TspJumpMode Jump);
	Types::TPoint __fastcall GetThumbPosition(int &Offset);
	TspJumpMode __fastcall JumpTo(int X, int Y);
	void __fastcall InvalidateThumb(void);
	void __fastcall StopTracking(void);
	void __fastcall TimerTrack(void);
	bool __fastcall StoreImage(int Index);
	void __fastcall CreateElements(void);
	void __fastcall BuildRuler(const Types::TRect &R);
	void __fastcall BuildSkinRuler(const Types::TRect &R);
	void __fastcall AdjustElements(void);
	void __fastcall ReadUserImages(Classes::TStream* Stream);
	void __fastcall WriteUserImages(Classes::TStream* Stream);
	void __fastcall InternalDrawPoints(Graphics::TCanvas* ACanvas, int PointsStep, int PointsHeight, int ExtremePointsHeight);
	void __fastcall DrawThumb(Graphics::TCanvas* Canvas, const Types::TPoint &Origin, bool Highlight);
	void __fastcall DrawSkinThumb(Graphics::TCanvas* Canvas, const Types::TPoint &Origin, bool Highlight);
	int __fastcall GetValueByOffset(int Offset);
	int __fastcall GetOffsetByValue(int Value);
	int __fastcall GetRulerLength(void);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFocusChanged(Controls::TCMFocusChanged &Message);
	MESSAGE void __fastcall WMGetDlgCode(Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	MESSAGE void __fastcall WMTimer(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMOVE(Messages::TWMMove &Msg);
	
protected:
	HIDESBASE MESSAGE void __fastcall WMCHECKPARENTBG(Messages::TWMEraseBkgnd &Msg);
	virtual void __fastcall AlignControls(Controls::TControl* AControl, Types::TRect &Rect);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Paint(void);
	virtual bool __fastcall CanModify(void);
	virtual Types::TRect __fastcall GetSliderRect();
	virtual int __fastcall GetSliderValue(void);
	DYNAMIC void __fastcall Change(void);
	HIDESBASEDYNAMIC void __fastcall Changed(void);
	virtual void __fastcall Sized(void);
	virtual void __fastcall RangeChanged(void);
	void __fastcall SetRange(int Min, int Max);
	virtual void __fastcall ThumbMouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ThumbMouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ThumbMouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	__property int ThumbOffset = {read=GetThumbOffset, write=SetThumbOffset, nodefault};
	__property Types::TRect SliderRect = {read=GetSliderRect};
	__property Graphics::TBitmap* ImageHThumb = {read=GetImage, write=SetImage, stored=StoreImage, index=0};
	__property Graphics::TBitmap* ImageHRuler = {read=GetImage, write=SetImage, stored=StoreImage, index=1};
	__property Graphics::TBitmap* ImageVThumb = {read=GetImage, write=SetImage, stored=StoreImage, index=2};
	__property Graphics::TBitmap* ImageVRuler = {read=GetImage, write=SetImage, stored=StoreImage, index=3};
	__property TspNumThumbStates NumThumbStates = {read=GetNumThumbStates, write=SetNumThumbStates, default=2};
	__property TspSliderOrientation Orientation = {read=FOrientation, write=SetOrientation, default=0};
	__property int EdgeSize = {read=FEdgeSize, write=SetEdgeSize, default=2};
	__property TspSliderOptions Options = {read=FOptions, write=SetOptions, default=7};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, default=0};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	__property Classes::TNotifyEvent OnDrawPoints = {read=FOnDrawPoints, write=FOnDrawPoints};
	virtual void __fastcall GetSkinData(void);
	
public:
	#pragma pack(push, 1)
	Types::TRect HRulerRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HThumbRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRulerRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VThumbRect;
	#pragma pack(pop)
	
	int SkinEdgeSize;
	Graphics::TColor BGColor;
	Graphics::TColor PointsColor;
	Graphics::TBitmap* Picture;
	__fastcall virtual TspSkinCustomSlider(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomSlider(void);
	virtual void __fastcall DefaultDrawPoints(int PointsStep, int PointsHeight, int ExtremePointsHeight);
	virtual void __fastcall ChangeSkinData(void);
	__property Canvas ;
	__property int Increment = {read=FIncrement, write=SetIncrement, default=10};
	__property int MinValue = {read=FMinValue, write=SetMinValue, default=0};
	__property int MaxValue = {read=FMaxValue, write=SetMaxValue, default=100};
	__property int Value = {read=FValue, write=SetValue, default=0};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, nodefault};
	__property bool UseSkinThumb = {read=FUseSkinThumb, write=FUseSkinThumb, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomSlider(HWND ParentWindow) : TspSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinSlider;
class PASCALIMPLEMENTATION TspSkinSlider : public TspSkinCustomSlider 
{
	typedef TspSkinCustomSlider inherited;
	
__published:
	__property Align  = {default=0};
	__property Color  = {default=-2147483643};
	__property Cursor  = {default=0};
	__property DragMode  = {default=0};
	__property DragCursor  = {default=-12};
	__property Enabled  = {default=1};
	__property ImageHThumb ;
	__property ImageHRuler ;
	__property ImageVThumb ;
	__property ImageVRuler ;
	__property Increment  = {default=10};
	__property MinValue  = {default=0};
	__property MaxValue  = {default=100};
	__property NumThumbStates  = {default=2};
	__property Orientation  = {default=0};
	__property EdgeSize  = {default=2};
	__property Options  = {default=7};
	__property ParentColor  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Value  = {default=0};
	__property Transparent ;
	__property UseSkinThumb ;
	__property Visible  = {default=1};
	__property Anchors  = {default=3};
	__property Constraints ;
	__property DragKind  = {default=0};
	__property OnChange ;
	__property OnChanged ;
	__property OnDrawPoints ;
	__property OnClick ;
	__property OnDblClick ;
	__property OnEnter ;
	__property OnExit ;
	__property OnMouseMove ;
	__property OnMouseDown ;
	__property OnMouseUp ;
	__property OnKeyDown ;
	__property OnKeyUp ;
	__property OnKeyPress ;
	__property OnDragOver ;
	__property OnDragDrop ;
	__property OnEndDrag ;
	__property OnStartDrag ;
	__property OnContextPopup ;
	__property OnMouseWheelDown ;
	__property OnMouseWheelUp ;
	__property OnEndDock ;
	__property OnStartDock ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomSlider.Create */ inline __fastcall virtual TspSkinSlider(Classes::TComponent* AOwner) : TspSkinCustomSlider(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomSlider.Destroy */ inline __fastcall virtual ~TspSkinSlider(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinSlider(HWND ParentWindow) : TspSkinCustomSlider(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinBevel;
class PASCALIMPLEMENTATION TspSkinBevel : public Extctrls::TBevel 
{
	typedef Extctrls::TBevel inherited;
	
protected:
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	int FIndex;
	bool FDividerMode;
	void __fastcall SetDividerMode(bool Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	
public:
	Graphics::TColor LightColor;
	Graphics::TColor DarkColor;
	__fastcall virtual TspSkinBevel(Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
	void __fastcall ChangeSkinData(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	
__published:
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property bool DividerMode = {read=FDividerMode, write=SetDividerMode, nodefault};
public:
	#pragma option push -w-inl
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TspSkinBevel(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspButtonBarItem;
class PASCALIMPLEMENTATION TspButtonBarItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	AnsiString FText;
	int FImageIndex;
	Classes::TNotifyEvent FOnClick;
	Classes::TNotifyEvent FOnDblClick;
	int FTag;
	Sputils::TspButtonLayout FLayout;
	int FMargin;
	int FSpacing;
	AnsiString FHint;
	bool FEnabled;
	void __fastcall SetText(const AnsiString Value);
	void __fastcall SetImageIndex(const int Value);
	void __fastcall ItemClick(const Classes::TNotifyEvent Value);
	void __fastcall ItemDBlClick(const Classes::TNotifyEvent Value);
	void __fastcall SetLayout(Sputils::TspButtonLayout Value);
	void __fastcall SetMargin(int Value);
	void __fastcall SetSpacing(int Value);
	
protected:
	virtual AnsiString __fastcall GetDisplayName();
	void __fastcall Click(void);
	void __fastcall DblClick(void);
	
public:
	__fastcall virtual TspButtonBarItem(Classes::TCollection* Collection);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property AnsiString Text = {read=FText, write=SetText};
	__property AnsiString Hint = {read=FHint, write=FHint};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property int Tag = {read=FTag, write=FTag, nodefault};
	__property Sputils::TspButtonLayout Layout = {read=FLayout, write=SetLayout, nodefault};
	__property int Margin = {read=FMargin, write=SetMargin, nodefault};
	__property int Spacing = {read=FSpacing, write=SetSpacing, nodefault};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=ItemClick};
	__property Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=ItemDBlClick};
public:
	#pragma option push -w-inl
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TspButtonBarItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspButtonBarItems;
class DELPHICLASS TspButtonBarSection;
class PASCALIMPLEMENTATION TspButtonBarSection : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	AnsiString FText;
	TspButtonBarItems* FItems;
	Classes::TNotifyEvent FOnClick;
	Classes::TNotifyEvent FOnDblClick;
	int FImageIndex;
	int FTag;
	AnsiString FHint;
	int FMargin;
	int FSpacing;
	bool FEnabled;
	void __fastcall SetText(const AnsiString Value);
	void __fastcall SetItems(const TspButtonBarItems* Value);
	void __fastcall SectionClick(const Classes::TNotifyEvent Value);
	void __fastcall SectionDblClick(const Classes::TNotifyEvent Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall SetMargin(int Value);
	void __fastcall SetSpacing(int Value);
	
protected:
	virtual AnsiString __fastcall GetDisplayName();
	void __fastcall Click(void);
	void __fastcall DblClick(void);
	
public:
	__fastcall virtual TspButtonBarSection(Classes::TCollection* Collection);
	__fastcall virtual ~TspButtonBarSection(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property bool Enabled = {read=FEnabled, write=FEnabled, nodefault};
	__property AnsiString Text = {read=FText, write=SetText};
	__property AnsiString Hint = {read=FHint, write=FHint};
	__property TspButtonBarItems* Items = {read=FItems, write=SetItems};
	__property int Tag = {read=FTag, write=FTag, nodefault};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property int Margin = {read=FMargin, write=SetMargin, nodefault};
	__property int Spacing = {read=FSpacing, write=SetSpacing, nodefault};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=SectionClick};
	__property Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=SectionDblClick};
};


class PASCALIMPLEMENTATION TspButtonBarItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspButtonBarItem* operator[](int Index) { return Items[Index]; }
	
private:
	TspButtonBarSection* FSection;
	HIDESBASE TspButtonBarItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TspButtonBarItem* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	__fastcall TspButtonBarItems(TspButtonBarSection* Section);
	HIDESBASE TspButtonBarItem* __fastcall Add(void);
	__property TspButtonBarItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspButtonBarItems(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspButtonBarSections;
class DELPHICLASS TspSkinButtonsBar;
class PASCALIMPLEMENTATION TspSkinButtonsBar : public TspSkinPanel 
{
	typedef TspSkinPanel inherited;
	
private:
	bool FShowSelectedItem;
	Classes::TNotifyEvent FOnChanging;
	Classes::TNotifyEvent FOnChange;
	bool FWebStyle;
	bool FShowItemHint;
	bool FShowButtons;
	Graphics::TFont* FDefaultSectionFont;
	Graphics::TFont* FDefaultItemFont;
	TspSkinButton* FUpButton;
	TspSkinButton* FDownButton;
	int TopIndex;
	int VisibleCount;
	int FItemHeight;
	bool FItemsTransparent;
	TspSkinPanel* FItemsPanel;
	TspButtonBarSections* FSections;
	int FSectionIndex;
	Imglist::TCustomImageList* FItemImages;
	Imglist::TCustomImageList* FSectionImages;
	AnsiString FSectionButtonSkinDataName;
	int FDefaultButtonHeight;
	void __fastcall SetShowButtons(bool Value);
	void __fastcall SetDefaultButtonHeight(int Value);
	void __fastcall SetDefaultSectionFont(Graphics::TFont* Value);
	void __fastcall SetDefaultItemFont(Graphics::TFont* Value);
	void __fastcall SetItemHeight(int Value);
	void __fastcall SetItemsTransparent(bool Value);
	void __fastcall SetSections(TspButtonBarSections* Value);
	void __fastcall UpdateSection(int Index);
	void __fastcall UpdateSections(void);
	void __fastcall UpdateItems(void);
	void __fastcall SetSectionIndex(const int Value);
	void __fastcall SetItemImages(const Imglist::TCustomImageList* Value);
	void __fastcall SetSectionImages(const Imglist::TCustomImageList* Value);
	void __fastcall CheckVisibleItems(void);
	void __fastcall OnItemPanelResize(System::TObject* Sender);
	
protected:
	int FItemIndex;
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall ClearSections(void);
	void __fastcall ClearItems(void);
	void __fastcall ArangeItems(void);
	void __fastcall ShowUpButton(void);
	void __fastcall ShowDownButton(void);
	void __fastcall HideUpButton(void);
	void __fastcall HideDownButton(void);
	void __fastcall UpButtonClick(System::TObject* Sender);
	void __fastcall DownButtonClick(System::TObject* Sender);
	
public:
	Classes::TList* FSectionButtons;
	Classes::TList* FSectionItems;
	void __fastcall OpenSection(int Index);
	void __fastcall ScrollUp(void);
	void __fastcall ScrollDown(void);
	__fastcall virtual TspSkinButtonsBar(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinButtonsBar(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall UpDateSectionButtons(void);
	virtual void __fastcall ChangeSkinData(void);
	int __fastcall GetItemIndex(void);
	void __fastcall SetItemIndex(int ASectionIndex, int AItemIndex);
	
__published:
	__property bool ShowSelectedItem = {read=FShowSelectedItem, write=FShowSelectedItem, nodefault};
	__property bool WebStyle = {read=FWebStyle, write=FWebStyle, nodefault};
	__property bool ShowButtons = {read=FShowButtons, write=SetShowButtons, nodefault};
	__property bool ShowItemHint = {read=FShowItemHint, write=FShowItemHint, nodefault};
	__property Graphics::TFont* DefaultSectionFont = {read=FDefaultSectionFont, write=SetDefaultSectionFont};
	__property int DefaultButtonHeight = {read=FDefaultButtonHeight, write=SetDefaultButtonHeight, nodefault};
	__property Graphics::TFont* DefaultItemFont = {read=FDefaultItemFont, write=SetDefaultItemFont};
	__property Align  = {default=3};
	__property Enabled  = {default=1};
	__property AnsiString SectionButtonSkinDataName = {read=FSectionButtonSkinDataName, write=FSectionButtonSkinDataName};
	__property int ItemHeight = {read=FItemHeight, write=SetItemHeight, nodefault};
	__property bool ItemsTransparent = {read=FItemsTransparent, write=SetItemsTransparent, nodefault};
	__property Imglist::TCustomImageList* ItemImages = {read=FItemImages, write=SetItemImages};
	__property Imglist::TCustomImageList* SectionImages = {read=FSectionImages, write=SetSectionImages};
	__property TspButtonBarSections* Sections = {read=FSections, write=SetSections};
	__property int SectionIndex = {read=FSectionIndex, write=SetSectionIndex, nodefault};
	__property PopupMenu ;
	__property ShowHint ;
	__property Hint ;
	__property Visible  = {default=1};
	__property Classes::TNotifyEvent OnChanging = {read=FOnChanging, write=FOnChanging};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnResize ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinButtonsBar(HWND ParentWindow) : TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspButtonBarSections : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspButtonBarSection* operator[](int Index) { return Items[Index]; }
	
private:
	TspSkinButtonsBar* FButtonsBar;
	HIDESBASE TspButtonBarSection* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TspButtonBarSection* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	TspSkinButtonsBar* __fastcall GetButtonsBar(void);
	__fastcall TspButtonBarSections(TspSkinButtonsBar* ButtonsBar);
	HIDESBASE TspButtonBarSection* __fastcall Add(void);
	__property TspButtonBarSection* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspButtonBarSections(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSectionButton;
class PASCALIMPLEMENTATION TspSectionButton : public TspSkinSpeedButton 
{
	typedef TspSkinSpeedButton inherited;
	
private:
	int FItemIndex;
	TspSkinButtonsBar* FButtonsBar;
	
protected:
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	
public:
	__fastcall TspSectionButton(Classes::TComponent* AOwner, TspSkinButtonsBar* AButtonsBar, int AIndex);
	virtual void __fastcall ButtonClick(void);
public:
	#pragma option push -w-inl
	/* TspSkinSpeedButton.Create */ inline __fastcall virtual TspSectionButton(Classes::TComponent* AOwner) : TspSkinSpeedButton(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinSpeedButton.Destroy */ inline __fastcall virtual ~TspSectionButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSectionItem;
class PASCALIMPLEMENTATION TspSectionItem : public TspSkinSpeedButton 
{
	typedef TspSkinSpeedButton inherited;
	
private:
	int FItemIndex;
	TspSkinButtonsBar* FButtonsBar;
	int FSectionIndex;
	
protected:
	bool FWebStyle;
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	
public:
	__fastcall TspSectionItem(Classes::TComponent* AOwner, TspSkinButtonsBar* AButtonsBar, int ASectionIndex, int AIndex, bool AWebStyle);
	virtual void __fastcall ButtonClick(void);
	virtual void __fastcall Paint(void);
public:
	#pragma option push -w-inl
	/* TspSkinSpeedButton.Create */ inline __fastcall virtual TspSectionItem(Classes::TComponent* AOwner) : TspSkinSpeedButton(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinSpeedButton.Destroy */ inline __fastcall virtual ~TspSectionItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinPage;
class PASCALIMPLEMENTATION TspSkinPage : public TspSkinPanel 
{
	typedef TspSkinPanel inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	
protected:
	int FImageIndex;
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	
public:
	__fastcall virtual TspSkinPage(Classes::TComponent* AOwner);
	
__published:
	__property int ImageIndex = {read=FImageIndex, write=FImageIndex, nodefault};
	__property Caption ;
	__property Height  = {stored=false};
	__property TabOrder  = {stored=false, default=-1};
	__property Visible  = {stored=false, default=1};
	__property Width  = {stored=false};
public:
	#pragma option push -w-inl
	/* TspSkinPanel.Destroy */ inline __fastcall virtual ~TspSkinPage(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinPage(HWND ParentWindow) : TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinNotebook;
class PASCALIMPLEMENTATION TspSkinNotebook : public TspSkinPanel 
{
	typedef TspSkinPanel inherited;
	
private:
	Classes::TStrings* FAccess;
	int FPageIndex;
	Classes::TNotifyEvent FOnPageChanged;
	bool FButtonsMode;
	Classes::TList* FButtons;
	Imglist::TCustomImageList* FImages;
	AnsiString FButtonSkinDataName;
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	void __fastcall ClearButtons(void);
	void __fastcall SetPages(Classes::TStrings* Value);
	void __fastcall SetActivePage(const AnsiString Value);
	AnsiString __fastcall GetActivePage();
	void __fastcall SetPageIndex(int Value);
	void __fastcall SetButtonsMode(bool Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC Classes::TComponent* __fastcall GetChildOwner(void);
	DYNAMIC void __fastcall GetChildren(Classes::TGetChildProc Proc, Classes::TComponent* Root);
	virtual void __fastcall ReadState(Classes::TReader* Reader);
	virtual void __fastcall ShowControl(Controls::TControl* AControl);
	void __fastcall UpdateButtons(void);
	
public:
	Classes::TList* FPageList;
	void __fastcall UpdateButton(int APageIndex, AnsiString ACaption);
	virtual void __fastcall Loaded(void);
	__fastcall virtual TspSkinNotebook(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinNotebook(void);
	
__published:
	__property AnsiString ActivePage = {read=GetActivePage, write=SetActivePage, stored=false};
	__property bool ButtonsMode = {read=FButtonsMode, write=SetButtonsMode, nodefault};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Font ;
	__property Enabled  = {default=1};
	__property Constraints ;
	__property int PageIndex = {read=FPageIndex, write=SetPageIndex, default=0};
	__property Classes::TStrings* Pages = {read=FAccess, write=SetPages, stored=false};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property Classes::TNotifyEvent OnPageChanged = {read=FOnPageChanged, write=FOnPageChanged};
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinNotebook(HWND ParentWindow) : TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspPageButton;
class PASCALIMPLEMENTATION TspPageButton : public TspSkinSpeedButton 
{
	typedef TspSkinSpeedButton inherited;
	
private:
	int FPageIndex;
	TspSkinNotebook* FNoteBook;
	
public:
	__fastcall TspPageButton(Classes::TComponent* AOwner, TspSkinNotebook* ANoteBook, int APageIndex);
	virtual void __fastcall ButtonClick(void);
public:
	#pragma option push -w-inl
	/* TspSkinSpeedButton.Create */ inline __fastcall virtual TspPageButton(Classes::TComponent* AOwner) : TspSkinSpeedButton(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinSpeedButton.Destroy */ inline __fastcall virtual ~TspPageButton(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspScrollType { stHorizontal, stVertical };
#pragma option pop

class DELPHICLASS TspSkinScrollPanel;
class PASCALIMPLEMENTATION TspSkinScrollPanel : public TspSkinControl 
{
	typedef TspSkinControl inherited;
	
private:
	bool FClicksDisabled;
	bool FCanFocused;
	bool FHotScroll;
	int TimerMode;
	int SMax;
	int SPosition;
	int SPage;
	int SOldPosition;
	bool FAutoSize;
	int FVSizeOffset;
	int FHSizeOffset;
	TspScrollType FScrollType;
	int FScrollOffset;
	int FScrollTimerInterval;
	TspControlButton Buttons[2];
	Skindata::TspDataSkinPanelControl* PanelData;
	Skindata::TspDataSkinButtonControl* ButtonData;
	void __fastcall SetScrollType(TspScrollType Value);
	void __fastcall SetScrollOffset(int Value);
	void __fastcall SetScrollTimerInterval(int Value);
	void __fastcall DrawButton(Graphics::TCanvas* Cnvs, int i);
	void __fastcall SetPosition(const int Value);
	
protected:
	virtual void __fastcall GetSkinData(void);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	HIDESBASE MESSAGE void __fastcall WMSETCURSOR(Messages::TWMSetCursor &Message);
	HIDESBASE MESSAGE void __fastcall WMMOUSEWHEEL(Messages::TMessage &Message);
	MESSAGE void __fastcall CMWantSpecialKey(Messages::TWMKey &Msg);
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall SetButtonsVisible(bool AVisible);
	void __fastcall ButtonClick(int I);
	void __fastcall ButtonDown(int I);
	void __fastcall ButtonUp(int I);
	void __fastcall GetHRange(void);
	void __fastcall GetVRange(void);
	void __fastcall VScrollControls(int AOffset);
	void __fastcall HScrollControls(int AOffset);
	virtual void __fastcall AdjustClientRect(Types::TRect &Rect);
	void __fastcall StartTimer(void);
	void __fastcall StopTimer(void);
	virtual void __fastcall Loaded(void);
	MESSAGE void __fastcall CMBENCPaint(Messages::TMessage &Message);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	__fastcall virtual TspSkinScrollPanel(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinScrollPanel(void);
	virtual void __fastcall Paint(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall UpDateSize(void);
	void __fastcall GetScrollInfo(void);
	__property int Position = {read=SPosition, write=SetPosition, nodefault};
	
__published:
	__property bool CanFocused = {read=FCanFocused, write=FCanFocused, nodefault};
	__property bool HotScroll = {read=FHotScroll, write=FHotScroll, nodefault};
	__property bool AutoSize = {read=FAutoSize, write=FAutoSize, nodefault};
	__property Align  = {default=0};
	__property TspScrollType ScrollType = {read=FScrollType, write=SetScrollType, nodefault};
	__property int ScrollOffset = {read=FScrollOffset, write=SetScrollOffset, nodefault};
	__property int ScrollTimerInterval = {read=FScrollTimerInterval, write=SetScrollTimerInterval, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinScrollPanel(HWND ParentWindow) : TspSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinGraphicButton;
class PASCALIMPLEMENTATION TspSkinGraphicButton : public TspSkinMenuSpeedButton 
{
	typedef TspSkinMenuSpeedButton inherited;
	
protected:
	Skinmenus::TspSkinImagesMenu* FGraphicMenu;
	Imglist::TCustomImageList* FGraphicImages;
	virtual void __fastcall InitImages(void);
	virtual void __fastcall InitItems(void);
	Graphics::TFont* __fastcall GetMenuDefaultFont(void);
	void __fastcall SetMenuDefaultFont(Graphics::TFont* Value);
	bool __fastcall GetMenuUseSkinFont(void);
	void __fastcall SetMenuUseSkinFont(bool Value);
	bool __fastcall GetMenuAlphaBlend(void);
	void __fastcall SetMenuAlphaBlend(bool Value);
	bool __fastcall GetMenuAlphaBlendAnimation(void);
	void __fastcall SetMenuAlphaBlendAnimation(bool Value);
	int __fastcall GetMenuAlphaBlendValue(void);
	void __fastcall SetMenuAlphaBlendValue(int Value);
	bool __fastcall GetMenuShowHints(void);
	void __fastcall SetMenuShowHints(bool Value);
	Skinhint::TspSkinHint* __fastcall GetMenuSkinHint(void);
	void __fastcall SetMenuSkinHint(Skinhint::TspSkinHint* Value);
	Skinmenus::TspImagesMenuItems* __fastcall GetGraphicMenuItems(void);
	Skinmenus::TspImagesMenuItem* __fastcall GetSelectedItem(void);
	int __fastcall GetItemIndex(void);
	void __fastcall SetItemIndex(int Value);
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TspSkinGraphicButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinGraphicButton(void);
	__property Skinmenus::TspImagesMenuItem* SelectedItem = {read=GetSelectedItem};
	
__published:
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property Skinhint::TspSkinHint* MenuSkinHint = {read=GetMenuSkinHint, write=SetMenuSkinHint};
	__property bool MenuShowHints = {read=GetMenuShowHints, write=SetMenuShowHints, nodefault};
	__property Skinmenus::TspImagesMenuItems* GraphicItems = {read=GetGraphicMenuItems};
	__property bool MenuUseSkinFont = {read=GetMenuUseSkinFont, write=SetMenuUseSkinFont, nodefault};
	__property Graphics::TFont* MenuDefaultFont = {read=GetMenuDefaultFont, write=SetMenuDefaultFont};
	__property bool MenuAlphaBlend = {read=GetMenuAlphaBlend, write=SetMenuAlphaBlend, nodefault};
	__property int MenuAlphaBlendValue = {read=GetMenuAlphaBlendValue, write=SetMenuAlphaBlendValue, nodefault};
	__property bool MenuAlphaBlendAnimation = {read=GetMenuAlphaBlendAnimation, write=SetMenuAlphaBlendAnimation, nodefault};
};


class DELPHICLASS TspSkinGradientStyleButton;
class PASCALIMPLEMENTATION TspSkinGradientStyleButton : public TspSkinGraphicButton 
{
	typedef TspSkinGraphicButton inherited;
	
protected:
	virtual void __fastcall InitImages(void);
	virtual void __fastcall InitItems(void);
public:
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Create */ inline __fastcall virtual TspSkinGradientStyleButton(Classes::TComponent* AOwner) : TspSkinGraphicButton(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Destroy */ inline __fastcall virtual ~TspSkinGradientStyleButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinBrushStyleButton;
class PASCALIMPLEMENTATION TspSkinBrushStyleButton : public TspSkinGraphicButton 
{
	typedef TspSkinGraphicButton inherited;
	
protected:
	virtual void __fastcall InitImages(void);
	virtual void __fastcall InitItems(void);
public:
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Create */ inline __fastcall virtual TspSkinBrushStyleButton(Classes::TComponent* AOwner) : TspSkinGraphicButton(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Destroy */ inline __fastcall virtual ~TspSkinBrushStyleButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinPenStyleButton;
class PASCALIMPLEMENTATION TspSkinPenStyleButton : public TspSkinGraphicButton 
{
	typedef TspSkinGraphicButton inherited;
	
protected:
	virtual void __fastcall InitImages(void);
	virtual void __fastcall InitItems(void);
public:
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Create */ inline __fastcall virtual TspSkinPenStyleButton(Classes::TComponent* AOwner) : TspSkinGraphicButton(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Destroy */ inline __fastcall virtual ~TspSkinPenStyleButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinPenWidthButton;
class PASCALIMPLEMENTATION TspSkinPenWidthButton : public TspSkinGraphicButton 
{
	typedef TspSkinGraphicButton inherited;
	
protected:
	virtual void __fastcall InitImages(void);
	virtual void __fastcall InitItems(void);
public:
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Create */ inline __fastcall virtual TspSkinPenWidthButton(Classes::TComponent* AOwner) : TspSkinGraphicButton(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Destroy */ inline __fastcall virtual ~TspSkinPenWidthButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinShadowStyleButton;
class PASCALIMPLEMENTATION TspSkinShadowStyleButton : public TspSkinGraphicButton 
{
	typedef TspSkinGraphicButton inherited;
	
protected:
	virtual void __fastcall InitImages(void);
	virtual void __fastcall InitItems(void);
public:
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Create */ inline __fastcall virtual TspSkinShadowStyleButton(Classes::TComponent* AOwner) : TspSkinGraphicButton(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinGraphicButton.Destroy */ inline __fastcall virtual ~TspSkinShadowStyleButton(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Word BE_ID = 0x41a2;
static const Word BE_BASE = 0xbc4a;
static const Word CM_BEPAINT = 0xbc4a;
static const Word CM_BENCPAINT = 0xbc4b;
static const Word CM_BEFULLRENDER = 0xbc4c;
static const Word CM_BEWAIT = 0xbc4d;
static const Word CM_BERUN = 0xbc4e;
extern PACKAGE void __fastcall NotebookHandlesNeeded(TspSkinNotebook* Notebook);

}	/* namespace Skinctrls */
using namespace Skinctrls;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SkinCtrls
