// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spSkinUnZip.pas' rev: 6.00

#ifndef spSkinUnZipHPP
#define spSkinUnZipHPP

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

namespace Spskinunzip
{
//-- type declarations -------------------------------------------------------
typedef int __stdcall (*TDllPrnt)(char * Buffer, unsigned Size);

typedef int __stdcall (*TDllPassword)(char * P, int N, char * M, char * Name);

typedef int __stdcall (*TDllService)(char * CurFile, unsigned Size);

typedef void __stdcall (*TDllSnd)(void);

typedef int __stdcall (*TDllReplace)(char * FileName);

typedef void __stdcall (*TDllMessage)(unsigned UnCompSize, unsigned CompSize, unsigned Factor, unsigned Month, unsigned Day, unsigned Year, unsigned Hour, unsigned Minute, char C, char * FileName, char * MethBuf, unsigned CRC, char Crypt);

#pragma pack(push, 4)
struct TUserFunctions
{
	TDllPrnt Print;
	TDllSnd Sound;
	TDllReplace Replace;
	TDllPassword Password;
	TDllMessage SendApplicationMessage;
	TDllService ServCallBk;
	unsigned TotalSizeComp;
	unsigned TotalSize;
	int CompFactor;
	unsigned NumMembers;
	unsigned cchComment;
} ;
#pragma pack(pop)

#pragma pack(push, 4)
struct TDCL
{
	int ExtractOnlyNewer;
	int SpaceToUnderscore;
	int PromptToOverwrite;
	int fQuiet;
	int nCFlag;
	int nTFlag;
	int nVFlag;
	int nUFlag;
	int nZFlag;
	int nDFlag;
	int nOFlag;
	int nAFlag;
	int nZIFlag;
	int C_flag;
	int fPrivilege;
	char *lpszZipFN;
	char *lpszExtractDir;
} ;
#pragma pack(pop)

class DELPHICLASS TspSkinUnZip;
class PASCALIMPLEMENTATION TspSkinUnZip : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	void __fastcall SetUserFunctions(TUserFunctions &UF);
	void __fastcall SetUnZipOptions(TDCL &AOptions, char * &AFileName, char * &ADirName);
	
public:
	void __fastcall UnZipToDir(AnsiString AFileName, AnsiString ADir);
public:
	#pragma option push -w-inl
	/* TComponent.Create */ inline __fastcall virtual TspSkinUnZip(Classes::TComponent* AOwner) : Classes::TComponent(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TComponent.Destroy */ inline __fastcall virtual ~TspSkinUnZip(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE int __stdcall DllPrnt(char * Buffer, unsigned Size);
extern PACKAGE int __stdcall DllReplace(char * FileName);
extern PACKAGE int __stdcall DllPassword(char * P, int N, char * M, char * Name);
extern PACKAGE int __stdcall DllService(char * CurFile, unsigned Size);
extern PACKAGE void __stdcall DllMessage(unsigned UnCompSize, unsigned CompSize, unsigned Factor, unsigned Month, unsigned Day, unsigned Year, unsigned Hour, unsigned Minute, char C, char * FileName, char * MethBuf, unsigned CRC, char Crypt);

}	/* namespace Spskinunzip */
using namespace Spskinunzip;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spSkinUnZip
