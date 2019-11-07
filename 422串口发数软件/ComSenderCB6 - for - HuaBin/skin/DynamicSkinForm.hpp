// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DynamicSkinForm.pas' rev: 6.00

#ifndef DynamicSkinFormHPP
#define DynamicSkinFormHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SkinExCtrls.hpp>	// Pascal unit
#include <SkinHint.hpp>	// Pascal unit
#include <spTrayIcon.hpp>	// Pascal unit
#include <SkinBoxCtrls.hpp>	// Pascal unit
#include <SkinTabs.hpp>	// Pascal unit
#include <spEffBmp.hpp>	// Pascal unit
#include <SPUtils.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
#include <SkinMenus.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
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

namespace Dynamicskinform
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TspBorderIcon { biSystemMenu, biMinimize, biMaximize, biRollUp, biMinimizeToTray };
#pragma option pop

typedef Set<TspBorderIcon, biSystemMenu, biMinimizeToTray>  TspBorderIcons;

typedef void __fastcall (__closure *TTrackBarChangeValueEvent)(AnsiString IDName, int Value);

typedef void __fastcall (__closure *TFrameRegulatorChangeValueEvent)(AnsiString IDName, int Value);

#pragma option push -b-
enum TSwitchState { swsOn, swsOff };
#pragma option pop

typedef void __fastcall (__closure *TSwitchChangeStateEvent)(AnsiString IDName, TSwitchState State);

typedef void __fastcall (__closure *TPaintEvent)(AnsiString IDName, Graphics::TCanvas* Canvas, const Types::TRect &ObjectRect);

typedef void __fastcall (__closure *TspCaptionPaintEvent)(Graphics::TCanvas* Cnvs, const Types::TRect &R, bool AActive);

typedef void __fastcall (__closure *TMouseEnterEvent)(AnsiString IDName);

typedef void __fastcall (__closure *TMouseLeaveEvent)(AnsiString IDName);

typedef void __fastcall (__closure *TMainMenuItemClick)(AnsiString IDName);

typedef void __fastcall (__closure *TspMouseUpEvent)(AnsiString IDName, int X, int Y, const Types::TRect &ObjectRect, Controls::TMouseButton Button);

typedef void __fastcall (__closure *TMouseDownEvent)(AnsiString IDName, int X, int Y, const Types::TRect &ObjectRect, Controls::TMouseButton Button);

typedef void __fastcall (__closure *TMouseMoveEvent)(AnsiString IDName, int X, int Y, const Types::TRect &ObjectRect);

typedef void __fastcall (__closure *TChangeClientRectEvent)(const Types::TRect &NewClientRect);

typedef void __fastcall (__closure *TspActivateCustomObjectEvent)(AnsiString IDName, bool &ObjectVisible);

class DELPHICLASS TspSkinComponent;
class PASCALIMPLEMENTATION TspSkinComponent : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	Skindata::TspSkinData* FSkinData;
	virtual void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinComponent(Classes::TComponent* AOwner);
	virtual void __fastcall BeforeChangeSkinData(void);
	virtual void __fastcall ChangeSkinData(void);
	
__published:
	__property Skindata::TspSkinData* SkinData = {read=FSkinData, write=SetSkinData};
public:
	#pragma option push -w-inl
	/* TComponent.Destroy */ inline __fastcall virtual ~TspSkinComponent(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspActiveSkinObject;
class DELPHICLASS TspDynamicSkinForm;
#pragma option push -b-
enum TspPositionInMonitor { sppDefault, sppScreenCenter, sppDesktopCenter };
#pragma option pop

class DELPHICLASS TspSkinMainMenuBar;
typedef void __fastcall (__closure *TspItemEnterEvent)(Menus::TMenuItem* MenuItem);

typedef void __fastcall (__closure *TspItemLeaveEvent)(Menus::TMenuItem* MenuItem);

class DELPHICLASS TspMenuBarObject;
class PASCALIMPLEMENTATION TspSkinMainMenuBar : public Skinctrls::TspSkinControl 
{
	typedef Skinctrls::TspSkinControl inherited;
	
protected:
	bool FUseSkinFont;
	TspItemEnterEvent FOnItemMouseEnter;
	TspItemLeaveEvent FOnItemMouseLeave;
	bool FScrollMenu;
	Graphics::TFont* FDefItemFont;
	bool FSkinSupport;
	int ButtonsCount;
	bool FMDIChildMax;
	TMainMenuItemClick FOnMainMenuItemClick;
	bool FPopupToUp;
	bool MenuActive;
	bool Scroll;
	bool MarkerActive;
	TspDynamicSkinForm* DSF;
	Menus::TMainMenu* FMainMenu;
	Extctrls::TTimer* MorphTimer;
	Extctrls::TTimer* MouseTimer;
	Extctrls::TTimer* AnimateTimer;
	int ActiveObject;
	int OldActiveObject;
	int MouseCaptureObject;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	#pragma pack(push, 1)
	Types::TRect NewItemsRect;
	#pragma pack(pop)
	
	int FDefaultWidth;
	int FDefaultHeight;
	Menus::TMainMenu* FMergeMenu;
	void __fastcall TestAnimate(System::TObject* Sender);
	void __fastcall SetDefaultWidth(int Value);
	void __fastcall SetDefaultHeight(int Value);
	void __fastcall SetDefItemFont(Graphics::TFont* Value);
	void __fastcall CloseSysMenu(void);
	void __fastcall AddButtons(void);
	void __fastcall DeleteButtons(void);
	void __fastcall CheckButtons(TspBorderIcons BI);
	void __fastcall TrackScrollMenu(void);
	void __fastcall CalcRects(void);
	void __fastcall SetMainMenu(Menus::TMainMenu* Value);
	void __fastcall TestMouse(System::TObject* Sender);
	void __fastcall TestMorph(System::TObject* Sender);
	void __fastcall PaintMenuBar(Graphics::TCanvas* Cnvs);
	HIDESBASE MESSAGE void __fastcall WMMOVE(Messages::TWMMove &Msg);
	HIDESBASE MESSAGE void __fastcall WMCHECKPARENTBG(Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall WMCloseSkinMenu(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSize(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	void __fastcall TestActive(int X, int Y);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	void __fastcall ClearObjects(void);
	void __fastcall DrawSkinObject(TspMenuBarObject* AObject);
	void __fastcall MenuEnter(void);
	void __fastcall MenuExit(void);
	void __fastcall MenuClose(void);
	bool __fastcall CheckReturnKey(void);
	void __fastcall NextMainMenuItem(void);
	void __fastcall PriorMainMenuItem(void);
	bool __fastcall FindHotKeyItem(int CharCode);
	Types::TRect __fastcall GetMarkerRect();
	void __fastcall DrawMarker(Graphics::TCanvas* Cnvs);
	void __fastcall MDIChildMaximize(void);
	void __fastcall MDIChildRestore(void);
	
public:
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ItemsRect;
	#pragma pack(pop)
	
	AnsiString MenuBarItem;
	AnsiString MaxButton;
	AnsiString MinButton;
	AnsiString SysMenuButton;
	AnsiString CloseButton;
	int TrackMarkColor;
	int TrackMarkActiveColor;
	Graphics::TBitmap* Picture;
	bool StretchEffect;
	bool ItemTransparent;
	Classes::TList* ObjectList;
	bool ChildMenuIn;
	__fastcall virtual TspSkinMainMenuBar(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinMainMenuBar(void);
	Menus::TMainMenu* __fastcall GetChildMainMenu(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall Paint(void);
	void __fastcall CreateMenu(void);
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall BeforeChangeSkinData(void);
	virtual void __fastcall GetSkinData(void);
	void __fastcall UpDateItems(void);
	void __fastcall UpDateEnabledItems(void);
	void __fastcall Merge(Menus::TMainMenu* Menu);
	void __fastcall UnMerge(void);
	
__published:
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property bool ScrollMenu = {read=FScrollMenu, write=FScrollMenu, nodefault};
	__property Graphics::TFont* DefItemFont = {read=FDefItemFont, write=SetDefItemFont};
	__property int DefaultWidth = {read=FDefaultWidth, write=SetDefaultWidth, nodefault};
	__property int DefaultHeight = {read=FDefaultHeight, write=SetDefaultHeight, nodefault};
	__property bool PopupToUp = {read=FPopupToUp, write=FPopupToUp, nodefault};
	__property TspDynamicSkinForm* DynamicSkinForm = {read=DSF, write=DSF};
	__property Menus::TMainMenu* MainMenu = {read=FMainMenu, write=SetMainMenu};
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Visible  = {default=1};
	__property Enabled  = {default=1};
	__property TMainMenuItemClick OnMainMenuItemClick = {read=FOnMainMenuItemClick, write=FOnMainMenuItemClick};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property TspItemEnterEvent OnItemMouseEnter = {read=FOnItemMouseEnter, write=FOnItemMouseEnter};
	__property TspItemLeaveEvent OnItemMouseLeave = {read=FOnItemMouseLeave, write=FOnItemMouseLeave};
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnClick ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinMainMenuBar(HWND ParentWindow) : Skinctrls::TspSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMDITabsBar;
#pragma option push -b-
enum TspSkinMDITabKind { sptkTab, sptkButton };
#pragma option pop

class DELPHICLASS TspMDITab;
typedef void __fastcall (__closure *TspMDITabMouseEnterEvent)(TspMDITab* MDITab);

typedef void __fastcall (__closure *TspMDITabMouseLeaveEvent)(TspMDITab* MDITab);

typedef void __fastcall (__closure *TspMDITabMouseUpEvent)(Controls::TMouseButton Button, Classes::TShiftState Shift, TspMDITab* MDITab);

typedef void __fastcall (__closure *TspMDITabMouseDownEvent)(Controls::TMouseButton Button, Classes::TShiftState Shift, TspMDITab* MDITab);

class PASCALIMPLEMENTATION TspSkinMDITabsBar : public Skinctrls::TspSkinControl 
{
	typedef Skinctrls::TspSkinControl inherited;
	
private:
	int FBottomOffset;
	bool FShowCloseButtons;
	int FMinTabWidth;
	TspSkinMDITabKind FTabKind;
	bool FSupportChildMenus;
	bool IsDrag;
	int DX;
	int TabDX;
	bool FDown;
	int DragIndex;
	TspMDITabMouseEnterEvent FOnTabMouseEnter;
	TspMDITabMouseLeaveEvent FOnTabMouseLeave;
	TspMDITabMouseUpEvent FOnTabMouseUp;
	TspMDITabMouseDownEvent FOnTabMouseDown;
	int FDefaultTabWidth;
	int FDefaultHeight;
	Graphics::TFont* FDefaultFont;
	int ActiveTabIndex;
	int OldTabIndex;
	bool FMoveTabs;
	bool FUseSkinSize;
	bool FUseSkinFont;
	TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinMenuSpeedButton* FListButton;
	Skinctrls::TspSkinMenuSpeedButton* FHideListButton;
	Skinmenus::TspSkinPopupMenu* FListMenu;
	Skinmenus::TspSkinPopupMenu* FHideListMenu;
	Skinboxctrls::TspSkinUpDown* FUpDown;
	int FInVisibleCount;
	void __fastcall ShowListButton(void);
	void __fastcall HideListButton(void);
	void __fastcall UpdateListMenu(void);
	void __fastcall OnShowListMenu(System::TObject* Sender);
	void __fastcall ShowHideListButton(void);
	void __fastcall HideHideListButton(void);
	void __fastcall UpdateHideListMenu(void);
	void __fastcall OnShowHideListMenu(System::TObject* Sender);
	void __fastcall SetDefaultHeight(int Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall CalcObjectRects(void);
	void __fastcall TestActive(int X, int Y);
	void __fastcall CheckActive(void);
	void __fastcall SetTabKind(TspSkinMDITabKind Value);
	void __fastcall MDIItemClick(System::TObject* Sender);
	void __fastcall HideMDIItemClick(System::TObject* Sender);
	
protected:
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	void __fastcall ClearObjects(void);
	virtual void __fastcall GetSkinData(void);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	int __fastcall GetMoveIndex(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	HIDESBASE MESSAGE void __fastcall WMCHECKPARENTBG(Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall WMMOVE(Messages::TWMMove &Msg);
	void __fastcall DoClose(TspMDITab* Tab);
	virtual void __fastcall AdjustClientRect(Types::TRect &Rect);
	
public:
	int FCloseSize;
	Classes::TList* ObjectList;
	Graphics::TBitmap* Picture;
	#pragma pack(push, 1)
	Types::TRect TabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MouseInTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TabsBGRect;
	#pragma pack(pop)
	
	int TabLeftOffset;
	int TabRightOffset;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor MouseInFontColor;
	AnsiString UpDown;
	bool TabStretchEffect;
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
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	bool StretchEffect;
	Sputils::TspStretchType StretchType;
	int FActiveTabOffset;
	__fastcall virtual TspSkinMDITabsBar(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinMDITabsBar(void);
	TspMDITab* __fastcall GetTab(int X, int Y);
	int __fastcall GetTabIndex(int X, int Y);
	void __fastcall AddTab(Forms::TCustomForm* Child);
	void __fastcall DeleteTab(Forms::TCustomForm* Child);
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall Paint(void);
	int __fastcall GetCloseSize(void);
	
__published:
	__property bool ShowCloseButtons = {read=FShowCloseButtons, write=FShowCloseButtons, nodefault};
	__property TspSkinMDITabKind TabKind = {read=FTabKind, write=SetTabKind, nodefault};
	__property TspDynamicSkinForm* DynamicSkinForm = {read=DSF, write=DSF};
	__property bool SupportChildMenus = {read=FSupportChildMenus, write=FSupportChildMenus, nodefault};
	__property bool UseSkinSize = {read=FUseSkinSize, write=FUseSkinSize, nodefault};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property bool MoveTabs = {read=FMoveTabs, write=FMoveTabs, nodefault};
	__property int DefaultHeight = {read=FDefaultHeight, write=SetDefaultHeight, nodefault};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property int DefaultTabWidth = {read=FDefaultTabWidth, write=FDefaultTabWidth, nodefault};
	__property int MinTabWidth = {read=FMinTabWidth, write=FMinTabWidth, nodefault};
	__property Align  = {default=0};
	__property PopupMenu ;
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property BiDiMode ;
	__property Enabled  = {default=1};
	__property ParentShowHint  = {default=1};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property TspMDITabMouseEnterEvent OnTabMouseEnter = {read=FOnTabMouseEnter, write=FOnTabMouseEnter};
	__property TspMDITabMouseLeaveEvent OnTabMouseLeave = {read=FOnTabMouseLeave, write=FOnTabMouseLeave};
	__property TspMDITabMouseUpEvent OnTabMouseUp = {read=FOnTabMouseUp, write=FOnTabMouseUp};
	__property TspMDITabMouseDownEvent OnTabMouseDown = {read=FOnTabMouseDown, write=FOnTabMouseDown};
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
	__property OnContextPopup ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinMDITabsBar(HWND ParentWindow) : Skinctrls::TspSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspDynamicSkinForm : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FDisableSystemMenu;
	bool FInAppHook;
	bool FSkinnableForm;
	bool FIsVistaOS;
	bool FHaveShadow;
	TspCaptionPaintEvent FOnCaptionPaint;
	bool FRollUpBeforeMaximize;
	Forms::TShortCutEvent FOnShortCut;
	bool FStopPainting;
	bool FStartShow;
	TspPositionInMonitor FPositionInMonitor;
	bool HMagnetized;
	bool VMagnetized;
	bool HMagnetized2;
	bool VMagnetized2;
	#pragma pack(push, 1)
	Types::TPoint FOnMouseDownCoord;
	#pragma pack(pop)
	
	bool FMinimizeDefault;
	Skinctrls::TspSkinStatusBar* FStatusBar;
	bool FUseFormCursorInNCArea;
	int FMaxMenuItemsInWindow;
	int FClientWidth;
	int FClientHeight;
	bool FHideCaptionButtons;
	bool FAlwaysShowInTray;
	bool FLogoBitMapTransparent;
	Graphics::TBitmap* FLogoBitMap;
	bool FAlwaysMinimizeToTray;
	Graphics::TIcon* FIcon;
	bool FShowIcon;
	bool ButtonsInLeft;
	bool FMaximizeOnFullScreen;
	Skinhint::TspSkinHint* FSkinHint;
	bool FShowObjectHint;
	bool FUseDefaultObjectHint;
	bool FUseSkinCursors;
	bool FSkinSupport;
	Graphics::TFont* FDefCaptionFont;
	Graphics::TFont* FDefInActiveCaptionFont;
	bool FMDIChildMaximized;
	bool FFormActive;
	Classes::TNotifyEvent FOnMinimizeToTray;
	Classes::TNotifyEvent FOnRestoreFromTray;
	Sptrayicon::TspTrayIcon* FTrayIcon;
	bool FUseDefaultSysMenu;
	Menus::TPopupMenu* FSysMenu;
	Skinmenus::TspSkinPopupMenu* FSysTrayMenu;
	bool FInShortCut;
	TspSkinMainMenuBar* FMainMenuBar;
	TspSkinMDITabsBar* FMDITabsBar;
	bool FFullDrag;
	int FFormWidth;
	int FFormHeight;
	bool FSizeMove;
	bool FSupportNCArea;
	bool FRollUpState;
	bool MaxRollUpState;
	TspBorderIcons FBorderIcons;
	Graphics::TBitmap* RMTop;
	Graphics::TBitmap* RMBottom;
	Graphics::TBitmap* RMLeft;
	Graphics::TBitmap* RMRight;
	Graphics::TColor BlackColor;
	bool MouseIn;
	#pragma pack(push, 1)
	Types::TRect OldBoundsRect;
	#pragma pack(pop)
	
	int OldHeight;
	#pragma pack(push, 1)
	Types::TPoint NewLTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewRTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewLBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewCaptionRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewButtonsRect;
	#pragma pack(pop)
	
	int NewButtonsOffset;
	bool NewButtonsInLeft;
	#pragma pack(push, 1)
	Types::TRect NewMaskRectArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewHitTestLTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewHitTestRTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewHitTestLBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint NewHitTestRBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewDefCaptionRect;
	#pragma pack(pop)
	
	bool FSizeable;
	int FMinHeight;
	int FMinWidth;
	int FMaxHeight;
	int FMaxWidth;
	Classes::TWndMethod OldWindowProc;
	void *FClientInstance;
	void *FPrevClientProc;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FMSD;
	Menus::TMainMenu* FMainMenu;
	Menus::TPopupMenu* FSystemMenu;
	bool FDraggAble;
	bool FIsDragging;
	int FOldX;
	int FOldY;
	Classes::TNotifyEvent FOnChangeSkinData;
	Classes::TNotifyEvent FOnActivate;
	Classes::TNotifyEvent FOnDeActivate;
	Classes::TNotifyEvent FOnChangeRollUpState;
	bool FInChangeSkinData;
	Forms::TWindowState FWindowState;
	Byte FMagneticSize;
	bool FMenusAlphaBlend;
	Byte FMenusAlphaBlendValue;
	bool FMenusAlphaBlendAnimation;
	bool FAlphaBlend;
	bool FAlphaBlendAnimation;
	Byte FAlphaBlendValue;
	Classes::TList* VisibleControls;
	Forms::TMessageEvent OldAppMessage;
	TspActivateCustomObjectEvent FOnActivateCustomObject;
	Classes::TNotifyEvent FOnMinimize;
	Classes::TNotifyEvent FOnRestore;
	Classes::TNotifyEvent FOnMaximize;
	void __fastcall CancelMessageToControls(void);
	void __fastcall SetMaxMenuItemsInWindow(int Value);
	void __fastcall CheckMDIMainMenu(void);
	void __fastcall CheckMDIBar(void);
	void __fastcall SetLogoBitMap(Graphics::TBitmap* Value);
	bool __fastcall GetUseSkinFontInMenu(void);
	void __fastcall SetUseSkinFontInMenu(bool Value);
	void __fastcall SetShowIcon(bool Value);
	void __fastcall GetIconSize(int &X, int &Y);
	void __fastcall GetIcon(void);
	void __fastcall DrawFormIcon(Graphics::TCanvas* Cnvs, int X, int Y);
	void __fastcall SetMenusAlphaBlend(bool Value);
	void __fastcall SetMenusAlphaBlendAnimation(bool Value);
	void __fastcall SetMenusAlphaBlendValue(Byte Value);
	Types::TRect __fastcall GetDefCaptionRect();
	int __fastcall GetDefCaptionHeight(void);
	int __fastcall GetDefButtonSize(void);
	void __fastcall SetDefaultMenuItemHeight(int Value);
	int __fastcall GetDefaultMenuItemHeight(void);
	void __fastcall SetDefaultMenuItemFont(Graphics::TFont* Value);
	Graphics::TFont* __fastcall GetDefaultMenuItemFont(void);
	void __fastcall SetDefCaptionFont(Graphics::TFont* Value);
	void __fastcall SetDefInActiveCaptionFont(Graphics::TFont* Value);
	void __fastcall SetBorderIcons(TspBorderIcons Value);
	void __fastcall NewAppMessage(tagMSG &Msg, bool &Handled);
	void __fastcall HookApp(void);
	void __fastcall UnHookApp(void);
	Forms::TForm* __fastcall GetMaximizeMDIChild(void);
	bool __fastcall IsMDIChildMaximized(void);
	void __fastcall ResizeMDIChilds(void);
	Types::TRect __fastcall GetMDIWorkArea();
	void __fastcall UpDateForm(void);
	void __fastcall FormClientWindowProcHook(Messages::TMessage &Message);
	void __fastcall TSM_Restore(System::TObject* Sender);
	void __fastcall TSM_Close(System::TObject* Sender);
	void __fastcall SM_Restore(System::TObject* Sender);
	void __fastcall SM_Max(System::TObject* Sender);
	void __fastcall SM_Min(System::TObject* Sender);
	void __fastcall SM_RollUp(System::TObject* Sender);
	void __fastcall SM_Close(System::TObject* Sender);
	void __fastcall SM_MinToTray(System::TObject* Sender);
	void __fastcall TrayIconDBLCLK(System::TObject* Sender);
	void __fastcall TrackSystemMenu(int X, int Y);
	void __fastcall TrackSystemMenu2(const Types::TRect &R);
	void __fastcall UpDateActiveObjects(void);
	void __fastcall CreateSysMenu(void);
	void __fastcall CreateUserSysMenu(void);
	void __fastcall CreateSysTrayMenu(void);
	Menus::TMenuItem* __fastcall GetSystemMenu(void);
	void __fastcall CalcRects(void);
	void __fastcall FormShortCut(Messages::TWMKey &Msg, bool &Handled);
	void __fastcall ChangeSkinData(void);
	void __fastcall SetRollUpFormRegion(void);
	void __fastcall CreateRollUpForm(void);
	void __fastcall CreateRollUpForm2(void);
	void __fastcall RestoreRollUpForm(void);
	void __fastcall RestoreRollUpForm2(void);
	void __fastcall SetRollUpState(bool Value);
	void __fastcall SetTrayIcon(Sptrayicon::TspTrayIcon* Value);
	void __fastcall BeforeUpDateSkinControls(int AFSD, Controls::TWinControl* WC);
	void __fastcall UpDateSkinControls(int AFSD, Controls::TWinControl* WC);
	void __fastcall BeforeUpDateSkinComponents(int AFSD);
	void __fastcall UpDateSkinComponents(int AFSD);
	void __fastcall CheckObjects(void);
	void __fastcall CheckObjectsHint(void);
	void __fastcall SetWindowState(Forms::TWindowState Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SetMenusSkinData(Skindata::TspSkinData* Value);
	void __fastcall CheckSize(void);
	void __fastcall NewWndProc(Messages::TMessage &Message);
	int __fastcall NewHitTest(const Types::TPoint &P);
	int __fastcall NewNCHitTest(const Types::TPoint &P);
	int __fastcall NewDefNCHitTest(const Types::TPoint &P);
	void __fastcall CreateNewRegion(bool FCanScale);
	void __fastcall CreateNewForm(bool FCanScale);
	void __fastcall FormChangeActive(bool AUpDate);
	void __fastcall DoMaximize(void);
	void __fastcall DoNormalize(void);
	void __fastcall DoMinimize(void);
	bool __fastcall InForm(const Types::TPoint &P);
	bool __fastcall PtInMask(const Types::TPoint &P);
	bool __fastcall CanScale(void);
	void __fastcall CreateMainMenu(void);
	void __fastcall CheckWindowState(void);
	int __fastcall GetRealHeight(void);
	void __fastcall CheckControlsBackground(void);
	
protected:
	bool InMenu;
	bool InMainMenu;
	HRGN FRgn;
	#pragma pack(push, 1)
	Types::TRect NewMainMenuRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect NewIconRect;
	#pragma pack(pop)
	
	Extctrls::TTimer* MorphTimer;
	Extctrls::TTimer* AnimateTimer;
	Extctrls::TTimer* MouseTimer;
	bool FMagnetic;
	#pragma pack(push, 1)
	Types::TRect FSizeGripArea;
	#pragma pack(pop)
	
	Classes::TNotifyEvent FOnSkinMenuOpen;
	Classes::TNotifyEvent FOnSkinMenuClose;
	TChangeClientRectEvent FOnChangeClientRect;
	Classes::TNotifyEvent FOnMainMenuEnter;
	Classes::TNotifyEvent FOnMainMenuExit;
	TMouseEnterEvent FOnMouseEnterEvent;
	TMouseLeaveEvent FOnMouseLeaveEvent;
	TspMouseUpEvent FOnMouseUpEvent;
	TMouseDownEvent FOnMouseDownEvent;
	TMouseMoveEvent FOnMouseMoveEvent;
	TPaintEvent FOnPaintEvent;
	TSwitchChangeStateEvent FOnSwitchChangeStateEvent;
	TTrackBarChangeValueEvent FOnTrackBarChangeValueEvent;
	TFrameRegulatorChangeValueEvent FOnFrameRegulatorChangeValueEvent;
	int ActiveObject;
	int OldActiveObject;
	int MouseCaptureObject;
	Forms::TWindowState OldWindowState;
	void __fastcall LoadBorderIcons(void);
	void __fastcall PopupSystemMenu(void);
	void __fastcall DrawLogoBitMap(Graphics::TCanvas* C);
	void __fastcall CorrectCaptionText(Graphics::TCanvas* C, WideString &S, int W);
	void __fastcall CheckMenuVisible(unsigned &Msg);
	void __fastcall FormKeyDown(const Messages::TMessage &Message);
	bool __fastcall CanNCSupport(void);
	bool __fastcall GetFullDragg(void);
	Types::TPoint __fastcall GetMinimizeCoord();
	bool __fastcall CanObjectTest(bool ARollUp);
	void __fastcall PointToNCPoint(Types::TPoint &P);
	void __fastcall ActivateMenu(void);
	bool __fastcall CheckReturnKey(void);
	void __fastcall NextMainMenuItem(void);
	void __fastcall PriorMainMenuItem(void);
	bool __fastcall CanNextMainMenuItem(void);
	bool __fastcall CanPriorMainMenuItem(void);
	bool __fastcall FindHotKeyItem(int CharCode);
	void __fastcall SetMainMenu(Menus::TMainMenu* Value);
	void __fastcall StartDragg(int X, int Y);
	void __fastcall EndDragg(void);
	void __fastcall DoMagnetic(int &L, int &T, int W, int H);
	void __fastcall TestCursors(void);
	void __fastcall TestMouse(System::TObject* Sender);
	void __fastcall TestMorph(System::TObject* Sender);
	void __fastcall TestAnimate(System::TObject* Sender);
	void __fastcall TestActive(int X, int Y, bool InFrm);
	void __fastcall MouseDBlClick(void);
	void __fastcall MouseDown(Controls::TMouseButton Button, int X, int Y);
	void __fastcall MouseMove(int X, int Y);
	void __fastcall MouseUp(Controls::TMouseButton Button, int X, int Y);
	void __fastcall CreateRealBitMap(Graphics::TBitmap* DestB, Graphics::TBitmap* SourceB);
	Types::TRect __fastcall CalcRealObjectRect(const Types::TRect &R);
	void __fastcall CalcAllRealObjectRect(void);
	void __fastcall ControlsToAreas(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall LoadObjects(void);
	void __fastcall LoadDefObjects(void);
	void __fastcall SwitchChangeStateEvent(AnsiString IDName, TSwitchState State);
	void __fastcall TrackBarChangeValueEvent(AnsiString IDName, int Value);
	void __fastcall FrameRegulatorChangeValueEvent(AnsiString IDName, int Value);
	void __fastcall MouseEnterEvent(AnsiString IDName);
	void __fastcall MouseLeaveEvent(AnsiString IDName);
	void __fastcall MouseUpEvent(AnsiString IDName, int X, int Y, const Types::TRect &ObjectRect, Controls::TMouseButton Button);
	void __fastcall MouseDownEvent(AnsiString IDName, int X, int Y, const Types::TRect &ObjectRect, Controls::TMouseButton Button);
	void __fastcall MouseMoveEvent(AnsiString IDName, int X, int Y, const Types::TRect &ObjectRect);
	void __fastcall PaintEvent(AnsiString IDName, Graphics::TCanvas* Canvas, const Types::TRect &ObjectRect);
	void __fastcall LinkControlsToAreas(void);
	void __fastcall SetDefaultCaptionText(AnsiString AValue);
	void __fastcall SkinMainMenuClose(void);
	void __fastcall SkinMenuClose2(void);
	void __fastcall ArangeMinimizedChilds(void);
	bool __fastcall GetAutoRenderingInActiveImage(void);
	void __fastcall SetAlphaBlendValue(Byte Value);
	void __fastcall SetAlphaBlend(bool Value);
	
public:
	Skinmenus::TspSkinMenu* SkinMenu;
	Forms::TForm* FForm;
	Classes::TList* ObjectList;
	Classes::TList* AreaList;
	bool PreviewMode;
	void __fastcall SetSkinnableForm(bool Value);
	bool __fastcall GetSkinnableForm(void);
	void __fastcall EnableShadow(bool AShowShadow, bool AHideFormBefore);
	void __fastcall ApplyPositionInMonitor(void);
	Types::TPoint __fastcall GetPositionInMonitor(int AX, int AY, int AW, int AH);
	Types::TRect __fastcall GetAreaRect(AnsiString AIDName);
	AnsiString __fastcall GetProductVersion();
	void __fastcall DoPopupMenu(Menus::TPopupMenu* Menu, int X, int Y);
	void __fastcall AddChildToMenu(Forms::TCustomForm* Child);
	void __fastcall AddChildToBar(Forms::TCustomForm* Child);
	void __fastcall DeleteChildFromMenu(Forms::TCustomForm* Child);
	void __fastcall DeleteChildFromBar(Forms::TCustomForm* Child);
	void __fastcall RefreshMDIBarTab(Forms::TCustomForm* Child);
	void __fastcall MDIItemClick(System::TObject* Sender);
	void __fastcall UpDateChildCaptionInMenu(Forms::TCustomForm* Child);
	void __fastcall UpDateChildActiveInMenu(void);
	int __fastcall GetMinWidth(void);
	int __fastcall GetMinHeight(void);
	int __fastcall GetMaxWidth(void);
	int __fastcall GetMaxHeight(void);
	void __fastcall MinimizeAll(void);
	void __fastcall MaximizeAll(void);
	void __fastcall RestoreAll(void);
	void __fastcall Tile(void);
	void __fastcall Cascade(void);
	void __fastcall CloseAll(void);
	bool __fastcall GetFormActive(void);
	void __fastcall MinimizeToTray(void);
	void __fastcall RestoreFromTray(void);
	void __fastcall SkinMenuOpen(void);
	void __fastcall SkinMenuClose(void);
	void __fastcall DrawSkinObject(TspActiveSkinObject* AObject);
	void __fastcall SetFormStyle(Forms::TFormStyle FS);
	void __fastcall SetFormBorderStyle(Forms::TFormBorderStyle BS);
	void __fastcall LinkControlToArea(AnsiString AreaName, Controls::TControl* Control);
	void __fastcall UnLinkControlFromArea(Controls::TControl* Control);
	void __fastcall UpdateMainMenu(bool ARedraw);
	void __fastcall PopupSkinMenu(Menus::TMenu* Menu, const Types::TPoint &P);
	void __fastcall PopupSkinMenu1(Menus::TMenu* Menu, const Types::TRect &R, bool PopupUp);
	void __fastcall ClearObjects(void);
	int __fastcall GetIndex(AnsiString AIDName);
	__fastcall virtual TspDynamicSkinForm(Classes::TComponent* AOwner);
	__fastcall virtual ~TspDynamicSkinForm(void);
	void __fastcall Paint(HDC DC);
	void __fastcall PaintNCSkin(HDC ADC, bool AUseExternalDC);
	void __fastcall PaintBG(HDC DC);
	void __fastcall PaintBG2(HDC DC);
	void __fastcall PaintBG3(HDC DC);
	void __fastcall PaintNCDefault(HDC ADC, bool AUseExternalDC);
	void __fastcall PaintBGDefault(HDC DC);
	void __fastcall PaintMDIBGDefault(HDC DC);
	void __fastcall CalcDefRects(void);
	void __fastcall SetSupportNCArea(bool Value);
	void __fastcall SetEnabled(AnsiString AIDName, bool Value);
	void __fastcall CaptionSetText(AnsiString AIDName, AnsiString AText);
	void __fastcall AnimateStart(AnsiString AIDName);
	void __fastcall AnimateStop(AnsiString AIDName);
	void __fastcall BitLabelSetText(AnsiString AIDName, AnsiString AValue);
	void __fastcall GaugeSetValue(AnsiString AIDName, int AValue);
	void __fastcall FrameGaugeSetValue(AnsiString AIDName, int AValue);
	void __fastcall ButtonSetDown(AnsiString AIDName, bool ADown);
	bool __fastcall ButtonGetDown(AnsiString AIDName);
	void __fastcall SwitchSetState(AnsiString AIDName, TSwitchState AState);
	TSwitchState __fastcall SwitchGetState(AnsiString AIDName);
	int __fastcall TrackBarGetValue(AnsiString AIDName);
	void __fastcall TrackBarSetValue(AnsiString AIDName, int AValue);
	int __fastcall FrameRegulatorGetValue(AnsiString AIDName);
	void __fastcall FrameRegulatorSetValue(AnsiString AIDName, int AValue);
	void __fastcall LabelSetText(AnsiString AIDName, AnsiString ATextValue);
	void __fastcall UserObjectDraw(AnsiString AIDName);
	void __fastcall LinkMenu(AnsiString AIDName, Menus::TMenu* AMenu, bool APopupUp);
	__property bool RollUpState = {read=FRollUpState, write=SetRollUpState, nodefault};
	__property Forms::TWindowState WindowState = {read=FWindowState, write=SetWindowState, nodefault};
	__property int RealHeight = {read=GetRealHeight, write=OldHeight, nodefault};
	__property bool MinimizeDefault = {read=FMinimizeDefault, write=FMinimizeDefault, nodefault};
	__property bool SkinnableForm = {read=GetSkinnableForm, nodefault};
	
__published:
	__property bool DisableSystemMenu = {read=FDisableSystemMenu, write=FDisableSystemMenu, nodefault};
	__property TspPositionInMonitor PositionInMonitor = {read=FPositionInMonitor, write=FPositionInMonitor, nodefault};
	__property Skinctrls::TspSkinStatusBar* StatusBar = {read=FStatusBar, write=FStatusBar};
	__property bool UseFormCursorInNCArea = {read=FUseFormCursorInNCArea, write=FUseFormCursorInNCArea, nodefault};
	__property int MaxMenuItemsInWindow = {read=FMaxMenuItemsInWindow, write=SetMaxMenuItemsInWindow, nodefault};
	__property int ClientWidth = {read=FClientWidth, write=FClientWidth, nodefault};
	__property int ClientHeight = {read=FClientHeight, write=FClientHeight, nodefault};
	__property bool HideCaptionButtons = {read=FHideCaptionButtons, write=FHideCaptionButtons, nodefault};
	__property bool AlwaysShowInTray = {read=FAlwaysShowInTray, write=FAlwaysShowInTray, nodefault};
	__property Graphics::TBitmap* LogoBitMap = {read=FLogoBitMap, write=SetLogoBitMap};
	__property bool LogoBitMapTransparent = {read=FLogoBitMapTransparent, write=FLogoBitMapTransparent, nodefault};
	__property bool AlwaysMinimizeToTray = {read=FAlwaysMinimizeToTray, write=FAlwaysMinimizeToTray, nodefault};
	__property bool UseSkinFontInMenu = {read=GetUseSkinFontInMenu, write=SetUseSkinFontInMenu, nodefault};
	__property bool ShowIcon = {read=FShowIcon, write=SetShowIcon, nodefault};
	__property bool MaximizeOnFullScreen = {read=FMaximizeOnFullScreen, write=FMaximizeOnFullScreen, nodefault};
	__property Skinhint::TspSkinHint* SkinHint = {read=FSkinHint, write=FSkinHint};
	__property bool ShowObjectHint = {read=FShowObjectHint, write=FShowObjectHint, nodefault};
	__property bool UseDefaultObjectHint = {read=FUseDefaultObjectHint, write=FUseDefaultObjectHint, nodefault};
	__property bool UseSkinCursors = {read=FUseSkinCursors, write=FUseSkinCursors, nodefault};
	__property Graphics::TFont* DefCaptionFont = {read=FDefCaptionFont, write=SetDefCaptionFont};
	__property Graphics::TFont* DefInActiveCaptionFont = {read=FDefInActiveCaptionFont, write=SetDefInActiveCaptionFont};
	__property int DefMenuItemHeight = {read=GetDefaultMenuItemHeight, write=SetDefaultMenuItemHeight, nodefault};
	__property Graphics::TFont* DefMenuItemFont = {read=GetDefaultMenuItemFont, write=SetDefaultMenuItemFont};
	__property Sptrayicon::TspTrayIcon* TrayIcon = {read=FTrayIcon, write=SetTrayIcon};
	__property bool UseDefaultSysMenu = {read=FUseDefaultSysMenu, write=FUseDefaultSysMenu, nodefault};
	__property TspSkinMainMenuBar* MainMenuBar = {read=FMainMenuBar, write=FMainMenuBar};
	__property TspSkinMDITabsBar* MDITabsBar = {read=FMDITabsBar, write=FMDITabsBar};
	__property bool SupportNCArea = {read=FSupportNCArea, write=SetSupportNCArea, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=SetAlphaBlendValue, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=SetAlphaBlend, nodefault};
	__property bool MenusAlphaBlend = {read=FMenusAlphaBlend, write=SetMenusAlphaBlend, nodefault};
	__property bool MenusAlphaBlendAnimation = {read=FMenusAlphaBlendAnimation, write=SetMenusAlphaBlendAnimation, nodefault};
	__property Byte MenusAlphaBlendValue = {read=FMenusAlphaBlendValue, write=SetMenusAlphaBlendValue, nodefault};
	__property Menus::TMainMenu* MainMenu = {read=FMainMenu, write=SetMainMenu};
	__property Menus::TPopupMenu* SystemMenu = {read=FSystemMenu, write=FSystemMenu};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property Skindata::TspSkinData* MenusSkinData = {read=FMSD, write=SetMenusSkinData};
	__property int MinHeight = {read=FMinHeight, write=FMinHeight, nodefault};
	__property int MinWidth = {read=FMinWidth, write=FMinWidth, nodefault};
	__property int MaxHeight = {read=FMaxHeight, write=FMaxHeight, nodefault};
	__property int MaxWidth = {read=FMaxWidth, write=FMaxWidth, nodefault};
	__property bool Sizeable = {read=FSizeable, write=FSizeable, nodefault};
	__property bool DraggAble = {read=FDraggAble, write=FDraggAble, nodefault};
	__property bool Magnetic = {read=FMagnetic, write=FMagnetic, nodefault};
	__property Byte MagneticSize = {read=FMagneticSize, write=FMagneticSize, nodefault};
	__property TspBorderIcons BorderIcons = {read=FBorderIcons, write=SetBorderIcons, nodefault};
	__property TspCaptionPaintEvent OnCaptionPaint = {read=FOnCaptionPaint, write=FOnCaptionPaint};
	__property TChangeClientRectEvent OnChangeClientRect = {read=FOnChangeClientRect, write=FOnChangeClientRect};
	__property Classes::TNotifyEvent OnChangeSkinData = {read=FOnChangeSkinData, write=FOnChangeSkinData};
	__property TspMouseUpEvent OnMouseUpEvent = {read=FOnMouseUpEvent, write=FOnMouseUpEvent};
	__property TMouseDownEvent OnMouseDownEvent = {read=FOnMouseDownEvent, write=FOnMouseDownEvent};
	__property TMouseMoveEvent OnMouseMoveEvent = {read=FOnMouseMoveEvent, write=FOnMouseMoveEvent};
	__property TMouseEnterEvent OnMouseEnterEvent = {read=FOnMouseEnterEvent, write=FOnMouseEnterEvent};
	__property TMouseLeaveEvent OnMouseLeaveEvent = {read=FOnMouseLeaveEvent, write=FOnMouseLeaveEvent};
	__property TPaintEvent OnPaintEvent = {read=FOnPaintEvent, write=FOnPaintEvent};
	__property TSwitchChangeStateEvent OnSwitchChangeStateEvent = {read=FOnSwitchChangeStateEvent, write=FOnSwitchChangeStateEvent};
	__property TTrackBarChangeValueEvent OnTrackBarChangeValueEvent = {read=FOnTrackBarChangeValueEvent, write=FOnTrackBarChangeValueEvent};
	__property TFrameRegulatorChangeValueEvent OnFrameRegulatorChangeValueEvent = {read=FOnFrameRegulatorChangeValueEvent, write=FOnFrameRegulatorChangeValueEvent};
	__property Classes::TNotifyEvent OnActivate = {read=FOnActivate, write=FOnActivate};
	__property Classes::TNotifyEvent OnDeActivate = {read=FOnDeActivate, write=FOnDeActivate};
	__property Classes::TNotifyEvent OnSkinMenuOpen = {read=FOnSkinMenuOpen, write=FOnSkinMenuOpen};
	__property Classes::TNotifyEvent OnSkinMenuClose = {read=FOnSkinMenuClose, write=FOnSkinMenuClose};
	__property Classes::TNotifyEvent OnChangeRollUpState = {read=FOnChangeRollUpState, write=FOnChangeRollUpState};
	__property Classes::TNotifyEvent OnMainMenuEnter = {read=FOnMainMenuEnter, write=FOnMainMenuEnter};
	__property Classes::TNotifyEvent OnMainMenuExit = {read=FOnMainMenuExit, write=FOnMainMenuExit};
	__property Classes::TNotifyEvent OnMinimizeToTray = {read=FOnMinimizeToTray, write=FOnMinimizeToTray};
	__property Classes::TNotifyEvent OnRestoreFromTray = {read=FOnRestoreFromTray, write=FOnRestoreFromTray};
	__property TspActivateCustomObjectEvent OnActivateCustomObject = {read=FOnActivateCustomObject, write=FOnActivateCustomObject};
	__property Classes::TNotifyEvent OnMinimize = {read=FOnMinimize, write=FOnMinimize};
	__property Classes::TNotifyEvent OnRestore = {read=FOnRestore, write=FOnRestore};
	__property Classes::TNotifyEvent OnMaximize = {read=FOnMaximize, write=FOnMaximize};
	__property Forms::TShortCutEvent OnShortCut = {read=FOnShortCut, write=FOnShortCut};
};


class PASCALIMPLEMENTATION TspActiveSkinObject : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	TspDynamicSkinForm* Parent;
	double FMorphKf;
	bool FMouseIn;
	Graphics::TBitmap* Picture;
	Graphics::TBitmap* ActivePicture;
	void __fastcall SetMorphKf(double Value);
	void __fastcall Redraw(void);
	
public:
	Skindata::TspSkinData* SD;
	AnsiString IDName;
	AnsiString Hint;
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect InActiveSkinRect;
	#pragma pack(pop)
	
	bool Morphing;
	Skindata::TMorphKind MorphKind;
	#pragma pack(push, 1)
	Types::TRect ObjectRect;
	#pragma pack(pop)
	
	bool Active;
	bool Enabled;
	int CursorIndex;
	bool RollUp;
	bool Visible;
	bool SkinRectInAPicture;
	bool __fastcall EnableMorphing(void);
	__fastcall TspActiveSkinObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	virtual void __fastcall DblClick(void);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseUp(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseMove(int X, int Y);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
	virtual bool __fastcall CanMorphing(void);
	void __fastcall DoMorphing(void);
	__property double MorphKf = {read=FMorphKf, write=SetMorphKf};
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspActiveSkinObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspUserObject;
class PASCALIMPLEMENTATION TspUserObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
public:
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
public:
	#pragma option push -w-inl
	/* TspActiveSkinObject.Create */ inline __fastcall TspUserObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData) : TspActiveSkinObject(AParent, AData) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspUserObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFrameObject;
class PASCALIMPLEMENTATION TspSkinFrameObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
protected:
	int FFrame;
	int FrameW;
	int FrameH;
	void __fastcall SetFrame(int Value);
	
public:
	int CountFrames;
	Skindata::TFramesPlacement FramesPlacement;
	__fastcall TspSkinFrameObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	__property int Frame = {read=FFrame, write=SetFrame, nodefault};
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinFrameObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFrameGaugeObject;
class PASCALIMPLEMENTATION TspSkinFrameGaugeObject : public TspSkinFrameObject 
{
	typedef TspSkinFrameObject inherited;
	
protected:
	int FValue;
	int __fastcall CalcFrame(void);
	void __fastcall SetValue(int AValue);
	
public:
	int MinValue;
	int MaxValue;
	__fastcall TspSkinFrameGaugeObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	void __fastcall SimplySetValue(int AValue);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
	__property int Value = {read=FValue, write=SetValue, nodefault};
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinFrameGaugeObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFrameRegulatorObject;
class PASCALIMPLEMENTATION TspSkinFrameRegulatorObject : public TspSkinFrameObject 
{
	typedef TspSkinFrameObject inherited;
	
protected:
	int FPixInc;
	int FValInc;
	bool FDown;
	int StartV;
	int CurV;
	int TempValue;
	int OldCurV;
	int FValue;
	int __fastcall CalcFrame(void);
	void __fastcall SetValue(int AValue);
	void __fastcall CalcValue(void);
	void __fastcall CalcRoundValue(void);
	int __fastcall GetRoundValue(int X, int Y);
	
public:
	int MinValue;
	int MaxValue;
	Skindata::TRegulatorKind Kind;
	__fastcall TspSkinFrameRegulatorObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	void __fastcall SimplySetValue(int AValue);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseUp(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseMove(int X, int Y);
	__property int Value = {read=FValue, write=SetValue, nodefault};
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinFrameRegulatorObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinAnimateObject;
class PASCALIMPLEMENTATION TspSkinAnimateObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
protected:
	bool FMenuTracking;
	int FFrame;
	int FInc;
	int TimerInterval;
	Menus::TMenuItem* MenuItem;
	bool FDown;
	bool FPopupUp;
	void __fastcall SetFrame(int Value);
	void __fastcall DoMax(void);
	void __fastcall DoMin(void);
	void __fastcall DoRollUp(void);
	void __fastcall DoClose(void);
	void __fastcall DoCommand(void);
	void __fastcall DoMinToTray(void);
	void __fastcall TrackMenu(void);
	
public:
	int CountFrames;
	bool Cycle;
	bool ButtonStyle;
	bool Increment;
	Skindata::TStdCommand Command;
	#pragma pack(push, 1)
	Types::TRect DownSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreInActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreDownRect;
	#pragma pack(pop)
	
	void __fastcall ChangeFrame(void);
	void __fastcall Start(void);
	void __fastcall Stop(void);
	__fastcall TspSkinAnimateObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall DblCLick(void);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseUp(int X, int Y, Controls::TMouseButton Button);
	__property int Frame = {read=FFrame, write=SetFrame, nodefault};
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinAnimateObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinGaugeObject;
class PASCALIMPLEMENTATION TspSkinGaugeObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
protected:
	#pragma pack(push, 1)
	Types::TPoint FProgressPos;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint FOldProgressPos;
	#pragma pack(pop)
	
	void __fastcall SetValue(int AValue);
	Types::TPoint __fastcall CalcProgressPos();
	
public:
	int FValue;
	int MinValue;
	int MaxValue;
	Skindata::TGaugeKind Kind;
	void __fastcall SimplySetValue(int AValue);
	__fastcall TspSkinGaugeObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	__property int Value = {read=FValue, write=SetValue, nodefault};
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinGaugeObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinBitLabelObject;
class PASCALIMPLEMENTATION TspSkinBitLabelObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
public:
	AnsiString FTextValue;
	int SymbolWidth;
	int SymbolHeight;
	Classes::TStrings* Symbols;
	bool Transparent;
	Graphics::TColor TransparentColor;
	__fastcall TspSkinBitLabelObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	void __fastcall SetTextValue(AnsiString AValue, bool AUpDate);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinBitLabelObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinLabelObject;
class PASCALIMPLEMENTATION TspSkinLabelObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
public:
	AnsiString FTextValue;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Classes::TAlignment Alignment;
	__fastcall TspSkinLabelObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	void __fastcall SetTextValue(AnsiString AValue, bool AUpDate);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinLabelObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinSwitchObject;
class PASCALIMPLEMENTATION TspSkinSwitchObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
protected:
	TSwitchState FState;
	void __fastcall SetState(TSwitchState Value);
	
public:
	__fastcall TspSkinSwitchObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	__property TSwitchState State = {read=FState, write=SetState, nodefault};
	void __fastcall SimpleSetState(TSwitchState Value);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinSwitchObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinTrackBarObject;
class PASCALIMPLEMENTATION TspSkinTrackBarObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
private:
	#pragma pack(push, 1)
	Types::TPoint FButtonPos;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint FOldButtonPos;
	#pragma pack(pop)
	
	int FValue;
	bool MoveActive;
	#pragma pack(push, 1)
	Types::TPoint FOldMPoint;
	#pragma pack(pop)
	
	Skindata::TTrackKind TrackKind;
	void __fastcall SetButtonPos(const Types::TPoint &AValue);
	void __fastcall SetValue(int AValue);
	int __fastcall CalcValue(const Types::TPoint &APos);
	Types::TPoint __fastcall CalcButtonPos(int AValue);
	__property Types::TPoint ButtonPos = {read=FButtonPos, write=SetButtonPos};
	Types::TRect __fastcall CalcButtonRect(const Types::TPoint &P);
	
public:
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint BeginPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint EndPoint;
	#pragma pack(pop)
	
	int MinValue;
	int MaxValue;
	bool MouseDownChangeValue;
	bool ButtonTransparent;
	Graphics::TColor ButtonTransparentColor;
	__fastcall TspSkinTrackBarObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	__property int Value = {read=FValue, write=SetValue, nodefault};
	void __fastcall SimplySetValue(int AValue);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseUp(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseMove(int X, int Y);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinTrackBarObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinButtonObject;
class PASCALIMPLEMENTATION TspSkinButtonObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
protected:
	bool FDown;
	bool FPopupUp;
	void __fastcall SetDown(bool Value);
	void __fastcall TrackMenu(void);
	
public:
	#pragma pack(push, 1)
	Types::TRect DownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DisableSkinRect;
	#pragma pack(pop)
	
	int GroupIndex;
	Menus::TMenuItem* MenuItem;
	__fastcall TspSkinButtonObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	__property bool Down = {read=FDown, write=SetDown, nodefault};
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseUp(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
	virtual bool __fastcall CanMorphing(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinButtonObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMainMenuItem;
class PASCALIMPLEMENTATION TspSkinMainMenuItem : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
protected:
	#pragma pack(push, 1)
	Types::TRect TempObjectRect;
	#pragma pack(pop)
	
	bool FDown;
	bool OldEnabled;
	bool Visible;
	bool __fastcall SearchDown(void);
	void __fastcall SearchActive(void);
	void __fastcall SetDown(bool Value);
	void __fastcall TrackMenu(void);
	
public:
	Menus::TMenuItem* MenuItem;
	AnsiString FontName;
	int FontHeight;
	Graphics::TFontStyles FontStyle;
	Graphics::TColor UnEnabledFontColor;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor DownFontColor;
	#pragma pack(push, 1)
	Types::TRect TextRct;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownRect;
	#pragma pack(pop)
	
	int LO;
	int RO;
	__fastcall TspSkinMainMenuItem(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseLeave(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinMainMenuItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinStdButtonObject;
class PASCALIMPLEMENTATION TspSkinStdButtonObject : public TspSkinButtonObject 
{
	typedef TspSkinButtonObject inherited;
	
protected:
	void __fastcall DoMax(void);
	void __fastcall DoMin(void);
	void __fastcall DoClose(void);
	void __fastcall DoRollUp(void);
	void __fastcall DoCommand(void);
	void __fastcall DoMinimizeToTray(void);
	
public:
	bool FSkinSupport;
	Skindata::TStdCommand Command;
	#pragma pack(push, 1)
	Types::TRect RestoreRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreInActiveRect;
	#pragma pack(pop)
	
	virtual void __fastcall DblClick(void);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseUp(int X, int Y, Controls::TMouseButton Button);
	__fastcall TspSkinStdButtonObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
	void __fastcall DefaultDraw(Graphics::TCanvas* Cnvs);
	virtual bool __fastcall CanMorphing(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinStdButtonObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinCaptionObject;
class PASCALIMPLEMENTATION TspSkinCaptionObject : public TspActiveSkinObject 
{
	typedef TspActiveSkinObject inherited;
	
protected:
	AnsiString FTextValue;
	void __fastcall SetTextValue(AnsiString Value);
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor ShadowColor;
	Graphics::TColor ActiveShadowColor;
	bool Shadow;
	Classes::TAlignment Alignment;
	#pragma pack(push, 1)
	Types::TRect TextRct;
	#pragma pack(pop)
	
	bool DefaultCaption;
	#pragma pack(push, 1)
	Types::TRect FrameRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveFrameRect;
	#pragma pack(pop)
	
	int FrameLeftOffset;
	int FrameRightOffset;
	#pragma pack(push, 1)
	Types::TRect FrameTextRect;
	#pragma pack(pop)
	
	Graphics::TColor LightColor;
	Graphics::TColor ActiveLightColor;
	bool Light;
	bool StretchEffect;
	int FIncTime;
	#pragma pack(push, 1)
	Types::TRect AnimateSkinRect;
	#pragma pack(pop)
	
	int FrameCount;
	int AnimateInterval;
	int CurrentFrame;
	bool InActiveAnimation;
	bool FullFrame;
	bool __fastcall EnableAnimation(void);
	void __fastcall SimpleSetTextValue(AnsiString Value);
	__fastcall TspSkinCaptionObject(TspDynamicSkinForm* AParent, Skindata::TspDataSkinObject* AData);
	__property AnsiString TextValue = {read=FTextValue, write=SetTextValue};
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseUp(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs, bool UpDate);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinCaptionObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMainMenu;
class PASCALIMPLEMENTATION TspSkinMainMenu : public Menus::TMainMenu 
{
	typedef Menus::TMainMenu inherited;
	
protected:
	TspDynamicSkinForm* DSF;
	Skindata::TspSkinData* FSD;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinMainMenu(Classes::TComponent* AOwner);
	
__published:
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
public:
	#pragma option push -w-inl
	/* TMenu.Destroy */ inline __fastcall virtual ~TspSkinMainMenu(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspMenuBarObject : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	TspSkinMainMenuBar* Parent;
	double FMorphKf;
	bool FMouseIn;
	Graphics::TBitmap* Picture;
	bool FDown;
	void __fastcall SetMorphKf(double Value);
	virtual void __fastcall Redraw(void);
	bool __fastcall EnableMorphing(void);
	
public:
	AnsiString IDName;
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownRect;
	#pragma pack(pop)
	
	bool Morphing;
	Skindata::TMorphKind MorphKind;
	#pragma pack(push, 1)
	Types::TRect ObjectRect;
	#pragma pack(pop)
	
	bool Active;
	bool Enabled;
	bool Visible;
	__fastcall TspMenuBarObject(TspSkinMainMenuBar* AParent, Skindata::TspDataSkinObject* AData);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs);
	virtual void __fastcall DblClick(void);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseUp(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
	virtual bool __fastcall CanMorphing(void);
	void __fastcall DoMorphing(void);
	__property double MorphKf = {read=FMorphKf, write=SetMorphKf};
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspMenuBarObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMainMenuBarButton;
class PASCALIMPLEMENTATION TspSkinMainMenuBarButton : public TspMenuBarObject 
{
	typedef TspMenuBarObject inherited;
	
protected:
	bool FSkinSupport;
	void __fastcall DoCommand(void);
	
public:
	Skindata::TStdCommand Command;
	__fastcall TspSkinMainMenuBarButton(TspSkinMainMenuBar* AParent, Skindata::TspDataSkinObject* AData);
	void __fastcall DefaultDraw(Graphics::TCanvas* Cnvs);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs);
	virtual void __fastcall DblClick(void);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseUp(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseLeave(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinMainMenuBarButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMainMenuBarItem;
class PASCALIMPLEMENTATION TspSkinMainMenuBarItem : public TspMenuBarObject 
{
	typedef TspMenuBarObject inherited;
	
protected:
	bool FSkinSupport;
	#pragma pack(push, 1)
	Types::TRect TempObjectRect;
	#pragma pack(pop)
	
	bool OldEnabled;
	bool Visible;
	bool __fastcall SearchDown(void);
	void __fastcall SearchActive(void);
	void __fastcall SetDown(bool Value);
	void __fastcall TrackMenu(void);
	virtual void __fastcall Redraw(void);
	
public:
	Menus::TMenuItem* MenuItem;
	AnsiString FontName;
	int FontHeight;
	Graphics::TFontStyles FontStyle;
	Graphics::TColor UnEnabledFontColor;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor DownFontColor;
	#pragma pack(push, 1)
	Types::TRect TextRct;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownRect;
	#pragma pack(pop)
	
	int LO;
	int RO;
	bool StretchEffect;
	#pragma pack(push, 1)
	Types::TRect AnimateSkinRect;
	#pragma pack(pop)
	
	int FrameCount;
	int AnimateInterval;
	int CurrentFrame;
	bool InActiveAnimation;
	bool __fastcall EnableAnimation(void);
	__fastcall TspSkinMainMenuBarItem(TspSkinMainMenuBar* AParent, Skindata::TspDataSkinObject* AData);
	void __fastcall DefaultDraw(Graphics::TCanvas* Cnvs);
	virtual void __fastcall Draw(Graphics::TCanvas* Cnvs);
	virtual void __fastcall MouseEnter(void);
	virtual void __fastcall MouseDown(int X, int Y, Controls::TMouseButton Button);
	virtual void __fastcall MouseLeave(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinMainMenuBarItem(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspMDITab : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	TspSkinMDITabsBar* TabsBar;
	
public:
	bool Active;
	bool MouseIn;
	#pragma pack(push, 1)
	Types::TRect ObjectRect;
	#pragma pack(pop)
	
	Forms::TCustomForm* Child;
	bool Visible;
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	bool ButtonMouseIn;
	bool ButtonMouseDown;
	void __fastcall DrawCloseButton(Graphics::TCanvas* Cnvs, const Types::TRect &R);
	__fastcall TspMDITab(TspSkinMDITabsBar* AParentBar, Forms::TCustomForm* AChild);
	void __fastcall Draw(Graphics::TCanvas* Cnvs);
	void __fastcall ResizeDraw(Graphics::TCanvas* Cnvs);
	void __fastcall ButtonDraw(Graphics::TCanvas* Cnvs);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspMDITab(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFrame;
class PASCALIMPLEMENTATION TspSkinFrame : public TspSkinComponent 
{
	typedef TspSkinComponent inherited;
	
private:
	Forms::TFrame* FFrame;
	Classes::TWndMethod OldWindowProc;
	bool FDrawBackground;
	Skindata::TspSkinData* FCtrlsSkinData;
	void __fastcall SetCtrlsSkinData(Skindata::TspSkinData* Value);
	void __fastcall PaintBG(HDC DC);
	void __fastcall NewWndProc(Messages::TMessage &Message);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall CheckControlsBackground(void);
	
public:
	__fastcall virtual TspSkinFrame(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinFrame(void);
	virtual void __fastcall ChangeSkinData(void);
	void __fastcall UpdateSkinCtrls(Controls::TWinControl* WC);
	
__published:
	__property bool DrawBackground = {read=FDrawBackground, write=FDrawBackground, nodefault};
	__property Skindata::TspSkinData* CtrlsSkinData = {read=FCtrlsSkinData, write=SetCtrlsSkinData};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TspDynamicSkinForm* __fastcall GetDynamicSkinFormComponent(Forms::TCustomForm* AForm);
extern PACKAGE TspDynamicSkinForm* __fastcall GetMDIChildDynamicSkinFormComponent(void);
extern PACKAGE TspDynamicSkinForm* __fastcall GetMDIChildDynamicSkinFormComponent2(void);

}	/* namespace Dynamicskinform */
using namespace Dynamicskinform;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DynamicSkinForm
