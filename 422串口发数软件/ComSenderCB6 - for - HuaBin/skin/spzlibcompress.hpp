// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spzlibcompress.pas' rev: 6.00

#ifndef spzlibcompressHPP
#define spzlibcompressHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <spzlib.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spzlibcompress
{
//-- type declarations -------------------------------------------------------
typedef void * __fastcall (*TAlloc)(void * AppData, int Items, int Size);

typedef void __fastcall (*TFree)(void * AppData, void * Block);

typedef Spzlib::z_stream  TZStreamRec;

class DELPHICLASS TCustomZlibStream;
class PASCALIMPLEMENTATION TCustomZlibStream : public Classes::TStream 
{
	typedef Classes::TStream inherited;
	
private:
	Classes::TStream* FStrm;
	int FStrmPos;
	Classes::TNotifyEvent FOnProgress;
	Spzlib::z_stream FZRec;
	char FBuffer[4096];
	
protected:
	DYNAMIC void __fastcall Progress(System::TObject* Sender);
	__property Classes::TNotifyEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__fastcall TCustomZlibStream(Classes::TStream* Strm);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomZlibStream(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TCompressionLevel { clNone, clFastest, clDefault, clMax };
#pragma option pop

class DELPHICLASS TCompressionStream;
class PASCALIMPLEMENTATION TCompressionStream : public TCustomZlibStream 
{
	typedef TCustomZlibStream inherited;
	
private:
	float __fastcall GetCompressionRate(void);
	
public:
	__fastcall TCompressionStream(TCompressionLevel CompressionLevel, Classes::TStream* Dest);
	__fastcall virtual ~TCompressionStream(void);
	virtual int __fastcall Read(void *Buffer, int Count);
	virtual int __fastcall Write(const void *Buffer, int Count);
	virtual int __fastcall Seek(int Offset, Word Origin)/* overload */;
	__property float CompressionRate = {read=GetCompressionRate};
	__property OnProgress ;
	
/* Hoisted overloads: */
	
public:
	inline __int64 __fastcall  Seek(const __int64 Offset, Classes::TSeekOrigin Origin){ return TStream::Seek(Offset, Origin); }
	
};


class DELPHICLASS TDecompressionStream;
class PASCALIMPLEMENTATION TDecompressionStream : public TCustomZlibStream 
{
	typedef TCustomZlibStream inherited;
	
public:
	__fastcall TDecompressionStream(Classes::TStream* Source);
	__fastcall virtual ~TDecompressionStream(void);
	virtual int __fastcall Read(void *Buffer, int Count);
	virtual int __fastcall Write(const void *Buffer, int Count);
	virtual int __fastcall Seek(int Offset, Word Origin)/* overload */;
	__property OnProgress ;
	
/* Hoisted overloads: */
	
public:
	inline __int64 __fastcall  Seek(const __int64 Offset, Classes::TSeekOrigin Origin){ return TStream::Seek(Offset, Origin); }
	
};


class DELPHICLASS EZlibError;
class PASCALIMPLEMENTATION EZlibError : public Sysutils::Exception 
{
	typedef Sysutils::Exception inherited;
	
public:
	#pragma option push -w-inl
	/* Exception.Create */ inline __fastcall EZlibError(const AnsiString Msg) : Sysutils::Exception(Msg) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall EZlibError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall EZlibError(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall EZlibError(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall EZlibError(const AnsiString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall EZlibError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall EZlibError(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall EZlibError(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~EZlibError(void) { }
	#pragma option pop
	
};


class DELPHICLASS ECompressionError;
class PASCALIMPLEMENTATION ECompressionError : public EZlibError 
{
	typedef EZlibError inherited;
	
public:
	#pragma option push -w-inl
	/* Exception.Create */ inline __fastcall ECompressionError(const AnsiString Msg) : EZlibError(Msg) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall ECompressionError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : EZlibError(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall ECompressionError(int Ident)/* overload */ : EZlibError(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall ECompressionError(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : EZlibError(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall ECompressionError(const AnsiString Msg, int AHelpContext) : EZlibError(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall ECompressionError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : EZlibError(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall ECompressionError(int Ident, int AHelpContext)/* overload */ : EZlibError(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall ECompressionError(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : EZlibError(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~ECompressionError(void) { }
	#pragma option pop
	
};


class DELPHICLASS EDecompressionError;
class PASCALIMPLEMENTATION EDecompressionError : public EZlibError 
{
	typedef EZlibError inherited;
	
public:
	#pragma option push -w-inl
	/* Exception.Create */ inline __fastcall EDecompressionError(const AnsiString Msg) : EZlibError(Msg) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall EDecompressionError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : EZlibError(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall EDecompressionError(int Ident)/* overload */ : EZlibError(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall EDecompressionError(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : EZlibError(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall EDecompressionError(const AnsiString Msg, int AHelpContext) : EZlibError(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall EDecompressionError(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : EZlibError(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall EDecompressionError(int Ident, int AHelpContext)/* overload */ : EZlibError(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall EDecompressionError(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : EZlibError(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~EDecompressionError(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
static const Word BufSize = 0x1000;
#define zlib_version "1.1.4"
extern PACKAGE void __fastcall CompressStream(Classes::TStream* Stream, Classes::TStream* SaveStream);
extern PACKAGE void __fastcall DeCompressStream(Classes::TStream* Stream, Classes::TStream* CompressedStream);

}	/* namespace Spzlibcompress */
using namespace Spzlibcompress;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spzlibcompress
