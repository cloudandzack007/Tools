// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spEffBmp.pas' rev: 6.00

#ifndef spEffBmpHPP
#define spEffBmpHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Speffbmp
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 1)
struct TFColor
{
	Byte b;
	Byte g;
	Byte r;
} ;
#pragma pack(pop)

typedef TFColor *PFColor;

typedef TFColor TLine[1];

typedef TFColor *PLine;

class DELPHICLASS TspEffectBmp;
class PASCALIMPLEMENTATION TspEffectBmp : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	void __fastcall SetPixel(int x, int y, int Clr);
	int __fastcall GetPixel(int x, int y);
	void __fastcall SetLine(int y, void * Line);
	void * __fastcall GetLine(int y);
	
public:
	int Handle;
	int Width;
	int Height;
	int Size;
	void *Bits;
	#pragma pack(push, 1)
	tagBITMAPINFOHEADER BmpHeader;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	tagBITMAPINFO BmpInfo;
	#pragma pack(pop)
	
	__fastcall TspEffectBmp(int cx, int cy);
	__fastcall TspEffectBmp(int hBmp);
	__fastcall TspEffectBmp(TspEffectBmp* hBmp);
	__fastcall virtual ~TspEffectBmp(void);
	__property int Pixels[int x][int y] = {read=GetPixel, write=SetPixel};
	__property void * ScanLines[int y] = {read=GetLine, write=SetLine};
	void __fastcall GetScanLine(int y, void * Line);
	void __fastcall Resize(TspEffectBmp* Dst);
	void __fastcall Draw(int hDC, int x, int y);
	void __fastcall Stretch(int hDC, int x, int y, int cx, int cy);
	void __fastcall DrawRect(int hDC, int hx, int hy, int x, int y, int cx, int cy);
	void __fastcall CopyRect(TspEffectBmp* BMP, const Types::TRect &Rct, int StartX, int StartY);
	void __fastcall MorphRect(TspEffectBmp* BMP, double Kf, const Types::TRect &Rct, int StartX, int StartY);
	void __fastcall Morph(TspEffectBmp* BMP, double Kf);
	void __fastcall MorphHGrad(TspEffectBmp* BMP, double Kf);
	void __fastcall MorphVGrad(TspEffectBmp* BMP, double Kf);
	void __fastcall MorphGrad(TspEffectBmp* BMP, double Kf);
	void __fastcall MorphLeftGrad(TspEffectBmp* BMP, double Kf);
	void __fastcall MorphRightGrad(TspEffectBmp* BMP, double Kf);
	void __fastcall MorphLeftSlide(TspEffectBmp* BMP, double Kf);
	void __fastcall MorphRightSlide(TspEffectBmp* BMP, double Kf);
	void __fastcall MorphPush(TspEffectBmp* BMP, double Kf);
	void __fastcall ChangeBrightness(double Kf);
	void __fastcall ChangeDarkness(double Kf);
	void __fastcall GrayScale(void);
	void __fastcall SplitBlur(int Amount);
	void __fastcall Mosaic(int ASize);
	void __fastcall Invert(void);
	void __fastcall AddColorNoise(int Amount);
	void __fastcall AddMonoNoise(int Amount);
	void __fastcall Rotate90_1(TspEffectBmp* Dst);
	void __fastcall Rotate90_2(TspEffectBmp* Dst);
	void __fastcall FlipVert(TspEffectBmp* Dst);
	void __fastcall Wave(int XDIV, int YDIV, int RatioVal);
	void __fastcall MaskAntialiasing(TspEffectBmp* Msk, int Amount);
	void __fastcall MaskBlur(TspEffectBmp* Msk, int Amount);
	void __fastcall MaskFillColor(TspEffectBmp* Msk, Graphics::TColor C, double kf);
};


typedef TspEffectBmp* *PEfBmp;

//-- var, const, procedure ---------------------------------------------------

}	/* namespace Speffbmp */
using namespace Speffbmp;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spEffBmp
