// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SkinTabs.pas' rev: 6.00

#ifndef SkinTabsHPP
#define SkinTabsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Menus.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <SPUtils.hpp>	// Pascal unit
#include <SkinBoxCtrls.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <CommCtrl.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Skintabs
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TspSkinCustomTabSheet;
class PASCALIMPLEMENTATION TspSkinCustomTabSheet : public Comctrls::TTabSheet 
{
	typedef Comctrls::TTabSheet inherited;
	
private:
	Graphics::TBitmap* FWallPaper;
	
protected:
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	bool ButtonMouseIn;
	bool ButtonMouseDown;
	void __fastcall CheckControlsBackground(void);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Messages::TWMEraseBkgnd &Msg);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	void __fastcall SetWallPaper(Graphics::TBitmap* Value);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	void __fastcall PaintBG(HDC DC);
	__fastcall virtual TspSkinCustomTabSheet(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomTabSheet(void);
	
__published:
	__property Graphics::TBitmap* WallPaper = {read=FWallPaper, write=SetWallPaper};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomTabSheet(HWND ParentWindow) : Comctrls::TTabSheet(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinTabSheet;
class PASCALIMPLEMENTATION TspSkinTabSheet : public TspSkinCustomTabSheet 
{
	typedef TspSkinCustomTabSheet inherited;
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinTabSheet(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinTabSheet(void);
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinTabSheet(HWND ParentWindow) : TspSkinCustomTabSheet(ParentWindow) { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TspDrawSkinTabEvent)(int TabIndex, const Types::TRect &Rct, bool Active, bool MouseIn, Graphics::TCanvas* Cnvs);

typedef void __fastcall (__closure *TspCloseEvent)(System::TObject* Sender, bool &CanClose);

class DELPHICLASS TspSkinPageControl;
class PASCALIMPLEMENTATION TspSkinPageControl : public Comctrls::TPageControl 
{
	typedef Comctrls::TPageControl inherited;
	
private:
	bool FHideTabs;
	Comctrls::TTabPosition FOLdTabPosition;
	bool FOldMultiLine;
	int FOldTabHeight;
	int FCloseSize;
	TspCloseEvent FOnClose;
	Classes::TNotifyEvent FOnAfterClose;
	bool FFreeOnClose;
	bool FIsVistaOS;
	bool FShowCloseButtons;
	bool FTabsBGTransparent;
	int FActiveTab;
	int FOldActiveTab;
	int FActiveTabIndex;
	int FOldActiveTabIndex;
	TspDrawSkinTabEvent FOnDrawSkinTab;
	Imglist::TCustomImageList* FImages;
	Imglist::TCustomImageList* FTempImages;
	int __fastcall GetCloseSize(void);
	HIDESBASE void __fastcall SetImages(Imglist::TCustomImageList* value);
	void __fastcall DrawCloseButton(Graphics::TCanvas* Cnvs, const Types::TRect &R, int I, int W, int H);
	void __fastcall SetShowCloseButtons(bool Value);
	int __fastcall GetPosition(void);
	int __fastcall GetInVisibleItemCount(void);
	void __fastcall OnUpDownChange(System::TObject* Sender);
	void __fastcall DrawTabs(Graphics::TCanvas* Cnvs);
	HIDESBASE void __fastcall DrawTab(int TI, const Types::TRect &Rct, bool Active, bool MouseIn, Graphics::TCanvas* Cnvs);
	Types::TRect __fastcall GetItemRect(int index);
	void __fastcall SetItemSize(int AWidth, int AHeight);
	void __fastcall CheckScroll(void);
	void __fastcall ShowSkinUpDown(void);
	void __fastcall HideSkinUpDown(void);
	void __fastcall TestActive(int X, int Y);
	void __fastcall SetTabsBGTransparent(bool Value);
	void __fastcall DrawEmptyBackGround(HDC DC);
	bool __fastcall CheckVisibleTabs(void);
	Types::TRect __fastcall GetActiveTabRect();
	
protected:
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	int FIndex;
	Skinboxctrls::TspSkinUpDown* FSkinUpDown;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	int FDefaultItemHeight;
	#pragma pack(push, 1)
	Types::TRect CloseButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClosebuttonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonDownRect;
	#pragma pack(pop)
	
	bool ButtonTransparent;
	Graphics::TColor ButtonTransparentColor;
	void __fastcall SetDefaultItemHeight(int Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	DYNAMIC void __fastcall Change(void);
	void __fastcall Change2(void);
	void __fastcall GetSkinData(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMHSCROLL(Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Msg);
	void __fastcall PaintDefaultWindow(Graphics::TCanvas* Cnvs);
	void __fastcall PaintSkinWindow(Graphics::TCanvas* Cnvs);
	virtual void __fastcall PaintWindow(HDC DC);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Msg);
	MESSAGE void __fastcall WMCHECKPARENTBG(Messages::TWMEraseBkgnd &Msg);
	void __fastcall DoClose(void);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	Graphics::TBitmap* Picture;
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MouseInTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TabsBGRect;
	#pragma pack(pop)
	
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
	
	int TabLeftOffset;
	int TabRightOffset;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor FocusFontColor;
	Graphics::TColor MouseInFontColor;
	AnsiString UpDown;
	int BGPictureIndex;
	bool TabStretchEffect;
	bool ShowFocus;
	int FocusOffsetX;
	int FocusOffsetY;
	bool StretchEffect;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	Sputils::TspStretchType StretchType;
	__fastcall virtual TspSkinPageControl(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinPageControl(void);
	void __fastcall ChangeSkinData(void);
	virtual void __fastcall Loaded(void);
	void __fastcall UpDateTabs(void);
	void __fastcall HideTabs(void);
	void __fastcall ShowTabs(void);
	
__published:
	__property bool FreeOnClose = {read=FFreeOnClose, write=FFreeOnClose, nodefault};
	__property bool ShowCloseButtons = {read=FShowCloseButtons, write=SetShowCloseButtons, nodefault};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool TabsBGTransparent = {read=FTabsBGTransparent, write=SetTabsBGTransparent, nodefault};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property int DefaultItemHeight = {read=FDefaultItemHeight, write=SetDefaultItemHeight, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Color  = {default=-2147483643};
	__property ActivePage ;
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Constraints ;
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property HotTrack  = {default=0};
	__property OwnerDraw  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property RaggedRight  = {default=0};
	__property ScrollOpposite  = {default=0};
	__property ShowHint ;
	__property TabHeight  = {default=0};
	__property TabOrder  = {default=-1};
	__property TabPosition  = {default=0};
	__property TabStop  = {default=1};
	__property TabWidth  = {default=0};
	__property Visible  = {default=1};
	__property TspCloseEvent OnClose = {read=FOnClose, write=FOnClose};
	__property Classes::TNotifyEvent OnAfterClose = {read=FOnAfterClose, write=FOnAfterClose};
	__property OnChange ;
	__property TspDrawSkinTabEvent OnDrawSkinTab = {read=FOnDrawSkinTab, write=FOnDrawSkinTab};
	__property OnChanging ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnDrawTab ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetImageIndex ;
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
	/* TWinControl.CreateParented */ inline __fastcall TspSkinPageControl(HWND ParentWindow) : Comctrls::TPageControl(ParentWindow) { }
	#pragma option pop
	
};


typedef DynamicArray<Types::TRect >  TspRectArray;

typedef DynamicArray<bool >  TspBolArray;

typedef void __fastcall (__closure *TspCloseEvent2)(int Index, bool &CanClose);

class DELPHICLASS TspSkinTabControl;
class PASCALIMPLEMENTATION TspSkinTabControl : public Comctrls::TTabControl 
{
	typedef Comctrls::TTabControl inherited;
	
private:
	TspCloseEvent2 FOnClose;
	Classes::TNotifyEvent FOnAfterClose;
	DynamicArray<bool >  TabButtonMouseDown;
	DynamicArray<bool >  TabButtonMouseIn;
	DynamicArray<Types::TRect >  TabButtonR;
	int FCloseSize;
	bool FShowCloseButtons;
	bool FTabsBGTransparent;
	TspDrawSkinTabEvent FOnDrawSkinTab;
	bool FromWMPaint;
	int FOldTop;
	int FOldBottom;
	int FActiveTab;
	int FOldActiveTab;
	Imglist::TCustomImageList* FImages;
	Imglist::TCustomImageList* FTempImages;
	void __fastcall DrawCloseButton(Graphics::TCanvas* Cnvs, const Types::TRect &R, int I, int W, int H);
	void __fastcall SetShowCloseButtons(bool Value);
	int __fastcall GetPosition(void);
	int __fastcall GetInVisibleItemCount(void);
	void __fastcall OnUpDownChange(System::TObject* Sender);
	void __fastcall DrawTabs(Graphics::TCanvas* Cnvs);
	HIDESBASE void __fastcall DrawTab(int TI, const Types::TRect &Rct, bool Active, bool MouseIn, Graphics::TCanvas* Cnvs);
	Types::TRect __fastcall GetItemRect(int index);
	void __fastcall SetItemSize(int AWidth, int AHeight);
	void __fastcall CheckScroll(void);
	void __fastcall ShowSkinUpDown(void);
	void __fastcall HideSkinUpDown(void);
	void __fastcall TestActive(int X, int Y);
	void __fastcall SetTabsBGTransparent(bool Value);
	HIDESBASE void __fastcall SetImages(Imglist::TCustomImageList* value);
	
protected:
	Skindata::TspSkinData* FSD;
	AnsiString FSkinDataName;
	int FIndex;
	Skinboxctrls::TspSkinUpDown* FSkinUpDown;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	int FDefaultItemHeight;
	int __fastcall GetCloseSize(void);
	void __fastcall SetDefaultItemHeight(int Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Messages::TWMPaint &Msg);
	void __fastcall GetSkinData(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMHSCROLL(Messages::TWMEraseBkgnd &Msg);
	void __fastcall PaintDefaultWindow(Graphics::TCanvas* Cnvs);
	void __fastcall PaintSkinWindow(Graphics::TCanvas* Cnvs);
	virtual void __fastcall PaintWindow(HDC DC);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	DYNAMIC void __fastcall Change(void);
	void __fastcall Change2(void);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	MESSAGE void __fastcall WMCHECKPARENTBG(Messages::TWMEraseBkgnd &Msg);
	void __fastcall CheckControlsBackground(void);
	Types::TRect __fastcall GetActiveTabRect();
	void __fastcall DoClose(void);
	
public:
	Graphics::TBitmap* Picture;
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MouseInTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TabsBGRect;
	#pragma pack(pop)
	
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
	
	int TabLeftOffset;
	int TabRightOffset;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor FocusFontColor;
	Graphics::TColor MouseInFontColor;
	AnsiString UpDown;
	int BGPictureIndex;
	bool TabStretchEffect;
	bool StretchEffect;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	bool ShowFocus;
	int FocusOffsetX;
	int FocusOffsetY;
	Sputils::TspStretchType StretchType;
	#pragma pack(push, 1)
	Types::TRect CloseButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClosebuttonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonDownRect;
	#pragma pack(pop)
	
	bool ButtonTransparent;
	Graphics::TColor ButtonTransparentColor;
	__fastcall virtual TspSkinTabControl(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinTabControl(void);
	void __fastcall ChangeSkinData(void);
	virtual void __fastcall Loaded(void);
	void __fastcall UpDateTabs(void);
	void __fastcall PaintBG(HDC DC);
	
__published:
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool ShowCloseButtons = {read=FShowCloseButtons, write=SetShowCloseButtons, nodefault};
	__property bool TabsBGTransparent = {read=FTabsBGTransparent, write=SetTabsBGTransparent, nodefault};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property int DefaultItemHeight = {read=FDefaultItemHeight, write=SetDefaultItemHeight, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property AnsiString SkinDataName = {read=FSkinDataName, write=FSkinDataName};
	__property Color  = {default=-2147483643};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Constraints ;
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property HotTrack  = {default=0};
	__property OwnerDraw  = {default=0};
	__property ParentBiDiMode  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property RaggedRight  = {default=0};
	__property ScrollOpposite  = {default=0};
	__property ShowHint ;
	__property TabHeight  = {default=0};
	__property TabOrder  = {default=-1};
	__property TabPosition  = {default=0};
	__property TabStop  = {default=1};
	__property TabWidth  = {default=0};
	__property Visible  = {default=1};
	__property TspCloseEvent2 OnClose = {read=FOnClose, write=FOnClose};
	__property Classes::TNotifyEvent OnAfterClose = {read=FOnAfterClose, write=FOnAfterClose};
	__property TspDrawSkinTabEvent OnDrawSkinTab = {read=FOnDrawSkinTab, write=FOnDrawSkinTab};
	__property OnChange ;
	__property OnChanging ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnDrawTab ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnGetImageIndex ;
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
	/* TWinControl.CreateParented */ inline __fastcall TspSkinTabControl(HWND ParentWindow) : Comctrls::TTabControl(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Skintabs */
using namespace Skintabs;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SkinTabs
