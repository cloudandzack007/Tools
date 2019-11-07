// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SkinBoxCtrls.pas' rev: 6.00

#ifndef SkinBoxCtrlsHPP
#define SkinBoxCtrlsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <MaskUtils.hpp>	// Pascal unit
#include <SPUtils.hpp>	// Pascal unit
#include <SkinMenus.hpp>	// Pascal unit
#include <spcalendar.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Mask.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <CommCtrl.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
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

namespace Skinboxctrls
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TspDrawSkinItemEvent)(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TxtRect, Windows::TOwnerDrawState State);

#pragma pack(push, 1)
struct TspCBButtonX
{
	Types::TRect R;
	bool MouseIn;
	bool Down;
} ;
#pragma pack(pop)

typedef void __fastcall (__closure *TspOnEditCancelMode)(Controls::TControl* C);

class DELPHICLASS TspCustomEdit;
class PASCALIMPLEMENTATION TspCustomEdit : public Mask::TCustomMaskEdit 
{
	typedef Mask::TCustomMaskEdit inherited;
	
protected:
	Classes::TNotifyEvent FOnUp;
	Classes::TNotifyEvent FOnDown;
	Classes::TNotifyEvent FOnKillFocus;
	bool FDown;
	bool FReadOnly;
	bool FEditTransparent;
	TspOnEditCancelMode FOnEditCancelMode;
	Skinmenus::TspSkinPopupMenu* FSysPopupMenu;
	void __fastcall DoUndo(System::TObject* Sender);
	void __fastcall DoCut(System::TObject* Sender);
	void __fastcall DoCopy(System::TObject* Sender);
	void __fastcall DoPaste(System::TObject* Sender);
	void __fastcall DoDelete(System::TObject* Sender);
	void __fastcall DoSelectAll(System::TObject* Sender);
	void __fastcall CreateSysPopupMenu(void);
	MESSAGE void __fastcall WMAFTERDISPATCH(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMCONTEXTMENU(Messages::TWMContextMenu &Message);
	void __fastcall SetEditTransparent(bool Value);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall CNCtlColorEdit(Messages::TWMCtlColor &Message);
	MESSAGE void __fastcall CNCtlColorStatic(Messages::TWMCtlColor &Message);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall Change(void);
	HIDESBASE MESSAGE void __fastcall WMCHAR(Messages::TWMKey &Message);
	MESSAGE void __fastcall WMSetText(Messages::TWMSetText &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMMove(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMCut(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaste(Messages::TMessage &Message);
	MESSAGE void __fastcall WMClear(Messages::TMessage &Message);
	MESSAGE void __fastcall WMUndo(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonUp(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMOUSEMOVE(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFont(Messages::TWMSetFont &Message);
	MESSAGE void __fastcall CMCancelMode(Controls::TCMCancelMode &Message);
	
public:
	__fastcall virtual TspCustomEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspCustomEdit(void);
	virtual void __fastcall Invalidate(void);
	__property ReadOnly  = {read=FReadOnly, write=FReadOnly, default=0};
	__property bool EditTransparent = {read=FEditTransparent, write=SetEditTransparent, nodefault};
	__property Classes::TNotifyEvent OnUp = {read=FOnUp, write=FOnUp};
	__property Classes::TNotifyEvent OnDown = {read=FOnDown, write=FOnDown};
	__property TspOnEditCancelMode OnEditCancelMode = {read=FOnEditCancelMode, write=FOnEditCancelMode};
	
__published:
	__property EditMask ;
	__property Text ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspCustomEdit(HWND ParentWindow) : Mask::TCustomMaskEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinNumEdit;
class PASCALIMPLEMENTATION TspSkinNumEdit : public TspCustomEdit 
{
	typedef TspCustomEdit inherited;
	
protected:
	Classes::TNotifyEvent FOnUpClick;
	Classes::TNotifyEvent FOnDownClick;
	bool FEditorEnabled;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool __fastcall IsValidChar(char Key);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(char &Key);
	HIDESBASE MESSAGE void __fastcall WMMOUSEWHEEL(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	
public:
	bool Float;
	__fastcall TspSkinNumEdit(Classes::TComponent* AOwner);
	__property bool EditorEnabled = {read=FEditorEnabled, write=FEditorEnabled, default=1};
	__property Classes::TNotifyEvent OnUpClick = {read=FOnUpClick, write=FOnUpClick};
	__property Classes::TNotifyEvent OnDownClick = {read=FOnDownClick, write=FOnDownClick};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TspCustomEdit.Destroy */ inline __fastcall virtual ~TspSkinNumEdit(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinNumEdit(HWND ParentWindow) : TspCustomEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCustomEdit;
class PASCALIMPLEMENTATION TspSkinCustomEdit : public TspCustomEdit 
{
	typedef TspCustomEdit inherited;
	
protected:
	bool FStopDraw;
	Graphics::TColor FDefaultColor;
	Classes::TNotifyEvent FOnButtonClick;
	#pragma pack(push, 1)
	Types::TRect FButtonRect;
	#pragma pack(pop)
	
	bool FButtonMode;
	bool FButtonDown;
	bool FButtonActive;
	#pragma pack(push, 1)
	Types::TRect FEditRect;
	#pragma pack(pop)
	
	Graphics::TBitmap* ParentImage;
	bool FMouseIn;
	int FIndex;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	Graphics::TBitmap* Picture;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	int FDefaultWidth;
	int FDefaultHeight;
	Classes::TAlignment FAlignment;
	void __fastcall DrawEditBackGround(Graphics::TCanvas* C);
	void __fastcall DrawSkinEdit(Graphics::TCanvas* C, bool ADrawText);
	void __fastcall DrawSkinEdit2(Graphics::TCanvas* C, bool ADrawText);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetDefaultWidth(int Value);
	void __fastcall SetDefaultHeight(int Value);
	void __fastcall OnDefaultFontChange(System::TObject* Sender);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall CalcRects(void);
	void __fastcall SetButtonMode(bool Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SetAlphaBlend(bool AValue);
	void __fastcall SetAlphaBlendValue(Byte AValue);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall GetSkinData(void);
	MESSAGE void __fastcall CMBENCPaint(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCLBUTTONDOWN(Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCLBUTTONDBCLK(Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCLBUTTONUP(Messages::TWMNCHitMessage &Message);
	MESSAGE void __fastcall WMNCMOUSEMOVE(Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMOUSEMOVE(Messages::TWMNCHitMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHITTEST(Messages::TWMNCHitTest &Message);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	virtual void __fastcall Loaded(void);
	void __fastcall AdjustEditHeight(void);
	void __fastcall CalcEditHeight(int &AHeight);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	void __fastcall InvalidateNC(void);
	void __fastcall SetDefaultColor(Graphics::TColor Value);
	void __fastcall DrawResizeButton(Graphics::TCanvas* C, const Types::TRect &ButtonR);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	int LOffset;
	int ROffset;
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor DisabledFontColor;
	Graphics::TColor ActiveFontColor;
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnEnabledButtonRect;
	#pragma pack(pop)
	
	bool StretchEffect;
	__fastcall virtual TspSkinCustomEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomEdit(void);
	void __fastcall ChangeSkinData(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall SetParentImage(void);
	virtual void __fastcall Invalidate(void);
	__property Text ;
	__property Graphics::TColor DefaultColor = {read=FDefaultColor, write=SetDefaultColor, nodefault};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property int DefaultWidth = {read=FDefaultWidth, write=SetDefaultWidth, nodefault};
	__property int DefaultHeight = {read=FDefaultHeight, write=SetDefaultHeight, nodefault};
	__property bool ButtonMode = {read=FButtonMode, write=SetButtonMode, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property bool AlphaBlend = {read=FAlphaBlend, write=SetAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=SetAlphaBlendValue, nodefault};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property ReadOnly  = {default=0};
	__property Align  = {default=0};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Font ;
	__property Anchors  = {default=3};
	__property AutoSelect  = {default=1};
	__property BiDiMode ;
	__property CharCase  = {default=0};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property HideSelection  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property MaxLength  = {default=0};
	__property OEMConvert  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property Classes::TNotifyEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
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
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomEdit(HWND ParentWindow) : TspCustomEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinEdit;
class PASCALIMPLEMENTATION TspSkinEdit : public TspSkinCustomEdit 
{
	typedef TspSkinCustomEdit inherited;
	
__published:
	__property Text ;
	__property DefaultColor ;
	__property DefaultFont ;
	__property UseSkinFont ;
	__property DefaultWidth ;
	__property DefaultHeight ;
	__property ButtonMode ;
	__property SkinData ;
	__property SkinDataName ;
	__property AlphaBlend ;
	__property AlphaBlendValue ;
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property ReadOnly  = {default=0};
	__property Align  = {default=0};
	__property Alignment  = {default=0};
	__property Font ;
	__property Anchors  = {default=3};
	__property AutoSelect  = {default=1};
	__property BiDiMode ;
	__property CharCase  = {default=0};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property HideSelection  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property MaxLength  = {default=0};
	__property OEMConvert  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property Classes::TNotifyEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
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
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomEdit.Create */ inline __fastcall virtual TspSkinEdit(Classes::TComponent* AOwner) : TspSkinCustomEdit(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomEdit.Destroy */ inline __fastcall virtual ~TspSkinEdit(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinEdit(HWND ParentWindow) : TspSkinCustomEdit(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspURLState { spstIN, spstOUT };
#pragma option pop

#pragma option push -b-
enum TspURLLinkType { spltHTTP, spltMail };
#pragma option pop

class DELPHICLASS TspSkinURLEdit;
class PASCALIMPLEMENTATION TspSkinURLEdit : public TspSkinEdit 
{
	typedef TspSkinEdit inherited;
	
private:
	Stdctrls::TLabel* TempLabel;
	bool FExecute;
	bool FCanExecute;
	bool FBtnDown;
	TspURLState FState;
	TspURLLinkType FLinkType;
	bool __fastcall InText(int X);
	
protected:
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	
public:
	__fastcall virtual TspSkinURLEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinURLEdit(void);
	
__published:
	__property TspURLLinkType LinkType = {read=FLinkType, write=FLinkType, nodefault};
	__property bool Execute = {read=FExecute, write=FExecute, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinURLEdit(HWND ParentWindow) : TspSkinEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMemo;
class PASCALIMPLEMENTATION TspSkinMemo : public Stdctrls::TMemo 
{
	typedef Stdctrls::TMemo inherited;
	
protected:
	bool FStopDraw;
	#pragma pack(push, 1)
	Types::TRect FTextArea;
	#pragma pack(pop)
	
	bool FBitMapBG;
	bool FReadOnly;
	bool FMouseIn;
	int FIndex;
	Graphics::TBitmap* ParentImage;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	Graphics::TBitmap* Picture;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	Skinctrls::TspSkinScrollBar* FVScrollBar;
	Skinctrls::TspSkinScrollBar* FHScrollBar;
	bool FDown;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	bool FUseSkinFontColor;
	Skinmenus::TspSkinPopupMenu* FSysPopupMenu;
	void __fastcall SkinFramePaint(Graphics::TCanvas* C);
	void __fastcall DoUndo(System::TObject* Sender);
	void __fastcall DoCut(System::TObject* Sender);
	void __fastcall DoCopy(System::TObject* Sender);
	void __fastcall DoPaste(System::TObject* Sender);
	void __fastcall DoDelete(System::TObject* Sender);
	void __fastcall DoSelectAll(System::TObject* Sender);
	void __fastcall CreateSysPopupMenu(void);
	void __fastcall OnDefaultFontChange(System::TObject* Sender);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetBitMapBG(bool Value);
	void __fastcall AdjustTextBorders(void);
	void __fastcall SetVScrollBar(Skinctrls::TspSkinScrollBar* Value);
	void __fastcall SetHScrollBar(Skinctrls::TspSkinScrollBar* Value);
	void __fastcall OnVScrollBarChange(System::TObject* Sender);
	void __fastcall OnHScrollBarChange(System::TObject* Sender);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SetAlphaBlend(bool AValue);
	void __fastcall SetAlphaBlendValue(Byte AValue);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall Change(void);
	void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall CNCtlColorEdit(Messages::TWMCtlColor &Message);
	MESSAGE void __fastcall CNCtlColorStatic(Messages::TWMCtlColor &Message);
	HIDESBASE MESSAGE void __fastcall WMCHAR(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMCONTEXTMENU(Messages::TWMContextMenu &Message);
	MESSAGE void __fastcall WMAFTERDISPATCH(Messages::TMessage &Message);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall Loaded(void);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TWMNCPaint &Message);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMove(Messages::TWMMove &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMLBUTTONDOWN(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLBUTTONUP(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMOUSEMOVE(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMOUSEWHEEL(Messages::TMessage &Message);
	MESSAGE void __fastcall WMSetText(Messages::TWMSetText &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Messages::TWMKey &Message);
	MESSAGE void __fastcall WMCut(Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Messages::TMessage &Message);
	MESSAGE void __fastcall WMClear(Messages::TMessage &Message);
	MESSAGE void __fastcall WMUndo(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMVSCROLL(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMHSCROLL(Messages::TWMScroll &Message);
	void __fastcall DrawMemoBackGround(Graphics::TCanvas* C);
	Graphics::TColor __fastcall GetDisabledFontColor(void);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	#pragma pack(push, 1)
	Types::TPoint LTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor BGColor;
	Graphics::TColor ActiveBGColor;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	bool StretchEffect;
	Sputils::TspStretchType StretchType;
	void __fastcall UpDateScrollRange(void);
	__fastcall virtual TspSkinMemo(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinMemo(void);
	void __fastcall ChangeSkinData(void);
	void __fastcall SetParentImage(void);
	virtual void __fastcall Invalidate(void);
	
__published:
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property bool UseSkinFontColor = {read=FUseSkinFontColor, write=FUseSkinFontColor, nodefault};
	__property bool BitMapBG = {read=FBitMapBG, write=SetBitMapBG, nodefault};
	__property Skinctrls::TspSkinScrollBar* VScrollBar = {read=FVScrollBar, write=SetVScrollBar};
	__property Skinctrls::TspSkinScrollBar* HScrollBar = {read=FHScrollBar, write=SetHScrollBar};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property bool Transparent = {read=FAlphaBlend, write=SetAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=SetAlphaBlendValue, nodefault};
	__property ReadOnly  = {read=FReadOnly, write=FReadOnly, default=0};
	__property Align  = {default=0};
	__property Alignment  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property HideSelection  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property Lines ;
	__property MaxLength  = {default=0};
	__property OEMConvert  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property WantReturns  = {default=1};
	__property WantTabs  = {default=0};
	__property WordWrap  = {default=1};
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
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
	__property OnStartDock ;
	__property OnStartDrag ;
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinMemo(HWND ParentWindow) : Stdctrls::TMemo(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMemo2;
class PASCALIMPLEMENTATION TspSkinMemo2 : public Stdctrls::TMemo 
{
	typedef Stdctrls::TMemo inherited;
	
protected:
	bool FMouseIn;
	int FIndex;
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	Skinctrls::TspSkinScrollBar* FVScrollBar;
	Skinctrls::TspSkinScrollBar* FHScrollBar;
	bool FDown;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	bool FUseSkinFontColor;
	Skinmenus::TspSkinPopupMenu* FSysPopupMenu;
	void __fastcall DoUndo(System::TObject* Sender);
	void __fastcall DoCut(System::TObject* Sender);
	void __fastcall DoCopy(System::TObject* Sender);
	void __fastcall DoPaste(System::TObject* Sender);
	void __fastcall DoDelete(System::TObject* Sender);
	void __fastcall DoSelectAll(System::TObject* Sender);
	void __fastcall CreateSysPopupMenu(void);
	void __fastcall OnDefaultFontChange(System::TObject* Sender);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetVScrollBar(Skinctrls::TspSkinScrollBar* Value);
	void __fastcall SetHScrollBar(Skinctrls::TspSkinScrollBar* Value);
	void __fastcall OnVScrollBarChange(System::TObject* Sender);
	void __fastcall OnHScrollBarChange(System::TObject* Sender);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall Change(void);
	void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall WMCONTEXTMENU(Messages::TWMContextMenu &Message);
	MESSAGE void __fastcall WMAFTERDISPATCH(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall CNCtlColorEdit(Messages::TWMCtlColor &Message);
	HIDESBASE MESSAGE void __fastcall WMCHAR(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMove(Messages::TWMMove &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMLBUTTONDOWN(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLBUTTONUP(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMOUSEMOVE(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMMOUSEWHEEL(Messages::TMessage &Message);
	MESSAGE void __fastcall WMSetText(Messages::TWMSetText &Message);
	HIDESBASE MESSAGE void __fastcall WMKeyDown(Messages::TWMKey &Message);
	MESSAGE void __fastcall WMCut(Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Messages::TMessage &Message);
	MESSAGE void __fastcall WMClear(Messages::TMessage &Message);
	MESSAGE void __fastcall WMUndo(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMVSCROLL(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall WMHSCROLL(Messages::TWMScroll &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Message);
	Graphics::TColor __fastcall GetDisabledFontColor(void);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor BGColor;
	Graphics::TColor ActiveBGColor;
	__fastcall virtual TspSkinMemo2(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinMemo2(void);
	void __fastcall ChangeSkinData(void);
	virtual void __fastcall Invalidate(void);
	__property BorderStyle  = {default=1};
	__property ScrollBars  = {default=0};
	void __fastcall UpDateScrollRange(void);
	
__published:
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property bool UseSkinFontColor = {read=FUseSkinFontColor, write=FUseSkinFontColor, nodefault};
	__property Skinctrls::TspSkinScrollBar* VScrollBar = {read=FVScrollBar, write=SetVScrollBar};
	__property Skinctrls::TspSkinScrollBar* HScrollBar = {read=FHScrollBar, write=SetHScrollBar};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property ReadOnly  = {default=0};
	__property Align  = {default=0};
	__property Alignment  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property HideSelection  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property Lines ;
	__property MaxLength  = {default=0};
	__property OEMConvert  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property WantReturns  = {default=1};
	__property WantTabs  = {default=0};
	__property WordWrap  = {default=1};
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
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
	__property OnStartDock ;
	__property OnStartDrag ;
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinMemo2(HWND ParentWindow) : Stdctrls::TMemo(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspListBox;
class DELPHICLASS TspSkinCustomListBox;
class PASCALIMPLEMENTATION TspSkinCustomListBox : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
protected:
	Classes::TStrings* FTabWidths;
	bool FUseSkinItemHeight;
	bool FHorizontalExtent;
	bool FStopUpDateHScrollBar;
	int FRowCount;
	Graphics::TBitmap* FGlyph;
	Skinctrls::TspSkinPanelNumGlyphs FNumGlyphs;
	int FSpacing;
	Imglist::TCustomImageList* FImages;
	int FImageIndex;
	Classes::TNotifyEvent FOnUpButtonClick;
	Classes::TNotifyEvent FOnDownButtonClick;
	Classes::TNotifyEvent FOnCheckButtonClick;
	int FDefaultItemHeight;
	int FDefaultCaptionHeight;
	Graphics::TFont* FDefaultCaptionFont;
	TspDrawSkinItemEvent FOnDrawItem;
	#pragma pack(push, 1)
	Types::TRect NewClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ListRect;
	#pragma pack(pop)
	
	bool FCaptionMode;
	Classes::TAlignment FAlignment;
	TspCBButtonX Buttons[3];
	int OldActiveButton;
	int ActiveButton;
	int CaptureButton;
	#pragma pack(push, 1)
	Types::TRect NewCaptionRect;
	#pragma pack(pop)
	
	Classes::TNotifyEvent FOnListBoxClick;
	Classes::TNotifyEvent FOnListBoxDblClick;
	Controls::TMouseEvent FOnListBoxMouseDown;
	Controls::TMouseMoveEvent FOnListBoxMouseMove;
	Controls::TMouseEvent FOnListBoxMouseUp;
	Controls::TKeyEvent FOnListBoxKeyDown;
	Controls::TKeyPressEvent FOnListBoxKeyPress;
	Controls::TKeyEvent FOnListBoxKeyUp;
	int TimerMode;
	bool WaitMode;
	Controls::TDragDropEvent __fastcall GetOnListBoxDragDrop();
	void __fastcall SetOnListBoxDragDrop(Controls::TDragDropEvent Value);
	Controls::TDragOverEvent __fastcall GetOnListBoxDragOver();
	void __fastcall SetOnListBoxDragOver(Controls::TDragOverEvent Value);
	Controls::TStartDragEvent __fastcall GetOnListBoxStartDrag();
	void __fastcall SetOnListBoxStartDrag(Controls::TStartDragEvent Value);
	Controls::TEndDragEvent __fastcall GetOnListBoxEndDrag();
	void __fastcall SetOnListBoxEndDrag(Controls::TEndDragEvent Value);
	Controls::TDragMode __fastcall GetListBoxDragMode(void);
	void __fastcall SetListBoxDragMode(Controls::TDragMode Value);
	Controls::TDragKind __fastcall GetListBoxDragKind(void);
	void __fastcall SetListBoxDragKind(Controls::TDragKind Value);
	Controls::TCursor __fastcall GetListBoxDragCursor(void);
	void __fastcall SetListBoxDragCursor(Controls::TCursor Value);
	virtual int __fastcall GetFullItemWidth(int Index, Graphics::TCanvas* ACnvs);
	void __fastcall SetHorizontalExtent(bool Value);
	int __fastcall GetColumns(void);
	void __fastcall SetColumns(int Value);
	void __fastcall SetRowCount(int Value);
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	void __fastcall SetNumGlyphs(Skinctrls::TspSkinPanelNumGlyphs Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall StartTimer(void);
	void __fastcall StopTimer(void);
	void __fastcall ButtonDown(int I, int X, int Y);
	void __fastcall ButtonUp(int I, int X, int Y);
	void __fastcall ButtonEnter(int I);
	void __fastcall ButtonLeave(int I);
	void __fastcall DrawButton(Graphics::TCanvas* Cnvs, int i);
	void __fastcall TestActive(int X, int Y);
	virtual void __fastcall ListBoxMouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ListBoxMouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ListBoxMouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ListBoxClick(void);
	virtual void __fastcall ListBoxDblClick(void);
	virtual void __fastcall ListBoxKeyDown(Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall ListBoxKeyUp(Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall ListBoxKeyPress(char &Key);
	virtual void __fastcall ListBoxEnter(void);
	virtual void __fastcall ListBoxExit(void);
	void __fastcall ShowScrollBar(void);
	void __fastcall HideScrollBar(void);
	void __fastcall ShowHScrollBar(void);
	void __fastcall HideHScrollBar(void);
	virtual void __fastcall GetSkinData(void);
	void __fastcall CalcRects(void);
	void __fastcall SBChange(System::TObject* Sender);
	void __fastcall HSBChange(System::TObject* Sender);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	virtual void __fastcall DefaultFontChange(void);
	void __fastcall OnDefaultCaptionFontChange(System::TObject* Sender);
	void __fastcall SetTabWidths(Classes::TStrings* Value);
	void __fastcall SetDefaultCaptionHeight(int Value);
	void __fastcall SetDefaultCaptionFont(Graphics::TFont* Value);
	void __fastcall SetDefaultItemHeight(int Value);
	void __fastcall SetCaptionMode(bool Value);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetItems(Classes::TStrings* Value);
	Classes::TStrings* __fastcall GetItems(void);
	int __fastcall GetItemIndex(void);
	void __fastcall SetItemIndex(int Value);
	bool __fastcall GetMultiSelect(void);
	void __fastcall SetMultiSelect(bool Value);
	Graphics::TFont* __fastcall GetListBoxFont(void);
	void __fastcall SetListBoxFont(Graphics::TFont* Value);
	Controls::TTabOrder __fastcall GetListBoxTabOrder(void);
	void __fastcall SetListBoxTabOrder(Controls::TTabOrder Value);
	bool __fastcall GetListBoxTabStop(void);
	void __fastcall SetListBoxTabStop(bool Value);
	Graphics::TCanvas* __fastcall GetCanvas(void);
	bool __fastcall GetExtandedSelect(void);
	void __fastcall SetExtandedSelect(bool Value);
	int __fastcall GetSelCount(void);
	bool __fastcall GetSelected(int Index);
	void __fastcall SetSelected(int Index, bool Value);
	bool __fastcall GetSorted(void);
	void __fastcall SetSorted(bool Value);
	int __fastcall GetTopIndex(void);
	void __fastcall SetTopIndex(int Value);
	Menus::TPopupMenu* __fastcall GetListBoxPopupMenu(void);
	void __fastcall SetListBoxPopupMenu(Menus::TPopupMenu* Value);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall ListBoxWProc(Messages::TMessage &Message, bool &Handled);
	virtual void __fastcall ListBoxCreateWnd(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	bool __fastcall GetAutoComplete(void);
	void __fastcall SetAutoComplete(bool Value);
	
public:
	Skinctrls::TspSkinScrollBar* ScrollBar;
	Skinctrls::TspSkinScrollBar* HScrollBar;
	TspListBox* ListBox;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	#pragma pack(push, 1)
	Types::TRect SItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusItemRect;
	#pragma pack(pop)
	
	int ItemLeftOffset;
	int ItemRightOffset;
	#pragma pack(push, 1)
	Types::TRect ItemTextRect;
	#pragma pack(pop)
	
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor FocusFontColor;
	#pragma pack(push, 1)
	Types::TRect CaptionRect;
	#pragma pack(pop)
	
	AnsiString CaptionFontName;
	Graphics::TFontStyles CaptionFontStyle;
	int CaptionFontHeight;
	Graphics::TColor CaptionFontColor;
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
	Types::TRect CheckButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveCheckButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownCheckButtonRect;
	#pragma pack(pop)
	
	AnsiString VScrollBarName;
	AnsiString HScrollBarName;
	AnsiString BothScrollBarName;
	bool ShowFocus;
	__fastcall virtual TspSkinCustomListBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomListBox(void);
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall UpDateScrollBar(void);
	int __fastcall CalcHeight(int AItemsCount);
	void __fastcall Clear(void);
	int __fastcall ItemAtPos(const Types::TPoint &Pos, bool Existing);
	Types::TRect __fastcall ItemRect(int Item);
	__property int Columns = {read=GetColumns, write=SetColumns, nodefault};
	__property bool Selected[int Index] = {read=GetSelected, write=SetSelected};
	__property Graphics::TCanvas* ListBoxCanvas = {read=GetCanvas};
	__property int SelCount = {read=GetSelCount, nodefault};
	__property int TopIndex = {read=GetTopIndex, write=SetTopIndex, nodefault};
	__property bool UseSkinItemHeight = {read=FUseSkinItemHeight, write=FUseSkinItemHeight, nodefault};
	__property int DefaultCaptionHeight = {read=FDefaultCaptionHeight, write=SetDefaultCaptionHeight, nodefault};
	__property Graphics::TFont* DefaultCaptionFont = {read=FDefaultCaptionFont, write=SetDefaultCaptionFont};
	__property bool CaptionMode = {read=FCaptionMode, write=SetCaptionMode, nodefault};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property int DefaultItemHeight = {read=FDefaultItemHeight, write=SetDefaultItemHeight, nodefault};
	__property Classes::TStrings* TabWidths = {read=FTabWidths, write=SetTabWidths};
	__property Classes::TStrings* Items = {read=GetItems, write=SetItems};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property bool MultiSelect = {read=GetMultiSelect, write=SetMultiSelect, nodefault};
	__property Graphics::TFont* ListBoxFont = {read=GetListBoxFont, write=SetListBoxFont};
	__property Controls::TTabOrder ListBoxTabOrder = {read=GetListBoxTabOrder, write=SetListBoxTabOrder, nodefault};
	__property bool ListBoxTabStop = {read=GetListBoxTabStop, write=SetListBoxTabStop, nodefault};
	__property bool ExtandedSelect = {read=GetExtandedSelect, write=SetExtandedSelect, nodefault};
	__property bool Sorted = {read=GetSorted, write=SetSorted, nodefault};
	__property Menus::TPopupMenu* ListBoxPopupMenu = {read=GetListBoxPopupMenu, write=SetListBoxPopupMenu};
	__property bool HorizontalExtent = {read=FHorizontalExtent, write=SetHorizontalExtent, nodefault};
	__property Controls::TDragMode ListBoxDragMode = {read=GetListBoxDragMode, write=SetListBoxDragMode, nodefault};
	__property Controls::TDragKind ListBoxDragKind = {read=GetListBoxDragKind, write=SetListBoxDragKind, nodefault};
	__property Controls::TCursor ListBoxDragCursor = {read=GetListBoxDragCursor, write=SetListBoxDragCursor, nodefault};
	__property bool AutoComplete = {read=GetAutoComplete, write=SetAutoComplete, nodefault};
	__property Caption ;
	__property Font ;
	__property Align  = {default=0};
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
	__property int RowCount = {read=FRowCount, write=SetRowCount, nodefault};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property Skinctrls::TspSkinPanelNumGlyphs NumGlyphs = {read=FNumGlyphs, write=SetNumGlyphs, nodefault};
	__property int Spacing = {read=FSpacing, write=SetSpacing, nodefault};
	__property OnClick ;
	__property Classes::TNotifyEvent OnUpButtonClick = {read=FOnUpButtonClick, write=FOnUpButtonClick};
	__property Classes::TNotifyEvent OnDownButtonClick = {read=FOnDownButtonClick, write=FOnDownButtonClick};
	__property Classes::TNotifyEvent OnCheckButtonClick = {read=FOnCheckButtonClick, write=FOnCheckButtonClick};
	__property OnCanResize ;
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
	__property Classes::TNotifyEvent OnListBoxClick = {read=FOnListBoxClick, write=FOnListBoxClick};
	__property Classes::TNotifyEvent OnListBoxDblClick = {read=FOnListBoxDblClick, write=FOnListBoxDblClick};
	__property Controls::TMouseEvent OnListBoxMouseDown = {read=FOnListBoxMouseDown, write=FOnListBoxMouseDown};
	__property Controls::TMouseMoveEvent OnListBoxMouseMove = {read=FOnListBoxMouseMove, write=FOnListBoxMouseMove};
	__property Controls::TMouseEvent OnListBoxMouseUp = {read=FOnListBoxMouseUp, write=FOnListBoxMouseUp};
	__property Controls::TKeyEvent OnListBoxKeyDown = {read=FOnListBoxKeyDown, write=FOnListBoxKeyDown};
	__property Controls::TKeyPressEvent OnListBoxKeyPress = {read=FOnListBoxKeyPress, write=FOnListBoxKeyPress};
	__property Controls::TKeyEvent OnListBoxKeyUp = {read=FOnListBoxKeyUp, write=FOnListBoxKeyUp};
	__property TspDrawSkinItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property Controls::TDragDropEvent OnListBoxDragDrop = {read=GetOnListBoxDragDrop, write=SetOnListBoxDragDrop};
	__property Controls::TDragOverEvent OnListBoxDragOver = {read=GetOnListBoxDragOver, write=SetOnListBoxDragOver};
	__property Controls::TStartDragEvent OnListBoxStartDrag = {read=GetOnListBoxStartDrag, write=SetOnListBoxStartDrag};
	__property Controls::TEndDragEvent OnListBoxEndDrag = {read=GetOnListBoxEndDrag, write=SetOnListBoxEndDrag};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomListBox(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspListBox : public Stdctrls::TListBox 
{
	typedef Stdctrls::TListBox inherited;
	
protected:
	int FHorizontalExtentValue;
	void __fastcall DrawTabbedString(AnsiString S, Classes::TStrings* TW, Graphics::TCanvas* C, const Types::TRect &R, int Offset);
	Windows::TOwnerDrawState __fastcall GetState(int AItemID);
	void __fastcall PaintBGWH(Graphics::TCanvas* Cnvs, int AW, int AH, int AX, int AY);
	void __fastcall PaintBG(HDC DC);
	void __fastcall PaintList(HDC DC);
	void __fastcall PaintColumnsList(HDC DC);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall DrawDefaultItem(Graphics::TCanvas* Cnvs, int itemID, const Types::TRect &rcItem, Windows::TOwnerDrawState State);
	void __fastcall DrawSkinItem(Graphics::TCanvas* Cnvs, int itemID, const Types::TRect &rcItem, Windows::TOwnerDrawState State);
	void __fastcall DrawStretchSkinItem(Graphics::TCanvas* Cnvs, int itemID, const Types::TRect &rcItem, Windows::TOwnerDrawState State);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	virtual void __fastcall PaintWindow(HDC DC);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(char &Key);
	DYNAMIC void __fastcall Click(void);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	virtual void __fastcall CreateWnd(void);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	TspSkinCustomListBox* SkinListBox;
	__fastcall virtual TspListBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspListBox(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property int HorizontalExtentValue = {read=FHorizontalExtentValue, write=FHorizontalExtentValue, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspListBox(HWND ParentWindow) : Stdctrls::TListBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinListBox;
class PASCALIMPLEMENTATION TspSkinListBox : public TspSkinCustomListBox 
{
	typedef TspSkinCustomListBox inherited;
	
__published:
	__property TabWidths ;
	__property UseSkinItemHeight ;
	__property HorizontalExtent ;
	__property Columns ;
	__property RowCount ;
	__property Images ;
	__property ImageIndex ;
	__property Glyph ;
	__property NumGlyphs ;
	__property Spacing ;
	__property CaptionMode ;
	__property DefaultCaptionHeight ;
	__property DefaultCaptionFont ;
	__property Alignment  = {default=0};
	__property DefaultItemHeight ;
	__property Items ;
	__property ItemIndex ;
	__property MultiSelect ;
	__property ListBoxFont ;
	__property ListBoxTabOrder ;
	__property ListBoxTabStop ;
	__property ListBoxDragMode ;
	__property ListBoxDragKind ;
	__property ListBoxDragCursor ;
	__property ExtandedSelect ;
	__property Sorted ;
	__property ListBoxPopupMenu ;
	__property Caption ;
	__property Font ;
	__property Align  = {default=0};
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
	__property OnClick ;
	__property Visible  = {default=1};
	__property OnUpButtonClick ;
	__property OnDownButtonClick ;
	__property OnCheckButtonClick ;
	__property OnCanResize ;
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
	__property OnListBoxClick ;
	__property OnListBoxDblClick ;
	__property OnListBoxMouseDown ;
	__property OnListBoxMouseMove ;
	__property OnListBoxMouseUp ;
	__property OnListBoxKeyDown ;
	__property OnListBoxKeyPress ;
	__property OnListBoxKeyUp ;
	__property OnDrawItem ;
	__property OnListBoxDragDrop ;
	__property OnListBoxDragOver ;
	__property OnListBoxStartDrag ;
	__property OnListBoxEndDrag ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomListBox.Create */ inline __fastcall virtual TspSkinListBox(Classes::TComponent* AOwner) : TspSkinCustomListBox(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomListBox.Destroy */ inline __fastcall virtual ~TspSkinListBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinListBox(HWND ParentWindow) : TspSkinCustomListBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinScrollBox;
class PASCALIMPLEMENTATION TspSkinScrollBox : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
protected:
	bool FClicksDisabled;
	bool FCanFocused;
	bool FInCheckScrollBars;
	bool FDown;
	Skinctrls::TspSkinScrollBar* FVScrollBar;
	Skinctrls::TspSkinScrollBar* FHScrollBar;
	int FOldVScrollBarPos;
	int FOldHScrollBarPos;
	int FVSizeOffset;
	int FHSizeOffset;
	Skinctrls::TspSkinBorderStyle FBorderStyle;
	void __fastcall SetBorderStyle(Skinctrls::TspSkinBorderStyle Value);
	void __fastcall SetVScrollBar(Skinctrls::TspSkinScrollBar* Value);
	void __fastcall SetHScrollBar(Skinctrls::TspSkinScrollBar* Value);
	void __fastcall VScrollControls(int AOffset);
	void __fastcall HScrollControls(int AOffset);
	void __fastcall OnHScrollBarChange(System::TObject* Sender);
	void __fastcall OnVScrollBarChange(System::TObject* Sender);
	void __fastcall OnHScrollBarLastChange(System::TObject* Sender);
	void __fastcall OnVScrollBarLastChange(System::TObject* Sender);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TWMNCPaint &Message);
	void __fastcall PaintFrame(Graphics::TCanvas* C);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Msg);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall GetSkinData(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall AdjustClientRect(Types::TRect &Rect);
	HIDESBASE MESSAGE void __fastcall CMVisibleChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanging(Messages::TWMWindowPosMsg &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	MESSAGE void __fastcall CMBENCPaint(Messages::TMessage &Message);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	int BGPictureIndex;
	void __fastcall HScroll(int APosition);
	void __fastcall VScroll(int APosition);
	__fastcall virtual TspSkinScrollBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinScrollBox(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall Paint(void);
	void __fastcall GetHRange(void);
	void __fastcall GetVRange(void);
	void __fastcall UpdateScrollRange(void);
	
__published:
	__property Skinctrls::TspSkinScrollBar* HScrollBar = {read=FHScrollBar, write=SetHScrollBar};
	__property Skinctrls::TspSkinScrollBar* VScrollBar = {read=FVScrollBar, write=SetVScrollBar};
	__property Skinctrls::TspSkinBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, nodefault};
	__property bool CanFocused = {read=FCanFocused, write=FCanFocused, nodefault};
	__property Align  = {default=0};
	__property Color  = {default=-2147483643};
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
	__property OnMouseWheel ;
	__property OnMouseWheelDown ;
	__property OnMouseWheelUp ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinScrollBox(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TCloseUpEvent)(System::TObject* Sender, bool Accept);

#pragma option push -b-
enum TPopupAlign { epaRight, epaLeft };
#pragma option pop

class DELPHICLASS TspPopupListBox;
class PASCALIMPLEMENTATION TspPopupListBox : public TspSkinListBox 
{
	typedef TspSkinListBox inherited;
	
private:
	bool FOldAlphaBlend;
	Byte FOldAlphaBlendValue;
	MESSAGE void __fastcall WMMouseActivate(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TspPopupListBox(Classes::TComponent* AOwner);
	HIDESBASE void __fastcall Hide(void);
	HIDESBASE void __fastcall Show(const Types::TPoint &Origin);
public:
	#pragma option push -w-inl
	/* TspSkinCustomListBox.Destroy */ inline __fastcall virtual ~TspPopupListBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspPopupListBox(HWND ParentWindow) : TspSkinListBox(ParentWindow) { }
	#pragma option pop
	
};


#pragma pack(push, 2)
struct TspCBItem
{
	Types::TRect R;
	Windows::TOwnerDrawState State;
} ;
#pragma pack(pop)

#pragma option push -b-
enum TspSkinCustomComboBoxStyle { spcbEditStyle, spcbFixedStyle };
#pragma option pop

class DELPHICLASS TspSkinCustomComboBox;
class PASCALIMPLEMENTATION TspSkinCustomComboBox : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
protected:
	bool FToolButtonStyle;
	bool FNumEdit;
	bool FDropDown;
	Stdctrls::TEditCharCase FCharCase;
	Graphics::TColor FDefaultColor;
	bool FUseSkinSize;
	bool WasInLB;
	int TimerMode;
	bool FHideSelection;
	unsigned FLastTime;
	AnsiString FFilter;
	bool FAutoComplete;
	bool FListBoxAlphaBlend;
	bool FListBoxAlphaBlendAnimation;
	Byte FListBoxAlphaBlendValue;
	int FListBoxWidth;
	TspSkinCustomComboBoxStyle FStyle;
	Classes::TNotifyEvent FOnChange;
	Classes::TNotifyEvent FOnClick;
	Classes::TNotifyEvent FOnCloseUp;
	Classes::TNotifyEvent FOnDropDown;
	TspDrawSkinItemEvent FOnListBoxDrawItem;
	TspDrawSkinItemEvent FOnComboBoxDrawItem;
	bool FMouseIn;
	int FOldItemIndex;
	int FDropDownCount;
	bool FLBDown;
	Classes::TWndMethod FListBoxWindowProc;
	Classes::TWndMethod FEditWindowProc;
	TspPopupListBox* FListBox;
	TspCBItem CBItem;
	#pragma pack(push, 1)
	TspCBButtonX Button;
	#pragma pack(pop)
	
	TspCustomEdit* FEdit;
	bool FromEdit;
	void __fastcall DrawMenuMarker(Graphics::TCanvas* C, const Types::TRect &R, bool AActive, bool ADown, Skindata::TspDataSkinButtonControl* ButtonData);
	void __fastcall DrawTabbedString(AnsiString S, Classes::TStrings* TW, Graphics::TCanvas* C, const Types::TRect &R, int Offset);
	void __fastcall SetToolButtonStyle(bool Value);
	void __fastcall SetCharCase(Stdctrls::TEditCharCase Value);
	void __fastcall AdjustEditHeight(void);
	void __fastcall ProcessListBox(void);
	void __fastcall StartTimer(void);
	void __fastcall StopTimer(void);
	void __fastcall FindLBItem(AnsiString S);
	void __fastcall FindLBItemFromEdit(void);
	int __fastcall GetSelStart(void);
	void __fastcall SetSelStart(int Value);
	int __fastcall GetSelLength(void);
	void __fastcall SetSelLength(int Value);
	void __fastcall EditKeyPress(System::TObject* Sender, char &Key);
	void __fastcall EditKeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	void __fastcall EditKeyUp(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	Imglist::TCustomImageList* __fastcall GetImages(void);
	int __fastcall GetImageIndex(void);
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall SetImageIndex(int Value);
	bool __fastcall GetHorizontalExtent(void);
	void __fastcall SetHorizontalExtent(bool Value);
	bool __fastcall GetListBoxUseSkinItemHeight(void);
	void __fastcall SetListBoxUseSkinItemHeight(bool Value);
	void __fastcall EditCancelMode(Controls::TControl* C);
	Graphics::TFont* __fastcall GetListBoxDefaultFont(void);
	void __fastcall SetListBoxDefaultFont(Graphics::TFont* Value);
	Graphics::TFont* __fastcall GetListBoxDefaultCaptionFont(void);
	void __fastcall SetListBoxDefaultCaptionFont(Graphics::TFont* Value);
	int __fastcall GetListBoxDefaultItemHeight(void);
	void __fastcall SetListBoxDefaultItemHeight(int Value);
	Classes::TAlignment __fastcall GetListBoxCaptionAlignment(void);
	void __fastcall SetListBoxCaptionAlignment(Classes::TAlignment Value);
	bool __fastcall GetListBoxUseSkinFont(void);
	void __fastcall SetListBoxUseSkinFont(bool Value);
	void __fastcall CheckButtonClick(System::TObject* Sender);
	void __fastcall SetListBoxCaption(AnsiString Value);
	AnsiString __fastcall GetListBoxCaption();
	void __fastcall SetListBoxCaptionMode(bool Value);
	bool __fastcall GetListBoxCaptionMode(void);
	void __fastcall ListBoxDrawItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	bool __fastcall GetSorted(void);
	void __fastcall SetSorted(bool Value);
	void __fastcall SetStyle(TspSkinCustomComboBoxStyle Value);
	void __fastcall DrawDefaultItem(Graphics::TCanvas* Cnvs);
	void __fastcall DrawSkinItem(Graphics::TCanvas* Cnvs);
	void __fastcall DrawResizeSkinItem(Graphics::TCanvas* Cnvs);
	int __fastcall GetItemIndex(void);
	void __fastcall SetItemIndex(int Value);
	void __fastcall ListBoxWindowProcHook(Messages::TMessage &Message);
	void __fastcall EditWindowProcHook(Messages::TMessage &Message);
	void __fastcall SetItems(Classes::TStrings* Value);
	Classes::TStrings* __fastcall GetItems(void);
	void __fastcall SetListBoxDrawItem(TspDrawSkinItemEvent Value);
	void __fastcall SetDropDownCount(int Value);
	void __fastcall EditChange(System::TObject* Sender);
	void __fastcall EditUp(bool AChange);
	void __fastcall EditDown(bool AChange);
	void __fastcall EditUp1(bool AChange);
	void __fastcall EditDown1(bool AChange);
	void __fastcall EditPageUp1(bool AChange);
	void __fastcall EditPageDown1(bool AChange);
	void __fastcall ShowEditor(void);
	void __fastcall HideEditor(void);
	void __fastcall DrawButton(Graphics::TCanvas* C);
	void __fastcall DrawResizeButton(Graphics::TCanvas* C);
	void __fastcall CalcRects(void);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	MESSAGE void __fastcall CMCancelMode(Controls::TCMCancelMode &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	void __fastcall ListBoxMouseMove(System::TObject* Sender, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall WMMOUSEWHEEL(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(char &Key);
	MESSAGE void __fastcall CMWantSpecialKey(Messages::TWMKey &Msg);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	virtual void __fastcall DefaultFontChange(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	void __fastcall CreateControlToolSkinImage(Graphics::TBitmap* B, AnsiString AText);
	void __fastcall CreateControlToolDefaultImage(Graphics::TBitmap* B, AnsiString AText);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall Change(void);
	virtual void __fastcall CalcSize(int &W, int &H);
	virtual void __fastcall SetControlRegion(void);
	void __fastcall SetDefaultColor(Graphics::TColor Value);
	Graphics::TColor __fastcall GetDisabledFontColor(void);
	Classes::TStrings* __fastcall GetTabWidths(void);
	void __fastcall SetTabWidths(Classes::TStrings* Value);
	
public:
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	Graphics::TColor ActiveFontColor;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	#pragma pack(push, 1)
	Types::TRect SItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveItemRect;
	#pragma pack(pop)
	
	int ItemLeftOffset;
	int ItemRightOffset;
	#pragma pack(push, 1)
	Types::TRect ItemTextRect;
	#pragma pack(pop)
	
	Graphics::TColor FontColor;
	Graphics::TColor FocusFontColor;
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnEnabledButtonRect;
	#pragma pack(pop)
	
	AnsiString ListBoxName;
	bool ItemStretchEffect;
	bool FocusItemStretchEffect;
	bool ShowFocus;
	__fastcall virtual TspSkinCustomComboBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomComboBox(void);
	virtual void __fastcall ChangeSkinData(void);
	void __fastcall CloseUp(bool Value);
	void __fastcall DropDown(void);
	bool __fastcall IsPopupVisible(void);
	bool __fastcall CanCancelDropDown(void);
	virtual void __fastcall Invalidate(void);
	__property bool ToolButtonStyle = {read=FToolButtonStyle, write=SetToolButtonStyle, nodefault};
	__property bool HideSelection = {read=FHideSelection, write=FHideSelection, nodefault};
	__property bool AutoComplete = {read=FAutoComplete, write=FAutoComplete, nodefault};
	__property bool ListBoxUseSkinFont = {read=GetListBoxUseSkinFont, write=SetListBoxUseSkinFont, nodefault};
	__property int ListBoxWidth = {read=FListBoxWidth, write=FListBoxWidth, nodefault};
	__property bool ListBoxAlphaBlend = {read=FListBoxAlphaBlend, write=FListBoxAlphaBlend, nodefault};
	__property bool ListBoxAlphaBlendAnimation = {read=FListBoxAlphaBlendAnimation, write=FListBoxAlphaBlendAnimation, nodefault};
	__property Byte ListBoxAlphaBlendValue = {read=FListBoxAlphaBlendValue, write=FListBoxAlphaBlendValue, nodefault};
	__property bool ListBoxUseSkinItemHeight = {read=GetListBoxUseSkinItemHeight, write=SetListBoxUseSkinItemHeight, nodefault};
	__property Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property int ImageIndex = {read=GetImageIndex, write=SetImageIndex, nodefault};
	__property AnsiString ListBoxCaption = {read=GetListBoxCaption, write=SetListBoxCaption};
	__property bool ListBoxCaptionMode = {read=GetListBoxCaptionMode, write=SetListBoxCaptionMode, nodefault};
	__property Graphics::TFont* ListBoxDefaultFont = {read=GetListBoxDefaultFont, write=SetListBoxDefaultFont};
	__property Graphics::TFont* ListBoxDefaultCaptionFont = {read=GetListBoxDefaultCaptionFont, write=SetListBoxDefaultCaptionFont};
	__property int ListBoxDefaultItemHeight = {read=GetListBoxDefaultItemHeight, write=SetListBoxDefaultItemHeight, nodefault};
	__property Classes::TAlignment ListBoxCaptionAlignment = {read=GetListBoxCaptionAlignment, write=SetListBoxCaptionAlignment, nodefault};
	__property Classes::TStrings* TabWidths = {read=GetTabWidths, write=SetTabWidths};
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property Stdctrls::TEditCharCase CharCase = {read=FCharCase, write=SetCharCase, nodefault};
	__property Graphics::TColor DefaultColor = {read=FDefaultColor, write=SetDefaultColor, nodefault};
	__property Text ;
	__property Align  = {default=0};
	__property Classes::TStrings* Items = {read=GetItems, write=SetItems};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property int DropDownCount = {read=FDropDownCount, write=SetDropDownCount, nodefault};
	__property bool HorizontalExtent = {read=GetHorizontalExtent, write=SetHorizontalExtent, nodefault};
	__property Font ;
	__property bool Sorted = {read=GetSorted, write=SetSorted, nodefault};
	__property TspSkinCustomComboBoxStyle Style = {read=FStyle, write=SetStyle, nodefault};
	__property int SelStart = {read=GetSelStart, write=SetSelStart, nodefault};
	__property int SelLength = {read=GetSelLength, write=SetSelLength, nodefault};
	__property TspDrawSkinItemEvent OnListBoxDrawItem = {read=FOnListBoxDrawItem, write=SetListBoxDrawItem};
	__property TspDrawSkinItemEvent OnComboBoxDrawItem = {read=FOnComboBoxDrawItem, write=FOnComboBoxDrawItem};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnEnter ;
	__property OnExit ;
	
__published:
	__property bool UseSkinSize = {read=FUseSkinSize, write=FUseSkinSize, nodefault};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomComboBox(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinComboBox;
class PASCALIMPLEMENTATION TspSkinComboBox : public TspSkinCustomComboBox 
{
	typedef TspSkinCustomComboBox inherited;
	
__published:
	__property ToolButtonStyle ;
	__property HideSelection ;
	__property AutoComplete ;
	__property HorizontalExtent ;
	__property Images ;
	__property ImageIndex ;
	__property ListBoxUseSkinItemHeight ;
	__property ListBoxAlphaBlend ;
	__property ListBoxAlphaBlendAnimation ;
	__property ListBoxAlphaBlendValue ;
	__property ListBoxWidth ;
	__property ListBoxCaption ;
	__property ListBoxCaptionMode ;
	__property ListBoxUseSkinFont ;
	__property ListBoxDefaultFont ;
	__property ListBoxDefaultCaptionFont ;
	__property ListBoxDefaultItemHeight ;
	__property ListBoxCaptionAlignment ;
	__property TabWidths ;
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property CharCase ;
	__property DefaultColor ;
	__property Text ;
	__property Align  = {default=0};
	__property Items ;
	__property ItemIndex ;
	__property DropDownCount ;
	__property Font ;
	__property Sorted ;
	__property Style ;
	__property OnListBoxDrawItem ;
	__property OnComboBoxDrawItem ;
	__property OnChange ;
	__property OnClick ;
	__property OnCloseUp ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnEnter ;
	__property OnExit ;
	__property OnDropDown ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomComboBox.Create */ inline __fastcall virtual TspSkinComboBox(Classes::TComponent* AOwner) : TspSkinCustomComboBox(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomComboBox.Destroy */ inline __fastcall virtual ~TspSkinComboBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinComboBox(HWND ParentWindow) : TspSkinCustomComboBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMRUComboBox;
class PASCALIMPLEMENTATION TspSkinMRUComboBox : public TspSkinComboBox 
{
	typedef TspSkinComboBox inherited;
	
public:
	void __fastcall AddMRUItem(AnsiString Value);
public:
	#pragma option push -w-inl
	/* TspSkinCustomComboBox.Create */ inline __fastcall virtual TspSkinMRUComboBox(Classes::TComponent* AOwner) : TspSkinComboBox(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomComboBox.Destroy */ inline __fastcall virtual ~TspSkinMRUComboBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinMRUComboBox(HWND ParentWindow) : TspSkinComboBox(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspColorBoxStyles { spcbStandardColors, spcbExtendedColors, spcbSystemColors, spcbIncludeNone, spcbIncludeDefault, spcbCustomColor, spcbPrettyNames };
#pragma option pop

typedef Set<TspColorBoxStyles, spcbStandardColors, spcbPrettyNames>  TspColorBoxStyle;

class DELPHICLASS TspSkinColorComboBox;
class PASCALIMPLEMENTATION TspSkinColorComboBox : public TspSkinCustomComboBox 
{
	typedef TspSkinCustomComboBox inherited;
	
private:
	bool FShowNames;
	TspColorBoxStyle FExStyle;
	bool FNeedToPopulate;
	Graphics::TColor FDefaultColorColor;
	Graphics::TColor FNoneColorColor;
	Graphics::TColor FSelectedColor;
	void __fastcall SetShowNames(bool Value);
	Graphics::TColor __fastcall GetColor(int Index);
	AnsiString __fastcall GetColorName(int Index);
	Graphics::TColor __fastcall GetSelected(void);
	void __fastcall SetSelected(const Graphics::TColor AColor);
	void __fastcall ColorCallBack(const AnsiString AName);
	void __fastcall SetDefaultColorColor(const Graphics::TColor Value);
	void __fastcall SetNoneColorColor(const Graphics::TColor Value);
	void __fastcall SetExStyle(TspColorBoxStyle AStyle);
	
protected:
	void __fastcall DrawColorItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	virtual void __fastcall CreateWnd(void);
	virtual bool __fastcall PickCustomColor(void);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	void __fastcall OnLBCloseUp(System::TObject* Sender);
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TspSkinColorComboBox(Classes::TComponent* AOwner);
	void __fastcall PopulateList(void);
	__property Graphics::TColor Colors[int Index] = {read=GetColor};
	__property AnsiString ColorNames[int Index] = {read=GetColorName};
	
__published:
	__property ToolButtonStyle ;
	__property HideSelection ;
	__property AutoComplete ;
	__property ListBoxWidth ;
	__property ListBoxUseSkinItemHeight ;
	__property ListBoxAlphaBlend ;
	__property ListBoxAlphaBlendAnimation ;
	__property ListBoxAlphaBlendValue ;
	__property ListBoxCaption ;
	__property ListBoxCaptionMode ;
	__property ListBoxUseSkinFont ;
	__property ListBoxDefaultFont ;
	__property ListBoxDefaultCaptionFont ;
	__property ListBoxDefaultItemHeight ;
	__property ListBoxCaptionAlignment ;
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property Visible  = {default=1};
	__property Align  = {default=0};
	__property ItemIndex ;
	__property DropDownCount ;
	__property Font ;
	__property Sorted ;
	__property OnChange ;
	__property OnClick ;
	__property TspColorBoxStyle ExStyle = {read=FExStyle, write=SetExStyle, default=7};
	__property Graphics::TColor Selected = {read=GetSelected, write=SetSelected, default=0};
	__property Graphics::TColor DefaultColorColor = {read=FDefaultColorColor, write=SetDefaultColorColor, default=0};
	__property Graphics::TColor NoneColorColor = {read=FNoneColorColor, write=SetNoneColorColor, default=0};
	__property bool ShowNames = {read=FShowNames, write=SetShowNames, nodefault};
public:
	#pragma option push -w-inl
	/* TspSkinCustomComboBox.Destroy */ inline __fastcall virtual ~TspSkinColorComboBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinColorComboBox(HWND ParentWindow) : TspSkinCustomComboBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinColorListBox;
class PASCALIMPLEMENTATION TspSkinColorListBox : public TspSkinListBox 
{
	typedef TspSkinListBox inherited;
	
private:
	bool FShowNames;
	TspColorBoxStyle FExStyle;
	Graphics::TColor FDefaultColorColor;
	Graphics::TColor FNoneColorColor;
	Graphics::TColor FSelectedColor;
	void __fastcall SetShowNames(bool Value);
	Graphics::TColor __fastcall GetColor(int Index);
	AnsiString __fastcall GetColorName(int Index);
	HIDESBASE Graphics::TColor __fastcall GetSelected(void);
	HIDESBASE void __fastcall SetSelected(const Graphics::TColor AColor);
	void __fastcall ColorCallBack(const AnsiString AName);
	void __fastcall SetDefaultColorColor(const Graphics::TColor Value);
	void __fastcall SetNoneColorColor(const Graphics::TColor Value);
	void __fastcall SetExStyle(TspColorBoxStyle AStyle);
	
protected:
	void __fastcall DrawColorItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	virtual void __fastcall CreateWnd(void);
	virtual bool __fastcall PickCustomColor(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall ListBoxKeyDown(Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall ListBoxDblClick(void);
	
public:
	__fastcall virtual TspSkinColorListBox(Classes::TComponent* AOwner);
	__property Graphics::TColor Colors[int Index] = {read=GetColor};
	__property AnsiString ColorNames[int Index] = {read=GetColorName};
	void __fastcall PopulateList(void);
	
__published:
	__property Sorted ;
	__property TspColorBoxStyle ExStyle = {read=FExStyle, write=SetExStyle, default=7};
	__property Graphics::TColor Selected = {read=GetSelected, write=SetSelected, default=0};
	__property Graphics::TColor DefaultColorColor = {read=FDefaultColorColor, write=SetDefaultColorColor, default=0};
	__property Graphics::TColor NoneColorColor = {read=FNoneColorColor, write=SetNoneColorColor, default=0};
	__property bool ShowNames = {read=FShowNames, write=SetShowNames, nodefault};
public:
	#pragma option push -w-inl
	/* TspSkinCustomListBox.Destroy */ inline __fastcall virtual ~TspSkinColorListBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinColorListBox(HWND ParentWindow) : TspSkinListBox(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspFontDevice { fdScreen, fdPrinter, fdBoth };
#pragma option pop

#pragma option push -b-
enum TspFontListOption { foAnsiOnly, foTrueTypeOnly, foFixedPitchOnly, foNoOEMFonts, foOEMFontsOnly, foScalableOnly, foNoSymbolFonts };
#pragma option pop

typedef Set<TspFontListOption, foAnsiOnly, foNoSymbolFonts>  TspFontListOptions;

class DELPHICLASS TspSkinFontSizeComboBox;
class PASCALIMPLEMENTATION TspSkinFontSizeComboBox : public TspSkinCustomComboBox 
{
	typedef TspSkinCustomComboBox inherited;
	
private:
	int PixelsPerInch;
	AnsiString FFontName;
	void __fastcall SetFontName(const AnsiString Value);
	void __fastcall Build(void);
	int __fastcall GetSizeValue(void);
	
public:
	__fastcall virtual TspSkinFontSizeComboBox(Classes::TComponent* AOwner);
	__property AnsiString FontName = {read=FFontName, write=SetFontName};
	__property int SizeValue = {read=GetSizeValue, nodefault};
	
__published:
	__property ToolButtonStyle ;
	__property HideSelection ;
	__property AutoComplete ;
	__property AlphaBlend ;
	__property AlphaBlendValue ;
	__property ListBoxUseSkinItemHeight ;
	__property ListBoxAlphaBlend ;
	__property ListBoxAlphaBlendAnimation ;
	__property ListBoxAlphaBlendValue ;
	__property ListBoxWidth ;
	__property ListBoxCaption ;
	__property ListBoxCaptionMode ;
	__property ListBoxUseSkinFont ;
	__property ListBoxDefaultFont ;
	__property ListBoxDefaultCaptionFont ;
	__property ListBoxDefaultItemHeight ;
	__property ListBoxCaptionAlignment ;
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property Visible  = {default=1};
	__property Align  = {default=0};
	__property ItemIndex ;
	__property DropDownCount ;
	__property Font ;
	__property Sorted ;
	__property Style ;
	__property OnChange ;
	__property OnClick ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomComboBox.Destroy */ inline __fastcall virtual ~TspSkinFontSizeComboBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinFontSizeComboBox(HWND ParentWindow) : TspSkinCustomComboBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFontListBox;
class PASCALIMPLEMENTATION TspSkinFontListBox : public TspSkinListBox 
{
	typedef TspSkinListBox inherited;
	
protected:
	TspFontDevice FDevice;
	bool FUpdate;
	bool FUseFonts;
	TspFontListOptions FOptions;
	virtual void __fastcall ListBoxCreateWnd(void);
	void __fastcall SetFontName(const AnsiString NewFontName);
	AnsiString __fastcall GetFontName();
	bool __fastcall GetTrueTypeOnly(void);
	void __fastcall SetDevice(TspFontDevice Value);
	void __fastcall SetOptions(TspFontListOptions Value);
	void __fastcall SetTrueTypeOnly(bool Value);
	void __fastcall SetUseFonts(bool Value);
	void __fastcall Reset(void);
	void __fastcall DrawLBFontItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	void __fastcall DrawTT(Graphics::TCanvas* Cnvs, int X, int Y, Graphics::TColor C);
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TspSkinFontListBox(Classes::TComponent* AOwner);
	void __fastcall PopulateList(void);
	
__published:
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property Visible  = {default=1};
	__property Align  = {default=0};
	__property ItemIndex ;
	__property Font ;
	__property Sorted ;
	__property TspFontDevice Device = {read=FDevice, write=SetDevice, default=0};
	__property AnsiString FontName = {read=GetFontName, write=SetFontName};
	__property TspFontListOptions Options = {read=FOptions, write=SetOptions, default=0};
	__property bool TrueTypeOnly = {read=GetTrueTypeOnly, write=SetTrueTypeOnly, stored=false, nodefault};
	__property bool UseFonts = {read=FUseFonts, write=SetUseFonts, default=0};
public:
	#pragma option push -w-inl
	/* TspSkinCustomListBox.Destroy */ inline __fastcall virtual ~TspSkinFontListBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinFontListBox(HWND ParentWindow) : TspSkinListBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFontComboBox;
class PASCALIMPLEMENTATION TspSkinFontComboBox : public TspSkinCustomComboBox 
{
	typedef TspSkinCustomComboBox inherited;
	
protected:
	TspFontDevice FDevice;
	bool FUpdate;
	bool FUseFonts;
	TspFontListOptions FOptions;
	void __fastcall SetFontName(const AnsiString NewFontName);
	AnsiString __fastcall GetFontName();
	bool __fastcall GetTrueTypeOnly(void);
	void __fastcall SetDevice(TspFontDevice Value);
	void __fastcall SetOptions(TspFontListOptions Value);
	void __fastcall SetTrueTypeOnly(bool Value);
	void __fastcall SetUseFonts(bool Value);
	void __fastcall Reset(void);
	HIDESBASE MESSAGE void __fastcall WMFontChange(Messages::TMessage &Message);
	void __fastcall DrawLBFontItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	void __fastcall DrawCBFontItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	virtual void __fastcall CreateWnd(void);
	void __fastcall DrawTT(Graphics::TCanvas* Cnvs, int X, int Y, Graphics::TColor C);
	
public:
	__fastcall virtual TspSkinFontComboBox(Classes::TComponent* AOwner);
	void __fastcall PopulateList(void);
	
__published:
	__property ToolButtonStyle ;
	__property HideSelection ;
	__property AutoComplete ;
	__property ListBoxUseSkinItemHeight ;
	__property ListBoxAlphaBlend ;
	__property ListBoxAlphaBlendAnimation ;
	__property ListBoxAlphaBlendValue ;
	__property ListBoxWidth ;
	__property ListBoxCaption ;
	__property ListBoxCaptionMode ;
	__property ListBoxUseSkinFont ;
	__property ListBoxDefaultFont ;
	__property ListBoxDefaultCaptionFont ;
	__property ListBoxDefaultItemHeight ;
	__property ListBoxCaptionAlignment ;
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property Visible  = {default=1};
	__property TspFontDevice Device = {read=FDevice, write=SetDevice, default=0};
	__property AnsiString FontName = {read=GetFontName, write=SetFontName};
	__property TspFontListOptions Options = {read=FOptions, write=SetOptions, default=0};
	__property bool TrueTypeOnly = {read=GetTrueTypeOnly, write=SetTrueTypeOnly, stored=false, nodefault};
	__property bool UseFonts = {read=FUseFonts, write=SetUseFonts, default=0};
	__property Align  = {default=0};
	__property ItemIndex ;
	__property DropDownCount ;
	__property Font ;
	__property Sorted ;
	__property Style ;
	__property OnChange ;
	__property OnClick ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomComboBox.Destroy */ inline __fastcall virtual ~TspSkinFontComboBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinFontComboBox(HWND ParentWindow) : TspSkinCustomComboBox(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspValueType { vtInteger, vtFloat };
#pragma option pop

class DELPHICLASS TspSkinSpinEdit;
class PASCALIMPLEMENTATION TspSkinSpinEdit : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
private:
	Classes::TNotifyEvent FOnUpButtonClick;
	Classes::TNotifyEvent FOnDownButtonClick;
	Graphics::TColor FDefaultColor;
	bool FUseSkinSize;
	bool FMouseIn;
	bool FEditFocused;
	bool StopCheck;
	Byte FDecimal;
	double FMinValue;
	double FMaxValue;
	double FIncrement;
	bool FromEdit;
	TspValueType FValueType;
	Classes::TNotifyEvent FOnChange;
	double FValue;
	int OldActiveButton;
	int ActiveButton;
	int CaptureButton;
	int TimerMode;
	bool WaitMode;
	void __fastcall StartTimer(void);
	void __fastcall StopTimer(void);
	void __fastcall SetValue(double AValue);
	void __fastcall SetMinValue(double AValue);
	void __fastcall SetMaxValue(double AValue);
	void __fastcall SetEditorEnabled(bool AValue);
	bool __fastcall GetEditorEnabled(void);
	void __fastcall SetMaxLength(int AValue);
	int __fastcall GetMaxLength(void);
	void __fastcall SetValueType(TspValueType NewType);
	void __fastcall SetDecimal(Byte NewValue);
	void __fastcall SetDefaultColor(Graphics::TColor Value);
	
protected:
	TspCBButtonX Buttons[2];
	Controls::TKeyEvent FOnEditKeyDown;
	Controls::TKeyPressEvent FOnEditKeyPress;
	Controls::TKeyEvent FOnEditKeyUp;
	Classes::TNotifyEvent FOnEditEnter;
	Classes::TNotifyEvent FOnEditExit;
	void __fastcall AdjustEditHeight(void);
	virtual void __fastcall EditKeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall EditKeyUp(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall EditKeyPress(System::TObject* Sender, char &Key);
	virtual void __fastcall EditEnter(System::TObject* Sender);
	virtual void __fastcall EditExit(System::TObject* Sender);
	void __fastcall EditMouseEnter(System::TObject* Sender);
	void __fastcall EditMouseLeave(System::TObject* Sender);
	void __fastcall UpClick(System::TObject* Sender);
	void __fastcall DownClick(System::TObject* Sender);
	double __fastcall CheckValue(double NewValue);
	void __fastcall EditChange(System::TObject* Sender);
	void __fastcall ButtonDown(int I, int X, int Y);
	void __fastcall ButtonUp(int I, int X, int Y);
	void __fastcall ButtonEnter(int I);
	void __fastcall ButtonLeave(int I);
	void __fastcall TestActive(int X, int Y);
	void __fastcall CalcRects(void);
	void __fastcall DrawButton(Graphics::TCanvas* Cnvs, int i);
	void __fastcall DrawResizeButton(Graphics::TCanvas* Cnvs, int i);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMFocusChanged(Controls::TCMFocusChanged &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	virtual void __fastcall GetSkinData(void);
	virtual void __fastcall DefaultFontChange(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall Change(void);
	virtual void __fastcall CalcSize(int &W, int &H);
	virtual void __fastcall SetControlRegion(void);
	
public:
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor DisabledFontColor;
	Graphics::TColor ActiveFontColor;
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
	
	int LOffset;
	int ROffset;
	TspSkinNumEdit* FEdit;
	__fastcall virtual TspSkinSpinEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinSpinEdit(void);
	virtual void __fastcall Invalidate(void);
	bool __fastcall IsNumText(AnsiString AText);
	virtual void __fastcall ChangeSkinData(void);
	__property Text ;
	void __fastcall SimpleSetValue(double AValue);
	
__published:
	__property Graphics::TColor DefaultColor = {read=FDefaultColor, write=SetDefaultColor, nodefault};
	__property bool UseSkinSize = {read=FUseSkinSize, write=FUseSkinSize, nodefault};
	__property Enabled  = {default=1};
	__property TspValueType ValueType = {read=FValueType, write=SetValueType, nodefault};
	__property Byte Decimal = {read=FDecimal, write=SetDecimal, default=2};
	__property Align  = {default=0};
	__property ShowHint ;
	__property double MinValue = {read=FMinValue, write=SetMinValue};
	__property double MaxValue = {read=FMaxValue, write=SetMaxValue};
	__property double Value = {read=FValue, write=SetValue};
	__property double Increment = {read=FIncrement, write=FIncrement};
	__property bool EditorEnabled = {read=GetEditorEnabled, write=SetEditorEnabled, nodefault};
	__property int MaxLength = {read=GetMaxLength, write=SetMaxLength, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Controls::TKeyEvent OnEditKeyDown = {read=FOnEditKeyDown, write=FOnEditKeyDown};
	__property Controls::TKeyPressEvent OnEditKeyPress = {read=FOnEditKeyPress, write=FOnEditKeyPress};
	__property Controls::TKeyEvent OnEditKeyUp = {read=FOnEditKeyUp, write=FOnEditKeyUp};
	__property Classes::TNotifyEvent OnEditEnter = {read=FOnEditEnter, write=FOnEditEnter};
	__property Classes::TNotifyEvent OnEditExit = {read=FOnEditExit, write=FOnEditExit};
	__property Classes::TNotifyEvent OnUpButtonClick = {read=FOnUpButtonClick, write=FOnUpButtonClick};
	__property Classes::TNotifyEvent OnDownButtonClick = {read=FOnDownButtonClick, write=FOnDownButtonClick};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinSpinEdit(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinNumericEdit;
class PASCALIMPLEMENTATION TspSkinNumericEdit : public TspSkinCustomEdit 
{
	typedef TspSkinCustomEdit inherited;
	
private:
	bool StopCheck;
	bool FromEdit;
	double FMinValue;
	double FMaxValue;
	double FValue;
	Byte FDecimal;
	TspValueType FValueType;
	double FIncrement;
	bool FSupportUpDownKeys;
	void __fastcall SetValue(double AValue);
	void __fastcall SetMinValue(double AValue);
	void __fastcall SetMaxValue(double AValue);
	void __fastcall SetDecimal(Byte NewValue);
	void __fastcall SetValueType(TspValueType NewType);
	
protected:
	double __fastcall CheckValue(double NewValue);
	DYNAMIC void __fastcall KeyPress(char &Key);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	bool __fastcall IsValidChar(char Key);
	DYNAMIC void __fastcall Change(void);
	__property Text ;
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TMessage &Message);
	
public:
	__fastcall virtual TspSkinNumericEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinNumericEdit(void);
	bool __fastcall IsNumText(AnsiString AText);
	
__published:
	__property double Increment = {read=FIncrement, write=FIncrement};
	__property bool SupportUpDownKeys = {read=FSupportUpDownKeys, write=FSupportUpDownKeys, nodefault};
	__property Alignment  = {default=0};
	__property UseSkinFont ;
	__property Byte Decimal = {read=FDecimal, write=SetDecimal, default=2};
	__property TspValueType ValueType = {read=FValueType, write=SetValueType, nodefault};
	__property double MinValue = {read=FMinValue, write=SetMinValue};
	__property double MaxValue = {read=FMaxValue, write=SetMaxValue};
	__property double Value = {read=FValue, write=SetValue};
	__property DefaultFont ;
	__property DefaultWidth ;
	__property DefaultHeight ;
	__property ButtonMode ;
	__property SkinData ;
	__property SkinDataName ;
	__property OnMouseEnter ;
	__property OnMouseLeave ;
	__property ReadOnly  = {default=0};
	__property Align  = {default=0};
	__property Font ;
	__property Anchors  = {default=3};
	__property AutoSelect  = {default=1};
	__property BiDiMode ;
	__property CharCase  = {default=0};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property HideSelection  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property MaxLength  = {default=0};
	__property OEMConvert  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property OnButtonClick ;
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
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
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinNumericEdit(HWND ParentWindow) : TspSkinCustomEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspCheckListBox;
class DELPHICLASS TspSkinCheckListBox;
class PASCALIMPLEMENTATION TspSkinCheckListBox : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
protected:
	Classes::TStrings* FTabWidths;
	bool FUseSkinItemHeight;
	int FRowCount;
	Imglist::TCustomImageList* FImages;
	int FImageIndex;
	Graphics::TBitmap* FGlyph;
	Skinctrls::TspSkinPanelNumGlyphs FNumGlyphs;
	int FSpacing;
	Classes::TNotifyEvent FOnUpButtonClick;
	Classes::TNotifyEvent FOnDownButtonClick;
	Classes::TNotifyEvent FOnCheckButtonClick;
	Classes::TNotifyEvent FOnClickCheck;
	int FDefaultItemHeight;
	TspDrawSkinItemEvent FOnDrawItem;
	#pragma pack(push, 1)
	Types::TRect NewClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ListRect;
	#pragma pack(pop)
	
	int FDefaultCaptionHeight;
	Graphics::TFont* FDefaultCaptionFont;
	Classes::TNotifyEvent FOnListBoxClick;
	Classes::TNotifyEvent FOnListBoxDblClick;
	Controls::TMouseEvent FOnListBoxMouseDown;
	Controls::TMouseMoveEvent FOnListBoxMouseMove;
	Controls::TMouseEvent FOnListBoxMouseUp;
	Controls::TKeyEvent FOnListBoxKeyDown;
	Controls::TKeyPressEvent FOnListBoxKeyPress;
	Controls::TKeyEvent FOnListBoxKeyUp;
	bool FCaptionMode;
	Classes::TAlignment FAlignment;
	TspCBButtonX Buttons[3];
	int OldActiveButton;
	int ActiveButton;
	int CaptureButton;
	#pragma pack(push, 1)
	Types::TRect NewCaptionRect;
	#pragma pack(pop)
	
	int TimerMode;
	bool WaitMode;
	int __fastcall GetColumns(void);
	void __fastcall SetColumns(int Value);
	bool __fastcall GetItemEnabled(int Index);
	void __fastcall SetItemEnabled(int Index, const bool Value);
	void __fastcall SetTabWidths(Classes::TStrings* Value);
	Controls::TDragDropEvent __fastcall GetOnListBoxDragDrop();
	void __fastcall SetOnListBoxDragDrop(Controls::TDragDropEvent Value);
	Controls::TDragOverEvent __fastcall GetOnListBoxDragOver();
	void __fastcall SetOnListBoxDragOver(Controls::TDragOverEvent Value);
	Controls::TStartDragEvent __fastcall GetOnListBoxStartDrag();
	void __fastcall SetOnListBoxStartDrag(Controls::TStartDragEvent Value);
	Controls::TEndDragEvent __fastcall GetOnListBoxEndDrag();
	void __fastcall SetOnListBoxEndDrag(Controls::TEndDragEvent Value);
	void __fastcall SetOnClickCheck(const Classes::TNotifyEvent Value);
	void __fastcall SetRowCount(int Value);
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall SetGlyph(Graphics::TBitmap* Value);
	void __fastcall SetNumGlyphs(Skinctrls::TspSkinPanelNumGlyphs Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall StartTimer(void);
	void __fastcall StopTimer(void);
	void __fastcall ButtonDown(int I, int X, int Y);
	void __fastcall ButtonUp(int I, int X, int Y);
	void __fastcall ButtonEnter(int I);
	void __fastcall ButtonLeave(int I);
	void __fastcall TestActive(int X, int Y);
	void __fastcall DrawButton(Graphics::TCanvas* Cnvs, int i);
	void __fastcall ListBoxOnClickCheck(System::TObject* Sender);
	void __fastcall SetChecked(int Index, bool Checked);
	bool __fastcall GetChecked(int Index);
	void __fastcall SetState(int Index, Stdctrls::TCheckBoxState AState);
	Stdctrls::TCheckBoxState __fastcall GetState(int Index);
	virtual void __fastcall ListBoxMouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ListBoxMouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ListBoxMouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall ListBoxClick(void);
	virtual void __fastcall ListBoxDblClick(void);
	virtual void __fastcall ListBoxKeyDown(Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall ListBoxKeyUp(Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall ListBoxKeyPress(char &Key);
	virtual void __fastcall ListBoxEnter(void);
	virtual void __fastcall ListBoxExit(void);
	void __fastcall ShowScrollBar(void);
	void __fastcall HideScrollBar(void);
	virtual void __fastcall GetSkinData(void);
	void __fastcall CalcRects(void);
	void __fastcall SBChange(System::TObject* Sender);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	void __fastcall OnDefaultCaptionFontChange(System::TObject* Sender);
	void __fastcall SetDefaultCaptionHeight(int Value);
	void __fastcall SetDefaultCaptionFont(Graphics::TFont* Value);
	void __fastcall SetDefaultItemHeight(int Value);
	void __fastcall SetCaptionMode(bool Value);
	void __fastcall SetAlignment(Classes::TAlignment Value);
	void __fastcall SetItems(Classes::TStrings* Value);
	Classes::TStrings* __fastcall GetItems(void);
	int __fastcall GetItemIndex(void);
	void __fastcall SetItemIndex(int Value);
	bool __fastcall GetMultiSelect(void);
	void __fastcall SetMultiSelect(bool Value);
	Graphics::TFont* __fastcall GetListBoxFont(void);
	void __fastcall SetListBoxFont(Graphics::TFont* Value);
	Controls::TTabOrder __fastcall GetListBoxTabOrder(void);
	void __fastcall SetListBoxTabOrder(Controls::TTabOrder Value);
	bool __fastcall GetListBoxTabStop(void);
	void __fastcall SetListBoxTabStop(bool Value);
	Graphics::TCanvas* __fastcall GetCanvas(void);
	bool __fastcall GetExtandedSelect(void);
	void __fastcall SetExtandedSelect(bool Value);
	int __fastcall GetSelCount(void);
	bool __fastcall GetSelected(int Index);
	void __fastcall SetSelected(int Index, bool Value);
	bool __fastcall GetSorted(void);
	void __fastcall SetSorted(bool Value);
	int __fastcall GetTopIndex(void);
	void __fastcall SetTopIndex(int Value);
	Menus::TPopupMenu* __fastcall GetListBoxPopupMenu(void);
	void __fastcall SetListBoxPopupMenu(Menus::TPopupMenu* Value);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	Controls::TDragMode __fastcall GetListBoxDragMode(void);
	void __fastcall SetListBoxDragMode(Controls::TDragMode Value);
	Controls::TDragKind __fastcall GetListBoxDragKind(void);
	void __fastcall SetListBoxDragKind(Controls::TDragKind Value);
	Controls::TCursor __fastcall GetListBoxDragCursor(void);
	void __fastcall SetListBoxDragCursor(Controls::TCursor Value);
	bool __fastcall GetAutoComplete(void);
	void __fastcall SetAutoComplete(bool Value);
	
public:
	Skinctrls::TspSkinScrollBar* ScrollBar;
	TspCheckListBox* ListBox;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	#pragma pack(push, 1)
	Types::TRect SItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusItemRect;
	#pragma pack(pop)
	
	int ItemLeftOffset;
	int ItemRightOffset;
	#pragma pack(push, 1)
	Types::TRect ItemTextRect;
	#pragma pack(pop)
	
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor FocusFontColor;
	#pragma pack(push, 1)
	Types::TRect UnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ItemCheckRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CaptionRect;
	#pragma pack(pop)
	
	AnsiString CaptionFontName;
	Graphics::TFontStyles CaptionFontStyle;
	int CaptionFontHeight;
	Graphics::TColor CaptionFontColor;
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
	Types::TRect CheckButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveCheckButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownCheckButtonRect;
	#pragma pack(pop)
	
	AnsiString VScrollBarName;
	AnsiString HScrollBarName;
	bool ShowFocus;
	__fastcall virtual TspSkinCheckListBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCheckListBox(void);
	__property bool Checked[int Index] = {read=GetChecked, write=SetChecked};
	__property Stdctrls::TCheckBoxState State[int Index] = {read=GetState, write=SetState};
	__property bool ItemEnabled[int Index] = {read=GetItemEnabled, write=SetItemEnabled};
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	void __fastcall UpDateScrollBar(void);
	int __fastcall CalcHeight(int AItemsCount);
	void __fastcall Clear(void);
	int __fastcall ItemAtPos(const Types::TPoint &Pos, bool Existing);
	Types::TRect __fastcall ItemRect(int Item);
	bool __fastcall GetAllowGrayed(void);
	void __fastcall SetAllowGrayed(bool Value);
	__property bool Selected[int Index] = {read=GetSelected, write=SetSelected};
	__property Graphics::TCanvas* ListBoxCanvas = {read=GetCanvas};
	__property int SelCount = {read=GetSelCount, nodefault};
	__property int TopIndex = {read=GetTopIndex, write=SetTopIndex, nodefault};
	
__published:
	__property bool AllowGrayed = {read=GetAllowGrayed, write=SetAllowGrayed, nodefault};
	__property Classes::TStrings* TabWidths = {read=FTabWidths, write=SetTabWidths};
	__property bool UseSkinItemHeight = {read=FUseSkinItemHeight, write=FUseSkinItemHeight, nodefault};
	__property int Columns = {read=GetColumns, write=SetColumns, nodefault};
	__property bool CaptionMode = {read=FCaptionMode, write=SetCaptionMode, nodefault};
	__property int DefaultCaptionHeight = {read=FDefaultCaptionHeight, write=SetDefaultCaptionHeight, nodefault};
	__property Graphics::TFont* DefaultCaptionFont = {read=FDefaultCaptionFont, write=SetDefaultCaptionFont};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property int DefaultItemHeight = {read=FDefaultItemHeight, write=SetDefaultItemHeight, nodefault};
	__property Classes::TStrings* Items = {read=GetItems, write=SetItems};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property bool MultiSelect = {read=GetMultiSelect, write=SetMultiSelect, nodefault};
	__property Graphics::TFont* ListBoxFont = {read=GetListBoxFont, write=SetListBoxFont};
	__property Controls::TTabOrder ListBoxTabOrder = {read=GetListBoxTabOrder, write=SetListBoxTabOrder, nodefault};
	__property bool ListBoxTabStop = {read=GetListBoxTabStop, write=SetListBoxTabStop, nodefault};
	__property Controls::TDragMode ListBoxDragMode = {read=GetListBoxDragMode, write=SetListBoxDragMode, nodefault};
	__property Controls::TDragKind ListBoxDragKind = {read=GetListBoxDragKind, write=SetListBoxDragKind, nodefault};
	__property Controls::TCursor ListBoxDragCursor = {read=GetListBoxDragCursor, write=SetListBoxDragCursor, nodefault};
	__property bool ExtandedSelect = {read=GetExtandedSelect, write=SetExtandedSelect, nodefault};
	__property bool Sorted = {read=GetSorted, write=SetSorted, nodefault};
	__property Menus::TPopupMenu* ListBoxPopupMenu = {read=GetListBoxPopupMenu, write=SetListBoxPopupMenu};
	__property bool AutoComplete = {read=GetAutoComplete, write=SetAutoComplete, nodefault};
	__property Caption ;
	__property Font ;
	__property Align  = {default=0};
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
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property Skinctrls::TspSkinPanelNumGlyphs NumGlyphs = {read=FNumGlyphs, write=SetNumGlyphs, nodefault};
	__property int Spacing = {read=FSpacing, write=SetSpacing, nodefault};
	__property int RowCount = {read=FRowCount, write=SetRowCount, nodefault};
	__property OnClick ;
	__property Classes::TNotifyEvent OnUpButtonClick = {read=FOnUpButtonClick, write=FOnUpButtonClick};
	__property Classes::TNotifyEvent OnDownButtonClick = {read=FOnDownButtonClick, write=FOnDownButtonClick};
	__property Classes::TNotifyEvent OnCheckButtonClick = {read=FOnCheckButtonClick, write=FOnCheckButtonClick};
	__property OnCanResize ;
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
	__property Classes::TNotifyEvent OnClickCheck = {read=FOnClickCheck, write=SetOnClickCheck};
	__property Classes::TNotifyEvent OnListBoxClick = {read=FOnListBoxClick, write=FOnListBoxClick};
	__property Classes::TNotifyEvent OnListBoxDblClick = {read=FOnListBoxDblClick, write=FOnListBoxDblClick};
	__property Controls::TMouseEvent OnListBoxMouseDown = {read=FOnListBoxMouseDown, write=FOnListBoxMouseDown};
	__property Controls::TMouseMoveEvent OnListBoxMouseMove = {read=FOnListBoxMouseMove, write=FOnListBoxMouseMove};
	__property Controls::TMouseEvent OnListBoxMouseUp = {read=FOnListBoxMouseUp, write=FOnListBoxMouseUp};
	__property Controls::TKeyEvent OnListBoxKeyDown = {read=FOnListBoxKeyDown, write=FOnListBoxKeyDown};
	__property Controls::TKeyPressEvent OnListBoxKeyPress = {read=FOnListBoxKeyPress, write=FOnListBoxKeyPress};
	__property Controls::TKeyEvent OnListBoxKeyUp = {read=FOnListBoxKeyUp, write=FOnListBoxKeyUp};
	__property TspDrawSkinItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property Controls::TDragDropEvent OnListBoxDragDrop = {read=GetOnListBoxDragDrop, write=SetOnListBoxDragDrop};
	__property Controls::TDragOverEvent OnListBoxDragOver = {read=GetOnListBoxDragOver, write=SetOnListBoxDragOver};
	__property Controls::TStartDragEvent OnListBoxStartDrag = {read=GetOnListBoxStartDrag, write=SetOnListBoxStartDrag};
	__property Controls::TEndDragEvent OnListBoxEndDrag = {read=GetOnListBoxEndDrag, write=SetOnListBoxEndDrag};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCheckListBox(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspCheckListBox : public Stdctrls::TListBox 
{
	typedef Stdctrls::TListBox inherited;
	
protected:
	Classes::TList* FSaveStates;
	Classes::TNotifyEvent FOnClickCheck;
	bool FAllowGrayed;
	Graphics::TColor __fastcall GetSkinDisabledColor(void);
	void __fastcall DrawTabbedString(AnsiString S, Classes::TStrings* TW, Graphics::TCanvas* C, const Types::TRect &R, int Offset);
	void __fastcall SkinDrawCheckImage(int X, int Y, Graphics::TCanvas* Cnvs, const Types::TRect &IR, Graphics::TCanvas* DestCnvs);
	void __fastcall SkinDrawGrayedCheckImage(int X, int Y, Graphics::TCanvas* Cnvs, const Types::TRect &IR, Graphics::TCanvas* DestCnvs);
	void __fastcall SkinDrawDisableCheckImage(int X, int Y, Graphics::TCanvas* Cnvs, const Types::TRect &IR, Graphics::TCanvas* DestCnvs);
	void __fastcall PaintBGWH(Graphics::TCanvas* Cnvs, int AW, int AH, int AX, int AY);
	System::TObject* __fastcall CreateWrapper(int Index);
	System::TObject* __fastcall GetWrapper(int Index);
	bool __fastcall HaveWrapper(int Index);
	System::TObject* __fastcall ExtractWrapper(int Index);
	void __fastcall InvalidateCheck(int Index);
	void __fastcall SetChecked(int Index, bool Checked);
	bool __fastcall GetChecked(int Index);
	void __fastcall SetState(int Index, Stdctrls::TCheckBoxState AState);
	Stdctrls::TCheckBoxState __fastcall GetState(int Index);
	Windows::TOwnerDrawState __fastcall GetState1(int AItemID);
	void __fastcall ToggleClickCheck(int Index);
	DYNAMIC void __fastcall DeleteString(int Index);
	DYNAMIC void __fastcall ResetContent(void);
	DYNAMIC void __fastcall SetItemData(int Index, int AData);
	DYNAMIC int __fastcall GetItemData(int Index);
	void __fastcall PaintBG(HDC DC);
	void __fastcall PaintList(HDC DC);
	void __fastcall PaintColumnsList(HDC DC);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall DrawDefaultItem(Graphics::TCanvas* Cnvs, int itemID, const Types::TRect &rcItem, Windows::TOwnerDrawState State1);
	void __fastcall DrawSkinItem(Graphics::TCanvas* Cnvs, int itemID, const Types::TRect &rcItem, Windows::TOwnerDrawState State1);
	void __fastcall DrawStretchSkinItem(Graphics::TCanvas* Cnvs, int itemID, const Types::TRect &rcItem, Windows::TOwnerDrawState State1);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	virtual void __fastcall PaintWindow(HDC DC);
	HIDESBASE MESSAGE void __fastcall WMDestroy(Messages::TWMNoParams &Msg);
	virtual void __fastcall DestroyWnd(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(char &Key);
	DYNAMIC void __fastcall Click(void);
	HIDESBASE MESSAGE void __fastcall CMEnter(Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Messages::TWMNoParams &Message);
	virtual void __fastcall CreateWnd(void);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	bool __fastcall GetItemEnabled(int Index);
	void __fastcall SetItemEnabled(int Index, const bool Value);
	
public:
	TspSkinCheckListBox* SkinListBox;
	__fastcall virtual TspCheckListBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspCheckListBox(void);
	__property bool Checked[int Index] = {read=GetChecked, write=SetChecked};
	__property Stdctrls::TCheckBoxState State[int Index] = {read=GetState, write=SetState};
	__property bool AllowGrayed = {read=FAllowGrayed, write=FAllowGrayed, default=0};
	__property bool ItemEnabled[int Index] = {read=GetItemEnabled, write=SetItemEnabled};
	__property Classes::TNotifyEvent OnClickCheck = {read=FOnClickCheck, write=FOnClickCheck};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspCheckListBox(HWND ParentWindow) : Stdctrls::TListBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinUpDown;
class PASCALIMPLEMENTATION TspSkinUpDown : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
protected:
	bool FUseSkinSize;
	Comctrls::TUDOrientation FOrientation;
	TspCBButtonX Buttons[2];
	int OldActiveButton;
	int ActiveButton;
	int CaptureButton;
	int TimerMode;
	bool WaitMode;
	Classes::TNotifyEvent FOnUpButtonClick;
	Classes::TNotifyEvent FOnDownButtonClick;
	Classes::TNotifyEvent FOnChange;
	int FIncrement;
	int FPosition;
	int FMin;
	int FMax;
	void __fastcall SetOrientation(Comctrls::TUDOrientation Value);
	void __fastcall StartTimer(void);
	void __fastcall StopTimer(void);
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	void __fastcall ButtonDown(int I, int X, int Y);
	void __fastcall ButtonUp(int I, int X, int Y);
	void __fastcall ButtonEnter(int I);
	void __fastcall ButtonLeave(int I);
	void __fastcall DrawButton(Graphics::TCanvas* Cnvs, int i);
	void __fastcall DrawResizeButton(Graphics::TCanvas* Cnvs, int i);
	void __fastcall TestActive(int X, int Y);
	void __fastcall CalcRects(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	void __fastcall SetIncrement(int Value);
	void __fastcall SetPosition(int Value);
	void __fastcall SetMin(int Value);
	void __fastcall SetMax(int Value);
	virtual void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall SetControlRegion(void);
	virtual void __fastcall CalcSize(int &W, int &H);
	
public:
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
	
	__fastcall virtual TspSkinUpDown(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinUpDown(void);
	
__published:
	__property bool UseSkinSize = {read=FUseSkinSize, write=FUseSkinSize, nodefault};
	__property Comctrls::TUDOrientation Orientation = {read=FOrientation, write=SetOrientation, nodefault};
	__property int Increment = {read=FIncrement, write=SetIncrement, nodefault};
	__property int Position = {read=FPosition, write=SetPosition, nodefault};
	__property int Min = {read=FMin, write=SetMin, nodefault};
	__property int Max = {read=FMax, write=SetMax, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Classes::TNotifyEvent OnUpButtonClick = {read=FOnUpButtonClick, write=FOnUpButtonClick};
	__property Classes::TNotifyEvent OnDownButtonClick = {read=FOnDownButtonClick, write=FOnDownButtonClick};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinUpDown(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspPopupCalendar;
class PASCALIMPLEMENTATION TspPopupCalendar : public Spcalendar::TspSkinMonthCalendar 
{
	typedef Spcalendar::TspSkinMonthCalendar inherited;
	
protected:
	MESSAGE void __fastcall WMMouseActivate(Messages::TMessage &Message);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TspPopupCalendar(Classes::TComponent* AOwner);
public:
	#pragma option push -w-inl
	/* TspSkinPanel.Destroy */ inline __fastcall virtual ~TspPopupCalendar(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspPopupCalendar(HWND ParentWindow) : Spcalendar::TspSkinMonthCalendar(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinDateEdit;
class PASCALIMPLEMENTATION TspSkinDateEdit : public TspSkinCustomEdit 
{
	typedef TspSkinCustomEdit inherited;
	
private:
	bool FTodayDefault;
	bool StopCheck;
	bool FCalendarAlphaBlend;
	Byte FCalendarAlphaBlendValue;
	bool FCalendarAlphaBlendAnimation;
	System::TDateTime FOldDateValue;
	
protected:
	TspPopupCalendar* FMonthCalendar;
	Classes::TNotifyEvent FOnDateChange;
	AnsiString __fastcall GetDateMask();
	TDate __fastcall GetDate(void);
	void __fastcall SetDate(TDate Value);
	virtual void __fastcall Loaded(void);
	Spcalendar::TspDaysOfWeek __fastcall GetFirstDayOfWeek(void);
	void __fastcall SetFirstDayOfWeek(Spcalendar::TspDaysOfWeek Value);
	void __fastcall SetTodayDefault(bool Value);
	Graphics::TFont* __fastcall GetCalendarFont(void);
	void __fastcall SetCalendarFont(Graphics::TFont* Value);
	int __fastcall GetCalendarWidth(void);
	void __fastcall SetCalendarWidth(int Value);
	int __fastcall GetCalendarHeight(void);
	void __fastcall SetCalendarHeight(int Value);
	void __fastcall DropDown(void);
	void __fastcall CloseUp(bool AcceptValue);
	void __fastcall ButtonClick(System::TObject* Sender);
	void __fastcall CalendarClick(System::TObject* Sender);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMCancelMode(Controls::TCMCancelMode &Message);
	void __fastcall CheckValidDate(void);
	DYNAMIC void __fastcall Change(void);
	bool __fastcall IsValidText(AnsiString S);
	bool __fastcall IsOnlyNumbers(AnsiString S);
	bool __fastcall IsMonth(AnsiString S);
	AnsiString __fastcall ExtactMonth(TDate ADate);
	Word __fastcall DecodeMonth(AnsiString S);
	TDate __fastcall MyStrToDate(AnsiString S);
	bool __fastcall IsValidText2(AnsiString S);
	bool __fastcall IsOnlyNumbers2(AnsiString S);
	void __fastcall HandleOnKeyPress(System::TObject* Sender, char &Key);
	bool __fastcall GetCalendarBoldDays(void);
	void __fastcall SetCalendarBoldDays(bool Value);
	bool __fastcall GetCalendarUseSkinFont(void);
	void __fastcall SetCalendarUseSkinFont(bool Value);
	AnsiString __fastcall GetCalendarSkinDataName();
	void __fastcall SetCalendarSkinDataName(AnsiString Value);
	
public:
	__fastcall virtual TspSkinDateEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinDateEdit(void);
	bool __fastcall IsDateInput(void);
	virtual void __fastcall ValidateEdit(void);
	
__published:
	__property TDate Date = {read=GetDate, write=SetDate};
	__property bool CalendarAlphaBlend = {read=FCalendarAlphaBlend, write=FCalendarAlphaBlend, nodefault};
	__property bool TodayDefault = {read=FTodayDefault, write=SetTodayDefault, nodefault};
	__property UseSkinFont ;
	__property int CalendarWidth = {read=GetCalendarWidth, write=SetCalendarWidth, nodefault};
	__property int CalendarHeight = {read=GetCalendarHeight, write=SetCalendarHeight, nodefault};
	__property Graphics::TFont* CalendarFont = {read=GetCalendarFont, write=SetCalendarFont};
	__property bool CalendarBoldDays = {read=GetCalendarBoldDays, write=SetCalendarBoldDays, nodefault};
	__property bool CalendarUseSkinFont = {read=GetCalendarUseSkinFont, write=SetCalendarUseSkinFont, nodefault};
	__property AnsiString CalendarSkinDataName = {read=GetCalendarSkinDataName, write=SetCalendarSkinDataName};
	__property bool CalendarAlphaBlendAnimation = {read=FCalendarAlphaBlendAnimation, write=FCalendarAlphaBlendAnimation, nodefault};
	__property Byte CalendarAlphaBlendValue = {read=FCalendarAlphaBlendValue, write=FCalendarAlphaBlendValue, nodefault};
	__property DefaultFont ;
	__property DefaultWidth ;
	__property DefaultHeight ;
	__property ButtonMode ;
	__property SkinData ;
	__property SkinDataName ;
	__property AlphaBlend ;
	__property AlphaBlendValue ;
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property ReadOnly  = {default=0};
	__property Align  = {default=0};
	__property Alignment  = {default=0};
	__property Font ;
	__property Anchors  = {default=3};
	__property AutoSelect  = {default=1};
	__property BiDiMode ;
	__property CharCase  = {default=0};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property HideSelection  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property MaxLength  = {default=0};
	__property OEMConvert  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property Classes::TNotifyEvent OnButtonClick = {read=FOnButtonClick, write=FOnButtonClick};
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
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
	__property OnStartDock ;
	__property OnStartDrag ;
	__property Classes::TNotifyEvent OnDateChange = {read=FOnDateChange, write=FOnDateChange};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinDateEdit(HWND ParentWindow) : TspSkinCustomEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinPopupTrackBar;
class DELPHICLASS TspSkinTrackEdit;
#pragma option push -b-
enum TspTrackBarPopupKind { tbpRight, tbpLeft };
#pragma option pop

class PASCALIMPLEMENTATION TspSkinTrackEdit : public TspSkinCustomEdit 
{
	typedef TspSkinCustomEdit inherited;
	
private:
	int FIncrement;
	bool FSupportUpDownKeys;
	TspTrackBarPopupKind FPopupKind;
	int FTrackBarWidth;
	AnsiString FTrackBarSkinDataName;
	bool StopCheck;
	bool FromEdit;
	int FMinValue;
	int FMaxValue;
	int FValue;
	TspSkinPopupTrackBar* FPopupTrackBar;
	bool FTrackBarAlphaBlend;
	Byte FTrackBarAlphaBlendValue;
	bool FTrackBarAlphaBlendAnimation;
	bool __fastcall GetJumpWhenClick(void);
	void __fastcall SetJumpWhenClick(bool Value);
	void __fastcall SetValue(int AValue);
	void __fastcall SetMinValue(int AValue);
	void __fastcall SetMaxValue(int AValue);
	void __fastcall ButtonClick(System::TObject* Sender);
	void __fastcall TrackBarChange(System::TObject* Sender);
	void __fastcall DropDown(void);
	void __fastcall CloseUp(void);
	
protected:
	int __fastcall CheckValue(int NewValue);
	HIDESBASE MESSAGE void __fastcall CMCancelMode(Controls::TCMCancelMode &Message);
	DYNAMIC void __fastcall KeyPress(char &Key);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	bool __fastcall IsValidChar(char Key);
	DYNAMIC void __fastcall Change(void);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMMOUSEWHEEL(Messages::TMessage &Message);
	__property Text ;
	
public:
	__fastcall virtual TspSkinTrackEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinTrackEdit(void);
	bool __fastcall IsNumText(AnsiString AText);
	
__published:
	__property int Increment = {read=FIncrement, write=FIncrement, nodefault};
	__property bool SupportUpDownKeys = {read=FSupportUpDownKeys, write=FSupportUpDownKeys, nodefault};
	__property Alignment  = {default=0};
	__property UseSkinFont ;
	__property TspTrackBarPopupKind PopupKind = {read=FPopupKind, write=FPopupKind, nodefault};
	__property bool JumpWhenClick = {read=GetJumpWhenClick, write=SetJumpWhenClick, nodefault};
	__property int TrackBarWidth = {read=FTrackBarWidth, write=FTrackBarWidth, nodefault};
	__property bool TrackBarAlphaBlend = {read=FTrackBarAlphaBlend, write=FTrackBarAlphaBlend, nodefault};
	__property bool TrackBarAlphaBlendAnimation = {read=FTrackBarAlphaBlendAnimation, write=FTrackBarAlphaBlendAnimation, nodefault};
	__property Byte TrackBarAlphaBlendValue = {read=FTrackBarAlphaBlendValue, write=FTrackBarAlphaBlendValue, nodefault};
	__property AnsiString TrackBarSkinDataName = {read=FTrackBarSkinDataName, write=FTrackBarSkinDataName};
	__property int MinValue = {read=FMinValue, write=SetMinValue, nodefault};
	__property int MaxValue = {read=FMaxValue, write=SetMaxValue, nodefault};
	__property int Value = {read=FValue, write=SetValue, nodefault};
	__property DefaultFont ;
	__property DefaultWidth ;
	__property DefaultHeight ;
	__property ButtonMode ;
	__property SkinData ;
	__property SkinDataName ;
	__property OnMouseEnter ;
	__property OnMouseLeave ;
	__property ReadOnly  = {default=0};
	__property Align  = {default=0};
	__property Font ;
	__property Anchors  = {default=3};
	__property AutoSelect  = {default=1};
	__property BiDiMode ;
	__property CharCase  = {default=0};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property HideSelection  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property MaxLength  = {default=0};
	__property OEMConvert  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property OnButtonClick ;
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
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
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinTrackEdit(HWND ParentWindow) : TspSkinCustomEdit(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspSkinPopupTrackBar : public Skinctrls::TspSkinTrackBar 
{
	typedef Skinctrls::TspSkinTrackBar inherited;
	
protected:
	MESSAGE void __fastcall WMMouseActivate(Messages::TMessage &Message);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	
public:
	TspSkinTrackEdit* TrackEdit;
	__fastcall virtual TspSkinPopupTrackBar(Classes::TComponent* AOwner);
public:
	#pragma option push -w-inl
	/* TspSkinCustomControl.Destroy */ inline __fastcall virtual ~TspSkinPopupTrackBar(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinPopupTrackBar(HWND ParentWindow) : Skinctrls::TspSkinTrackBar(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMaskEdit;
class PASCALIMPLEMENTATION TspSkinMaskEdit : public TspSkinEdit 
{
	typedef TspSkinEdit inherited;
	
__published:
	__property Anchors  = {default=3};
	__property AutoSelect  = {default=1};
	__property AutoSize  = {default=1};
	__property BiDiMode ;
	__property BorderStyle  = {default=1};
	__property CharCase  = {default=0};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property Ctl3D ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property EditMask ;
	__property Font ;
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property MaxLength  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=0};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ReadOnly  = {default=0};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
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
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomEdit.Create */ inline __fastcall virtual TspSkinMaskEdit(Classes::TComponent* AOwner) : TspSkinEdit(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomEdit.Destroy */ inline __fastcall virtual ~TspSkinMaskEdit(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinMaskEdit(HWND ParentWindow) : TspSkinEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinTimeEdit;
class PASCALIMPLEMENTATION TspSkinTimeEdit : public TspSkinMaskEdit 
{
	typedef TspSkinMaskEdit inherited;
	
private:
	bool FShowMSec;
	bool FShowSec;
	void __fastcall SetShowMilliseconds(const bool Value);
	void __fastcall SetShowSeconds(const bool Value);
	void __fastcall SetMilliseconds(const int Value);
	int __fastcall GetMilliseconds(void);
	void __fastcall SetTime(const AnsiString Value);
	AnsiString __fastcall GetTime();
	bool __fastcall IsValidChar(char Key);
	void __fastcall CheckSpace(AnsiString &S);
	bool __fastcall IsValidTime(const Word AHour, const Word AMinute, const Word ASecond, const Word AMilliSecond);
	void __fastcall SetValidTime(Word &H, Word &M, Word &S, Word &MS);
	AnsiString __fastcall ValidateParameter(AnsiString S, int MustLen);
	
protected:
	void __fastcall HandleOnKeyPress(System::TObject* Sender, char &Key);
	
public:
	__fastcall virtual TspSkinTimeEdit(Classes::TComponent* AOwner);
	virtual void __fastcall ValidateEdit(void);
	void __fastcall DecodeTime(Word &Hour, Word &Min, Word &Sec, Word &MSec);
	void __fastcall EncodeTime(Word Hour, Word Min, Word Sec, Word MSec);
	__property int Milliseconds = {read=GetMilliseconds, write=SetMilliseconds, nodefault};
	__property AnsiString Time = {read=GetTime, write=SetTime};
	__property bool ShowMSec = {read=FShowMSec, write=SetShowMilliseconds, nodefault};
	__property bool ShowSec = {read=FShowSec, write=SetShowSeconds, nodefault};
public:
	#pragma option push -w-inl
	/* TspSkinCustomEdit.Destroy */ inline __fastcall virtual ~TspSkinTimeEdit(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinTimeEdit(HWND ParentWindow) : TspSkinMaskEdit(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspPasswordKind { pkRoundRect, pkRect, pkTriangle };
#pragma option pop

class DELPHICLASS TspSkinPasswordEdit;
class PASCALIMPLEMENTATION TspSkinPasswordEdit : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
private:
	Graphics::TColor FDefaultColor;
	bool FMouseIn;
	AnsiString FText;
	bool FLMouseSelecting;
	int FCaretPosition;
	int FSelStart;
	int FSelLength;
	int FFirstVisibleChar;
	bool FAutoSelect;
	Stdctrls::TEditCharCase FCharCase;
	bool FHideSelection;
	int FMaxLength;
	bool FReadOnly;
	Classes::TNotifyEvent FOnChange;
	TspPasswordKind FPasswordKind;
	Classes::TAlignment FTextAlignment;
	void __fastcall UpdateFirstVisibleChar(void);
	void __fastcall UpdateCaretePosition(void);
	void __fastcall UpdateCarete(void);
	MESSAGE void __fastcall WMGetDlgCode(Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Messages::TMessage &Message);
	MESSAGE void __fastcall CMTextChanged(Messages::TMessage &Msg);
	AnsiString __fastcall GetSelText();
	AnsiString __fastcall GetVisibleSelText();
	int __fastcall GetNextWordBeging(int StartPosition);
	int __fastcall GetPrivWordBeging(int StartPosition);
	int __fastcall GetSelStart(void);
	int __fastcall GetSelLength(void);
	HIDESBASE AnsiString __fastcall GetText();
	HIDESBASE void __fastcall SetText(const AnsiString Value);
	void __fastcall SetCaretPosition(const int Value);
	void __fastcall SetSelLength(const int Value);
	void __fastcall SetSelStart(const int Value);
	void __fastcall SetAutoSelect(const bool Value);
	void __fastcall SetCharCase(const Stdctrls::TEditCharCase Value);
	void __fastcall SetHideSelection(const bool Value);
	void __fastcall SetMaxLength(const int Value);
	HIDESBASE void __fastcall SetCursor(const Controls::TCursor Value);
	void __fastcall SetTextAlignment(const Classes::TAlignment Value);
	void __fastcall SetPasswordKind(const TspPasswordKind Value);
	void __fastcall SetDefaultColor(Graphics::TColor Value);
	
protected:
	virtual Types::TRect __fastcall GetEditRect();
	virtual int __fastcall GetPasswordCharWidth(void);
	int __fastcall GetCharX(int A);
	int __fastcall GetCoordinatePosition(int x);
	virtual Types::TRect __fastcall GetSelRect();
	int __fastcall GetAlignmentFlags(void);
	void __fastcall PaintText(Graphics::TCanvas* Cnv);
	void __fastcall PaintSelectedText(Graphics::TCanvas* Cnv);
	virtual void __fastcall DrawPasswordChar(const Types::TRect &SymbolRect, bool Selected, Graphics::TCanvas* Cnv);
	virtual bool __fastcall ValidText(AnsiString NewText);
	void __fastcall HasFocus(void);
	void __fastcall KillFocus(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int x, int y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int x, int y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int x, int y);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(char &Key);
	void __fastcall SelectWord(void);
	DYNAMIC void __fastcall Change(void);
	__property int CaretPosition = {read=FCaretPosition, write=SetCaretPosition, nodefault};
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	virtual void __fastcall CalcSize(int &W, int &H);
	
public:
	int LOffset;
	int ROffset;
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	Graphics::TColor CharColor;
	Graphics::TColor CharActiveColor;
	Graphics::TColor CharDisabledColor;
	__fastcall virtual TspSkinPasswordEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinPasswordEdit(void);
	virtual void __fastcall Loaded(void);
	void __fastcall PasteFromClipboard(void);
	virtual void __fastcall ShowCaret(void);
	virtual void __fastcall HideCaret(void);
	void __fastcall ClearSelection(void);
	void __fastcall SelectAll(void);
	void __fastcall Clear(void);
	void __fastcall InsertChar(char Ch);
	void __fastcall InsertText(AnsiString AText);
	void __fastcall InsertAfter(int Position, AnsiString S, bool Selected);
	void __fastcall DeleteFrom(int Position, int Length, bool MoveCaret);
	__property int SelStart = {read=GetSelStart, write=SetSelStart, nodefault};
	__property int SelLength = {read=GetSelLength, write=SetSelLength, nodefault};
	__property AnsiString SelText = {read=GetSelText};
	
__published:
	__property Graphics::TColor DefaultColor = {read=FDefaultColor, write=SetDefaultColor, nodefault};
	__property Anchors  = {default=3};
	__property bool AutoSelect = {read=FAutoSelect, write=SetAutoSelect, default=1};
	__property Stdctrls::TEditCharCase CharCase = {read=FCharCase, write=SetCharCase, default=0};
	__property Constraints ;
	__property Color  = {default=-2147483643};
	__property Cursor  = {write=SetCursor, default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property bool HideSelection = {read=FHideSelection, write=SetHideSelection, default=1};
	__property int MaxLength = {read=FMaxLength, write=SetMaxLength, default=0};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property TspPasswordKind PasswordKind = {read=FPasswordKind, write=SetPasswordKind, nodefault};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property AnsiString Text = {read=GetText, write=SetText};
	__property Classes::TAlignment TextAlignment = {read=FTextAlignment, write=SetTextAlignment, default=0};
	__property Visible  = {default=1};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnClick ;
	__property OnDblClick ;
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
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinPasswordEdit(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspPopupCheckListBox;
class PASCALIMPLEMENTATION TspPopupCheckListBox : public TspSkinCheckListBox 
{
	typedef TspSkinCheckListBox inherited;
	
private:
	bool FOldAlphaBlend;
	Byte FOldAlphaBlendValue;
	MESSAGE void __fastcall WMMouseActivate(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TspPopupCheckListBox(Classes::TComponent* AOwner);
	HIDESBASE void __fastcall Hide(void);
	HIDESBASE void __fastcall Show(const Types::TPoint &Origin);
public:
	#pragma option push -w-inl
	/* TspSkinCheckListBox.Destroy */ inline __fastcall virtual ~TspPopupCheckListBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspPopupCheckListBox(HWND ParentWindow) : TspSkinCheckListBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCustomCheckComboBox;
class PASCALIMPLEMENTATION TspSkinCustomCheckComboBox : public Skinctrls::TspSkinCustomControl 
{
	typedef Skinctrls::TspSkinCustomControl inherited;
	
protected:
	Graphics::TColor FDefaultColor;
	bool WasInLB;
	int TimerMode;
	bool FAlphaBlend;
	bool FAlphaBlendAnimation;
	Byte FAlphaBlendValue;
	Classes::TNotifyEvent FOnChange;
	Classes::TNotifyEvent FOnClick;
	Classes::TNotifyEvent FOnCloseUp;
	Classes::TNotifyEvent FOnDropDown;
	TspDrawSkinItemEvent FOnListBoxDrawItem;
	bool FMouseIn;
	int FDropDownCount;
	bool FLBDown;
	Classes::TWndMethod FListBoxWindowProc;
	Classes::TWndMethod FEditWindowProc;
	TspPopupCheckListBox* FListBox;
	int FListBoxWidth;
	TspCBItem CBItem;
	#pragma pack(push, 1)
	TspCBButtonX Button;
	#pragma pack(pop)
	
	void __fastcall ProcessListBox(void);
	void __fastcall StartTimer(void);
	void __fastcall StopTimer(void);
	void __fastcall CheckText(void);
	void __fastcall SetChecked(int Index, bool Checked);
	bool __fastcall GetChecked(int Index);
	bool __fastcall GetListBoxUseSkinItemHeight(void);
	void __fastcall SetListBoxUseSkinItemHeight(bool Value);
	Imglist::TCustomImageList* __fastcall GetImages(void);
	int __fastcall GetImageIndex(void);
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall SetImageIndex(int Value);
	Graphics::TFont* __fastcall GetListBoxDefaultFont(void);
	void __fastcall SetListBoxDefaultFont(Graphics::TFont* Value);
	bool __fastcall GetListBoxUseSkinFont(void);
	void __fastcall SetListBoxUseSkinFont(bool Value);
	Graphics::TFont* __fastcall GetListBoxDefaultCaptionFont(void);
	void __fastcall SetListBoxDefaultCaptionFont(Graphics::TFont* Value);
	int __fastcall GetListBoxDefaultItemHeight(void);
	void __fastcall SetListBoxDefaultItemHeight(int Value);
	Classes::TAlignment __fastcall GetListBoxCaptionAlignment(void);
	void __fastcall SetListBoxCaptionAlignment(Classes::TAlignment Value);
	void __fastcall SetListBoxCaption(AnsiString Value);
	AnsiString __fastcall GetListBoxCaption();
	void __fastcall SetListBoxCaptionMode(bool Value);
	bool __fastcall GetListBoxCaptionMode(void);
	void __fastcall ListBoxDrawItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	bool __fastcall GetSorted(void);
	void __fastcall SetSorted(bool Value);
	void __fastcall DrawDefaultItem(Graphics::TCanvas* Cnvs);
	void __fastcall DrawSkinItem(Graphics::TCanvas* Cnvs);
	void __fastcall ListBoxWindowProcHook(Messages::TMessage &Message);
	void __fastcall SetItems(Classes::TStrings* Value);
	Classes::TStrings* __fastcall GetItems(void);
	void __fastcall SetListBoxDrawItem(TspDrawSkinItemEvent Value);
	void __fastcall SetDropDownCount(int Value);
	void __fastcall DrawButton(Graphics::TCanvas* C);
	void __fastcall CalcRects(void);
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	HIDESBASE MESSAGE void __fastcall WMSETFOCUS(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMKILLFOCUS(Messages::TWMKillFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	MESSAGE void __fastcall CMCancelMode(Controls::TCMCancelMode &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	void __fastcall ListBoxMouseMove(System::TObject* Sender, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall WMMOUSEWHEEL(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Messages::TMessage &Message);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	MESSAGE void __fastcall CMWantSpecialKey(Messages::TWMKey &Msg);
	virtual void __fastcall DefaultFontChange(void);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall Change(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall EditUp1(bool AChange);
	void __fastcall EditDown1(bool AChange);
	void __fastcall EditPageUp1(bool AChange);
	void __fastcall EditPageDown1(bool AChange);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	void __fastcall SetDefaultColor(Graphics::TColor Value);
	Graphics::TColor __fastcall GetDisabledFontColor(void);
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	#pragma pack(push, 1)
	Types::TRect SItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusItemRect;
	#pragma pack(pop)
	
	int ItemLeftOffset;
	int ItemRightOffset;
	#pragma pack(push, 1)
	Types::TRect ItemTextRect;
	#pragma pack(pop)
	
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor FocusFontColor;
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnEnabledButtonRect;
	#pragma pack(pop)
	
	AnsiString ListBoxName;
	bool StretchEffect;
	bool ItemStretchEffect;
	bool FocusItemStretchEffect;
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	__fastcall virtual TspSkinCustomCheckComboBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomCheckComboBox(void);
	virtual void __fastcall ChangeSkinData(void);
	void __fastcall CloseUp(bool Value);
	virtual void __fastcall DropDown(void);
	bool __fastcall IsPopupVisible(void);
	bool __fastcall CanCancelDropDown(void);
	virtual void __fastcall Invalidate(void);
	__property Graphics::TColor DefaultColor = {read=FDefaultColor, write=SetDefaultColor, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property int ImageIndex = {read=GetImageIndex, write=SetImageIndex, nodefault};
	__property bool ListBoxUseSkinItemHeight = {read=GetListBoxUseSkinItemHeight, write=SetListBoxUseSkinItemHeight, nodefault};
	__property int ListBoxWidth = {read=FListBoxWidth, write=FListBoxWidth, nodefault};
	__property AnsiString ListBoxCaption = {read=GetListBoxCaption, write=SetListBoxCaption};
	__property bool ListBoxCaptionMode = {read=GetListBoxCaptionMode, write=SetListBoxCaptionMode, nodefault};
	__property Graphics::TFont* ListBoxDefaultFont = {read=GetListBoxDefaultFont, write=SetListBoxDefaultFont};
	__property bool ListBoxUseSkinFont = {read=GetListBoxUseSkinFont, write=SetListBoxUseSkinFont, nodefault};
	__property Graphics::TFont* ListBoxDefaultCaptionFont = {read=GetListBoxDefaultCaptionFont, write=SetListBoxDefaultCaptionFont};
	__property int ListBoxDefaultItemHeight = {read=GetListBoxDefaultItemHeight, write=SetListBoxDefaultItemHeight, nodefault};
	__property Classes::TAlignment ListBoxCaptionAlignment = {read=GetListBoxCaptionAlignment, write=SetListBoxCaptionAlignment, nodefault};
	__property bool Checked[int Index] = {read=GetChecked, write=SetChecked};
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property Visible  = {default=1};
	__property Text ;
	__property Align  = {default=0};
	__property Classes::TStrings* Items = {read=GetItems, write=SetItems};
	__property int DropDownCount = {read=FDropDownCount, write=SetDropDownCount, nodefault};
	__property Font ;
	__property bool Sorted = {read=GetSorted, write=SetSorted, nodefault};
	__property TspDrawSkinItemEvent OnListBoxDrawItem = {read=FOnListBoxDrawItem, write=SetListBoxDrawItem};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property Classes::TNotifyEvent OnCloseUp = {read=FOnCloseUp, write=FOnCloseUp};
	__property Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnEnter ;
	__property OnExit ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomCheckComboBox(HWND ParentWindow) : Skinctrls::TspSkinCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCheckComboBox;
class PASCALIMPLEMENTATION TspSkinCheckComboBox : public TspSkinCustomCheckComboBox 
{
	typedef TspSkinCustomCheckComboBox inherited;
	
__published:
	__property AlphaBlend ;
	__property AlphaBlendValue ;
	__property AlphaBlendAnimation ;
	__property ListBoxUseSkinFont ;
	__property ListBoxUseSkinItemHeight ;
	__property Images ;
	__property ImageIndex ;
	__property ListBoxWidth ;
	__property ListBoxCaption ;
	__property ListBoxCaptionMode ;
	__property ListBoxDefaultFont ;
	__property ListBoxDefaultCaptionFont ;
	__property ListBoxDefaultItemHeight ;
	__property ListBoxCaptionAlignment ;
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property DefaultColor ;
	__property Text ;
	__property Align  = {default=0};
	__property Items ;
	__property DropDownCount ;
	__property Font ;
	__property Sorted ;
	__property OnListBoxDrawItem ;
	__property OnChange ;
	__property OnClick ;
	__property OnCloseUp ;
	__property OnDropDown ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnEnter ;
	__property OnExit ;
public:
	#pragma option push -w-inl
	/* TspSkinCustomCheckComboBox.Create */ inline __fastcall virtual TspSkinCheckComboBox(Classes::TComponent* AOwner) : TspSkinCustomCheckComboBox(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinCustomCheckComboBox.Destroy */ inline __fastcall virtual ~TspSkinCheckComboBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCheckComboBox(HWND ParentWindow) : TspSkinCustomCheckComboBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspComboExItem;
class PASCALIMPLEMENTATION TspComboExItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	Imglist::TImageIndex FImageIndex;
	Imglist::TImageIndex FSelectedImageIndex;
	int FIndent;
	AnsiString FCaption;
	void *FData;
	
protected:
	virtual void __fastcall SetSelectedImageIndex(const Imglist::TImageIndex Value);
	virtual void __fastcall SetImageIndex(const Imglist::TImageIndex Value);
	virtual void __fastcall SetCaption(const AnsiString Value);
	virtual void __fastcall SetData(const void * Value);
	virtual void __fastcall SetIndex(int Value);
	
public:
	__fastcall virtual TspComboExItem(Classes::TCollection* Collection);
	__property void * Data = {read=FData, write=SetData};
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property AnsiString Caption = {read=FCaption, write=SetCaption};
	__property int Indent = {read=FIndent, write=FIndent, default=-1};
	__property Imglist::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Imglist::TImageIndex SelectedImageIndex = {read=FSelectedImageIndex, write=SetSelectedImageIndex, default=-1};
public:
	#pragma option push -w-inl
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TspComboExItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspComboExItems;
class DELPHICLASS TspSkinComboBoxEx;
class PASCALIMPLEMENTATION TspSkinComboBoxEx : public TspSkinCustomComboBox 
{
	typedef TspSkinCustomComboBox inherited;
	
private:
	TspComboExItems* FItemsEx;
	void __fastcall SetItemsEx(TspComboExItems* Value);
	void __fastcall ClearItemsEx(void);
	
protected:
	void __fastcall DrawItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	void __fastcall ComboDrawItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	void __fastcall LoadItems(void);
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TspSkinComboBoxEx(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinComboBoxEx(void);
	
__published:
	__property TspComboExItems* ItemsEx = {read=FItemsEx, write=SetItemsEx};
	__property Style ;
	__property HideSelection ;
	__property AutoComplete ;
	__property ListBoxWidth ;
	__property Images ;
	__property ListBoxAlphaBlend ;
	__property ListBoxAlphaBlendAnimation ;
	__property ListBoxAlphaBlendValue ;
	__property ListBoxCaption ;
	__property ListBoxCaptionMode ;
	__property ListBoxDefaultFont ;
	__property ListBoxDefaultCaptionFont ;
	__property ListBoxDefaultItemHeight ;
	__property ListBoxCaptionAlignment ;
	__property ListBoxUseSkinFont ;
	__property ListBoxUseSkinItemHeight ;
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property DropDownCount ;
	__property Enabled  = {default=1};
	__property Font ;
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnDropDown ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinComboBoxEx(HWND ParentWindow) : TspSkinCustomComboBox(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspComboExItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspComboExItem* operator[](int Index) { return Items[Index]; }
	
private:
	HIDESBASE TspComboExItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TspComboExItem* Value);
	
protected:
	void __fastcall SetComboBoxItem(int Index);
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	TspSkinComboBoxEx* ComboBoxEx;
	__fastcall TspComboExItems(TspSkinComboBoxEx* AComboBoxEx);
	__property TspComboExItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	HIDESBASE TspComboExItem* __fastcall Add(void);
	HIDESBASE TspComboExItem* __fastcall Insert(int Index);
	HIDESBASE void __fastcall Delete(int Index);
	HIDESBASE void __fastcall Clear(void);
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspComboExItems(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Skinboxctrls */
using namespace Skinboxctrls;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SkinBoxCtrls
