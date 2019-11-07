// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SkinMenus.pas' rev: 6.00

#ifndef SkinMenusHPP
#define SkinMenusHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SkinHint.hpp>	// Pascal unit
#include <spEffBmp.hpp>	// Pascal unit
#include <SPUtils.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
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

namespace Skinmenus
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TspSkinMenuItem;
class DELPHICLASS TspSkinPopupWindow;
class DELPHICLASS TspSkinMenu;
class PASCALIMPLEMENTATION TspSkinMenu : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	bool FUseSkinFont;
	bool FFirst;
	int FDefaultMenuItemHeight;
	Graphics::TFont* FDefaultMenuItemFont;
	Controls::TControl* PopupCtrl;
	Controls::TControl* DCtrl;
	Forms::TForm* FForm;
	Extctrls::TTimer* WaitTimer;
	TspSkinMenuItem* WItem;
	#pragma pack(push, 1)
	Types::TRect WorkArea;
	#pragma pack(pop)
	
	bool FVisible;
	Skindata::TspSkinData* SkinData;
	Classes::TNotifyEvent FOnMenuClose;
	void __fastcall SetDefaultMenuItemFont(Graphics::TFont* Value);
	Types::TRect __fastcall GetWorkArea();
	int __fastcall GetPWIndex(TspSkinPopupWindow* PW);
	void __fastcall CheckItem(TspSkinPopupWindow* PW, TspSkinMenuItem* MI, bool Down, bool Kb);
	void __fastcall CloseMenu(int EndIndex);
	void __fastcall PopupSub(const Types::TRect &R, Menus::TMenuItem* AItem, int StartIndex, bool PopupByItem, bool PopupUp);
	void __fastcall PopupSub2(const Types::TRect &R, Menus::TMenuItem* AItem, Menus::TMenuItem* AItem2, int StartIndex, bool PopupByItem, bool PopupUp);
	void __fastcall WaitItem(System::TObject* Sender);
	
public:
	Classes::TList* FPopupList;
	bool AlphaBlend;
	Byte AlphaBlendValue;
	bool AlphaBlendAnimation;
	int MaxMenuItemsInWindow;
	__property bool Visible = {read=FVisible, nodefault};
	__fastcall TspSkinMenu(Classes::TComponent* AOwner, Forms::TForm* AForm);
	__fastcall virtual ~TspSkinMenu(void);
	void __fastcall Popup(Controls::TControl* APopupCtrl, Skindata::TspSkinData* ASkinData, int StartIndex, const Types::TRect &R, Menus::TMenuItem* AItem, bool PopupUp);
	void __fastcall Popup2(Controls::TControl* APopupCtrl, Skindata::TspSkinData* ASkinData, int StartIndex, const Types::TRect &R, Menus::TMenuItem* AItem, Menus::TMenuItem* AItem2, bool PopupUp);
	void __fastcall Hide(void);
	__property bool First = {read=FFirst, nodefault};
	__property Graphics::TFont* DefaultMenuItemFont = {read=FDefaultMenuItemFont, write=SetDefaultMenuItemFont};
	__property int DefaultMenuItemHeight = {read=FDefaultMenuItemHeight, write=FDefaultMenuItemHeight, nodefault};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Classes::TNotifyEvent OnMenuClose = {read=FOnMenuClose, write=FOnMenuClose};
public:
	#pragma option push -w-inl
	/* TComponent.Create */ inline __fastcall virtual TspSkinMenu(Classes::TComponent* AOwner) : Classes::TComponent(AOwner) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspSkinPopupWindow : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
private:
	Skindata::TspDataSkinMenuItem* DSMI;
	int VisibleCount;
	int VisibleStartIndex;
	bool Scroll;
	bool Scroll2;
	int ScrollCode;
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
	Types::TRect NewItemsRect;
	#pragma pack(pop)
	
	HRGN FRgn;
	int ShowX;
	int ShowY;
	Extctrls::TTimer* WT;
	int OMX;
	int OMY;
	void __fastcall WTProc(System::TObject* Sender);
	MESSAGE void __fastcall WMMouseActivate(Messages::TMessage &Message);
	MESSAGE void __fastcall WMEraseBkGrnd(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	void __fastcall CreateMenu(Menus::TMenuItem* Item, int StartIndex);
	void __fastcall CreateMenu2(Menus::TMenuItem* Item, Menus::TMenuItem* Item2, int StartIndex);
	void __fastcall CreateRealImage(Graphics::TBitmap* B, bool ADrawClient);
	void __fastcall SetMenuWindowRegion(void);
	void __fastcall DrawUpMarker(Graphics::TCanvas* Cnvs);
	void __fastcall DrawDownMarker(Graphics::TCanvas* Cnvs);
	void __fastcall StartScroll(void);
	void __fastcall StopScroll(void);
	
protected:
	Imglist::TCustomImageList* ImgL;
	int GlyphWidth;
	Graphics::TBitmap* WindowPicture;
	Graphics::TBitmap* MaskPicture;
	int OldActiveItem;
	Extctrls::TTimer* MouseTimer;
	Extctrls::TTimer* MorphTimer;
	TspSkinMenu* ParentMenu;
	Skindata::TspSkinData* SD;
	Skindata::TspDataSkinPopupWindow* PW;
	MESSAGE void __fastcall WMTimer(Messages::TWMTimer &Message);
	bool __fastcall CanScroll(int AScrollCode);
	void __fastcall ScrollUp(bool Cycle);
	void __fastcall ScrollDown(bool Cycle);
	int __fastcall GetEndStartVisibleIndex(void);
	void __fastcall CalcItemRects(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall TestMouse(System::TObject* Sender);
	void __fastcall TestActive(int X, int Y);
	bool __fastcall InWindow(const Types::TPoint &P);
	void __fastcall TestMorph(System::TObject* Sender);
	void __fastcall UpDatePW(void);
	bool __fastcall GetActive(int X, int Y);
	void __fastcall DrawScrollArea(Graphics::TCanvas* Cnvs, const Types::TRect &R);
	
public:
	Graphics::TBitmap* Sc;
	Speffbmp::TspEffectBmp* ESc;
	bool AlphaBlend;
	Byte AlphaBlendValue;
	bool AlphaBlendAnimation;
	Classes::TList* ItemList;
	int ActiveItem;
	Graphics::TBitmap* FPaintBuffer;
	__fastcall TspSkinPopupWindow(Classes::TComponent* AOwner, TspSkinMenu* AParentMenu, Skindata::TspDataSkinPopupWindow* AData);
	__fastcall virtual ~TspSkinPopupWindow(void);
	HIDESBASE void __fastcall Hide(void);
	HIDESBASE void __fastcall Show(const Types::TRect &R, Menus::TMenuItem* AItem, int StartIndex, bool PopupByItem, bool PopupUp);
	void __fastcall Show2(const Types::TRect &R, Menus::TMenuItem* AItem, Menus::TMenuItem* AItem2, int StartIndex, bool PopupByItem, bool PopupUp);
	void __fastcall PaintMenu(HDC DC);
	void __fastcall PopupKeyDown(int CharCode);
public:
	#pragma option push -w-inl
	/* TCustomControl.Create */ inline __fastcall virtual TspSkinPopupWindow(Classes::TComponent* AOwner) : Controls::TCustomControl(AOwner) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinPopupWindow(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspSkinMenuItem : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	TspSkinPopupWindow* Parent;
	Skindata::TspDataSkinMenuItem* MI;
	Graphics::TBitmap* ActivePicture;
	double FMorphKf;
	void __fastcall SetMorphKf(double Value);
	void __fastcall Redraw(void);
	void __fastcall DrawSkinCheckImage(Graphics::TCanvas* Cnvs, const Types::TRect &R, bool AActive);
	void __fastcall DrawSkinRadioImage(Graphics::TCanvas* Cnvs, const Types::TRect &R, bool AActive);
	void __fastcall DrawSkinArrowImage(Graphics::TCanvas* Cnvs, const Types::TRect &R, bool AActive);
	
public:
	Menus::TMenuItem* MenuItem;
	#pragma pack(push, 1)
	Types::TRect ObjectRect;
	#pragma pack(pop)
	
	bool Active;
	bool Down;
	bool FVisible;
	bool WaitCommand;
	int CurrentFrame;
	__fastcall TspSkinMenuItem(TspSkinPopupWindow* AParent, Menus::TMenuItem* AMenuItem, Skindata::TspDataSkinMenuItem* AData);
	bool __fastcall EnableMorphing(void);
	bool __fastcall EnableAnimation(void);
	void __fastcall Draw(Graphics::TCanvas* Cnvs);
	void __fastcall DefaultDraw(Graphics::TCanvas* Cnvs);
	virtual bool __fastcall CanMorphing(void);
	void __fastcall DoMorphing(void);
	__property double MorphKf = {read=FMorphKf, write=SetMorphKf};
	void __fastcall MouseDown(int X, int Y);
	void __fastcall MouseEnter(bool Kb);
	void __fastcall MouseLeave(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinMenuItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinPopupMenu;
class PASCALIMPLEMENTATION TspSkinPopupMenu : public Menus::TPopupMenu 
{
	typedef Menus::TPopupMenu inherited;
	
private:
	#pragma pack(push, 1)
	Types::TPoint FPopupPoint;
	#pragma pack(pop)
	
	
protected:
	Skindata::TspSkinData* FSD;
	Forms::TForm* FComponentForm;
	Classes::TNotifyEvent FOnMenuClose;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	__property Types::TPoint PopupPoint = {read=FPopupPoint};
	
public:
	__fastcall virtual TspSkinPopupMenu(Classes::TComponent* AOwner);
	virtual void __fastcall Popup(int X, int Y);
	void __fastcall PopupFromRect(const Types::TRect &R, bool APopupUp);
	void __fastcall Popup2(Controls::TControl* ACtrl, int X, int Y);
	void __fastcall PopupFromRect2(Controls::TControl* ACtrl, const Types::TRect &R, bool APopupUp);
	__property Forms::TForm* ComponentForm = {read=FComponentForm, write=FComponentForm};
	
__published:
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Classes::TNotifyEvent OnMenuClose = {read=FOnMenuClose, write=FOnMenuClose};
public:
	#pragma option push -w-inl
	/* TPopupMenu.Destroy */ inline __fastcall virtual ~TspSkinPopupMenu(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspImagesMenuItem;
class PASCALIMPLEMENTATION TspImagesMenuItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	Imglist::TImageIndex FImageIndex;
	AnsiString FCaption;
	Classes::TNotifyEvent FOnClick;
	bool FButton;
	bool FHeader;
	AnsiString FHint;
	
protected:
	virtual void __fastcall SetImageIndex(const Imglist::TImageIndex Value);
	virtual void __fastcall SetCaption(const AnsiString Value);
	
public:
	#pragma pack(push, 1)
	Types::TRect ItemRect;
	#pragma pack(pop)
	
	Graphics::TColor FColor;
	__fastcall virtual TspImagesMenuItem(Classes::TCollection* Collection);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property bool Button = {read=FButton, write=FButton, nodefault};
	__property bool Header = {read=FHeader, write=FHeader, nodefault};
	__property AnsiString Caption = {read=FCaption, write=SetCaption};
	__property AnsiString Hint = {read=FHint, write=FHint};
	__property Imglist::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
public:
	#pragma option push -w-inl
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TspImagesMenuItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspImagesMenuItems;
class DELPHICLASS TspSkinImagesMenu;
class DELPHICLASS TspSkinImagesMenuPopupWindow;
class PASCALIMPLEMENTATION TspSkinImagesMenuPopupWindow : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
private:
	bool FSkinSupport;
	Forms::TMessageEvent OldAppMessage;
	TspSkinImagesMenu* ImagesMenu;
	HRGN FRgn;
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
	Types::TRect NewItemsRect;
	#pragma pack(pop)
	
	Graphics::TBitmap* WindowPicture;
	Graphics::TBitmap* MaskPicture;
	int MouseInItem;
	int OldMouseInItem;
	bool FDown;
	bool FItemDown;
	void __fastcall AssignItemRects(void);
	void __fastcall CreateMenu(void);
	void __fastcall HookApp(void);
	void __fastcall UnHookApp(void);
	void __fastcall NewAppMessage(tagMSG &Msg, bool &Handled);
	void __fastcall SetMenuWindowRegion(void);
	void __fastcall DrawItems(int ActiveIndex, int SelectedIndex, Graphics::TCanvas* C);
	Types::TRect __fastcall GetItemRect(int Index);
	int __fastcall GetItemFromPoint(const Types::TPoint &P);
	void __fastcall DrawItemCaption(AnsiString ACaption, const Types::TRect &R, Graphics::TCanvas* C, bool AActive, bool ADown);
	void __fastcall DrawActiveItem(const Types::TRect &R, Graphics::TCanvas* C, bool ASelected);
	void __fastcall TestActive(int X, int Y);
	Skindata::TspDataSkinLabelControl* __fastcall GetLabelDataControl(void);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	MESSAGE void __fastcall WMMouseActivate(Messages::TMessage &Message);
	MESSAGE void __fastcall WMEraseBkGrnd(Messages::TMessage &Message);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall ProcessKey(int KeyCode);
	void __fastcall FindLeft(void);
	void __fastcall FindRight(void);
	void __fastcall FindUp(void);
	void __fastcall FindDown(void);
	
public:
	__fastcall TspSkinImagesMenuPopupWindow(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinImagesMenuPopupWindow(void);
	HIDESBASE void __fastcall Show(const Types::TRect &PopupRect);
	HIDESBASE void __fastcall Hide(bool AProcessEvents);
	virtual void __fastcall Paint(void);
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinImagesMenuPopupWindow(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspSkinImagesMenu : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	Imglist::TCustomImageList* FImages;
	TspImagesMenuItems* FImagesItems;
	int FItemIndex;
	int FColumnsCount;
	Classes::TNotifyEvent FOnItemClick;
	Skindata::TspSkinData* FSkinData;
	TspSkinImagesMenuPopupWindow* FPopupWindow;
	bool FShowSelectedItem;
	int FOldItemIndex;
	Classes::TNotifyEvent FOnChange;
	bool FAlphaBlend;
	bool FAlphaBlendAnimation;
	Byte FAlphaBlendValue;
	Classes::TNotifyEvent FOnInternalChange;
	Classes::TNotifyEvent FOnMenuClose;
	Classes::TNotifyEvent FOnMenuPopup;
	Classes::TNotifyEvent FOnInternalMenuClose;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	Skinhint::TspSkinHint* FSkinHint;
	bool FShowHints;
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetImagesItems(TspImagesMenuItems* Value);
	void __fastcall SetImages(Imglist::TCustomImageList* Value);
	void __fastcall SetColumnsCount(int Value);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	TspImagesMenuItem* __fastcall GetSelectedItem(void);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall ProcessEvents(bool ACanProcess);
	
public:
	__fastcall virtual TspSkinImagesMenu(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinImagesMenu(void);
	void __fastcall Popup(int X, int Y);
	void __fastcall PopupFromRect(const Types::TRect &R);
	void __fastcall Hide(void);
	__property TspImagesMenuItem* SelectedItem = {read=GetSelectedItem};
	__property Classes::TNotifyEvent OnInternalChange = {read=FOnInternalChange, write=FOnInternalChange};
	__property Classes::TNotifyEvent OnInternalMenuClose = {read=FOnInternalMenuClose, write=FOnInternalMenuClose};
	
__published:
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Skinhint::TspSkinHint* SkinHint = {read=FSkinHint, write=FSkinHint};
	__property bool ShowHints = {read=FShowHints, write=FShowHints, nodefault};
	__property TspImagesMenuItems* ImagesItems = {read=FImagesItems, write=SetImagesItems};
	__property int ItemIndex = {read=FItemIndex, write=FItemIndex, nodefault};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property int ColumnsCount = {read=FColumnsCount, write=SetColumnsCount, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSkinData, write=SetSkinData};
	__property bool ShowSelectedItem = {read=FShowSelectedItem, write=FShowSelectedItem, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property Classes::TNotifyEvent OnItemClick = {read=FOnItemClick, write=FOnItemClick};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property Classes::TNotifyEvent OnMenuPopup = {read=FOnMenuPopup, write=FOnMenuPopup};
	__property Classes::TNotifyEvent OnMenuClose = {read=FOnMenuClose, write=FOnMenuClose};
};


class PASCALIMPLEMENTATION TspImagesMenuItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspImagesMenuItem* operator[](int Index) { return Items[Index]; }
	
private:
	HIDESBASE TspImagesMenuItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TspImagesMenuItem* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	TspSkinImagesMenu* ImagesMenu;
	__fastcall TspImagesMenuItems(TspSkinImagesMenu* AImagesMenu);
	__property TspImagesMenuItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspImagesMenuItems(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Word WM_CLOSESKINMENU = 0x4cc;
static const Word WM_AFTERDISPATCH = 0x4cd;
extern PACKAGE bool __fastcall CanMenuClose(unsigned Msg);

}	/* namespace Skinmenus */
using namespace Skinmenus;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SkinMenus
