// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spSkinZip.pas' rev: 6.00

#ifndef spSkinZipHPP
#define spSkinZipHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spskinzip
{
//-- type declarations -------------------------------------------------------
typedef int __stdcall (*TDllPrnt)(char * Buffer, unsigned Size);

typedef int __stdcall (*TDllPassword)(char * P, int N, char * M, char * Name);

typedef char * __stdcall (*TDllComment)(char * Buffer);

typedef int __stdcall (*TDllService)(char * P, unsigned Size);

#pragma pack(push, 4)
struct TZPOpt
{
	char *Date;
	char *szRootDir;
	char *szTempDir;
	BOOL fTemp;
	BOOL fSuffix;
	BOOL fEncrypt;
	BOOL fSystem;
	BOOL fVolume;
	BOOL fExtra;
	BOOL fNoDirEntries;
	BOOL fExcludeDate;
	BOOL fIncludeDate;
	BOOL fVerbose;
	BOOL fQuiet;
	BOOL fCRLF_LF;
	BOOL fLF_CRLF;
	BOOL fJunkDir;
	BOOL fGrow;
	BOOL fForce;
	BOOL fMove;
	BOOL fDeleteEntries;
	BOOL fUpdate;
	BOOL fFreshen;
	BOOL fJunkSFX;
	BOOL fLatestTime;
	BOOL fComment;
	BOOL fOffsets;
	BOOL fPrivilege;
	BOOL fEncryption;
	int fRecurse;
	int fRepair;
	char fLevel;
} ;
#pragma pack(pop)

typedef char *TPCharArray[1];

typedef char * *PCharArray;

#pragma pack(push, 4)
struct TZCL
{
	int argc;
	char *lpszZipFN;
	char * *FNV;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TZipUserFunctions
{
	TDllPrnt Print;
	TDllComment Comment;
	TDllPassword Password;
	TDllService Service;
} ;
#pragma pack(pop)

class DELPHICLASS TspSkinZip;
class PASCALIMPLEMENTATION TspSkinZip : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	void __fastcall SetDummyInitFunctions(TZipUserFunctions &Z);
	void __fastcall SetZipOptions(TZPOpt &Opt);
	
public:
	void __fastcall ZipFiles(AnsiString FileName, Classes::TStrings* FileList);
public:
	#pragma option push -w-inl
	/* TComponent.Create */ inline __fastcall virtual TspSkinZip(Classes::TComponent* AOwner) : Classes::TComponent(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TComponent.Destroy */ inline __fastcall virtual ~TspSkinZip(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE int __stdcall DummyPrint(char * Buffer, unsigned Size);
extern PACKAGE int __stdcall DummyPassword(char * P, int N, char * M, char * Name);
extern PACKAGE char * __stdcall DummyComment(char * Buffer);
extern PACKAGE int __stdcall DummyService(char * Buffer, unsigned Size);

}	/* namespace Spskinzip */
using namespace Spskinzip;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spSkinZip
