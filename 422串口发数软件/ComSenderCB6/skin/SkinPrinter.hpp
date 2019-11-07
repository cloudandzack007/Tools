// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SkinPrinter.pas' rev: 6.00

#ifndef SkinPrinterHPP
#define SkinPrinterHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
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

namespace Skinprinter
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TspPrintRange { bsprAllPages, bsprSelection, bsprPageNums };
#pragma option pop

#pragma option push -b-
enum TspPrintDialogOption { bspoPrintToFile, bspoPageNums, bspoSelection, bspoDisablePrintToFile };
#pragma option pop

typedef Set<TspPrintDialogOption, bspoPrintToFile, bspoDisablePrintToFile>  TspPrintDialogOptions;

class DELPHICLASS TspSkinPrintDialog;
class PASCALIMPLEMENTATION TspSkinPrintDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	Skinboxctrls::TspSkinComboBox* PrinterCombobox;
	Skinctrls::TspSkinStdLabel* L1;
	Skinctrls::TspSkinStdLabel* L2;
	Skinctrls::TspSkinStdLabel* L3;
	Skinctrls::TspSkinStdLabel* L4;
	Skinboxctrls::TspSkinSpinEdit* NumCopiesEdit;
	Skinctrls::TspSkinCheckRadioBox* CollateCheckBox;
	bool StopCheck;
	Extctrls::TImage* CollateImage;
	Skinctrls::TspSkinCheckRadioBox* RBAll;
	Skinctrls::TspSkinCheckRadioBox* RBPages;
	Skinctrls::TspSkinCheckRadioBox* RBSelection;
	Skinboxctrls::TspSkinSpinEdit* FromPageEdit;
	Skinboxctrls::TspSkinSpinEdit* ToPageEdit;
	Skinctrls::TspSkinCheckRadioBox* PrintToFileCheckBox;
	bool FGroupBoxTransparentMode;
	
protected:
	Forms::TForm* Form;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FButtonSkinDataName;
	AnsiString FSelectSkinDataName;
	AnsiString FLabelSkinDataName;
	Graphics::TFont* FDefaultLabelFont;
	Graphics::TFont* FDefaultSelectFont;
	Graphics::TFont* FDefaultButtonFont;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FUseSkinFont;
	AnsiString FTitle;
	int FFromPage;
	int FToPage;
	bool FCollate;
	TspPrintDialogOptions FOptions;
	bool FPrintToFile;
	TspPrintRange FPrintRange;
	int FMinPage;
	int FMaxPage;
	int FCopies;
	void __fastcall SetNumCopies(int Value);
	void __fastcall FromPageEditChange(System::TObject* Sender);
	void __fastcall ToPageEditChange(System::TObject* Sender);
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultSelectFont(Graphics::TFont* Value);
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall PrinterComboBoxChange(System::TObject* Sender);
	void __fastcall PropertiesButtonClick(System::TObject* Sender);
	void __fastcall NumCopiesEditChange(System::TObject* Sender);
	void __fastcall CollateCheckBoxClick(System::TObject* Sender);
	
public:
	bool __fastcall Execute(void);
	__fastcall virtual TspSkinPrintDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinPrintDialog(void);
	
__published:
	__property bool GroupBoxTransparentMode = {read=FGroupBoxTransparentMode, write=FGroupBoxTransparentMode, nodefault};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property AnsiString LabelSkinDataName = {read=FLabelSkinDataName, write=FLabelSkinDataName};
	__property AnsiString ComboboxSkinDataName = {read=FSelectSkinDataName, write=FSelectSkinDataName};
	__property Graphics::TFont* DefaultLabelFont = {read=FDefaultLabelFont, write=SetDefaultLabelFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultComboBoxFont = {read=FDefaultSelectFont, write=SetDefaultSelectFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property bool Collate = {read=FCollate, write=FCollate, default=0};
	__property int Copies = {read=FCopies, write=SetNumCopies, default=0};
	__property int FromPage = {read=FFromPage, write=FFromPage, default=0};
	__property int MinPage = {read=FMinPage, write=FMinPage, default=0};
	__property int MaxPage = {read=FMaxPage, write=FMaxPage, default=0};
	__property TspPrintDialogOptions Options = {read=FOptions, write=FOptions, default=0};
	__property bool PrintToFile = {read=FPrintToFile, write=FPrintToFile, default=0};
	__property TspPrintRange PrintRange = {read=FPrintRange, write=FPrintRange, default=0};
	__property int ToPage = {read=FToPage, write=FToPage, default=0};
};


class DELPHICLASS TspPaperInfo;
class PASCALIMPLEMENTATION TspPaperInfo : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	int FDMPaper;
	AnsiString FName;
	#pragma pack(push, 1)
	Types::TPoint FSize;
	#pragma pack(pop)
	
	int __fastcall GetSize(int Index);
	void __fastcall SetSize(int Index, int Value);
	
public:
	void __fastcall Assign(TspPaperInfo* Source);
	bool __fastcall IsEqual(TspPaperInfo* Source);
	__property int DMPaper = {read=FDMPaper, nodefault};
	__property int Height = {read=GetSize, write=SetSize, index=1, nodefault};
	__property AnsiString Name = {read=FName};
	__property Types::TPoint Size = {read=FSize};
	__property int Width = {read=GetSize, write=SetSize, index=0, nodefault};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TspPaperInfo(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspPaperInfo(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinPrinterSetupDialog;
class PASCALIMPLEMENTATION TspSkinPrinterSetupDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool StopCheck;
	Skinboxctrls::TspSkinComboBox* PrinterCombobox;
	Skinctrls::TspSkinStdLabel* L1;
	Skinctrls::TspSkinStdLabel* L2;
	Skinctrls::TspSkinStdLabel* L3;
	Skinctrls::TspSkinStdLabel* L4;
	Skinctrls::TspSkinCheckRadioBox* RBPortrait;
	Skinctrls::TspSkinCheckRadioBox* RBLandScape;
	Extctrls::TImage* OrientationImage;
	Skinboxctrls::TspSkinComboBox* SizeComboBox;
	Skinboxctrls::TspSkinComboBox* SourceComboBox;
	Classes::TStrings* Bins;
	Classes::TStrings* Papers;
	bool FGroupBoxTransparentMode;
	void __fastcall RBPortraitClick(System::TObject* Sender);
	void __fastcall RBLandScapeClick(System::TObject* Sender);
	void __fastcall SizeComboBoxChange(System::TObject* Sender);
	void __fastcall SourceComboBoxChange(System::TObject* Sender);
	void __fastcall ClearPapersAndBins(void);
	void __fastcall LoadPapersAndBins(void);
	void __fastcall LoadCurrentPaperAndBin(void);
	void __fastcall SaveCurrentPaperAndBin(void);
	
protected:
	Forms::TForm* Form;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FButtonSkinDataName;
	AnsiString FSelectSkinDataName;
	AnsiString FLabelSkinDataName;
	Graphics::TFont* FDefaultLabelFont;
	Graphics::TFont* FDefaultSelectFont;
	Graphics::TFont* FDefaultButtonFont;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FUseSkinFont;
	AnsiString FTitle;
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultSelectFont(Graphics::TFont* Value);
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall PrinterComboBoxChange(System::TObject* Sender);
	void __fastcall PropertiesButtonClick(System::TObject* Sender);
	
public:
	bool __fastcall Execute(void);
	__fastcall virtual TspSkinPrinterSetupDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinPrinterSetupDialog(void);
	
__published:
	__property bool GroupBoxTransparentMode = {read=FGroupBoxTransparentMode, write=FGroupBoxTransparentMode, nodefault};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property AnsiString LabelSkinDataName = {read=FLabelSkinDataName, write=FLabelSkinDataName};
	__property AnsiString ComboboxSkinDataName = {read=FSelectSkinDataName, write=FSelectSkinDataName};
	__property Graphics::TFont* DefaultLabelFont = {read=FDefaultLabelFont, write=SetDefaultLabelFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultComboBoxFont = {read=FDefaultSelectFont, write=SetDefaultSelectFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
};


class DELPHICLASS TspSkinSmallPrintDialog;
class PASCALIMPLEMENTATION TspSkinSmallPrintDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	bool FGroupBoxTransparentMode;
	Forms::TForm* Form;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FButtonSkinDataName;
	AnsiString FSelectSkinDataName;
	AnsiString FLabelSkinDataName;
	Graphics::TFont* FDefaultLabelFont;
	Graphics::TFont* FDefaultSelectFont;
	Graphics::TFont* FDefaultButtonFont;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FUseSkinFont;
	AnsiString FTitle;
	Skinboxctrls::TspSkinComboBox* PrinterCombobox;
	Skinctrls::TspSkinStdLabel* L1;
	Skinctrls::TspSkinStdLabel* L2;
	Skinctrls::TspSkinStdLabel* L3;
	Skinctrls::TspSkinStdLabel* L4;
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultSelectFont(Graphics::TFont* Value);
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall PropertiesButtonClick(System::TObject* Sender);
	void __fastcall PrinterComboBoxChange(System::TObject* Sender);
	
public:
	bool __fastcall Execute(void);
	__fastcall virtual TspSkinSmallPrintDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinSmallPrintDialog(void);
	
__published:
	__property bool GroupBoxTransparentMode = {read=FGroupBoxTransparentMode, write=FGroupBoxTransparentMode, nodefault};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property AnsiString LabelSkinDataName = {read=FLabelSkinDataName, write=FLabelSkinDataName};
	__property AnsiString ComboboxSkinDataName = {read=FSelectSkinDataName, write=FSelectSkinDataName};
	__property Graphics::TFont* DefaultLabelFont = {read=FDefaultLabelFont, write=SetDefaultLabelFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultComboBoxFont = {read=FDefaultSelectFont, write=SetDefaultSelectFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
};


#pragma option push -b-
enum TspPageMeasureUnits { sppmMillimeters, sppmInches };
#pragma option pop

#pragma option push -b-
enum TspPageSetupDialogOption { sppsoDisableMargins, sppsoDisableOrientation, sppsoDisablePaper, sppsoDisablePrinter };
#pragma option pop

typedef Set<TspPageSetupDialogOption, sppsoDisableMargins, sppsoDisablePrinter>  TspPageSetupDialogOptions;

class DELPHICLASS TspSkinPageSetupDialog;
class DELPHICLASS TspSkinPagePreview;
class PASCALIMPLEMENTATION TspSkinPagePreview : public Skinctrls::TspSkinPanel 
{
	typedef Skinctrls::TspSkinPanel inherited;
	
protected:
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	virtual void __fastcall PaintTransparent(Graphics::TCanvas* C);
	
public:
	int PageWidth;
	int PageHeight;
	int LeftMargin;
	int TopMargin;
	int RightMargin;
	int BottomMargin;
	__fastcall virtual TspSkinPagePreview(Classes::TComponent* AOwner);
	void __fastcall DrawPaper(const Types::TRect &R, Graphics::TCanvas* Cnvs);
public:
	#pragma option push -w-inl
	/* TspSkinPanel.Destroy */ inline __fastcall virtual ~TspSkinPagePreview(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinPagePreview(HWND ParentWindow) : Skinctrls::TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspSkinPageSetupDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FGroupBoxTransparentMode;
	bool StopCheck;
	Skinctrls::TspSkinCheckRadioBox* RBPortrait;
	Skinctrls::TspSkinCheckRadioBox* RBLandScape;
	Skinboxctrls::TspSkinComboBox* SizeComboBox;
	Skinboxctrls::TspSkinComboBox* SourceComboBox;
	Skinboxctrls::TspSkinSpinEdit* LeftMEdit;
	Skinboxctrls::TspSkinSpinEdit* TopMEdit;
	Skinboxctrls::TspSkinSpinEdit* RightMEdit;
	Skinboxctrls::TspSkinSpinEdit* BottomMEdit;
	TspSkinPagePreview* PagePreview;
	Classes::TStrings* Bins;
	Classes::TStrings* Papers;
	TspPageMeasureUnits FUnits;
	TspPageSetupDialogOptions FOptions;
	int FMinMarginLeft;
	int FMinMarginTop;
	int FMinMarginRight;
	int FMinMarginBottom;
	int FMaxMarginLeft;
	int FMaxMarginTop;
	int FMaxMarginRight;
	int FMaxMarginBottom;
	int FMarginLeft;
	int FMarginTop;
	int FMarginRight;
	int FMarginBottom;
	int FPageWidth;
	int FPageHeight;
	void __fastcall RBPortraitClick(System::TObject* Sender);
	void __fastcall RBLandScapeClick(System::TObject* Sender);
	void __fastcall SizeComboBoxChange(System::TObject* Sender);
	void __fastcall SourceComboBoxChange(System::TObject* Sender);
	void __fastcall LeftMEditChange(System::TObject* Sender);
	void __fastcall TopMEditChange(System::TObject* Sender);
	void __fastcall RightMEditChange(System::TObject* Sender);
	void __fastcall BottomMEditChange(System::TObject* Sender);
	void __fastcall ClearPapersAndBins(void);
	void __fastcall LoadPapersAndBins(void);
	void __fastcall LoadCurrentPaperAndBin(void);
	void __fastcall SaveCurrentPaperAndBin(void);
	
protected:
	Forms::TForm* Form;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FButtonSkinDataName;
	AnsiString FSelectSkinDataName;
	AnsiString FLabelSkinDataName;
	Graphics::TFont* FDefaultLabelFont;
	Graphics::TFont* FDefaultSelectFont;
	Graphics::TFont* FDefaultButtonFont;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FUseSkinFont;
	AnsiString FTitle;
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultSelectFont(Graphics::TFont* Value);
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall PrinterButtonClick(System::TObject* Sender);
	
public:
	bool __fastcall Execute(void);
	__fastcall virtual TspSkinPageSetupDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinPageSetupDialog(void);
	
__published:
	__property TspPageSetupDialogOptions Options = {read=FOptions, write=FOptions, default=0};
	__property TspPageMeasureUnits Units = {read=FUnits, write=FUnits, default=0};
	__property bool GroupBoxTransparentMode = {read=FGroupBoxTransparentMode, write=FGroupBoxTransparentMode, nodefault};
	__property int MinMarginLeft = {read=FMinMarginLeft, write=FMinMarginLeft, nodefault};
	__property int MinMarginTop = {read=FMinMarginTop, write=FMinMarginTop, nodefault};
	__property int MinMarginRight = {read=FMinMarginRight, write=FMinMarginRight, nodefault};
	__property int MinMarginBottom = {read=FMinMarginBottom, write=FMinMarginBottom, nodefault};
	__property int MaxMarginLeft = {read=FMaxMarginLeft, write=FMaxMarginLeft, nodefault};
	__property int MaxMarginTop = {read=FMaxMarginTop, write=FMaxMarginTop, nodefault};
	__property int MaxMarginRight = {read=FMaxMarginRight, write=FMaxMarginRight, nodefault};
	__property int MaxMarginBottom = {read=FMaxMarginBottom, write=FMaxMarginBottom, nodefault};
	__property int MarginLeft = {read=FMarginLeft, write=FMarginLeft, nodefault};
	__property int MarginTop = {read=FMarginTop, write=FMarginTop, nodefault};
	__property int MarginRight = {read=FMarginRight, write=FMarginRight, nodefault};
	__property int MarginBottom = {read=FMarginBottom, write=FMarginBottom, nodefault};
	__property int PageWidth = {read=FPageWidth, write=FPageWidth, nodefault};
	__property int PageHeight = {read=FPageHeight, write=FPageHeight, nodefault};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property AnsiString LabelSkinDataName = {read=FLabelSkinDataName, write=FLabelSkinDataName};
	__property AnsiString ComboboxSkinDataName = {read=FSelectSkinDataName, write=FSelectSkinDataName};
	__property Graphics::TFont* DefaultLabelFont = {read=FDefaultLabelFont, write=SetDefaultLabelFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultComboBoxFont = {read=FDefaultSelectFont, write=SetDefaultSelectFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Skinprinter */
using namespace Skinprinter;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SkinPrinter
