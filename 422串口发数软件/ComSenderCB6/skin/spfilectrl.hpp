// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spfilectrl.pas' rev: 6.00

#ifndef spfilectrlHPP
#define spfilectrlHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SkinCtrls.hpp>	// Pascal unit
#include <SkinBoxCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spfilectrl
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TspFileAttr { spftReadOnly, spftHidden, spftSystem, spftVolumeID, spftDirectory, spftArchive, spftNormal };
#pragma option pop

typedef Set<TspFileAttr, spftReadOnly, spftNormal>  TspFileType;

#pragma option push -b-
enum TspDriveType { vdtUnknown, spdtNoDrive, spdtFloppy, spdtFixed, spdtNetwork, spdtCDROM, spdtRAM };
#pragma option pop

class DELPHICLASS TspSkinFileListBox;
class DELPHICLASS TspSkinDirectoryListBox;
class DELPHICLASS TspSkinDriveComboBox;
#pragma option push -b-
enum TTextCase { tcLowerCase, tcUpperCase };
#pragma option pop

class PASCALIMPLEMENTATION TspSkinDriveComboBox : public Skinboxctrls::TspSkinComboBox 
{
	typedef Skinboxctrls::TspSkinComboBox inherited;
	
private:
	TspSkinDirectoryListBox* FDirList;
	char FDrive;
	TTextCase FTextCase;
	void __fastcall SetDirListBox(TspSkinDirectoryListBox* Value);
	void __fastcall SetDrive(char NewDrive);
	void __fastcall SetTextCase(TTextCase NewTextCase);
	void __fastcall ReadBitmaps(void);
	
protected:
	Graphics::TBitmap* FloppyBMP;
	Graphics::TBitmap* FixedBMP;
	Graphics::TBitmap* NetworkBMP;
	Graphics::TBitmap* CDROMBMP;
	Graphics::TBitmap* RAMBMP;
	virtual void __fastcall CreateWnd(void);
	void __fastcall DrawItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	void __fastcall NewChange(System::TObject* Sender);
	virtual void __fastcall BuildList(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TspSkinDriveComboBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinDriveComboBox(void);
	__property Text ;
	__property char Drive = {read=FDrive, write=SetDrive, nodefault};
	
__published:
	__property Anchors  = {default=3};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property Ctl3D ;
	__property TspSkinDirectoryListBox* DirList = {read=FDirList, write=SetDirListBox};
	__property DragMode  = {default=0};
	__property DragCursor  = {default=-12};
	__property Enabled  = {default=1};
	__property Font ;
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property ParentColor  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property TTextCase TextCase = {read=FTextCase, write=SetTextCase, default=0};
	__property Visible  = {default=1};
	__property OnChange ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinDriveComboBox(HWND ParentWindow) : Skinboxctrls::TspSkinComboBox(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspSkinDirectoryListBox : public Skinboxctrls::TspSkinListBox 
{
	typedef Skinboxctrls::TspSkinListBox inherited;
	
private:
	TspSkinFileListBox* FFileList;
	TspSkinDriveComboBox* FDriveCombo;
	Skinctrls::TspSkinStdLabel* FDirLabel;
	bool FInSetDir;
	bool FPreserveCase;
	bool FCaseSensitive;
	char __fastcall GetDrive(void);
	void __fastcall SetFileListBox(TspSkinFileListBox* Value);
	void __fastcall SetDirLabel(Skinctrls::TspSkinStdLabel* Value);
	void __fastcall SetDirLabelCaption(void);
	void __fastcall SetDrive(char Value);
	void __fastcall DriveChange(char NewDrive);
	void __fastcall SetDir(const AnsiString NewDirectory);
	virtual void __fastcall SetDirectory(const AnsiString NewDirectory);
	
protected:
	Graphics::TBitmap* ClosedBMP;
	Graphics::TBitmap* OpenedBMP;
	Graphics::TBitmap* CurrentBMP;
	AnsiString FDirectory;
	Classes::TNotifyEvent FOnChange;
	virtual void __fastcall Change(void);
	virtual void __fastcall ListBoxDblClick(void);
	virtual void __fastcall ReadBitmaps(void);
	virtual void __fastcall CreateWnd(void);
	void __fastcall DrawItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	int __fastcall ReadDirectoryNames(const AnsiString ParentDirectory, Classes::TStringList* DirectoryList);
	virtual void __fastcall BuildList(void);
	virtual void __fastcall ListBoxKeyPress(char &Key);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall Loaded(void);
	virtual int __fastcall GetFullItemWidth(int Index, Graphics::TCanvas* ACnvs);
	
public:
	__fastcall virtual TspSkinDirectoryListBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinDirectoryListBox(void);
	AnsiString __fastcall DisplayCase(const AnsiString S);
	int __fastcall FileCompareText(const AnsiString A, const AnsiString B);
	AnsiString __fastcall GetItemPath(int Index);
	void __fastcall OpenCurrent(void);
	HIDESBASE void __fastcall Update(void);
	__property char Drive = {read=GetDrive, write=SetDrive, nodefault};
	__property AnsiString Directory = {read=FDirectory, write=SetDirectory};
	__property bool PreserveCase = {read=FPreserveCase, nodefault};
	__property bool CaseSensitive = {read=FCaseSensitive, nodefault};
	
__published:
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property Color  = {default=-2147483643};
	__property Columns ;
	__property Constraints ;
	__property Ctl3D ;
	__property Skinctrls::TspSkinStdLabel* DirLabel = {read=FDirLabel, write=SetDirLabel};
	__property DragCursor  = {default=-12};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property TspSkinFileListBox* FileList = {read=FFileList, write=SetFileListBox};
	__property Font ;
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinDirectoryListBox(HWND ParentWindow) : Skinboxctrls::TspSkinListBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFilterComboBox;
class PASCALIMPLEMENTATION TspSkinFilterComboBox : public Skinboxctrls::TspSkinComboBox 
{
	typedef Skinboxctrls::TspSkinComboBox inherited;
	
private:
	AnsiString FFilter;
	TspSkinFileListBox* FFileList;
	Classes::TStringList* MaskList;
	bool __fastcall IsFilterStored(void);
	AnsiString __fastcall GetMask();
	void __fastcall SetFilter(const AnsiString NewFilter);
	void __fastcall SeTspSkinFileListBox(TspSkinFileListBox* Value);
	
protected:
	virtual void __fastcall Change(void);
	virtual void __fastcall CreateWnd(void);
	DYNAMIC void __fastcall Click(void);
	void __fastcall BuildList(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinFilterComboBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinFilterComboBox(void);
	__property AnsiString Mask = {read=GetMask};
	__property Text ;
	
__published:
	__property Anchors  = {default=3};
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property Ctl3D ;
	__property DragMode  = {default=0};
	__property DragCursor  = {default=-12};
	__property Enabled  = {default=1};
	__property TspSkinFileListBox* FileList = {read=FFileList, write=SeTspSkinFileListBox};
	__property AnsiString Filter = {read=FFilter, write=SetFilter, stored=IsFilterStored};
	__property Font ;
	__property ImeName ;
	__property ImeMode  = {default=3};
	__property ParentColor  = {default=1};
	__property ParentCtl3D  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property OnChange ;
	__property OnClick ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinFilterComboBox(HWND ParentWindow) : Skinboxctrls::TspSkinComboBox(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspSkinFileListBox : public Skinboxctrls::TspSkinListBox 
{
	typedef Skinboxctrls::TspSkinListBox inherited;
	
private:
	char __fastcall GetDrive(void);
	AnsiString __fastcall GetFileName();
	bool __fastcall IsMaskStored(void);
	void __fastcall SetDrive(char Value);
	void __fastcall SetFileEdit(Stdctrls::TEdit* Value);
	void __fastcall SetDirectory(const AnsiString NewDirectory);
	void __fastcall SetFileType(TspFileType NewFileType);
	void __fastcall SetMask(const AnsiString NewMask);
	void __fastcall SetFileName(const AnsiString NewFile);
	
protected:
	AnsiString FDirectory;
	AnsiString FMask;
	TspFileType FFileType;
	Stdctrls::TEdit* FFileEdit;
	TspSkinDirectoryListBox* FDirList;
	TspSkinFilterComboBox* FFilterCombo;
	Classes::TNotifyEvent FOnChange;
	int FLastSel;
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall ListBoxClick(void);
	virtual void __fastcall Change(void);
	virtual void __fastcall ReadFileNames(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual AnsiString __fastcall GetFilePath();
	virtual void __fastcall Loaded(void);
	
public:
	__fastcall virtual TspSkinFileListBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinFileListBox(void);
	HIDESBASE void __fastcall Update(void);
	virtual void __fastcall ApplyFilePath(const AnsiString EditText);
	__property char Drive = {read=GetDrive, write=SetDrive, nodefault};
	__property AnsiString Directory = {read=FDirectory, write=ApplyFilePath};
	__property AnsiString FileName = {read=GetFilePath, write=ApplyFilePath};
	
__published:
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property DragCursor  = {default=-12};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Stdctrls::TEdit* FileEdit = {read=FFileEdit, write=SetFileEdit};
	__property TspFileType FileType = {read=FFileType, write=SetFileType, default=64};
	__property Font ;
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property AnsiString Mask = {read=FMask, write=SetMask, stored=IsMaskStored};
	__property MultiSelect ;
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=0};
	__property Visible  = {default=1};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinFileListBox(HWND ParentWindow) : Skinboxctrls::TspSkinListBox(ParentWindow) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TSelectDirOpt { sdAllowCreate, sdPerformCreate, sdPrompt };
#pragma option pop

typedef Set<TSelectDirOpt, sdAllowCreate, sdPrompt>  TSelectDirOpts;

//-- var, const, procedure ---------------------------------------------------
static const Shortint WNTYPE_DRIVE = 0x1;
extern PACKAGE bool __fastcall DirectoryExists(const AnsiString Name);
extern PACKAGE bool __fastcall ForceDirectories(AnsiString Dir);
extern PACKAGE AnsiString __fastcall MinimizeName(const AnsiString Filename, Graphics::TCanvas* Canvas, int MaxLen);
extern PACKAGE void __fastcall ProcessPath(const AnsiString EditText, char &Drive, AnsiString &DirPart, AnsiString &FilePart);

}	/* namespace Spfilectrl */
using namespace Spfilectrl;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spfilectrl
