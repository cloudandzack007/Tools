// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spTrayIcon.pas' rev: 6.00

#ifndef spTrayIconHPP
#define spTrayIconHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SkinMenus.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <ShellAPI.hpp>	// Pascal unit
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

namespace Sptrayicon
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 4)
struct TNotifyIconDataEx
{
	unsigned cbSize;
	HWND Wnd;
	unsigned uID;
	unsigned uFlags;
	unsigned uCallbackMessage;
	HICON hIcon;
	char szTip[128];
	unsigned dwState;
	unsigned dwStateMask;
	char szInfo[256];
	unsigned uTimeout;
	char szInfoTitle[64];
	unsigned dwInfoFlags;
} ;
#pragma pack(pop)

typedef void __fastcall (__closure *TCycleEvent)(System::TObject* Sender, int NextIndex);

#pragma option push -b-
enum TspBalloonHintIcon { spbitNone, spbitInfo, spbitWarning, spbitError };
#pragma option pop

class DELPHICLASS TspTrayIcon;
class PASCALIMPLEMENTATION TspTrayIcon : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FEnabled;
	Graphics::TIcon* FIcon;
	bool FIconVisible;
	AnsiString FHint;
	bool FShowHint;
	Skinmenus::TspSkinPopupMenu* FPopupMenu;
	bool FPopupByLeftButton;
	Classes::TNotifyEvent FOnBalloonHintClick;
	Classes::TNotifyEvent FOnClick;
	Classes::TNotifyEvent FOnDblClick;
	TCycleEvent FOnCycle;
	Controls::TMouseEvent FOnMouseDown;
	Controls::TMouseEvent FOnMouseUp;
	Controls::TMouseMoveEvent FOnMouseMove;
	bool FMinimizedOnStart;
	bool FMinimizeToTray;
	bool FClickStart;
	bool FClickReady;
	Extctrls::TTimer* AnimateTimer;
	Extctrls::TTimer* ClickTimer;
	bool IsDblClick;
	int FIconIndex;
	bool FDesignPreview;
	bool SettingPreview;
	bool SettingMDIForm;
	Controls::TImageList* FIconList;
	bool FCycleIcons;
	unsigned FAnimateTimerInterval;
	void *OldAppProc;
	void *NewAppProc;
	void *OldWndProc;
	void *NewWndProc;
	HWND FWindowHandle;
	void __fastcall SetDesignPreview(bool Value);
	void __fastcall SetCycleIcons(bool Value);
	void __fastcall SetAnimateTimerInterval(unsigned Value);
	void __fastcall TimerCycle(System::TObject* Sender);
	void __fastcall TimerClick(System::TObject* Sender);
	void __fastcall HandleIconMessage(Messages::TMessage &Msg);
	bool __fastcall InitIcon(void);
	void __fastcall SetIcon(Graphics::TIcon* Value);
	void __fastcall SetIconVisible(bool Value);
	void __fastcall SetIconList(Controls::TImageList* Value);
	void __fastcall SetIconIndex(int Value);
	void __fastcall SetHint(AnsiString Value);
	void __fastcall SetShowHint(bool Value);
	void __fastcall PopupAtCursor(void);
	void __fastcall HookApp(void);
	void __fastcall UnhookApp(void);
	void __fastcall HookAppProc(Messages::TMessage &Msg);
	void __fastcall HookForm(void);
	void __fastcall UnhookForm(void);
	void __fastcall HookFormProc(Messages::TMessage &Msg);
	
protected:
	TNotifyIconDataEx IconData;
	virtual void __fastcall Loaded(void);
	virtual bool __fastcall LoadDefaultIcon(void);
	virtual bool __fastcall ShowIcon(void);
	virtual bool __fastcall HideIcon(void);
	virtual bool __fastcall ModifyIcon(void);
	DYNAMIC void __fastcall Click(void);
	DYNAMIC void __fastcall DblClick(void);
	DYNAMIC void __fastcall CycleIcon(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall DoMinimizeToTray(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__property HWND Handle = {read=IconData.Wnd, nodefault};
	__property HWND WindowHandle = {read=FWindowHandle, nodefault};
	__fastcall virtual TspTrayIcon(Classes::TComponent* AOwner);
	__fastcall virtual ~TspTrayIcon(void);
	bool __fastcall Refresh(void);
	bool __fastcall BitmapToIcon(const Graphics::TBitmap* Bitmap, const Graphics::TIcon* Icon, Graphics::TColor MaskColor);
	void __fastcall ShowMainForm(void);
	void __fastcall HideMainForm(void);
	bool __fastcall ShowBalloonHint(AnsiString Title, AnsiString Text, TspBalloonHintIcon IconType);
	bool __fastcall HideBalloonHint(void);
	
__published:
	__property bool DesignPreview = {read=FDesignPreview, write=SetDesignPreview, default=0};
	__property Controls::TImageList* IconList = {read=FIconList, write=SetIconList};
	__property bool CycleIcons = {read=FCycleIcons, write=SetCycleIcons, default=0};
	__property unsigned AnimateTimerInterval = {read=FAnimateTimerInterval, write=SetAnimateTimerInterval, nodefault};
	__property bool Enabled = {read=FEnabled, write=FEnabled, default=1};
	__property AnsiString Hint = {read=FHint, write=SetHint};
	__property bool ShowHint = {read=FShowHint, write=SetShowHint, default=1};
	__property Graphics::TIcon* Icon = {read=FIcon, write=SetIcon, stored=true};
	__property bool IconVisible = {read=FIconVisible, write=SetIconVisible, default=1};
	__property int IconIndex = {read=FIconIndex, write=SetIconIndex, nodefault};
	__property Skinmenus::TspSkinPopupMenu* PopupMenu = {read=FPopupMenu, write=FPopupMenu};
	__property bool PopupByLeftButton = {read=FPopupByLeftButton, write=FPopupByLeftButton, default=0};
	__property bool MinimizedOnStart = {read=FMinimizedOnStart, write=FMinimizedOnStart, default=0};
	__property bool MinimizeToTray = {read=FMinimizeToTray, write=FMinimizeToTray, default=0};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property Classes::TNotifyEvent OnDblClick = {read=FOnDblClick, write=FOnDblClick};
	__property Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
	__property Controls::TMouseMoveEvent OnMouseMove = {read=FOnMouseMove, write=FOnMouseMove};
	__property TCycleEvent OnCycle = {read=FOnCycle, write=FOnCycle};
	__property Classes::TNotifyEvent OnBalloonHintClick = {read=FOnBalloonHintClick, write=FOnBalloonHintClick};
};


//-- var, const, procedure ---------------------------------------------------
static const Word WM_TRAYNOTIFY = 0x800;
static const Shortint IconID = 0x1;
extern PACKAGE unsigned WM_TASKBARCREATED;

}	/* namespace Sptrayicon */
using namespace Sptrayicon;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spTrayIcon
