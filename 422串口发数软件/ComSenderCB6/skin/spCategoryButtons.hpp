// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spCategoryButtons.pas' rev: 6.00

#ifndef spCategoryButtonsHPP
#define spCategoryButtonsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Menus.hpp>	// Pascal unit
#include <SPUtils.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <ActnList.hpp>	// Pascal unit
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

namespace Spcategorybuttons
{
//-- type declarations -------------------------------------------------------
typedef TMetaClass*TspBaseButtonItemClass;

typedef TMetaClass*TspButtonItemClass;

typedef TMetaClass*TspButtonCategoryClass;

typedef TMetaClass*TspButtonCategoriesClass;

typedef TMetaClass*TspButtonItemActionLinkClass;

#pragma option push -b-
enum spCategoryButtons__1 { spbdsSelected, spbdsHot, spbdsFocused, spbdsDown, spbdsDragged, spbdsInsertLeft, spbdsInsertTop, spbdsInsertRight, spbdsInsertBottom };
#pragma option pop

typedef Set<spCategoryButtons__1, spbdsSelected, spbdsInsertBottom>  TspButtonDrawState;

#pragma option push -b-
enum spCategoryButtons__2 { spboAllowReorder, spboAllowCopyingButtons, spboFullSize, spboShowCaptions, spboVerticalCategoryCaptions, spboBoldCaptions, spboUsePlusMinus };
#pragma option pop

typedef Set<spCategoryButtons__2, spboAllowReorder, spboUsePlusMinus>  TspCatButtonOptions;

class DELPHICLASS TspButtonItem;
typedef void __fastcall (__closure *TspCatButtonEvent)(System::TObject* Sender, const TspButtonItem* Button);

class DELPHICLASS TspButtonCategory;
typedef void __fastcall (__closure *TspCatButtonGetHint)(System::TObject* Sender, const TspButtonItem* Button, const TspButtonCategory* Category, AnsiString &HintStr, bool &Handled);

typedef void __fastcall (__closure *TspCatButtonDrawEvent)(System::TObject* Sender, const TspButtonItem* Button, Graphics::TCanvas* Canvas, const Types::TRect &Rect, TspButtonDrawState State);

typedef void __fastcall (__closure *TspCatButtonDrawIconEvent)(System::TObject* Sender, const TspButtonItem* Button, Graphics::TCanvas* Canvas, const Types::TRect &Rect, TspButtonDrawState State, int &TextOffset);

typedef void __fastcall (__closure *TspCatButtonReorderEvent)(System::TObject* Sender, const TspButtonItem* Button, const TspButtonCategory* SourceCategory, const TspButtonCategory* TargetCategory);

typedef void __fastcall (__closure *TspCatButtonCopyEvent)(System::TObject* Sender, const TspButtonItem* SourceButton, const TspButtonItem* CopiedButton);

typedef void __fastcall (__closure *TspCategoryReorderEvent)(System::TObject* Sender, const TspButtonCategory* SourceCategory, const TspButtonCategory* TargetCategory);

typedef void __fastcall (__closure *TspCategoryCollapseEvent)(System::TObject* Sender, const TspButtonCategory* Category);

#pragma option push -b-
enum TspCatButtonFlow { bscbfVertical, bscbfHorizontal };
#pragma option pop

class DELPHICLASS TspSkinCategoryButtons;
class DELPHICLASS TspButtonCategories;
class PASCALIMPLEMENTATION TspButtonCategories : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspButtonCategory* operator[](int Index) { return Items[Index]; }
	
private:
	TspSkinCategoryButtons* FButtonGroup;
	int FOriginalID;
	HIDESBASE TspButtonCategory* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TspButtonCategory* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	__fastcall TspButtonCategories(const TspSkinCategoryButtons* ButtonGroup);
	HIDESBASE TspButtonCategory* __fastcall Add(void);
	TspButtonCategory* __fastcall AddItem(TspButtonCategory* Item, int Index);
	virtual void __fastcall BeginUpdate(void);
	HIDESBASE TspButtonCategory* __fastcall Insert(int Index);
	int __fastcall IndexOf(const AnsiString Caption);
	__property TspButtonCategory* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TspSkinCategoryButtons* ButtonGroup = {read=FButtonGroup};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspButtonCategories(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspSkinCategoryButtons : public Skinctrls::TspSkinControl 
{
	typedef Skinctrls::TspSkinControl inherited;
	
private:
	bool FIs9XOS;
	Extctrls::TTimer* FMouseTimer;
	AnsiString FButtonsSkinDataName;
	AnsiString FCategorySkinDataName;
	bool FShowBorder;
	Skinctrls::TspSkinScrollBar* FSkinScrollBar;
	TspCatButtonFlow FButtonFlow;
	int FCollapsedHeight;
	TspButtonItem* FDownButton;
	TspButtonItem* FDragButton;
	TspButtonCategory* FDragCategory;
	#pragma pack(push, 1)
	Types::TPoint FDragStartPos;
	#pragma pack(pop)
	
	bool FDragStarted;
	Controls::TDragImageList* FDragImageList;
	int FGutterSize;
	int FSideBufferSize;
	TspButtonItem* FHotButton;
	Imglist::TChangeLink* FImageChangeLink;
	Imglist::TCustomImageList* FImages;
	TspButtonItem* FInsertLeft;
	TspButtonItem* FInsertTop;
	TspButtonItem* FInsertRight;
	TspButtonItem* FInsertBottom;
	bool FIgnoreUpdate;
	int FScrollBarMax;
	int FSCROLLBARPOS;
	int FPageAmount;
	TspButtonCategories* FButtonCategories;
	TspCatButtonOptions FButtonOptions;
	int FButtonWidth;
	int FButtonHeight;
	TspButtonItem* FSelectedItem;
	TspButtonItem* FFocusedItem;
	bool FMouseInControl;
	TspCatButtonEvent FOnButtonClicked;
	TspCatButtonCopyEvent FOnCopyButton;
	TspCatButtonEvent FOnSelectedItemChange;
	TspCatButtonEvent FOnHotButton;
	TspCatButtonGetHint FOnGetHint;
	TspCatButtonDrawEvent FOnDrawButton;
	TspCatButtonDrawEvent FOnBeforeDrawButton;
	TspCatButtonDrawEvent FOnAfterDrawButton;
	Classes::TNotifyEvent FOnMouseLeave;
	TspCatButtonReorderEvent FOnReorderButton;
	TspCategoryReorderEvent FOnReorderCategory;
	TspCategoryCollapseEvent FOnCategoryCollapase;
	Classes::TNotifyEvent FOnClick;
	Graphics::TColor FHotButtonColor;
	Graphics::TColor FSelectedButtonColor;
	Graphics::TColor FRegularButtonColor;
	bool FUseSkinFont;
	void __fastcall OnMouseTimerEvent(System::TObject* Sender);
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
	int __fastcall CalcButtonsPerCol(void);
	void __fastcall CalcBufferSizes(void);
	int __fastcall CalcCategoryHeight(const TspButtonCategory* Category, const int ButtonsPerRow);
	int __fastcall CalcCategoryWidth(const TspButtonCategory* Category, const int ButtonsPerCol);
	void __fastcall DrawCategory(const TspButtonCategory* Category, const Graphics::TCanvas* Canvas, int StartingPos);
	void __fastcall DrawSkinCategory(const TspButtonCategory* Category, const Graphics::TCanvas* Canvas, int StartingPos);
	void __fastcall GetCategoryBounds(const TspButtonCategory* Category, const int StartingPos, Types::TRect &CategoryBounds, Types::TRect &ButtonBounds);
	Types::TRect __fastcall GetChevronBounds(const Types::TRect &CategoryBounds);
	int __fastcall GetIndexOfFirstCategory(void);
	TspButtonItem* __fastcall GetNextButtonInGroup(const TspButtonItem* StartingButton, bool GoForward);
	TspButtonItem* __fastcall GetNextButton(const TspButtonItem* StartingButton, bool GoForward);
	int __fastcall GetScrollOffset(void);
	int __fastcall GetScrollBuffer(void);
	void __fastcall ScrollPosChanged(Stdctrls::TScrollCode ScrollCode, int ScrollPos);
	void __fastcall SetOnDrawButton(const TspCatButtonDrawEvent Value);
	void __fastcall SetButtonCategories(const TspButtonCategories* Value);
	void __fastcall SetButtonHeight(const int Value);
	void __fastcall SetCatButtonOptions(const TspCatButtonOptions Value);
	void __fastcall SetButtonWidth(const int Value);
	void __fastcall SetFocusedItem(const TspButtonItem* Value);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	void __fastcall SetSelectedItem(const TspButtonItem* Value);
	void __fastcall ShowSkinScrollBar(const bool Visible);
	void __fastcall SetHotButtonColor(const Graphics::TColor Value);
	void __fastcall SetRegularButtonColor(const Graphics::TColor Value);
	void __fastcall SetSelectedButtonColor(const Graphics::TColor Value);
	void __fastcall SetButtonFlow(const TspCatButtonFlow Value);
	bool __fastcall ShouldScrollDown(/* out */ int &Delay);
	bool __fastcall ShouldScrollUp(/* out */ int &Delay);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Forms::TCMHintShow &Message);
	HIDESBASE MESSAGE void __fastcall CNKeydown(Messages::TWMKey &Message);
	MESSAGE void __fastcall WMMouseLeave(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Messages::TWMSetFocus &Message);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Messages::TWMKillFocus &Message);
	void __fastcall SetDragButton(const TspButtonItem* Value);
	void __fastcall SetShowBorder(bool Value);
	
protected:
	void __fastcall PaintBorder(HDC ADC, bool AUseExternalDC);
	void __fastcall PaintSkinBorder(HDC ADC, bool AUseExternalDC);
	void __fastcall PaintDefaultBorder(HDC ADC, bool AUseExternalDC);
	HIDESBASE MESSAGE void __fastcall WMNCCALCSIZE(Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPAINT(Messages::TMessage &Message);
	DYNAMIC void __fastcall BeginAutoDrag(void);
	virtual void __fastcall CreateHandle(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall DoBeginDrag(bool Immediate, int Threshold);
	DYNAMIC void __fastcall DoCopyButton(const TspButtonItem* Button, const TspButtonCategory* TargetCategory, const TspButtonItem* TargetButton);
	DYNAMIC void __fastcall DoEndDrag(System::TObject* Target, int X, int Y);
	DYNAMIC void __fastcall DoHotButton(void);
	DYNAMIC void __fastcall DoMouseLeave(void);
	DYNAMIC void __fastcall DoReorderButton(const TspButtonItem* Button, const TspButtonCategory* TargetCategory, const TspButtonItem* TargetButton);
	DYNAMIC void __fastcall DoReorderCategory(const TspButtonCategory* SourceCategory, const TspButtonCategory* TargetCategory);
	DYNAMIC void __fastcall DoStartDrag(Controls::TDragObject* &DragObject);
	DYNAMIC void __fastcall DragOver(System::TObject* Source, int X, int Y, Controls::TDragState State, bool &Accept);
	virtual void __fastcall DrawButton(const TspButtonItem* Button, Graphics::TCanvas* Canvas, const Types::TRect &Rect, TspButtonDrawState State);
	void __fastcall DrawSkinButton(const TspButtonItem* Button, Graphics::TCanvas* Canvas, const Types::TRect &Rct, TspButtonDrawState State);
	void __fastcall DrawStretchSkinButton(const TspButtonItem* Button, Graphics::TCanvas* Canvas, const Types::TRect &Rct, TspButtonDrawState State);
	DYNAMIC void __fastcall DoItemClicked(const TspButtonItem* Button);
	DYNAMIC void __fastcall DoSelectedItemChanged(const TspButtonItem* Button);
	DYNAMIC bool __fastcall DoMouseWheelUp(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	DYNAMIC bool __fastcall DoMouseWheelDown(Classes::TShiftState Shift, const Types::TPoint &MousePos);
	DYNAMIC bool __fastcall GetAllowReorder(void);
	virtual Controls::TDragImageList* __fastcall GetDragImages(void);
	virtual TMetaClass* __fastcall GetButtonCategoriesClass(void);
	virtual TMetaClass* __fastcall GetButtonCategoryClass(void);
	virtual TMetaClass* __fastcall GetButtonItemClass(void);
	int __fastcall GetScrollPos(void);
	void __fastcall SetScrollPos(const int Value);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseMove(Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall Resize(void);
	void __fastcall ScrollRectIntoView(const Types::TRect &Rect);
	HIDESBASE MESSAGE void __fastcall CMFontchanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	MESSAGE void __fastcall CMBENCPaint(Messages::TMessage &Message);
	MESSAGE void __fastcall CMSENCPaint(Messages::TMessage &Message);
	
public:
	__fastcall virtual TspSkinCategoryButtons(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCategoryButtons(void);
	virtual void __fastcall Paint(void);
	virtual void __fastcall SetBounds(int ALeft, int ATop, int AWidth, int AHeight);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall ChangeSkinData(void);
	__property TspButtonItem* DragButton = {read=FDragButton, write=SetDragButton};
	__property TspButtonCategory* DragCategory = {read=FDragCategory, write=FDragCategory};
	__property Controls::TDragImageList* DragImageList = {read=FDragImageList};
	DYNAMIC void __fastcall DragDrop(System::TObject* Source, int X, int Y);
	Types::TRect __fastcall GetButtonRect(const TspButtonItem* Button);
	Types::TRect __fastcall GetCategoryRect(const TspButtonCategory* Category);
	TspButtonItem* __fastcall GetButtonAt(int X, int Y, TspButtonCategory* Category = (TspButtonCategory*)(0x0));
	TspButtonCategory* __fastcall GetCategoryAt(int X, int Y);
	void __fastcall RemoveInsertionPoints(void);
	void __fastcall ScrollIntoView(const TspButtonItem* Button)/* overload */;
	void __fastcall ScrollIntoView(const TspButtonCategory* Category)/* overload */;
	void __fastcall SetInsertionButton(TspButtonItem* InsertionButton, TspButtonCategory* InsertionCategory);
	void __fastcall GetTargetAt(int X, int Y, TspButtonItem* &TargetButton, TspButtonCategory* &TargetCategory);
	void __fastcall UpdateButton(const TspButtonItem* Button);
	void __fastcall UpdateAllButtons(void);
	__property TspButtonItem* SelectedItem = {read=FSelectedItem, write=SetSelectedItem};
	__property TspButtonItem* FocusedItem = {read=FFocusedItem, write=SetFocusedItem};
	
__published:
	__property bool UsesSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property bool ShowBoder = {read=FShowBorder, write=SetShowBorder, nodefault};
	__property AnsiString ButtonsSkinDataName = {read=FButtonsSkinDataName, write=FButtonsSkinDataName};
	__property AnsiString CategorySkinDataName = {read=FCategorySkinDataName, write=FCategorySkinDataName};
	__property TspCatButtonFlow ButtonFlow = {read=FButtonFlow, write=SetButtonFlow, nodefault};
	__property int ButtonHeight = {read=FButtonHeight, write=SetButtonHeight, default=24};
	__property int ButtonWidth = {read=FButtonWidth, write=SetButtonWidth, default=24};
	__property TspCatButtonOptions ButtonOptions = {read=FButtonOptions, write=SetCatButtonOptions, default=24};
	__property DockSite  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property Height  = {default=100};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TspButtonCategories* Categories = {read=FButtonCategories, write=SetButtonCategories};
	__property Color  = {default=-2147483643};
	__property Cursor  = {default=0};
	__property Graphics::TColor HotButtonColor = {read=FHotButtonColor, write=SetHotButtonColor, default=15717318};
	__property PopupMenu ;
	__property Graphics::TColor RegularButtonColor = {read=FRegularButtonColor, write=SetRegularButtonColor, nodefault};
	__property Graphics::TColor SelectedButtonColor = {read=FSelectedButtonColor, write=SetSelectedButtonColor, nodefault};
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Width  = {default=100};
	__property Visible  = {default=1};
	__property TspCatButtonDrawEvent OnAfterDrawButton = {read=FOnAfterDrawButton, write=FOnAfterDrawButton};
	__property TspCatButtonDrawEvent OnBeforeDrawButton = {read=FOnBeforeDrawButton, write=FOnBeforeDrawButton};
	__property TspCatButtonEvent OnButtonClicked = {read=FOnButtonClicked, write=FOnButtonClicked};
	__property TspCategoryCollapseEvent OnCategoryCollapase = {read=FOnCategoryCollapase, write=FOnCategoryCollapase};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property OnContextPopup ;
	__property TspCatButtonCopyEvent OnCopyButton = {read=FOnCopyButton, write=FOnCopyButton};
	__property OnDockDrop ;
	__property OnDockOver ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property TspCatButtonDrawEvent OnDrawButton = {read=FOnDrawButton, write=SetOnDrawButton};
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property TspCatButtonGetHint OnGetHint = {read=FOnGetHint, write=FOnGetHint};
	__property TspCatButtonEvent OnHotButton = {read=FOnHotButton, write=FOnHotButton};
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property TspCatButtonReorderEvent OnReorderButton = {read=FOnReorderButton, write=FOnReorderButton};
	__property TspCategoryReorderEvent OnReorderCategory = {read=FOnReorderCategory, write=FOnReorderCategory};
	__property OnMouseDown ;
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnMouseWheel ;
	__property OnMouseWheelDown ;
	__property OnMouseWheelUp ;
	__property TspCatButtonEvent OnSelectedItemChange = {read=FOnSelectedItemChange, write=FOnSelectedItemChange};
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCategoryButtons(HWND ParentWindow) : Skinctrls::TspSkinControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspBaseButtonItem;
class DELPHICLASS TspButtonItemActionLink;
class PASCALIMPLEMENTATION TspButtonItemActionLink : public Actnlist::TActionLink 
{
	typedef Actnlist::TActionLink inherited;
	
protected:
	TspBaseButtonItem* FClient;
	virtual void __fastcall AssignClient(System::TObject* AClient);
	virtual bool __fastcall IsCaptionLinked(void);
	virtual bool __fastcall IsHintLinked(void);
	virtual bool __fastcall IsImageIndexLinked(void);
	virtual bool __fastcall IsOnExecuteLinked(void);
	virtual void __fastcall SetCaption(const AnsiString Value);
	virtual void __fastcall SetHint(const AnsiString Value);
	virtual void __fastcall SetImageIndex(int Value);
	virtual void __fastcall SetOnExecute(Classes::TNotifyEvent Value);
	
public:
	virtual bool __fastcall DoShowHint(AnsiString &HintStr);
public:
	#pragma option push -w-inl
	/* TBasicActionLink.Create */ inline __fastcall virtual TspButtonItemActionLink(System::TObject* AClient) : Actnlist::TActionLink(AClient) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TBasicActionLink.Destroy */ inline __fastcall virtual ~TspButtonItemActionLink(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspBaseButtonItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	TspButtonItemActionLink* FActionLink;
	Imglist::TImageIndex FImageIndex;
	AnsiString FCaption;
	void *FData;
	AnsiString FHint;
	Classes::TNotifyEvent FOnClick;
	void __fastcall SetAction(const Classes::TBasicAction* Value);
	void __fastcall SetCaption(const AnsiString Value);
	void __fastcall SetImageIndex(const Imglist::TImageIndex Value);
	Classes::TBasicAction* __fastcall GetAction(void);
	void __fastcall DoActionChange(System::TObject* Sender);
	bool __fastcall IsCaptionStored(void);
	bool __fastcall IsHintStored(void);
	bool __fastcall IsImageIndexStored(void);
	bool __fastcall IsOnClickStored(void);
	
protected:
	virtual void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual Classes::TComponent* __fastcall GetNotifyTarget(void) = 0 ;
	virtual AnsiString __fastcall GetDisplayName();
	virtual TMetaClass* __fastcall GetActionLinkClass(void);
	__property TspButtonItemActionLink* ActionLink = {read=FActionLink, write=FActionLink};
	
public:
	__fastcall virtual TspBaseButtonItem(Classes::TCollection* Collection);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__property void * Data = {read=FData, write=FData};
	virtual void __fastcall ScrollIntoView(void) = 0 ;
	
__published:
	__property Classes::TBasicAction* Action = {read=GetAction, write=SetAction};
	__property AnsiString Caption = {read=FCaption, write=SetCaption, stored=IsCaptionStored};
	__property AnsiString Hint = {read=FHint, write=FHint, stored=IsHintStored};
	__property Imglist::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, stored=IsImageIndexStored, nodefault};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick, stored=IsOnClickStored};
public:
	#pragma option push -w-inl
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TspBaseButtonItem(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspButtonItem : public TspBaseButtonItem 
{
	typedef TspBaseButtonItem inherited;
	
private:
	TspSkinCategoryButtons* __fastcall GetButtonGroup(void);
	TspButtonCategory* __fastcall GetCategory(void);
	
protected:
	virtual Classes::TComponent* __fastcall GetNotifyTarget(void);
	
public:
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall ScrollIntoView(void);
	__property TspButtonCategory* Category = {read=GetCategory};
	
__published:
	__property TspSkinCategoryButtons* ButtonGroup = {read=GetButtonGroup};
public:
	#pragma option push -w-inl
	/* TspBaseButtonItem.Create */ inline __fastcall virtual TspButtonItem(Classes::TCollection* Collection) : TspBaseButtonItem(Collection) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TspButtonItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspButtonCollection;
class PASCALIMPLEMENTATION TspButtonCollection : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspButtonItem* operator[](int Index) { return Items[Index]; }
	
private:
	TspButtonCategory* FCategory;
	HIDESBASE TspButtonItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TspButtonItem* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	virtual void __fastcall Update(Classes::TCollectionItem* Item);
	
public:
	__fastcall TspButtonCollection(const TspButtonCategory* ACategory);
	HIDESBASE TspButtonItem* __fastcall Add(void);
	TspButtonItem* __fastcall AddItem(TspButtonItem* Item, int Index);
	HIDESBASE TspButtonItem* __fastcall Insert(int Index);
	__property TspButtonItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TspButtonCategory* Category = {read=FCategory};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspButtonCollection(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspButtonCategory : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	AnsiString FCaption;
	bool FCollapsed;
	TspButtonCollection* FItems;
	int FStart;
	int FEnd;
	void *FData;
	TspButtonCategories* __fastcall GetCategories(void);
	void __fastcall SetItems(const TspButtonCollection* Value);
	void __fastcall SetCollapsed(const bool Value);
	void __fastcall SetCaption(const AnsiString Value);
	
protected:
	virtual void __fastcall SetIndex(int Value);
	
public:
	__fastcall virtual TspButtonCategory(Classes::TCollection* Collection);
	__fastcall virtual ~TspButtonCategory(void);
	void __fastcall ScrollIntoView(void);
	int __fastcall IndexOf(const AnsiString Caption);
	__property TspButtonCategories* Categories = {read=GetCategories};
	__property void * Data = {read=FData, write=FData};
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property AnsiString Caption = {read=FCaption, write=SetCaption};
	__property bool Collapsed = {read=FCollapsed, write=SetCollapsed, nodefault};
	__property TspButtonCollection* Items = {read=FItems, write=SetItems};
};


//-- var, const, procedure ---------------------------------------------------
static const Controls::TCursor crDragCopy = 0xffffffe9;

}	/* namespace Spcategorybuttons */
using namespace Spcategorybuttons;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spCategoryButtons
