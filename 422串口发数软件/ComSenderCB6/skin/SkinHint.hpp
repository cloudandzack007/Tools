// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SkinHint.pas' rev: 6.00

#ifndef SkinHintHPP
#define SkinHintHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ImgList.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
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

namespace Skinhint
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TspSkinHintWindow;
class DELPHICLASS TspSkinHint;
class PASCALIMPLEMENTATION TspSkinHint : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	Forms::TShowHintEvent FOnShowHint;
	bool FActive;
	Skindata::TspSkinData* FSD;
	TspSkinHintWindow* HW;
	bool FAlphaBlendSupport;
	Graphics::TFont* FDefaultFont;
	bool FUseSkinFont;
	Extctrls::TTimer* HintTimer;
	AnsiString HintText;
	AnsiString FLineSeparator;
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetActive(bool Value);
	void __fastcall SetAlphaBlendSupport(bool Value);
	void __fastcall HintTime1(System::TObject* Sender);
	void __fastcall HintTimeEx1(System::TObject* Sender);
	void __fastcall HintTime2(System::TObject* Sender);
	
protected:
	AnsiString FHintTitle;
	int FHintImageIndex;
	Imglist::TCustomImageList* FHintImageList;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	void __fastcall SelfOnShowHint(AnsiString &HintStr, bool &CanShow, Forms::THintInfo &HintInfo);
	
public:
	__fastcall virtual TspSkinHint(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinHint(void);
	int __fastcall GetCursorHeightMargin(void);
	void __fastcall ActivateHint(const Types::TPoint &P, const AnsiString AHint);
	void __fastcall ActivateHint2(const AnsiString AHint);
	void __fastcall ActivateHintEx(const Types::TPoint &P, const AnsiString AHintTitle, const AnsiString AHint, int AImageIndex, Imglist::TCustomImageList* AImageList);
	void __fastcall ActivateHintEx2(const AnsiString AHintTitle, const AnsiString AHint, int AImageIndex, Imglist::TCustomImageList* AImageList);
	void __fastcall HideHint(void);
	bool __fastcall IsVisible(void);
	
__published:
	__property AnsiString LineSeparator = {read=FLineSeparator, write=FLineSeparator};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property bool AlphaBlendSupport = {read=FAlphaBlendSupport, write=SetAlphaBlendSupport, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=SetSkinData};
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property Forms::TShowHintEvent OnShowHint = {read=FOnShowHint, write=FOnShowHint};
};


class PASCALIMPLEMENTATION TspSkinHintWindow : public Controls::THintWindow 
{
	typedef Controls::THintWindow inherited;
	
private:
	#pragma pack(push, 1)
	Types::TRect NewClRect;
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
	
	TspSkinHint* FspHint;
	Graphics::TBitmap* DrawBuffer;
	Skindata::TspSkinData* FSD;
	Graphics::TBitmap* SI;
	HRGN FRgn;
	bool OldAlphaBlend;
	int OldAlphaBlendValue;
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBkGnd(Messages::TWMEraseBkgnd &Msg);
	TspSkinHint* __fastcall FindHintComponent(void);
	void __fastcall CalcHintSize(Graphics::TCanvas* Cnvs, AnsiString S, int &W, int &H);
	void __fastcall CalcHintSizeEx(Graphics::TCanvas* Cnvs, AnsiString AHint, AnsiString AHintTitle, int AImageIndex, Imglist::TCustomImageList* AImageList, int &W, int &H);
	void __fastcall CheckText(AnsiString &S);
	
protected:
	bool AExtendedStyle;
	void __fastcall SetHintWindowRegion(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall Paint(void);
	void __fastcall PaintEx(void);
	
public:
	__fastcall virtual TspSkinHintWindow(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinHintWindow(void);
	virtual void __fastcall ActivateHint(const Types::TRect &Rect, const AnsiString AHint);
	void __fastcall ActivateHintEx(const Types::TRect &Rect, const AnsiString AHintTitle, const AnsiString AHint, int AImageIndex, Imglist::TCustomImageList* AImageList);
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinHintWindow(HWND ParentWindow) : Controls::THintWindow(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Skinhint */
using namespace Skinhint;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SkinHint
