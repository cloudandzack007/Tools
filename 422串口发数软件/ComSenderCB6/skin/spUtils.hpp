// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SPUtils.pas' rev: 6.00

#ifndef SPUtilsHPP
#define SPUtilsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ImgList.hpp>	// Pascal unit
#include <jpeg.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sputils
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TspStretchType { spstFull, spstHorz, spstVert };
#pragma option pop

#pragma pack(push, 1)
struct TFBColor
{
	Byte b;
	Byte g;
	Byte r;
} ;
#pragma pack(pop)

typedef TFBColor *PFBColor;

typedef TFBColor TBLine[1];

typedef TFBColor *PBLine;

typedef TFBColor *TPLines[1];

typedef PBLine *PPLines;

class DELPHICLASS TFBitmap;
class PASCALIMPLEMENTATION TFBitmap : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	void *Bits;
	void __fastcall Initialize(void);
	
public:
	PBLine *Pixels;
	int Gap;
	int RowInc;
	int Size;
	int Width;
	int Height;
	int Handle;
	int hDC;
	#pragma pack(push, 1)
	tagBITMAPINFO bmInfo;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	tagBITMAPINFOHEADER bmHeader;
	#pragma pack(pop)
	
	__fastcall TFBitmap(int HBmp);
	__fastcall virtual ~TFBitmap(void);
};


typedef Shortint TspNumGlyphs;

#pragma option push -b-
enum TspButtonLayout { blGlyphLeft, blGlyphRight, blGlyphTop, blGlyphBottom };
#pragma option pop

typedef Types::TRect TRectArray[10001];

//-- var, const, procedure ---------------------------------------------------
static const Word maxi = 0x2710;
static const int SP_XP_BTNFRAMECOLOR = 0x800000;
static const int SP_XP_BTNACTIVECOLOR = 0xd2bdb6;
static const int SP_XP_BTNDOWNCOLOR = 0xb59385;
static const Word CM_SEPAINT = 0xb1c8;
static const Word CM_SENCPAINT = 0xb1c9;
static const Word SE_RESULT = 0x3233;
static const Word CM_CANSTARTFORMANIMATION = 0xb1b2;
static const Word SE_STOPANIMATION = 0x3234;
static const Word SE_CANANIMATION = 0x3235;
extern PACKAGE bool SP_PlatformIsUnicode;
extern PACKAGE BOOL __stdcall (*GetScrollBarInfoFunc)(unsigned wnd, int idObject, tagSCROLLBARINFO &psbi);
extern PACKAGE void __fastcall CalcLCoord(TspButtonLayout Layout, const Types::TRect &R, int gw, int gh, int tw, int th, int Spacing, int Margin, int &tx, int &ty, int &gx, int &gy);
extern PACKAGE void __fastcall DrawImageAndText(Graphics::TCanvas* Cnvs, const Types::TRect &R, int Margin, int Spacing, TspButtonLayout Layout, AnsiString Caption, int ImageIndex, Imglist::TCustomImageList* IL, bool ADown, bool AEnabled, bool ADrawColorMarker, Graphics::TColor AColorMarkerValue);
extern PACKAGE void __fastcall DrawGlyphAndText(Graphics::TCanvas* Cnvs, const Types::TRect &R, int Margin, int Spacing, TspButtonLayout Layout, AnsiString Caption, Graphics::TBitmap* Glyph, int NumGlyphs, int GlyphNum, bool ADown, bool ADrawColorMarker, Graphics::TColor AColorMarkerValue);
extern PACKAGE BOOL __fastcall MyGetScrollBarInfo(unsigned wnd, int idObject, tagSCROLLBARINFO &psbi);
extern PACKAGE void __fastcall CorrectTextbyWidth(Graphics::TCanvas* C, AnsiString &S, int W);
extern PACKAGE void __fastcall GetParentImage(Controls::TControl* Control, Graphics::TCanvas* Dest);
extern PACKAGE void __fastcall GetParentImageRect(Controls::TControl* Control, const Types::TRect &Rct, Graphics::TCanvas* Dest);
extern PACKAGE int __fastcall CalcTextWidthW(Graphics::TCanvas* C, WideString Str);
extern PACKAGE int __fastcall CalcTextHeightW(Graphics::TCanvas* C, WideString Str);
extern PACKAGE void __fastcall CorrectTextbyWidthW(Graphics::TCanvas* C, WideString &S, int W);
extern PACKAGE int __fastcall SPDrawSkinText(Graphics::TCanvas* ACanvas, WideString AText, Types::TRect &Bounds, unsigned Flag);
extern PACKAGE void __fastcall SPDrawText(Graphics::TCanvas* Cnvs, AnsiString S, const Types::TRect &R);
extern PACKAGE int __fastcall Max(int A, int B);
extern PACKAGE int __fastcall Min(int A, int B);
extern PACKAGE void __fastcall SPDrawText2(Graphics::TCanvas* Cnvs, AnsiString S, const Types::TRect &R);
extern PACKAGE void __fastcall SPDrawText3(Graphics::TCanvas* Cnvs, AnsiString S, const Types::TRect &R, int HorOffset);
extern PACKAGE void __fastcall DrawTrackArrowImage(Graphics::TCanvas* Cnvs, const Types::TRect &R, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawArrowImage(Graphics::TCanvas* Cnvs, const Types::TRect &R, Graphics::TColor Color, int Code);
extern PACKAGE void __fastcall DrawRadioImage(Graphics::TCanvas* Cnvs, int X, int Y, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawCheckImage(Graphics::TCanvas* Cnvs, int X, int Y, Graphics::TColor Color);
extern PACKAGE bool __fastcall IsJpegFile(AnsiString AFileName);
extern PACKAGE void __fastcall LoadFromJPegImage(Graphics::TBitmap* SB, Jpeg::TJPEGImage* JI);
extern PACKAGE void __fastcall LoadFromJpegStream(Graphics::TBitmap* SB, Classes::TStream* AStream);
extern PACKAGE void __fastcall LoadFromJpegFile(Graphics::TBitmap* SB, AnsiString AFileName);
extern PACKAGE void __fastcall Frm3D(Graphics::TCanvas* Canvas, const Types::TRect &Rect, Graphics::TColor TopColor, Graphics::TColor BottomColor);
extern PACKAGE void __fastcall GetWindowsVersion(int &Major, int &Minor);
extern PACKAGE bool __fastcall IsVistaOs(void);
extern PACKAGE bool __fastcall Is9XOS(void);
extern PACKAGE bool __fastcall CheckWXP(void);
extern PACKAGE bool __fastcall CheckW2KWXP(void);
extern PACKAGE void __fastcall SetAlphaBlendTransparent(HWND WHandle, Byte Value);
extern PACKAGE void __fastcall GetScreenImage(int X, int Y, Graphics::TBitmap* B);
extern PACKAGE bool __fastcall EqPoints(const Types::TPoint &Pt1, const Types::TPoint &Pt2);
extern PACKAGE bool __fastcall EqRects(const Types::TRect &R1, const Types::TRect &R2);
extern PACKAGE Types::TRect __fastcall NullRect();
extern PACKAGE bool __fastcall IsNullRect(const Types::TRect &R);
extern PACKAGE bool __fastcall IsNullPoint(const Types::TPoint &P);
extern PACKAGE bool __fastcall PointInRect(const Types::TRect &R, const Types::TPoint &P);
extern PACKAGE bool __fastcall RectInRect(const Types::TRect &R1, const Types::TRect &R2);
extern PACKAGE Types::TRect __fastcall RectToCenter(Types::TRect &R, const Types::TRect &Bounds);
extern PACKAGE int __fastcall RectWidth(const Types::TRect &R);
extern PACKAGE int __fastcall RectHeight(const Types::TRect &R);
extern PACKAGE Types::TPoint __fastcall GetPoint(AnsiString S);
extern PACKAGE Types::TRect __fastcall GetRect(AnsiString S);
extern PACKAGE AnsiString __fastcall SetRect(const Types::TRect &R);
extern PACKAGE Types::TRect __fastcall ReadRect(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident);
extern PACKAGE Types::TPoint __fastcall ReadPoint(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident);
extern PACKAGE bool __fastcall ReadBoolean(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident);
extern PACKAGE Graphics::TFontStyles __fastcall ReadFontStyles(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident);
extern PACKAGE void __fastcall ReadStrings(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, Classes::TStrings* S);
extern PACKAGE void __fastcall ReadStrings1(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, Classes::TStrings* S);
extern PACKAGE void __fastcall WriteRect(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, const Types::TRect &R);
extern PACKAGE void __fastcall WritePoint(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, const Types::TPoint &P);
extern PACKAGE void __fastcall WriteBoolean(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, bool B);
extern PACKAGE void __fastcall WriteFontStyles(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, Graphics::TFontStyles FS);
extern PACKAGE void __fastcall WriteStrings(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, Classes::TStrings* S);
extern PACKAGE void __fastcall WriteStrings1(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, Classes::TStrings* S);
extern PACKAGE Classes::TAlignment __fastcall ReadAlignment(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident);
extern PACKAGE void __fastcall WriteAlignment(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, Classes::TAlignment A);
extern PACKAGE int __fastcall CreateRgnFromBmp(Graphics::TBitmap* B, int XO, int YO, Windows::PRgnData &RgnData);
extern PACKAGE void __fastcall WriteStringToStream(AnsiString Str, Classes::TStream* S);
extern PACKAGE void __fastcall ReadStringFromStream(AnsiString &Str, Classes::TStream* S);
extern PACKAGE void __fastcall CreateStretchImage(Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R, const Types::TRect &ClRect, bool ADrawClient);
extern PACKAGE void __fastcall CreateHSkinImage(int LO, int RO, Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R, int AW, int AH, bool AStretch);
extern PACKAGE void __fastcall CreateHSkinImage2(int LO, int RO, Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R, int AW, int AH, bool AStretch);
extern PACKAGE void __fastcall CreateHSkinImage3(int LO, int RO, Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R, int AW, int AH, bool AStretch);
extern PACKAGE void __fastcall CreateVSkinImage(int TpO, int BO, Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R, int AW, int AH, bool AStretch);
extern PACKAGE void __fastcall CreateSkinImageBS(const Types::TPoint &LtPt, const Types::TPoint &RTPt, const Types::TPoint &LBPt, const Types::TPoint &RBPt, const Types::TRect &ClRect, const Types::TPoint &NewLTPt, const Types::TPoint &NewRTPt, const Types::TPoint &NewLBPt, const Types::TPoint &NewRBPt, const Types::TRect &NewClRect, Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R, int AW, int AH, bool DrawClient, bool LS, bool TS, bool RS, bool BS, bool AStretchEffect, TspStretchType AStretchType);
extern PACKAGE void __fastcall CreateSkinBG(const Types::TRect &ClRect, const Types::TRect &NewClRect, Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R, int AW, int AH, bool AStretch, TspStretchType AStretchType);
extern PACKAGE void __fastcall CreateSkinImage(const Types::TPoint &LtPt, const Types::TPoint &RTPt, const Types::TPoint &LBPt, const Types::TPoint &RBPt, const Types::TRect &ClRect, const Types::TPoint &NewLTPt, const Types::TPoint &NewRTPt, const Types::TPoint &NewLBPt, const Types::TPoint &NewRBPt, const Types::TRect &NewClRect, Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R, int AW, int AH, bool ADrawClient, bool ALeftStretch, bool ATopStretch, bool ARightStretch, bool ABottomStretch, bool AClientStretch, TspStretchType AStretchType);
extern PACKAGE void __fastcall CreateSkinImage2(const Types::TPoint &LtPt, const Types::TPoint &RTPt, const Types::TPoint &LBPt, const Types::TPoint &RBPt, const Types::TRect &ClRect, const Types::TPoint &NewLTPt, const Types::TPoint &NewRTPt, const Types::TPoint &NewLBPt, const Types::TPoint &NewRBPt, const Types::TRect &NewClRect, Graphics::TBitmap* B, Graphics::TBitmap* SB, const Types::TRect &R, int AW, int AH, bool ADrawClient, bool ALeftStretch, bool ATopStretch, bool ARightStretch, bool ABottomStretch, bool AClientStretch, TspStretchType AStretchType);
extern PACKAGE void __fastcall CreateSkinMask(const Types::TPoint &LtPt, const Types::TPoint &RTPt, const Types::TPoint &LBPt, const Types::TPoint &RBPt, const Types::TRect &ClRect, const Types::TPoint &NewLTPt, const Types::TPoint &NewRTPt, const Types::TPoint &NewLBPt, const Types::TPoint &NewRBPt, const Types::TRect &NewClRect, Graphics::TBitmap* FMask, Graphics::TBitmap* RMTop, Graphics::TBitmap* RMLeft, Graphics::TBitmap* RMRight, Graphics::TBitmap* RMBottom, int AW, int AH);
extern PACKAGE void __fastcall CreateSkinSimplyRegion(HRGN &FRgn, Graphics::TBitmap* FMask);
extern PACKAGE void __fastcall CreateSkinRegion(HRGN &FRgn, const Types::TPoint &LtPt, const Types::TPoint &RTPt, const Types::TPoint &LBPt, const Types::TPoint &RBPt, const Types::TRect &ClRect, const Types::TPoint &NewLTPt, const Types::TPoint &NewRTPt, const Types::TPoint &NewLBPt, const Types::TPoint &NewRBPt, const Types::TRect &NewClRect, Graphics::TBitmap* FMask, int AW, int AH);
extern PACKAGE void __fastcall DrawGlyph(Graphics::TCanvas* Cnvs, int X, int Y, Graphics::TBitmap* FGlyph, int FNumGlyphs, int FGlyphNum);
extern PACKAGE void __fastcall CreateSkinBorderImages(const Types::TPoint &LtPt, const Types::TPoint &RTPt, const Types::TPoint &LBPt, const Types::TPoint &RBPt, const Types::TRect &ClRect, const Types::TPoint &NewLTPt, const Types::TPoint &NewRTPt, const Types::TPoint &NewLBPt, const Types::TPoint &NewRBPt, const Types::TRect &NewClRect, Graphics::TBitmap* LeftB, Graphics::TBitmap* TopB, Graphics::TBitmap* RightB, Graphics::TBitmap* BottomB, Graphics::TBitmap* SB, const Types::TRect &R, int AW, int AH, bool LS, bool TS, bool RS, bool BS);
extern PACKAGE void __fastcall DrawRCloseImage(Graphics::TCanvas* C, const Types::TRect &R, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawCloseImage(Graphics::TCanvas* C, int X, int Y, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawSysMenuImage(Graphics::TCanvas* C, int X, int Y, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawMinimizeImage(Graphics::TCanvas* C, int X, int Y, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawMaximizeImage(Graphics::TCanvas* C, int X, int Y, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawRestoreImage(Graphics::TCanvas* C, int X, int Y, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawRestoreRollUpImage(Graphics::TCanvas* C, int X, int Y, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawRollUpImage(Graphics::TCanvas* C, int X, int Y, Graphics::TColor Color);
extern PACKAGE void __fastcall DrawMTImage(Graphics::TCanvas* C, int X, int Y, Graphics::TColor Color);
extern PACKAGE Word __fastcall ExtractDay(System::TDateTime ADate);
extern PACKAGE Word __fastcall ExtractMonth(System::TDateTime ADate);
extern PACKAGE Word __fastcall ExtractYear(System::TDateTime ADate);
extern PACKAGE bool __fastcall IsLeapYear(int AYear);
extern PACKAGE int __fastcall DaysPerMonth(int AYear, int AMonth);
extern PACKAGE Types::TRect __fastcall GetPrimaryMonitorWorkArea(const bool WorkArea);
extern PACKAGE Types::TRect __fastcall GetMonitorWorkArea(const HWND W, const bool WorkArea);

}	/* namespace Sputils */
using namespace Sputils;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SPUtils
