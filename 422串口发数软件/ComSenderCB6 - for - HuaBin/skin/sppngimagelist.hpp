// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sppngimagelist.pas' rev: 6.00

#ifndef sppngimagelistHPP
#define sppngimagelistHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Menus.hpp>	// Pascal unit
#include <sppngimage.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <CommCtrl.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sppngimagelist
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TspPngImageItem;
class PASCALIMPLEMENTATION TspPngImageItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	Sppngimage::TspPngImage* FPngImage;
	AnsiString FName;
	void __fastcall SetPngImage(const Sppngimage::TspPngImage* Value);
	
protected:
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	virtual AnsiString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TspPngImageItem(Classes::TCollection* Collection);
	__fastcall virtual ~TspPngImageItem(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	
__published:
	__property AnsiString Name = {read=FName, write=FName};
	__property Sppngimage::TspPngImage* PngImage = {read=FPngImage, write=SetPngImage};
};


class DELPHICLASS TspPngImageItems;
class DELPHICLASS TspPngImageList;
class PASCALIMPLEMENTATION TspPngImageList : public Imglist::TCustomImageList 
{
	typedef Imglist::TCustomImageList inherited;
	
private:
	TspPngImageItems* FPngImages;
	int __fastcall GetPngWidth(void);
	int __fastcall GetPngHeight(void);
	void __fastcall SetPngWidth(int Value);
	void __fastcall SetPngHeight(int Value);
	void __fastcall SetPngImages(TspPngImageItems* Value);
	
protected:
	virtual void __fastcall DoDraw(int Index, Graphics::TCanvas* Canvas, int X, int Y, unsigned Style, bool Enabled = true);
	void __fastcall InsertBitMap(int Index);
	void __fastcall DeleteBitMap(int Index);
	
public:
	__fastcall virtual TspPngImageList(Classes::TComponent* AOwner);
	__fastcall virtual ~TspPngImageList(void);
	
__published:
	__property TspPngImageItems* PngImages = {read=FPngImages, write=SetPngImages};
	__property int PngWidth = {read=GetPngWidth, write=SetPngWidth, nodefault};
	__property int PngHeight = {read=GetPngHeight, write=SetPngHeight, nodefault};
public:
	#pragma option push -w-inl
	/* TCustomImageList.CreateSize */ inline __fastcall TspPngImageList(int AWidth, int AHeight) : Imglist::TCustomImageList(AWidth, AHeight) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspPngImageItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspPngImageItem* operator[](int Index) { return Items[Index]; }
	
private:
	HIDESBASE TspPngImageItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TspPngImageItem* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	TspPngImageList* FPngImageList;
	__fastcall TspPngImageItems(TspPngImageList* APNGImageList);
	__property TspPngImageItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspPngImageItems(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspPngImageView;
class PASCALIMPLEMENTATION TspPngImageView : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
private:
	bool FAutoSize;
	TspPngImageList* FPngImageList;
	int FImageIndex;
	bool FCenter;
	HIDESBASE void __fastcall SetAutoSize(bool Value);
	void __fastcall SetImageIndex(int Value);
	void __fastcall SetCenter(bool Value);
	
protected:
	void __fastcall AdjustBounds(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall Paint(void);
	
public:
	__fastcall virtual TspPngImageView(Classes::TComponent* AOwner);
	
__published:
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property TspPngImageList* PngImageList = {read=FPngImageList, write=FPngImageList};
	__property int ImageIndex = {read=FImageIndex, write=SetImageIndex, nodefault};
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property bool Center = {read=FCenter, write=SetCenter, default=0};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
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
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TspPngImageView(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Sppngimagelist */
using namespace Sppngimagelist;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sppngimagelist
