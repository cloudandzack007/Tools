// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spButtonGroup.pas' rev: 6.00

#ifndef spButtonGroupHPP
#define spButtonGroupHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Menus.hpp>	// Pascal unit
#include <SPUtils.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
#include <spCategoryButtons.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spbuttongroup
{
//-- type declarations -------------------------------------------------------
typedef TMetaClass*TspGrpButtonItemClass;

typedef TMetaClass*TspGrpButtonItemsClass;

#pragma option push -b-
enum spButtonGroup__1 { spgboAllowReorder, spgboFullSize, spgboGroupStyle, gboShowCaptions };
#pragma option pop

typedef Set<spButtonGroup__1, spgboAllowReorder, gboShowCaptions>  TspGrpButtonOptions;

typedef void __fastcall (__closure *TspGrpButtonEvent)(System::TObject* Sender, int Index);

typedef void __fastcall (__closure *TspGrpButtonDrawEvent)(System::TObject* Sender, int Index, Graphics::TCanvas* Canvas, const Types::TRect &Rect, Spcategorybuttons::TspButtonDrawState State);

typedef void __fastcall (__closure *TspGrpButtonDrawIconEvent)(System::TObject* Sender, int Index, Graphics::TCanvas* Canvas, const Types::TRect &Rect, Spcategorybuttons::TspButtonDrawState State, int &TextOffset);

typedef void __fastcall (__closure *TspGrpButtonReorderEvent)(System::TObject* Sender, int OldIndex, int NewIndex);

class DELPHICLASS TspSkinButtonGroup;
class DELPHICLASS TspGrpButtonItems;
class DELPHICLASS TspGrpButtonItem;
class PASCALIMPLEMENTATION TspGrpButtonItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspGrpButtonItem* operator[](int Index) { return Items[Index]; }
	
private:
	TspSkinButtonGroup* FButtonGroup;
	int FOriginalID;
	HIDESBASE TspGrpButtonItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TspGrpButtonItem* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	__fastcall TspGrpButtonItems(const TspSkinButtonGroup* ButtonGroup);
	HIDESBASE TspGrpButtonItem* __fastcall Add(void);
	TspGrpButtonItem* __fastcall AddItem(TspGrpButtonItem* Item, int Index);
	virtual void __fastcall BeginUpdate(void);
	HIDESBASE TspGrpButtonItem* __fastcall Insert(int Index);
	__property TspGrpButtonItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TspSkinButtonGroup* ButtonGroup = {read=FButtonGroup};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspGrpButtonItems(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspSkinButtonGroup : public Skinctrls::TspSkinControl 
{
	typedef Skinctrls::TspSkinControl inherited;
	
private:
	bool FIs9XOS;
	Extctrls::TTimer* FMouseTimer;
	AnsiString FButtonsSkinDataName;
	bool FUseSkinFont;
	bool FShowFocus;
	Skinctrls::TspSkinScrollBar* FSkinScrollBar;
	bool FShowBorder;
	int FDownIndex;
	int FDragIndex;
	#pragma pack(push, 1)
	Types::TPoint FDragStartPos;
	#pragma pack(pop)
	
	bool FDragStarted;
	Controls::TDragImageList* FDragImageList;
	int FHiddenItems;
	int FHotIndex;
	int FInsertLeft;
	int FInsertTop;
	int FInsertRight;
	int FInsertBottom;
	bool FIgnoreUpdate;
	int FScrollBarMax;
	int FPageAmount;
	TspGrpButtonItems* FButtonItems;
	TspGrpButtonOptions FButtonOptions;
	int FButtonWidth;
	int FButtonHeight;
	int FFocusIndex;
	int FItemIndex;
	Imglist::TChangeLink* FImageChangeLink;
	Imglist::TCustomImageList* FImages;
	bool FMouseInControl;
	TspGrpButtonEvent FOnButtonClicked;
	Classes::TNotifyEvent FOnClick;
	TspGrpButtonEvent FOnHotButton;
	TspGrpButtonDrawIconEvent FOnDrawIcon;
	TspGrpButtonDrawEvent FOnDrawButton;
	TspGrpButtonDrawEvent FOnBeforeDrawButton;
	TspGrpButtonDrawEvent FOnAfterDrawButton;
	Classes::TNotifyEvent FOnMouseLeave;
	TspGrpButtonReorderEvent FOnReorderButton;
	void __fastcall ShowSkinScrollBar(const bool Visible);
	void __fastcall AdjustScrollBar(void);
	int __fastcall GetScrollSize(void);
	void __fastcall SBChange(System::TObject* Sender);
	void __fastcall SBUpClick(System::TObject* Sender);
	void __fastcall SBDownClick(System::TObject* Sender);
	void __fastcall SBPageUp(System::TObject* Sender);
	void __fastcall SBPageDown(System::TObject* Sender);
	void __fastcall AutoScroll(Stdctrls::TScrollCode ScrollCode);
	void __fastcall ImageListChange(System::TObject* Sender);
	int __fastcall CalcButtonsPerRow(void);
	int __fastcall CalcRowsSeen(void);
	void __fastcall DoFillRect(const Types::TRect &Rect);
	void __fastcall ScrollPosChanged(Stdctrls::TScrollCode ScrollCode, int ScrollPos);
	void __fastcall SetOnDrawButton(const TspGrpButtonDrawEvent Value);
	void __fastcall SetOnDrawIcon(const TspGrpButtonDrawIconEvent Value);
	void __fastcall SeTspGrpButtonItems(const TspGrpButtonItems* Value);
	void __fastcall SetButtonHeight(const int Value);
	void __fastcall SetGrpButtonOptions(const TspGrpButtonOptions Value);
	void __fastcall SetButtonWidth(const int Value);
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Forms::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall CNKeydown(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Messages::TWMKillFocus &Message);
	MESSAGE void __fastcall WMMouseLeave(Messages::TMessage &Message);
	void __fastcall SetDragIndex(const int Value);
	void __fastcall SetShowBorder(bool Value);
	void __fastcall OnMouseTimerEvent(System::TObject* Sender);
	
protected:
	void __fastcall PaintBorder(HDC ADC, bool AUseExternalDC);
	void __fastcall PaintSkinBorder(HDC ADC, bool AUseExternalDC);
	void __fastcall PaintDefaultBorder(HDC ADC, bool AUseExternalDC);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	virtual TspGrpButtonItem* __fastcall CreateButton(void);
	virtual void __fastcall CreateHandle(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoHotButton(void);
	DYNAMIC void __fastcall DoMouseLeave(void);
	DYNAMIC bool __fastcall DoMouseWheelUp(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelDown(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	void __fastcall DoReorderButton(const int OldIndex, const int NewIndex);
	DYNAMIC void __fastcall DoStartDrag(Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, Controls::TDragState State, bool &Accept);
	virtual void __fastcall DrawButton(int Index, Graphics::TCanvas* Canvas, const Types::TRect &Rect, Spcategorybuttons::TspButtonDrawState State);
	virtual void __fastcall DrawSkinButton(int Index, Graphics::TCanvas* Canvas, const Types::TRect &Rct, Spcategorybuttons::TspButtonDrawState State);
	virtual void __fastcall DrawStretchSkinButton(int Index, Graphics::TCanvas* Canvas, const Types::TRect &Rct, Spcategorybuttons::TspButtonDrawState State);
	virtual void __fastcall DoItemClicked(const int Index);
	virtual TMetaClass* __fastcall GetButtonClass(void);
	virtual TMetaClass* __fastcall GetButtonsClass(void);
	virtual Controls::TDragImageList* __fastcall GetDragImages(void);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall Resize(void);
	void __fastcall UpdateButton(const int Index);
	void __fastcall UpdateAllButtons(void);
	MESSAGE void __fastcall CMBENCPaint(Messages::TMessage &Message);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	__fastcall virtual TspSkinButtonGroup(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinButtonGroup(void);
	virtual void __fastcall Paint(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall ChangeSkinData(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	__property int DragIndex = {read=FDragIndex, write=SetDragIndex, nodefault};
	__property Controls::TDragImageList* DragImageList = {read=FDragImageList};
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	Types::TRect __fastcall GetButtonRect(const int Index);
	int __fastcall IndexOfButtonAt(const int X, const int Y);
	void __fastcall RemoveInsertionPoints(void);
	void __fastcall ScrollIntoView(const int Index);
	void __fastcall SetInsertionPoints(const int InsertionIndex);
	int __fastcall TargetIndexAt(const int X, const int Y);
	__property Canvas ;
	
__published:
	__property AnsiString ButtonsSkinDataName = {read=FButtonsSkinDataName, write=FButtonsSkinDataName};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property bool ShowBoder = {read=FShowBorder, write=SetShowBorder, nodefault};
	__property bool ShowFocus = {read=FShowFocus, write=FShowFocus, nodefault};
	__property int ButtonHeight = {read=FButtonHeight, write=SetButtonHeight, default=24};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=24};
	__property TspGrpButtonOptions ButtonOptions = {read=FButtonOptions, write=SetGrpButtonOptions, default=8};
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property Height  = {default=100};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TspGrpButtonItems* Items = {read=FButtonItems, write=SeTspGrpButtonItems};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, default=-1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Width  = {default=100};
	__property Visible  = {default=1};
	__property TspGrpButtonEvent OnButtonClicked = {read=FOnButtonClicked, write=FOnButtonClicked};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property OnContextPopup ;
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property TspGrpButtonEvent OnHotButton = {read=FOnHotButton, write=FOnHotButton};
	__property TspGrpButtonDrawEvent OnAfterDrawButton = {read=FOnAfterDrawButton, write=FOnAfterDrawButton};
	__property TspGrpButtonDrawEvent OnBeforeDrawButton = {read=FOnBeforeDrawButton, write=FOnBeforeDrawButton};
	__property TspGrpButtonDrawEvent OnDrawButton = {read=FOnDrawButton, write=SetOnDrawButton};
	__property TspGrpButtonDrawIconEvent OnDrawIcon = {read=FOnDrawIcon, write=SetOnDrawIcon};
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property TspGrpButtonReorderEvent OnReorderButton = {read=FOnReorderButton, write=FOnReorderButton};
	__property OnMouseDown ;
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnMouseWheel ;
	__property OnMouseWheelDown ;
	__property OnMouseWheelUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinButtonGroup(HWND ParentWindow) : Skinctrls::TspSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspGrpButtonItem : public Spcategorybuttons::TspBaseButtonItem 
{
	typedef Spcategorybuttons::TspBaseButtonItem inherited;
	
private:
	TspSkinButtonGroup* __fastcall GetButtonGroup(void);
	TspGrpButtonItems* __fastcall GetCollection(void);
	HIDESBASE void __fastcall SetCollection(const TspGrpButtonItems* Value);
	
protected:
	virtual Classes::TComponent* __fastcall GetNotifyTarget(void);
	
public:
	virtual void __fastcall ScrollIntoView(void);
	__property TspGrpButtonItems* Collection = {read=GetCollection, write=SetCollection};
	
__published:
	__property TspSkinButtonGroup* ButtonGroup = {read=GetButtonGroup};
public:
	#pragma option push -w-inl
	/* TspBaseButtonItem.Create */ inline __fastcall virtual TspGrpButtonItem(Classes::TCollection* Collection) : Spcategorybuttons::TspBaseButtonItem(Collection) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TspGrpButtonItem(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Spbuttongroup */
using namespace Spbuttongroup;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spButtonGroup
