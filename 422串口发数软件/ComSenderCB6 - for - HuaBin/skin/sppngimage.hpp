// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sppngimage.pas' rev: 6.00

#ifndef sppngimageHPP
#define sppngimageHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <spzlib.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sppngimage
{
//-- type declarations -------------------------------------------------------
typedef tagRGBTRIPLE TRGBLine[65536];

typedef tagRGBTRIPLE *pRGBLine;

#pragma pack(push, 1)
struct TMAXBITMAPINFO
{
	tagBITMAPINFOHEADER bmiHeader;
	tagRGBQUAD bmiColors[256];
} ;
#pragma pack(pop)

#pragma option push -b-
enum TspPngTransparencyMode { bsptmNone, bsptmBit, bsptmPngLayerial };
#pragma option pop

typedef unsigned *pCardinal;

struct TRGBPixel;
typedef TRGBPixel *pRGBPixel;

#pragma pack(push, 1)
struct TRGBPixel
{
	Byte B;
	Byte G;
	Byte R;
} ;
#pragma pack(pop)

typedef Byte TByteArray[65536];

typedef Byte *PByteArray;

typedef void *TPointerArray[65536];

typedef void * *PPointerArray;

class DELPHICLASS TspPngPointerList;
class DELPHICLASS TspPngImage;
#pragma option push -b-
enum TspInterlaceMethod { bsimNone, bsimAdam7 };
#pragma option pop

class DELPHICLASS TspPngList;
class PASCALIMPLEMENTATION TspPngPointerList : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TspPngImage* fOwner;
	unsigned fCount;
	void * *fMemory;
	void * __fastcall GetItem(unsigned Index);
	void __fastcall SetItem(unsigned Index, const void * Value);
	
protected:
	virtual void * __fastcall Remove(void * Value);
	void __fastcall Insert(void * Value, unsigned Position);
	void __fastcall Add(void * Value);
	__property void * Item[unsigned Index] = {read=GetItem, write=SetItem};
	void __fastcall SetSize(const unsigned Size);
	__property TspPngImage* Owner = {read=fOwner};
	
public:
	__property unsigned Count = {read=fCount, write=SetSize, nodefault};
	__fastcall TspPngPointerList(TspPngImage* AOwner);
	__fastcall virtual ~TspPngPointerList(void);
};


class DELPHICLASS TspPngLayer;
typedef TMetaClass*TspPngLayerClass;

class PASCALIMPLEMENTATION TspPngList : public TspPngPointerList 
{
	typedef TspPngPointerList inherited;
	
private:
	HIDESBASE TspPngLayer* __fastcall GetItem(unsigned Index);
	
public:
	TspPngLayer* __fastcall FindPngLayer(TMetaClass* PngLayerClass);
	void __fastcall RemovePngLayer(TspPngLayer* PngLayer)/* overload */;
	HIDESBASE TspPngLayer* __fastcall Add(TMetaClass* PngLayerClass);
	TspPngLayer* __fastcall ItemFromClass(TMetaClass* PngLayerClass);
	__property TspPngLayer* Item[unsigned Index] = {read=GetItem};
public:
	#pragma option push -w-inl
	/* TspPngPointerList.Create */ inline __fastcall TspPngList(TspPngImage* AOwner) : TspPngPointerList(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspPngPointerList.Destroy */ inline __fastcall virtual ~TspPngList(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TspPngFilter { bspfNone, bspfSub, bspfUp, bspfAverage, bspfPaeth };
#pragma option pop

typedef Set<TspPngFilter, bspfNone, bspfPaeth>  TspPngFilters;

typedef Shortint TspCompressionLevel;

class DELPHICLASS TspPngLayerIHDR;
class PASCALIMPLEMENTATION TspPngImage : public Graphics::TGraphic 
{
	typedef Graphics::TGraphic inherited;
	
protected:
	Byte InverseGamma[256];
	void __fastcall InitializeGamma(void);
	
private:
	int fMaxIdatSize;
	TspInterlaceMethod fInterlaceMethod;
	TspPngList* fPngLayerList;
	Graphics::TCanvas* fCanvas;
	TspPngFilters fFilters;
	TspCompressionLevel fCompressionLevel;
	void __fastcall ClearPngLayers(void);
	bool __fastcall HeaderPresent(void);
	void __fastcall GetPixelInfo(unsigned &LineSize, unsigned &Offset);
	PByteArray __fastcall GetAlphaScanline(const int LineIndex);
	void * __fastcall GetScanline(const int LineIndex);
	void * __fastcall GetExtraScanline(const int LineIndex);
	TspPngTransparencyMode __fastcall GetTransparencyMode(void);
	Graphics::TColor __fastcall GetTransparentColor(void);
	void __fastcall SetTransparentColor(const Graphics::TColor Value);
	void __fastcall SetMaxIdatSize(const int Value);
	
protected:
	bool BeingCreated;
	virtual HPALETTE __fastcall GetPalette(void);
	virtual void __fastcall SetPalette(HPALETTE Value);
	void __fastcall DoSetPalette(HPALETTE Value, const bool UpdateColors);
	virtual int __fastcall GetWidth(void);
	virtual int __fastcall GetHeight(void);
	virtual void __fastcall SetWidth(int Value);
	virtual void __fastcall SetHeight(int Value);
	void __fastcall AssignPNG(TspPngImage* Source);
	virtual bool __fastcall GetEmpty(void);
	TspPngLayerIHDR* __fastcall GetHeader(void);
	void __fastcall DrawPngLayerialTrans(HDC DC, const Types::TRect &Rect);
	virtual bool __fastcall GetTransparent(void);
	virtual Graphics::TColor __fastcall GetPixels(const int X, const int Y);
	virtual void __fastcall SetPixels(const int X, const int Y, const Graphics::TColor Value);
	
public:
	Byte GammaTable[256];
	void __fastcall Resize(const int CX, const int CY);
	void __fastcall InitAlpha(void);
	void __fastcall RemoveTransparency(void);
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	void __fastcall AssignHandle(HBITMAP Handle, bool Transparent, unsigned TransparentColor);
	virtual void __fastcall Draw(Graphics::TCanvas* ACanvas, const Types::TRect &Rect);
	__fastcall virtual TspPngImage(void);
	__fastcall TspPngImage(unsigned ColorType, unsigned Bitdepth, int cx, int cy);
	__fastcall virtual ~TspPngImage(void);
	virtual void __fastcall LoadFromStream(Classes::TStream* Stream);
	virtual void __fastcall SaveToStream(Classes::TStream* Stream);
	void __fastcall LoadFromResourceName(unsigned Instance, const AnsiString Name);
	void __fastcall LoadFromResourceID(unsigned Instance, int ResID);
	__property Graphics::TColor TransparentColor = {read=GetTransparentColor, write=SetTransparentColor, nodefault};
	__property void * Scanline[int Index] = {read=GetScanline};
	__property void * ExtraScanline[int Index] = {read=GetExtraScanline};
	__property PByteArray AlphaScanline[int Index] = {read=GetAlphaScanline};
	__property Graphics::TCanvas* Canvas = {read=fCanvas};
	__property TspPngLayerIHDR* Header = {read=GetHeader};
	__property TspPngTransparencyMode TransparencyMode = {read=GetTransparencyMode, nodefault};
	__property int Width = {read=GetWidth, nodefault};
	__property int Height = {read=GetHeight, nodefault};
	__property TspInterlaceMethod InterlaceMethod = {read=fInterlaceMethod, write=fInterlaceMethod, nodefault};
	__property TspPngFilters Filters = {read=fFilters, write=fFilters, nodefault};
	__property int MaxIdatSize = {read=fMaxIdatSize, write=SetMaxIdatSize, nodefault};
	__property bool Empty = {read=GetEmpty, nodefault};
	__property TspCompressionLevel CompressionLevel = {read=fCompressionLevel, write=fCompressionLevel, nodefault};
	__property TspPngList* PngLayers = {read=fPngLayerList};
	__property Graphics::TColor Pixels[int X][int Y] = {read=GetPixels, write=SetPixels};
};



typedef char TspPngLayerName[4];

class PASCALIMPLEMENTATION TspPngLayer : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	void *fData;
	unsigned fDataSize;
	TspPngImage* fOwner;
	char fName[4];
	TspPngLayerIHDR* __fastcall GetHeader(void);
	int __fastcall GetIndex(void);
	/* virtual class method */ virtual AnsiString __fastcall GetName(TMetaClass* vmt);
	AnsiString __fastcall GetPngLayerName();
	
public:
	__fastcall virtual TspPngLayer(TspPngImage* Owner);
	__fastcall virtual ~TspPngLayer(void);
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	bool __fastcall SaveData(Classes::TStream* Stream);
	virtual bool __fastcall SaveToStream(Classes::TStream* Stream);
	void __fastcall ResizeData(const unsigned NewSize);
	virtual void __fastcall Assign(TspPngLayer* Source);
	__property int Index = {read=GetIndex, nodefault};
	__property TspPngLayerIHDR* Header = {read=GetHeader};
	__property void * Data = {read=fData};
	__property unsigned DataSize = {read=fDataSize, nodefault};
	__property TspPngImage* Owner = {read=fOwner};
	__property AnsiString Name = {read=GetPngLayerName};
};


class DELPHICLASS TspPngLayerIEND;
class PASCALIMPLEMENTATION TspPngLayerIEND : public TspPngLayer 
{
	typedef TspPngLayer inherited;
	
public:
	#pragma option push -w-inl
	/* TspPngLayer.Create */ inline __fastcall virtual TspPngLayerIEND(TspPngImage* Owner) : TspPngLayer(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspPngLayer.Destroy */ inline __fastcall virtual ~TspPngLayerIEND(void) { }
	#pragma option pop
	
};


struct TIHDRData;
typedef TIHDRData *pIHDRData;

#pragma pack(push, 1)
struct TIHDRData
{
	unsigned Width;
	unsigned Height;
	Byte BitDepth;
	Byte ColorType;
	Byte CompressionMethod;
	Byte FilterMethod;
	Byte InterlaceMethod;
} ;
#pragma pack(pop)

class PASCALIMPLEMENTATION TspPngLayerIHDR : public TspPngLayer 
{
	typedef TspPngLayer inherited;
	
private:
	HBITMAP ImageHandle;
	HDC ImageDC;
	HPALETTE ImagePalette;
	bool HasPalette;
	#pragma pack(push, 1)
	TMAXBITMAPINFO BitmapInfo;
	#pragma pack(pop)
	
	void *ExtraImageData;
	void *ImageData;
	void *ImageAlpha;
	#pragma pack(push, 1)
	TIHDRData IHDRData;
	#pragma pack(pop)
	
	
protected:
	int BytesPerRow;
	HPALETTE __fastcall CreateGrayscalePalette(int Bitdepth);
	void __fastcall PaletteToDIB(HPALETTE Palette);
	void __fastcall PrepareImageData(void);
	void __fastcall FreeImageData(void);
	
public:
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	virtual bool __fastcall SaveToStream(Classes::TStream* Stream);
	__fastcall virtual TspPngLayerIHDR(TspPngImage* Owner);
	__fastcall virtual ~TspPngLayerIHDR(void);
	virtual void __fastcall Assign(TspPngLayer* Source);
	__property HBITMAP ImageHandleValue = {read=ImageHandle, nodefault};
	__property unsigned Width = {read=IHDRData.Width, write=IHDRData.Width, nodefault};
	__property unsigned Height = {read=IHDRData.Height, write=IHDRData.Height, nodefault};
	__property Byte BitDepth = {read=IHDRData.BitDepth, write=IHDRData.BitDepth, nodefault};
	__property Byte ColorType = {read=IHDRData.ColorType, write=IHDRData.ColorType, nodefault};
	__property Byte CompressionMethod = {read=IHDRData.CompressionMethod, write=IHDRData.CompressionMethod, nodefault};
	__property Byte FilterMethod = {read=IHDRData.FilterMethod, write=IHDRData.FilterMethod, nodefault};
	__property Byte InterlaceMethod = {read=IHDRData.InterlaceMethod, write=IHDRData.InterlaceMethod, nodefault};
};


#pragma option push -b-
enum TUnitType { utUnknown, utMeter };
#pragma option pop

typedef TUnitType *pUnitType;

class DELPHICLASS TspPngLayerpHYs;
class PASCALIMPLEMENTATION TspPngLayerpHYs : public TspPngLayer 
{
	typedef TspPngLayer inherited;
	
private:
	unsigned fPPUnitX;
	unsigned fPPUnitY;
	TUnitType fUnit;
	
public:
	__property unsigned PPUnitX = {read=fPPUnitX, write=fPPUnitX, nodefault};
	__property unsigned PPUnitY = {read=fPPUnitY, write=fPPUnitY, nodefault};
	__property TUnitType UnitType = {read=fUnit, write=fUnit, nodefault};
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	virtual bool __fastcall SaveToStream(Classes::TStream* Stream);
	virtual void __fastcall Assign(TspPngLayer* Source);
public:
	#pragma option push -w-inl
	/* TspPngLayer.Create */ inline __fastcall virtual TspPngLayerpHYs(TspPngImage* Owner) : TspPngLayer(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspPngLayer.Destroy */ inline __fastcall virtual ~TspPngLayerpHYs(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspPngLayergAMA;
class PASCALIMPLEMENTATION TspPngLayergAMA : public TspPngLayer 
{
	typedef TspPngLayer inherited;
	
private:
	unsigned __fastcall GetValue(void);
	void __fastcall SetValue(const unsigned Value);
	
public:
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	__fastcall virtual TspPngLayergAMA(TspPngImage* Owner);
	virtual void __fastcall Assign(TspPngLayer* Source);
	__property unsigned Gamma = {read=GetValue, write=SetValue, nodefault};
public:
	#pragma option push -w-inl
	/* TspPngLayer.Destroy */ inline __fastcall virtual ~TspPngLayergAMA(void) { }
	#pragma option pop
	
};


#pragma pack(push, 1)
struct TZStreamRec2
{
	Spzlib::z_stream ZLIB;
	void *Data;
	Classes::TStream* fStream;
} ;
#pragma pack(pop)

class DELPHICLASS TspPngLayerPLTE;
class PASCALIMPLEMENTATION TspPngLayerPLTE : public TspPngLayer 
{
	typedef TspPngLayer inherited;
	
protected:
	int fCount;
	
private:
	tagRGBQUAD __fastcall GetPaletteItem(Byte Index);
	
public:
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	virtual bool __fastcall SaveToStream(Classes::TStream* Stream);
	virtual void __fastcall Assign(TspPngLayer* Source);
	__property tagRGBQUAD Item[Byte Index] = {read=GetPaletteItem};
	__property int Count = {read=fCount, nodefault};
public:
	#pragma option push -w-inl
	/* TspPngLayer.Create */ inline __fastcall virtual TspPngLayerPLTE(TspPngImage* Owner) : TspPngLayer(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspPngLayer.Destroy */ inline __fastcall virtual ~TspPngLayerPLTE(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspPngLayertRNS;
class PASCALIMPLEMENTATION TspPngLayertRNS : public TspPngLayer 
{
	typedef TspPngLayer inherited;
	
private:
	bool fBitTransparency;
	unsigned __fastcall GetTransparentColor(void);
	void __fastcall SetTransparentColor(const unsigned Value);
	
public:
	Byte PaletteValues[256];
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	virtual bool __fastcall SaveToStream(Classes::TStream* Stream);
	virtual void __fastcall Assign(TspPngLayer* Source);
	__property bool BitTransparency = {read=fBitTransparency, nodefault};
	__property unsigned TransparentColor = {read=GetTransparentColor, write=SetTransparentColor, nodefault};
public:
	#pragma option push -w-inl
	/* TspPngLayer.Create */ inline __fastcall virtual TspPngLayertRNS(TspPngImage* Owner) : TspPngLayer(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspPngLayer.Destroy */ inline __fastcall virtual ~TspPngLayertRNS(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspPngLayerIDAT;
class PASCALIMPLEMENTATION TspPngLayerIDAT : public TspPngLayer 
{
	typedef TspPngLayer inherited;
	
private:
	TspPngLayerIHDR* Header;
	int ImageWidth;
	int ImageHeight;
	unsigned Row_Bytes;
	unsigned Offset;
	Byte *Encode_Buffer[6];
	Byte *Row_Buffer[2];
	bool RowUsed;
	int EndPos;
	void __fastcall FilterRow(void);
	Byte __fastcall FilterToEncode(void);
	int __fastcall IDATZlibRead(TZStreamRec2 &ZLIBStream, void * Buffer, int Count, int &EndPos, unsigned &crcfile);
	void __fastcall IDATZlibWrite(TZStreamRec2 &ZLIBStream, void * Buffer, const unsigned Length);
	void __fastcall FinishIDATZlib(TZStreamRec2 &ZLIBStream);
	void __fastcall PreparePalette(void);
	
protected:
	void __fastcall DecodeInterlacedAdam7(Classes::TStream* Stream, TZStreamRec2 &ZLIBStream, const int Size, unsigned &crcfile);
	void __fastcall DecodeNonInterlaced(Classes::TStream* Stream, TZStreamRec2 &ZLIBStream, const int Size, unsigned &crcfile);
	void __fastcall EncodeNonInterlaced(Classes::TStream* Stream, TZStreamRec2 &ZLIBStream);
	void __fastcall EncodeInterlacedAdam7(Classes::TStream* Stream, TZStreamRec2 &ZLIBStream);
	void __fastcall CopyNonInterlacedRGB8(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyNonInterlacedRGB16(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyNonInterlacedPalette148(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyNonInterlacedPalette2(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyNonInterlacedGray2(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyNonInterlacedGrayscale16(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyNonInterlacedRGBAlpha8(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyNonInterlacedRGBAlpha16(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyNonInterlacedGrayscaleAlpha8(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyNonInterlacedGrayscaleAlpha16(char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedRGB8(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedRGB16(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedPalette148(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedPalette2(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedGray2(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedGrayscale16(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedRGBAlpha8(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedRGBAlpha16(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedGrayscaleAlpha8(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall CopyInterlacedGrayscaleAlpha16(const Byte Pass, char * Src, char * Dest, char * Trans, char * Extra);
	void __fastcall EncodeNonInterlacedRGB8(char * Src, char * Dest, char * Trans);
	void __fastcall EncodeNonInterlacedRGB16(char * Src, char * Dest, char * Trans);
	void __fastcall EncodeNonInterlacedGrayscale16(char * Src, char * Dest, char * Trans);
	void __fastcall EncodeNonInterlacedPalette148(char * Src, char * Dest, char * Trans);
	void __fastcall EncodeNonInterlacedRGBAlpha8(char * Src, char * Dest, char * Trans);
	void __fastcall EncodeNonInterlacedRGBAlpha16(char * Src, char * Dest, char * Trans);
	void __fastcall EncodeNonInterlacedGrayscaleAlpha8(char * Src, char * Dest, char * Trans);
	void __fastcall EncodeNonInterlacedGrayscaleAlpha16(char * Src, char * Dest, char * Trans);
	void __fastcall EncodeInterlacedRGB8(const Byte Pass, char * Src, char * Dest, char * Trans);
	void __fastcall EncodeInterlacedRGB16(const Byte Pass, char * Src, char * Dest, char * Trans);
	void __fastcall EncodeInterlacedPalette148(const Byte Pass, char * Src, char * Dest, char * Trans);
	void __fastcall EncodeInterlacedGrayscale16(const Byte Pass, char * Src, char * Dest, char * Trans);
	void __fastcall EncodeInterlacedRGBAlpha8(const Byte Pass, char * Src, char * Dest, char * Trans);
	void __fastcall EncodeInterlacedRGBAlpha16(const Byte Pass, char * Src, char * Dest, char * Trans);
	void __fastcall EncodeInterlacedGrayscaleAlpha8(const Byte Pass, char * Src, char * Dest, char * Trans);
	void __fastcall EncodeInterlacedGrayscaleAlpha16(const Byte Pass, char * Src, char * Dest, char * Trans);
	
public:
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	virtual bool __fastcall SaveToStream(Classes::TStream* Stream);
public:
	#pragma option push -w-inl
	/* TspPngLayer.Create */ inline __fastcall virtual TspPngLayerIDAT(TspPngImage* Owner) : TspPngLayer(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspPngLayer.Destroy */ inline __fastcall virtual ~TspPngLayerIDAT(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspPngLayertIME;
class PASCALIMPLEMENTATION TspPngLayertIME : public TspPngLayer 
{
	typedef TspPngLayer inherited;
	
private:
	Word fYear;
	Byte fMonth;
	Byte fDay;
	Byte fHour;
	Byte fMinute;
	Byte fSecond;
	
public:
	__property Word Year = {read=fYear, write=fYear, nodefault};
	__property Byte Month = {read=fMonth, write=fMonth, nodefault};
	__property Byte Day = {read=fDay, write=fDay, nodefault};
	__property Byte Hour = {read=fHour, write=fHour, nodefault};
	__property Byte Minute = {read=fMinute, write=fMinute, nodefault};
	__property Byte Second = {read=fSecond, write=fSecond, nodefault};
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	virtual bool __fastcall SaveToStream(Classes::TStream* Stream);
	virtual void __fastcall Assign(TspPngLayer* Source);
public:
	#pragma option push -w-inl
	/* TspPngLayer.Create */ inline __fastcall virtual TspPngLayertIME(TspPngImage* Owner) : TspPngLayer(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspPngLayer.Destroy */ inline __fastcall virtual ~TspPngLayertIME(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspPngLayertEXt;
class PASCALIMPLEMENTATION TspPngLayertEXt : public TspPngLayer 
{
	typedef TspPngLayer inherited;
	
private:
	AnsiString fKeyword;
	AnsiString fText;
	
public:
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	virtual bool __fastcall SaveToStream(Classes::TStream* Stream);
	virtual void __fastcall Assign(TspPngLayer* Source);
	__property AnsiString Keyword = {read=fKeyword, write=fKeyword};
	__property AnsiString Text = {read=fText, write=fText};
public:
	#pragma option push -w-inl
	/* TspPngLayer.Create */ inline __fastcall virtual TspPngLayertEXt(TspPngImage* Owner) : TspPngLayer(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspPngLayer.Destroy */ inline __fastcall virtual ~TspPngLayertEXt(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspPngLayerzTXt;
class PASCALIMPLEMENTATION TspPngLayerzTXt : public TspPngLayertEXt 
{
	typedef TspPngLayertEXt inherited;
	
public:
	virtual bool __fastcall LoadFromStream(Classes::TStream* Stream, const char * PngLayerName, int Size);
	virtual bool __fastcall SaveToStream(Classes::TStream* Stream);
public:
	#pragma option push -w-inl
	/* TspPngLayer.Create */ inline __fastcall virtual TspPngLayerzTXt(TspPngImage* Owner) : TspPngLayertEXt(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspPngLayer.Destroy */ inline __fastcall virtual ~TspPngLayerzTXt(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Shortint Z_NO_FLUSH = 0x0;
static const Shortint Z_FINISH = 0x4;
static const Shortint Z_STREAM_END = 0x1;
static const Shortint FILTER_NONE = 0x0;
static const Shortint FILTER_SUB = 0x1;
static const Shortint FILTER_UP = 0x2;
static const Shortint FILTER_AVERAGE = 0x3;
static const Shortint FILTER_PAETH = 0x4;
static const Shortint COLOR_GRAYSCALE = 0x0;
static const Shortint COLOR_RGB = 0x2;
static const Shortint COLOR_PALETTE = 0x3;
static const Shortint COLOR_GRAYSCALEALPHA = 0x4;
static const Shortint COLOR_RGBALPHA = 0x6;
extern PACKAGE unsigned __fastcall update_crc(int crc, PByteArray buf, int len);
extern PACKAGE int __fastcall ByteSwap(const int a);
extern PACKAGE void __fastcall RegisterPngLayer(TMetaClass* PngLayerClass);

}	/* namespace Sppngimage */
using namespace Sppngimage;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sppngimage
