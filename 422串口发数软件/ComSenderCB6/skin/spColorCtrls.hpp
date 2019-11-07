// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spColorCtrls.pas' rev: 6.00

#ifndef spColorCtrlsHPP
#define spColorCtrlsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Types.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <SkinMenus.hpp>	// Pascal unit
#include <spEffBmp.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <SkinBoxCtrls.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <DynamicSkinForm.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spcolorctrls
{
//-- type declarations -------------------------------------------------------
typedef Graphics::TColor TspCustomColorValues[12];

class DELPHICLASS TspSkinCustomColorGrid;
class PASCALIMPLEMENTATION TspSkinCustomColorGrid : public Skinctrls::TspSkinPanel 
{
	typedef Skinctrls::TspSkinPanel inherited;
	
private:
	Graphics::TColor FColorValue;
	Classes::TNotifyEvent FOnChange;
	int FColCount;
	int FRowCount;
	int FColorIndex;
	void __fastcall SetColCount(int Value);
	void __fastcall SetRowCount(int Value);
	
protected:
	void __fastcall DrawCursor(Graphics::TCanvas* Cnvs, const Types::TRect &R);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	void __fastcall PaintGrid(Graphics::TCanvas* Cnvs);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	virtual void __fastcall PaintTransparent(Graphics::TCanvas* C);
	
public:
	Graphics::TColor CustomColorValues[12];
	int FColorsCount;
	__fastcall virtual TspSkinCustomColorGrid(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinCustomColorGrid(void);
	void __fastcall AddColor(Graphics::TColor AColor);
	
__published:
	__property int RowCount = {read=FRowCount, write=SetRowCount, nodefault};
	__property int ColCount = {read=FColCount, write=SetColCount, nodefault};
	__property Graphics::TColor ColorValue = {read=FColorValue, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinCustomColorGrid(HWND ParentWindow) : Skinctrls::TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspEmptyControl;
class PASCALIMPLEMENTATION TspEmptyControl : public Controls::TCustomControl 
{
	typedef Controls::TCustomControl inherited;
	
protected:
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	
public:
	virtual void __fastcall Paint(void);
public:
	#pragma option push -w-inl
	/* TCustomControl.Create */ inline __fastcall virtual TspEmptyControl(Classes::TComponent* AOwner) : Controls::TCustomControl(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TspEmptyControl(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspEmptyControl(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinColorGrid;
class PASCALIMPLEMENTATION TspSkinColorGrid : public Skinctrls::TspSkinPanel 
{
	typedef Skinctrls::TspSkinPanel inherited;
	
private:
	Graphics::TColor FColorValue;
	Classes::TNotifyEvent FOnChange;
	int FColCount;
	int FRowCount;
	void __fastcall SetColCount(int Value);
	void __fastcall SetRowCount(int Value);
	void __fastcall SetColorValue(Graphics::TColor Value);
	
protected:
	void __fastcall DrawCursor(Graphics::TCanvas* Cnvs, const Types::TRect &R);
	bool __fastcall CheckColor(Graphics::TColor Value);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	void __fastcall PaintGrid(Graphics::TCanvas* Cnvs);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	virtual void __fastcall PaintTransparent(Graphics::TCanvas* C);
	
public:
	__fastcall virtual TspSkinColorGrid(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinColorGrid(void);
	
__published:
	__property int RowCount = {read=FRowCount, write=SetRowCount, nodefault};
	__property int ColCount = {read=FColCount, write=SetColCount, nodefault};
	__property Graphics::TColor ColorValue = {read=FColorValue, write=SetColorValue, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinColorGrid(HWND ParentWindow) : Skinctrls::TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspColorViewer;
class PASCALIMPLEMENTATION TspColorViewer : public Controls::TGraphicControl 
{
	typedef Controls::TGraphicControl inherited;
	
private:
	Graphics::TColor FColorValue;
	void __fastcall SetColorValue(Graphics::TColor Value);
	
public:
	__fastcall virtual TspColorViewer(Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
	
__published:
	__property Graphics::TColor ColorValue = {read=FColorValue, write=SetColorValue, nodefault};
public:
	#pragma option push -w-inl
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TspColorViewer(void) { }
	#pragma option pop
	
};


struct THSL
{
	double H;
	double S;
	double L;
} ;

#pragma pack(push, 1)
struct TRGB
{
	Byte R;
	Byte G;
	Byte B;
} ;
#pragma pack(pop)

#pragma pack(push, 1)
struct THSLPSP
{
	Byte H;
	Byte S;
	Byte L;
} ;
#pragma pack(pop)

class DELPHICLASS TPSPColor;
class PASCALIMPLEMENTATION TPSPColor : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	#pragma pack(push, 1)
	TRGB FRGB;
	#pragma pack(pop)
	
	THSL FHSL;
	#pragma pack(push, 1)
	THSLPSP FHSLPSP;
	#pragma pack(pop)
	
	TRGB __fastcall HSLToRGB(const THSL &Value);
	THSL __fastcall RGBToHSL(TRGB Value);
	THSLPSP __fastcall HSLToHSLPSP();
	THSL __fastcall HSLPSPToHSL();
	void __fastcall SetRGB(const TRGB Value);
	void __fastcall SeTHSL(const THSL &Value);
	void __fastcall SeTHSLPSP(const THSLPSP Value);
	
public:
	__fastcall TPSPColor(void);
	__fastcall virtual ~TPSPColor(void);
	void __fastcall Assign(const TPSPColor* Value);
	__property TRGB RGB = {read=FRGB, write=SetRGB};
	__property THSL HSL = {read=FHSL, write=SeTHSL};
	__property THSLPSP HSLPSP = {read=FHSLPSP, write=SeTHSLPSP};
};


#pragma option push -b-
enum TClickZonePSP { czpspPnone, czpspPCircle, czpspPCar };
#pragma option pop

typedef DynamicArray<Byte >  TLineB;

typedef DynamicArray<int >  TLineI;

typedef tagRGBTRIPLE TRGBArray[32768];

typedef tagRGBTRIPLE *PRGBArray;

class DELPHICLASS TspSkinColorDialog;
class PASCALIMPLEMENTATION TspSkinColorDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool RGBStopCheck;
	bool HSLStopCheck;
	bool FromPSP;
	bool FGroupBoxTransparentMode;
	
protected:
	Graphics::TColor FColor;
	AnsiString FCaption;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FButtonSkinDataName;
	AnsiString FEditSkinDataName;
	AnsiString FLabelSkinDataName;
	Graphics::TFont* FDefaultLabelFont;
	Graphics::TFont* FDefaultEditFont;
	Graphics::TFont* FDefaultButtonFont;
	bool FAlphaBlend;
	bool FAlphaBlendAnimation;
	Byte FAlphaBlendValue;
	bool FUseSkinFont;
	TspSkinColorGrid* ColorGrid;
	TspSkinCustomColorGrid* CustomColorGrid;
	Skinctrls::TspSkinButton* OkButton;
	Skinctrls::TspSkinButton* CancelButton;
	Skinctrls::TspSkinButton* AddCustomColorButton;
	TspColorViewer* ColorViewer;
	Skinboxctrls::TspSkinTrackEdit* REdit;
	Skinboxctrls::TspSkinTrackEdit* GEdit;
	Skinboxctrls::TspSkinTrackEdit* BEdit;
	Skinctrls::TspSkinStdLabel* RLabel;
	Skinctrls::TspSkinStdLabel* GLabel;
	Skinctrls::TspSkinStdLabel* BLabel;
	Skinctrls::TspSkinStdLabel* EQLabel;
	Skinboxctrls::TspSkinTrackEdit* HEdit;
	Skinboxctrls::TspSkinTrackEdit* LEdit;
	Skinboxctrls::TspSkinTrackEdit* SEdit;
	Skinctrls::TspSkinStdLabel* HLabel;
	Skinctrls::TspSkinStdLabel* LLabel;
	Skinctrls::TspSkinStdLabel* SLabel;
	TspEmptyControl* PalettePSPPanel;
	Extctrls::TImage* PalettePSP;
	int PosCircle;
	int PosCar;
	TClickZonePSP ClickImg;
	TPSPColor* PSPColor;
	Graphics::TColor CustomColorValues[12];
	int CustomColorValuesCount;
	double __fastcall CalcAngle3Points(double X1, double Y1, double Xc, double Yc, double X2, double Y2);
	double __fastcall CalcAnglePoints(double X1, double Y1, double X2, double Y2);
	void __fastcall CalcAngle360(double &Angle);
	double __fastcall CalcDistancePoints(double X1, double Y1, double X2, double Y2);
	double __fastcall CalcArcCosRadians(double CosAngle);
	double __fastcall CalcArcSinRadians(double SinAngle);
	void __fastcall CalcRotationPoint(double Xc, double Yc, double Angle, double X1, double Y1, double &X2, double &Y2);
	void __fastcall CalcPointSurEllipse(double Xc, double Yc, double RayonX, double RayonY, double Angle, double &X, double &Y);
	double __fastcall CalcArcTan(double TanAngle);
	void __fastcall InitPSPPalette(void);
	void __fastcall DrawPSPPalette(void);
	void __fastcall DrawCursor(void);
	void __fastcall PalettePSPMouseMove(System::TObject* Sender, Classes::TShiftState Shift, int X, int Y);
	void __fastcall PalettePSPMouseUp(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall PalettePSPMouseDown(System::TObject* Sender, Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultEditFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall ColorGridChange(System::TObject* Sender);
	void __fastcall CustomColorGridChange(System::TObject* Sender);
	void __fastcall RGBEditChange(System::TObject* Sender);
	void __fastcall HSLEditChange(System::TObject* Sender);
	void __fastcall AddCustomColorButtonClick(System::TObject* Sender);
	void __fastcall ChangeEdits(void);
	
public:
	__fastcall virtual TspSkinColorDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinColorDialog(void);
	bool __fastcall Execute(void);
	
__published:
	__property bool GroupBoxTransparentMode = {read=FGroupBoxTransparentMode, write=FGroupBoxTransparentMode, nodefault};
	__property Graphics::TColor Color = {read=FColor, write=FColor, nodefault};
	__property AnsiString Caption = {read=FCaption, write=FCaption};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property AnsiString LabelSkinDataName = {read=FLabelSkinDataName, write=FLabelSkinDataName};
	__property AnsiString EditSkinDataName = {read=FEditSkinDataName, write=FEditSkinDataName};
	__property Graphics::TFont* DefaultLabelFont = {read=FDefaultLabelFont, write=SetDefaultLabelFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultEditFont = {read=FDefaultEditFont, write=SetDefaultEditFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
};


class DELPHICLASS TspSkinColorButton;
class PASCALIMPLEMENTATION TspSkinColorButton : public Skinctrls::TspSkinMenuSpeedButton 
{
	typedef Skinctrls::TspSkinMenuSpeedButton inherited;
	
private:
	Skinmenus::TspSkinImagesMenu* FColorMenu;
	Imglist::TCustomImageList* FColorImages;
	Graphics::TColor FAutoColor;
	Classes::TNotifyEvent FOnChangeColor;
	bool FShowAutoColor;
	bool FShowMoreColor;
	TspSkinColorDialog* FColorDialog;
	void __fastcall SetShowAutoColor(bool Value);
	void __fastcall SetShowMoreColor(bool Value);
	void __fastcall SetColorValue(Graphics::TColor Value);
	void __fastcall OnImagesMenuClick(System::TObject* Sender);
	void __fastcall OnImagesMenuPopup(System::TObject* Sender);
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
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinColorButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinColorButton(void);
	void __fastcall InitColors(void);
	
__published:
	__property Graphics::TColor AutoColor = {read=FAutoColor, write=FAutoColor, nodefault};
	__property Graphics::TColor ColorValue = {read=FColorMarkerValue, write=SetColorValue, nodefault};
	__property bool ShowAutoColor = {read=FShowAutoColor, write=SetShowAutoColor, nodefault};
	__property bool ShowMoreColor = {read=FShowMoreColor, write=SetShowMoreColor, nodefault};
	__property TspSkinColorDialog* ColorDialog = {read=FColorDialog, write=FColorDialog};
	__property bool MenuUseSkinFont = {read=GetMenuUseSkinFont, write=SetMenuUseSkinFont, nodefault};
	__property Graphics::TFont* MenuDefaultFont = {read=GetMenuDefaultFont, write=SetMenuDefaultFont};
	__property bool MenuAlphaBlend = {read=GetMenuAlphaBlend, write=SetMenuAlphaBlend, nodefault};
	__property int MenuAlphaBlendValue = {read=GetMenuAlphaBlendValue, write=SetMenuAlphaBlendValue, nodefault};
	__property bool MenuAlphaBlendAnimation = {read=GetMenuAlphaBlendAnimation, write=SetMenuAlphaBlendAnimation, nodefault};
	__property Classes::TNotifyEvent OnChangeColor = {read=FOnChangeColor, write=FOnChangeColor};
};


class DELPHICLASS TspSkinBrushColorButton;
class PASCALIMPLEMENTATION TspSkinBrushColorButton : public TspSkinColorButton 
{
	typedef TspSkinColorButton inherited;
	
public:
	#pragma option push -w-inl
	/* TspSkinColorButton.Create */ inline __fastcall virtual TspSkinBrushColorButton(Classes::TComponent* AOwner) : TspSkinColorButton(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspSkinColorButton.Destroy */ inline __fastcall virtual ~TspSkinBrushColorButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinTextColorButton;
class PASCALIMPLEMENTATION TspSkinTextColorButton : public Skinctrls::TspSkinMenuSpeedButton 
{
	typedef Skinctrls::TspSkinMenuSpeedButton inherited;
	
private:
	Skinmenus::TspSkinImagesMenu* FColorMenu;
	Imglist::TCustomImageList* FColorImages;
	Graphics::TColor FAutoColor;
	Classes::TNotifyEvent FOnChangeColor;
	bool FShowAutoColor;
	bool FShowMoreColor;
	TspSkinColorDialog* FColorDialog;
	void __fastcall SetColorValue(Graphics::TColor Value);
	void __fastcall OnImagesMenuClick(System::TObject* Sender);
	void __fastcall OnImagesMenuPopup(System::TObject* Sender);
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
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinTextColorButton(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinTextColorButton(void);
	void __fastcall InitColors(void);
	
__published:
	__property Graphics::TColor AutoColor = {read=FAutoColor, write=FAutoColor, nodefault};
	__property Graphics::TColor ColorValue = {read=FColorMarkerValue, write=SetColorValue, nodefault};
	__property bool ShowAutoColor = {read=FShowAutoColor, write=FShowAutoColor, nodefault};
	__property bool ShowMoreColor = {read=FShowMoreColor, write=FShowMoreColor, nodefault};
	__property TspSkinColorDialog* ColorDialog = {read=FColorDialog, write=FColorDialog};
	__property bool MenuUseSkinFont = {read=GetMenuUseSkinFont, write=SetMenuUseSkinFont, nodefault};
	__property Graphics::TFont* MenuDefaultFont = {read=GetMenuDefaultFont, write=SetMenuDefaultFont};
	__property bool MenuAlphaBlend = {read=GetMenuAlphaBlend, write=SetMenuAlphaBlend, nodefault};
	__property int MenuAlphaBlendValue = {read=GetMenuAlphaBlendValue, write=SetMenuAlphaBlendValue, nodefault};
	__property bool MenuAlphaBlendAnimation = {read=GetMenuAlphaBlendAnimation, write=SetMenuAlphaBlendAnimation, nodefault};
	__property Classes::TNotifyEvent OnChangeColor = {read=FOnChangeColor, write=FOnChangeColor};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE double CalcEpsilon;
extern PACKAGE double CalcRadian;
extern PACKAGE Types::TRect RectPSP;
extern PACKAGE Types::TRect RectActCol;
extern PACKAGE Types::TRect RectPreCol;
extern PACKAGE Types::TRect PalettePSPCoord;
static const Word MaxPixelCount = 0x8000;

}	/* namespace Spcolorctrls */
using namespace Spcolorctrls;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spColorCtrls
