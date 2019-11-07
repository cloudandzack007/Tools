// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spSkinShellCtrls.pas' rev: 6.00

#ifndef spSkinShellCtrlsHPP
#define spSkinShellCtrlsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Mask.hpp>	// Pascal unit
#include <SkinMenus.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <spfilectrl.hpp>	// Pascal unit
#include <SkinBoxCtrls.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <DynamicSkinForm.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ActiveX.hpp>	// Pascal unit
#include <ShlObj.hpp>	// Pascal unit
#include <CommCtrl.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
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

namespace Spskinshellctrls
{
//-- type declarations -------------------------------------------------------
typedef AnsiString TRoot;

#pragma option push -b-
enum TspRootFolder { rfDesktop, rfMyComputer, rfNetwork, rfRecycleBin, rfAppData, rfCommonDesktopDirectory, rfCommonPrograms, rfCommonStartMenu, rfCommonStartup, rfControlPanel, rfDesktopDirectory, rfFavorites, rfFonts, rfInternet, rfPersonal, rfPrinters, rfPrintHood, rfPrograms, rfRecent, rfSendTo, rfStartMenu, rfStartup, rfTemplates };
#pragma option pop

#pragma option push -b-
enum TspShellFolderCapability { fcCanCopy, fcCanDelete, fcCanLink, fcCanMove, fcCanRename, fcDropTarget, fcHasPropSheet };
#pragma option pop

typedef Set<TspShellFolderCapability, fcCanCopy, fcHasPropSheet>  TspShellFolderCapabilities;

#pragma option push -b-
enum TspShellFolderProperty { fpCut, fpIsLink, fpReadOnly, fpShared, fpFileSystem, fpFileSystemAncestor, fpRemovable, fpValidate };
#pragma option pop

typedef Set<TspShellFolderProperty, fpCut, fpValidate>  TspShellFolderProperties;

#pragma option push -b-
enum TShellObjectType { otFolders, otNonFolders, otHidden };
#pragma option pop

typedef Set<TShellObjectType, otFolders, otHidden>  TShellObjectTypes;

class DELPHICLASS EInvalidPath;
class PASCALIMPLEMENTATION EInvalidPath : public Sysutils::Exception 
{
	typedef Sysutils::Exception inherited;
	
public:
	#pragma option push -w-inl
	/* Exception.Create */ inline __fastcall EInvalidPath(const AnsiString Msg) : Sysutils::Exception(Msg) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmt */ inline __fastcall EInvalidPath(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateRes */ inline __fastcall EInvalidPath(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmt */ inline __fastcall EInvalidPath(int Ident, const System::TVarRec * Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateHelp */ inline __fastcall EInvalidPath(const AnsiString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateFmtHelp */ inline __fastcall EInvalidPath(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResHelp */ inline __fastcall EInvalidPath(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	#pragma option pop
	#pragma option push -w-inl
	/* Exception.CreateResFmtHelp */ inline __fastcall EInvalidPath(System::PResStringRec ResStringRec, const System::TVarRec * Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~EInvalidPath(void) { }
	#pragma option pop
	
};


__interface IShellCommandVerb;
typedef System::DelphiInterface<IShellCommandVerb> _di_IShellCommandVerb;
__interface INTERFACE_UUID("{7D2A7245-2376-4D33-8008-A130935A2E8B}") IShellCommandVerb  : public IInterface 
{
	
public:
	virtual void __fastcall ExecuteCommand(AnsiString Verb, bool &Handled) = 0 ;
	virtual void __fastcall CommandCompleted(AnsiString Verb, bool Succeeded) = 0 ;
};

class DELPHICLASS TspShellFolder;
class PASCALIMPLEMENTATION TspShellFolder : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	_ITEMIDLIST *FPIDL;
	_ITEMIDLIST *FFullPIDL;
	TspShellFolder* FParent;
	_di_IShellFolder FIShellFolder;
	_di_IShellFolder2 FIShellFolder2;
	Shlobj::_di_IShellDetails FIShellDetails;
	System::_di_IInterface FDetailInterface;
	int FLevel;
	unsigned FViewHandle;
	Classes::TStrings* FDetails;
	System::_di_IInterface __fastcall GetDetailInterface();
	Shlobj::_di_IShellDetails __fastcall GetShellDetails();
	_di_IShellFolder2 __fastcall GetShellFolder2();
	AnsiString __fastcall GetDetails(int Index);
	void __fastcall SetDetails(int Index, const AnsiString Value);
	void __fastcall LoadColumnDetails(TspShellFolder* RootFolder, unsigned Handle, int ColumnCount);
	
public:
	__fastcall virtual TspShellFolder(TspShellFolder* AParent, Shlobj::PItemIDList ID, _di_IShellFolder SF);
	__fastcall virtual ~TspShellFolder(void);
	TspShellFolderCapabilities __fastcall Capabilities(void);
	AnsiString __fastcall DisplayName();
	AnsiString __fastcall FullObjectName();
	int __fastcall ExecuteDefault(void);
	int __fastcall ImageIndex(bool LargeIcon);
	bool __fastcall IsFolder(void);
	_di_IShellFolder __fastcall ParentShellFolder();
	AnsiString __fastcall PathName();
	TspShellFolderProperties __fastcall Properties(void);
	bool __fastcall Rename(const WideString NewName);
	bool __fastcall SubFolders(void);
	__property Shlobj::PItemIDList AbsoluteID = {read=FFullPIDL};
	__property AnsiString Details[int Index] = {read=GetDetails, write=SetDetails};
	__property int Level = {read=FLevel, nodefault};
	__property TspShellFolder* Parent = {read=FParent};
	__property Shlobj::PItemIDList RelativeID = {read=FPIDL};
	__property _di_IShellFolder ShellFolder = {read=FIShellFolder};
	__property _di_IShellFolder2 ShellFolder2 = {read=GetShellFolder2};
	__property Shlobj::_di_IShellDetails ShellDetails = {read=GetShellDetails};
	__property unsigned ViewHandle = {read=FViewHandle, write=FViewHandle, nodefault};
};


#pragma option push -b-
enum TNotifyFilter { nfFileNameChange, nfDirNameChange, nfAttributeChange, nfSizeChange, nfWriteChange, nfSecurityChange };
#pragma option pop

typedef Set<TNotifyFilter, nfFileNameChange, nfSecurityChange>  TNotifyFilters;

class DELPHICLASS TspShellChangeThread;
class PASCALIMPLEMENTATION TspShellChangeThread : public Classes::TThread 
{
	typedef Classes::TThread inherited;
	
private:
	int FMutex;
	int FWaitHandle;
	Classes::TThreadMethod FChangeEvent;
	AnsiString FDirectory;
	bool FWatchSubTree;
	bool FWaitChanged;
	unsigned FNotifyOptionFlags;
	
protected:
	virtual void __fastcall Execute(void);
	
public:
	__fastcall virtual TspShellChangeThread(Classes::TThreadMethod ChangeEvent);
	__fastcall virtual ~TspShellChangeThread(void);
	void __fastcall SetDirectoryOptions(AnsiString Directory, bool WatchSubTree, unsigned NotifyOptionFlags);
	__property Classes::TThreadMethod ChangeEvent = {read=FChangeEvent, write=FChangeEvent};
};


class DELPHICLASS TspCustomShellChangeNotifier;
class PASCALIMPLEMENTATION TspCustomShellChangeNotifier : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	TNotifyFilters FFilters;
	bool FWatchSubTree;
	AnsiString FRoot;
	TspShellChangeThread* FThread;
	Classes::TThreadMethod FOnChange;
	void __fastcall SetRoot(const AnsiString Value);
	void __fastcall SetWatchSubTree(const bool Value);
	void __fastcall SetFilters(const TNotifyFilters Value);
	void __fastcall SetOnChange(const Classes::TThreadMethod Value);
	
protected:
	void __fastcall Change(void);
	void __fastcall Start(void);
	
public:
	__fastcall virtual TspCustomShellChangeNotifier(Classes::TComponent* AOwner);
	__fastcall virtual ~TspCustomShellChangeNotifier(void);
	__property TNotifyFilters NotifyFilters = {read=FFilters, write=SetFilters, nodefault};
	__property AnsiString Root = {read=FRoot, write=SetRoot};
	__property bool WatchSubTree = {read=FWatchSubTree, write=SetWatchSubTree, nodefault};
	__property Classes::TThreadMethod OnChange = {read=FOnChange, write=SetOnChange};
};


class DELPHICLASS TspShellChangeNotifier;
class PASCALIMPLEMENTATION TspShellChangeNotifier : public TspCustomShellChangeNotifier 
{
	typedef TspCustomShellChangeNotifier inherited;
	
__published:
	__property NotifyFilters ;
	__property Root ;
	__property WatchSubTree ;
	__property OnChange ;
public:
	#pragma option push -w-inl
	/* TspCustomShellChangeNotifier.Create */ inline __fastcall virtual TspShellChangeNotifier(Classes::TComponent* AOwner) : TspCustomShellChangeNotifier(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspCustomShellChangeNotifier.Destroy */ inline __fastcall virtual ~TspShellChangeNotifier(void) { }
	#pragma option pop
	
};


typedef void __fastcall (__closure *TAddFolderEvent)(System::TObject* Sender, TspShellFolder* AFolder, bool &CanAdd);

typedef void __fastcall (__closure *TGetImageIndexEvent)(System::TObject* Sender, int Index, int &ImageIndex);

class DELPHICLASS TspCustomShellTreeView;
class DELPHICLASS TspCustomShellListView;
class DELPHICLASS TspCustomShellComboBox;
class DELPHICLASS TspItemsEx;
class DELPHICLASS TspItemEx;
class PASCALIMPLEMENTATION TspItemsEx : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspItemEx* operator[](int Index) { return Items[Index]; }
	
private:
	HIDESBASE TspItemEx* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TspItemEx* Value);
	
public:
	__fastcall TspItemsEx(void);
	HIDESBASE TspItemEx* __fastcall Add(void);
	HIDESBASE TspItemEx* __fastcall Insert(int Index);
	void __fastcall AddItem(AnsiString ACaption, int AImageIndex, int ASelectedIndex, int AIdent, TspShellFolder* AFolder);
	__property TspItemEx* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspItemsEx(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspCustomShellComboBox : public Skinboxctrls::TspSkinCustomComboBox 
{
	typedef Skinboxctrls::TspSkinCustomComboBox inherited;
	
private:
	TspItemsEx* FItemsEx;
	int FImages;
	int FImageHeight;
	int FImageWidth;
	Imglist::TCustomImageList* FImageList;
	AnsiString FOldRoot;
	AnsiString FRoot;
	TspShellFolder* FRootFolder;
	TspCustomShellTreeView* FTreeView;
	TspCustomShellListView* FListView;
	TShellObjectTypes FObjectTypes;
	bool FUseShellImages;
	bool FUpdating;
	void __fastcall SetItemsEx(TspItemsEx* Value);
	void __fastcall ClearItemsEx(void);
	TspShellFolder* __fastcall GetFolder(int Index);
	AnsiString __fastcall GetPath();
	void __fastcall SetPath(const AnsiString Value);
	void __fastcall SetPathFromID(Shlobj::PItemIDList ID);
	void __fastcall SetRoot(const AnsiString Value);
	void __fastcall SetTreeView(TspCustomShellTreeView* Value);
	void __fastcall SetListView(TspCustomShellListView* Value);
	void __fastcall SetUseShellImages(const bool Value);
	int __fastcall GetShellImageIndex(TspShellFolder* AFolder);
	void __fastcall CheckItems(void);
	
protected:
	void __fastcall DrawItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	void __fastcall ComboDrawItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	void __fastcall AddItemsEx(int Index, TspShellFolder* ParentFolder);
	virtual void __fastcall Change(void);
	DYNAMIC void __fastcall Click(void);
	void __fastcall CreateRoot(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DestroyWnd(void);
	int __fastcall IndexFromID(Shlobj::PItemIDList AbsoluteID);
	virtual void __fastcall Init(void);
	TspShellFolder* __fastcall InitItem(TspShellFolder* ParentFolder, Shlobj::PItemIDList ID);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall RootChanged(void);
	void __fastcall TreeUpdate(Shlobj::PItemIDList NewPath);
	virtual void __fastcall SetObjectTypes(TShellObjectTypes Value);
	
public:
	__fastcall virtual TspCustomShellComboBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspCustomShellComboBox(void);
	__property TspItemsEx* ItemsEx = {read=FItemsEx, write=SetItemsEx};
	__property AnsiString Path = {read=GetPath, write=SetPath};
	__property TspShellFolder* Folders[int Index] = {read=GetFolder};
	__property AnsiString Root = {read=FRoot, write=SetRoot};
	__property TShellObjectTypes ObjectTypes = {read=FObjectTypes, write=SetObjectTypes, nodefault};
	__property TspCustomShellTreeView* ShellTreeView = {read=FTreeView, write=SetTreeView};
	__property TspCustomShellListView* ShellListView = {read=FListView, write=SetListView};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspCustomShellComboBox(HWND ParentWindow) : Skinboxctrls::TspSkinCustomComboBox(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspCustomShellListView : public Skinctrls::TspSkinCustomListView 
{
	typedef Skinctrls::TspSkinCustomListView inherited;
	
private:
	int FOldSortColumn;
	int FSortColumn;
	bool FSortDirection;
	AnsiString FOldRoot;
	AnsiString FRoot;
	TspShellFolder* FRootFolder;
	bool FAutoContext;
	bool FAutoRefresh;
	bool FAutoNavigate;
	bool FSorted;
	bool FUpdating;
	TShellObjectTypes FObjectTypes;
	int FLargeImages;
	int FSmallImages;
	TAddFolderEvent FOnAddFolder;
	Classes::TList* FFolders;
	TspCustomShellTreeView* FTreeView;
	TspCustomShellComboBox* FComboBox;
	TspShellChangeNotifier* FNotifier;
	Comctrls::TLVEditingEvent FOnEditing;
	bool FSettingRoot;
	AnsiString FSavePath;
	AnsiString FMask;
	Classes::TNotifyEvent FOnPathChanged;
	void __fastcall SetMask(const AnsiString Value);
	void __fastcall EnumColumns(void);
	TspShellFolder* __fastcall GetFolder(int Index);
	void __fastcall SetAutoRefresh(const bool Value);
	void __fastcall SetSorted(const bool Value);
	void __fastcall SetTreeView(TspCustomShellTreeView* Value);
	void __fastcall SetComboBox(TspCustomShellComboBox* Value);
	void __fastcall TreeUpdate(Shlobj::PItemIDList NewRoot);
	void __fastcall SetPathFromID(Shlobj::PItemIDList ID);
	void __fastcall SynchPaths(void);
	AnsiString __fastcall GetPath();
	void __fastcall SetPath(const AnsiString Value);
	
protected:
	DYNAMIC void __fastcall ColClick(Comctrls::TListColumn* Column);
	void __fastcall ClearItems(void);
	void __fastcall CreateRoot(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DestroyWnd(void);
	DYNAMIC void __fastcall DblClick(void);
	DYNAMIC void __fastcall DoContextPopup(const Types::TPoint &MousePos, bool &Handled);
	void __fastcall EditText(void);
	DYNAMIC void __fastcall Edit(const tagLVITEMA &Item);
	DYNAMIC void __fastcall KeyDown(Word &Key, Classes::TShiftState Shift);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual bool __fastcall OwnerDataFetch(Comctrls::TListItem* Item, Comctrls::TItemRequest Request);
	virtual int __fastcall OwnerDataFind(Comctrls::TItemFind Find, const AnsiString FindString, const Types::TPoint &FindPosition, void * FindData, int StartIndex, Comctrls::TSearchDirection Direction, bool Wrap);
	virtual void __fastcall Populate(void);
	void __fastcall RootChanged(void);
	void __fastcall SetObjectTypes(TShellObjectTypes Value);
	void __fastcall SetRoot(const AnsiString Value);
	virtual void __fastcall SetViewStyle(Comctrls::TViewStyle Value);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TspCustomShellListView(Classes::TComponent* AOwner);
	__fastcall virtual ~TspCustomShellListView(void);
	void __fastcall Back(void);
	HIDESBASE void __fastcall Refresh(void);
	AnsiString __fastcall GetSelectedFile();
	void __fastcall GetSelectedFiles(Classes::TStrings* AFiles);
	TspShellFolder* __fastcall SelectedFolder(void);
	__property TspShellFolder* Folders[int Index] = {read=GetFolder};
	__property TspShellFolder* RootFolder = {read=FRootFolder};
	__property AnsiString Path = {read=GetPath, write=SetPath};
	__property Items ;
	__property Columns ;
	__property AnsiString Mask = {read=FMask, write=SetMask};
	__property bool AutoContextMenus = {read=FAutoContext, write=FAutoContext, default=1};
	__property bool AutoRefresh = {read=FAutoRefresh, write=SetAutoRefresh, default=0};
	__property bool AutoNavigate = {read=FAutoNavigate, write=FAutoNavigate, default=1};
	__property TShellObjectTypes ObjectTypes = {read=FObjectTypes, write=SetObjectTypes, nodefault};
	__property AnsiString Root = {read=FRoot, write=SetRoot};
	__property TspCustomShellTreeView* ShellTreeView = {read=FTreeView, write=SetTreeView};
	__property TspCustomShellComboBox* ShellComboBox = {read=FComboBox, write=SetComboBox};
	__property bool Sorted = {read=FSorted, write=SetSorted, nodefault};
	__property TAddFolderEvent OnAddFolder = {read=FOnAddFolder, write=FOnAddFolder};
	__property Comctrls::TLVEditingEvent OnEditing = {read=FOnEditing, write=FOnEditing};
	void __fastcall CommandCompleted(AnsiString Verb, bool Succeeded);
	void __fastcall ExecuteCommand(AnsiString Verb, bool &Handled);
	__property Classes::TNotifyEvent OnPathChanged = {read=FOnPathChanged, write=FOnPathChanged};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspCustomShellListView(HWND ParentWindow) : Skinctrls::TspSkinCustomListView(ParentWindow) { }
	#pragma option pop
	
private:
	void *__IShellCommandVerb;	/* Spskinshellctrls::IShellCommandVerb */
	
public:
	operator IShellCommandVerb*(void) { return (IShellCommandVerb*)&__IShellCommandVerb; }
	
};


class PASCALIMPLEMENTATION TspCustomShellTreeView : public Skinctrls::TspSkinCustomTreeView 
{
	typedef Skinctrls::TspSkinCustomTreeView inherited;
	
public:
	TspShellFolder* operator[](int Index) { return Folders[Index]; }
	
private:
	AnsiString FPath;
	AnsiString FRoot;
	AnsiString FOldRoot;
	TspShellFolder* FRootFolder;
	TShellObjectTypes FObjectTypes;
	bool FLoadingRoot;
	bool FAutoContext;
	bool FUpdating;
	TspCustomShellListView* FListView;
	TspCustomShellComboBox* FComboBox;
	bool FAutoRefresh;
	bool FImageListChanging;
	bool FUseShellImages;
	TspShellChangeNotifier* FNotifier;
	TAddFolderEvent FOnAddFolder;
	AnsiString FSavePath;
	Comctrls::TTreeNode* FNodeToMonitor;
	Comctrls::TTreeNode* __fastcall FolderExists(Shlobj::PItemIDList FindID, Comctrls::TTreeNode* InNode);
	TspShellFolder* __fastcall GetFolder(int Index);
	AnsiString __fastcall GetPath();
	void __fastcall SetComboBox(TspCustomShellComboBox* Value);
	void __fastcall SetListView(const TspCustomShellListView* Value);
	void __fastcall SetPath(const AnsiString Value);
	void __fastcall SetPathFromID(Shlobj::PItemIDList ID);
	void __fastcall SetRoot(const AnsiString Value);
	void __fastcall SetUseShellImages(const bool Value);
	void __fastcall SetAutoRefresh(const bool Value);
	
protected:
	DYNAMIC bool __fastcall CanChange(Comctrls::TTreeNode* Node);
	DYNAMIC bool __fastcall CanExpand(Comctrls::TTreeNode* Node);
	void __fastcall CreateRoot(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall DestroyWnd(void);
	DYNAMIC void __fastcall DoContextPopup(const Types::TPoint &MousePos, bool &Handled);
	DYNAMIC void __fastcall Edit(const tagTVITEMA &Item);
	virtual void __fastcall GetImageIndex(Comctrls::TTreeNode* Node);
	virtual void __fastcall GetSelectedIndex(Comctrls::TTreeNode* Node);
	void __fastcall InitNode(Comctrls::TTreeNode* NewNode, Shlobj::PItemIDList ID, Comctrls::TTreeNode* ParentNode);
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall Delete(Comctrls::TTreeNode* Node);
	Comctrls::TTreeNode* __fastcall NodeFromAbsoluteID(Comctrls::TTreeNode* StartNode, Shlobj::PItemIDList ID);
	Comctrls::TTreeNode* __fastcall NodeFromRelativeID(Comctrls::TTreeNode* ParentNode, Shlobj::PItemIDList ID);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall PopulateNode(Comctrls::TTreeNode* Node);
	void __fastcall RootChanged(void);
	virtual void __fastcall SetObjectTypes(TShellObjectTypes Value);
	HIDESBASE virtual void __fastcall WMDestroy(Messages::TWMNoParams &Message);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall ClearItems(void);
	void __fastcall RefreshEvent(void);
	
public:
	int FImages;
	__fastcall virtual TspCustomShellTreeView(Classes::TComponent* AOwner);
	__fastcall virtual ~TspCustomShellTreeView(void);
	HIDESBASE void __fastcall Refresh(Comctrls::TTreeNode* Node);
	void __fastcall ExpandMyComputer(void);
	TspShellFolder* __fastcall SelectedFolder(void);
	__property bool AutoRefresh = {read=FAutoRefresh, write=SetAutoRefresh, nodefault};
	__property TspShellFolder* Folders[int Index] = {read=GetFolder/*, default*/};
	__property Items ;
	__property AnsiString Path = {read=GetPath, write=SetPath};
	__property bool AutoContextMenus = {read=FAutoContext, write=FAutoContext, default=1};
	__property TShellObjectTypes ObjectTypes = {read=FObjectTypes, write=SetObjectTypes, nodefault};
	__property AnsiString Root = {read=FRoot, write=SetRoot};
	__property TspCustomShellListView* ShellListView = {read=FListView, write=SetListView};
	__property TspCustomShellComboBox* ShellComboBox = {read=FComboBox, write=SetComboBox};
	__property bool UseShellImages = {read=FUseShellImages, write=SetUseShellImages, nodefault};
	__property TAddFolderEvent OnAddFolder = {read=FOnAddFolder, write=FOnAddFolder};
	void __fastcall CommandCompleted(AnsiString Verb, bool Succeeded);
	void __fastcall ExecuteCommand(AnsiString Verb, bool &Handled);
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspCustomShellTreeView(HWND ParentWindow) : Skinctrls::TspSkinCustomTreeView(ParentWindow) { }
	#pragma option pop
	
private:
	void *__IShellCommandVerb;	/* Spskinshellctrls::IShellCommandVerb */
	
public:
	operator IShellCommandVerb*(void) { return (IShellCommandVerb*)&__IShellCommandVerb; }
	
};


class DELPHICLASS TspSkinDirTreeView;
class PASCALIMPLEMENTATION TspSkinDirTreeView : public TspCustomShellTreeView 
{
	typedef TspCustomShellTreeView inherited;
	
__published:
	__property HScrollBar ;
	__property VScrollBar ;
	__property SkinData ;
	__property AutoContextMenus  = {default=1};
	__property ObjectTypes ;
	__property Root ;
	__property ShellComboBox ;
	__property ShellListView ;
	__property UseShellImages ;
	__property OnAddFolder ;
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property AutoRefresh ;
	__property BorderStyle  = {default=1};
	__property ChangeDelay  = {default=0};
	__property Color  = {default=-2147483643};
	__property Cursor  = {default=0};
	__property DragCursor  = {default=-12};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property Font ;
	__property HideSelection  = {default=1};
	__property Images ;
	__property Indent ;
	__property ParentColor  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property RightClickSelect  = {default=0};
	__property ShowButtons  = {default=1};
	__property ShowHint ;
	__property ShowLines  = {default=1};
	__property ShowRoot  = {default=1};
	__property StateImages ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property OnClick ;
	__property OnEnter ;
	__property OnExit ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnStartDrag ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property OnDblClick ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnChanging ;
	__property OnChange ;
	__property OnExpanding ;
	__property OnCollapsing ;
	__property OnCollapsed ;
	__property OnExpanded ;
	__property OnEditing ;
	__property OnEdited ;
	__property OnGetImageIndex ;
	__property OnGetSelectedIndex ;
public:
	#pragma option push -w-inl
	/* TspCustomShellTreeView.Create */ inline __fastcall virtual TspSkinDirTreeView(Classes::TComponent* AOwner) : TspCustomShellTreeView(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspCustomShellTreeView.Destroy */ inline __fastcall virtual ~TspSkinDirTreeView(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinDirTreeView(HWND ParentWindow) : TspCustomShellTreeView(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFileListView;
class PASCALIMPLEMENTATION TspSkinFileListView : public TspCustomShellListView 
{
	typedef TspCustomShellListView inherited;
	
__published:
	__property SkinData ;
	__property HScrollBar ;
	__property VScrollBar ;
	__property HeaderSkinDataName ;
	__property AutoContextMenus  = {default=1};
	__property AutoRefresh  = {default=0};
	__property AutoNavigate  = {default=1};
	__property ObjectTypes ;
	__property Root ;
	__property ShellTreeView ;
	__property ShellComboBox ;
	__property Mask ;
	__property Sorted ;
	__property OnAddFolder ;
	__property Align  = {default=0};
	__property Anchors  = {default=3};
	__property BorderStyle  = {default=1};
	__property Color  = {default=-2147483643};
	__property ColumnClick  = {default=1};
	__property OnClick ;
	__property OnDblClick ;
	__property DragMode  = {default=0};
	__property ReadOnly  = {default=1};
	__property Enabled  = {default=1};
	__property Font ;
	__property GridLines  = {default=0};
	__property HideSelection  = {default=1};
	__property HotTrack  = {default=0};
	__property IconOptions ;
	__property AllocBy  = {default=0};
	__property MultiSelect  = {default=0};
	__property RowSelect  = {default=0};
	__property OnChange ;
	__property OnChanging ;
	__property OnColumnClick ;
	__property OnContextPopup ;
	__property OnEnter ;
	__property OnExit ;
	__property OnInsert ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property DragCursor  = {default=-12};
	__property OnStartDrag ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property OnMouseUp ;
	__property ParentColor  = {default=0};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property ShowHint ;
	__property PopupMenu ;
	__property ShowColumnHeaders  = {default=1};
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property ViewStyle  = {default=0};
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnEditing ;
	__property OnEdited ;
public:
	#pragma option push -w-inl
	/* TspCustomShellListView.Create */ inline __fastcall virtual TspSkinFileListView(Classes::TComponent* AOwner) : TspCustomShellListView(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspCustomShellListView.Destroy */ inline __fastcall virtual ~TspSkinFileListView(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinFileListView(HWND ParentWindow) : TspCustomShellListView(ParentWindow) { }
	#pragma option pop
	
};


typedef Set<Spfilectrl::TspDriveType, vdtUnknown, spdtRAM>  TDriveTypes;

class DELPHICLASS TspSkinShellDriveComboBox;
class PASCALIMPLEMENTATION TspSkinShellDriveComboBox : public Skinboxctrls::TspSkinCustomComboBox 
{
	typedef Skinboxctrls::TspSkinCustomComboBox inherited;
	
private:
	Classes::TStringList* FDrives;
	Controls::TImageList* FImages;
	TDriveTypes FDriveTypes;
	int FDriveItemIndex;
	char FDrive;
	Classes::TNotifyEvent FOnChange;
	void __fastcall SetDriveTypes(const TDriveTypes Value);
	
protected:
	virtual void __fastcall CreateWnd(void);
	void __fastcall DrawItem(Graphics::TCanvas* Cnvs, int Index, int ItemWidth, int ItemHeight, const Types::TRect &TextRect, Windows::TOwnerDrawState State);
	virtual void __fastcall BuildList(void);
	void __fastcall SetDrive(char Value);
	
public:
	__fastcall virtual TspSkinShellDriveComboBox(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinShellDriveComboBox(void);
	void __fastcall UpdateDrives(void);
	virtual void __fastcall Change(void);
	__property char Drive = {read=FDrive, write=SetDrive, nodefault};
	
__published:
	__property TDriveTypes DriveTypes = {read=FDriveTypes, write=SetDriveTypes, default=124};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property AutoComplete ;
	__property ListBoxAlphaBlend ;
	__property ListBoxAlphaBlendAnimation ;
	__property ListBoxAlphaBlendValue ;
	__property ListBoxCaption ;
	__property ListBoxCaptionMode ;
	__property ListBoxDefaultFont ;
	__property ListBoxDefaultCaptionFont ;
	__property ListBoxDefaultItemHeight ;
	__property ListBoxCaptionAlignment ;
	__property ListBoxUseSkinFont ;
	__property ListBoxUseSkinItemHeight ;
	__property Enabled  = {default=1};
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property Align  = {default=0};
	__property DropDownCount ;
	__property HorizontalExtent ;
	__property Font ;
	__property OnListBoxDrawItem ;
	__property OnComboBoxDrawItem ;
	__property OnClick ;
	__property OnCloseUp ;
	__property OnDropDown ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnEnter ;
	__property OnExit ;
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinShellDriveComboBox(HWND ParentWindow) : Skinboxctrls::TspSkinCustomComboBox(ParentWindow) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspItemEx : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
public:
	AnsiString Caption;
	TspShellFolder* Data;
	int Indent;
	int ImageIndex;
	int SelectedImageIndex;
public:
	#pragma option push -w-inl
	/* TCollectionItem.Create */ inline __fastcall virtual TspItemEx(Classes::TCollection* Collection) : Classes::TCollectionItem(Collection) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TspItemEx(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinShellComboBox;
class PASCALIMPLEMENTATION TspSkinShellComboBox : public TspCustomShellComboBox 
{
	typedef TspCustomShellComboBox inherited;
	
__published:
	__property ListBoxAlphaBlend ;
	__property ListBoxAlphaBlendAnimation ;
	__property ListBoxAlphaBlendValue ;
	__property ListBoxCaption ;
	__property ListBoxCaptionMode ;
	__property ListBoxDefaultFont ;
	__property ListBoxDefaultCaptionFont ;
	__property ListBoxDefaultItemHeight ;
	__property ListBoxCaptionAlignment ;
	__property ListBoxUseSkinFont ;
	__property ListBoxUseSkinItemHeight ;
	__property Images ;
	__property Root ;
	__property ObjectTypes ;
	__property ShellTreeView ;
	__property ShellListView ;
	__property Anchors  = {default=3};
	__property BiDiMode ;
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property DropDownCount ;
	__property Enabled  = {default=1};
	__property Font ;
	__property ImeMode  = {default=3};
	__property ImeName ;
	__property PopupMenu ;
	__property ShowHint ;
	__property TabOrder  = {default=-1};
	__property TabStop  = {default=1};
	__property Visible  = {default=1};
	__property OnChange ;
	__property OnClick ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnDropDown ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnEnter ;
	__property OnExit ;
	__property OnKeyDown ;
	__property OnKeyPress ;
	__property OnKeyUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TspCustomShellComboBox.Create */ inline __fastcall virtual TspSkinShellComboBox(Classes::TComponent* AOwner) : TspCustomShellComboBox(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TspCustomShellComboBox.Destroy */ inline __fastcall virtual ~TspSkinShellComboBox(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinShellComboBox(HWND ParentWindow) : TspCustomShellComboBox(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSelDirDlgForm;
class PASCALIMPLEMENTATION TspSelDirDlgForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
protected:
	Skindata::TspSkinData* CtrlSD;
	bool ShowToolBar;
	void __fastcall NewFolderToolButtonClick(System::TObject* Sender);
	void __fastcall DirTreeChange(System::TObject* Sender, Comctrls::TTreeNode* Node);
	void __fastcall EditKeyPress(System::TObject* Sender, char &Key);
	
public:
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinPanel* DirTreeViewPanel;
	Skinctrls::TspSkinPanel* BottomPanel;
	TspSkinDirTreeView* DirTreeView;
	Skinctrls::TspSkinScrollBar* VScrollBar;
	Skinctrls::TspSkinScrollBar* HScrollBar;
	Skinctrls::TspSkinButton* OkButton;
	Skinctrls::TspSkinButton* CancelButton;
	Skinctrls::TspSkinPanel* ToolPanel;
	Skinctrls::TspSkinSpeedButton* NewFolderToolButton;
	Skinboxctrls::TspSkinEdit* DirEdit;
	__fastcall TspSelDirDlgForm(Classes::TComponent* AOwner, Skindata::TspSkinData* ACtrlSkinData, bool AShowToolBar, bool AToolButtonsTransparent);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspSelDirDlgForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspSelDirDlgForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TspSelDirDlgForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSelDirDlgForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinSelectDirectoryDialog;
class PASCALIMPLEMENTATION TspSkinSelectDirectoryDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FToolButtonsTransparent;
	int FDialogWidth;
	int FDialogHeight;
	int FDialogMinWidth;
	int FDialogMinHeight;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	Graphics::TFont* FDefaultFont;
	AnsiString FTitle;
	TspSelDirDlgForm* FDlgFrm;
	Classes::TNotifyEvent FOnChange;
	AnsiString FDirectory;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FShowToolBar;
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall Change(void);
	
public:
	__fastcall virtual TspSkinSelectDirectoryDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinSelectDirectoryDialog(void);
	bool __fastcall Execute(void);
	
__published:
	__property bool ToolButtonsTransparent = {read=FToolButtonsTransparent, write=FToolButtonsTransparent, nodefault};
	__property int DialogWidth = {read=FDialogWidth, write=FDialogWidth, nodefault};
	__property int DialogHeight = {read=FDialogHeight, write=FDialogHeight, nodefault};
	__property int DialogMinWidth = {read=FDialogMinWidth, write=FDialogMinWidth, nodefault};
	__property int DialogMinHeight = {read=FDialogMinHeight, write=FDialogMinHeight, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property AnsiString Directory = {read=FDirectory, write=FDirectory};
	__property bool ShowToolBar = {read=FShowToolBar, write=FShowToolBar, nodefault};
};


class DELPHICLASS TspSkinDirectoryEdit;
class PASCALIMPLEMENTATION TspSkinDirectoryEdit : public Skinboxctrls::TspSkinEdit 
{
	typedef Skinboxctrls::TspSkinEdit inherited;
	
protected:
	Skindata::TspSkinData* FDlgSkinData;
	Skindata::TspSkinData* FDlgCtrlSkinData;
	TspSkinSelectDirectoryDialog* SD;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinDirectoryEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinDirectoryEdit(void);
	void __fastcall ButtonClick(System::TObject* Sender);
	__property TspSkinSelectDirectoryDialog* DirectoryDialog = {read=SD};
	
__published:
	__property Skindata::TspSkinData* DlgSkinData = {read=FDlgSkinData, write=FDlgSkinData};
	__property Skindata::TspSkinData* DlgCtrlSkinData = {read=FDlgCtrlSkinData, write=FDlgCtrlSkinData};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinDirectoryEdit(HWND ParentWindow) : Skinboxctrls::TspSkinEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspOpenDlgForm;
class PASCALIMPLEMENTATION TspOpenDlgForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
private:
	bool SaveMode;
	Classes::TList* FolderHistory;
	bool StopAddToHistory;
	Skindata::TspSkinData* CtrlSD;
	int NewFolderCount;
	
public:
	AnsiString DefaultExt;
	bool OverwritePromt;
	AnsiString FileName;
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinPanel* FileListViewPanel;
	Skinctrls::TspSkinPanel* BottomPanel;
	Skinctrls::TspSkinScrollBar* FLVHScrollBar;
	Skinctrls::TspSkinScrollBar* FLVVScrollBar;
	TspSkinFileListView* FileListView;
	Skinboxctrls::TspSkinEdit* FileNameEdit;
	Spfilectrl::TspSkinFilterComboBox* FilterComboBox;
	TspSkinShellComboBox* ShellBox;
	Skinctrls::TspSkinButton* OpenButton;
	Skinctrls::TspSkinButton* CancelButton;
	Skinctrls::TspSkinStdLabel* Drivelabel;
	Skinctrls::TspSkinStdLabel* OpenFileLabel;
	Skinctrls::TspSkinStdLabel* FileTypeLabel;
	Skinctrls::TspSkinToolBar* ToolPanel;
	Skinctrls::TspSkinSpeedButton* NewFolderToolButton;
	Skinctrls::TspSkinSpeedButton* UpToolButton;
	Skinctrls::TspSkinSpeedButton* BackToolButton;
	Skinctrls::TspSkinMenuSpeedButton* StyleToolButton;
	Skinmenus::TspSkinPopupMenu* StylePopupMenu;
	Menus::TMenuItem* IconMenuItem;
	Menus::TMenuItem* SmallIconMenuItem;
	Menus::TMenuItem* ReportMenuItem;
	Menus::TMenuItem* ListMenuItem;
	Classes::TNotifyEvent OnFolderChange;
	bool CheckFileExists;
	__fastcall TspOpenDlgForm(Classes::TComponent* AOwner, bool ASaveMode, Skindata::TspSkinData* ACtrlSkinData, bool AToolButtonsTransparent);
	__fastcall virtual ~TspOpenDlgForm(void);
	void __fastcall FLVChange(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange Change);
	void __fastcall FLVPathChange(System::TObject* Sender);
	void __fastcall FCBChange(System::TObject* Sender);
	void __fastcall OpenButtonClick(System::TObject* Sender);
	void __fastcall FLVDBLClick(System::TObject* Sender);
	void __fastcall FLVKeyPress(System::TObject* Sender, char &Key);
	void __fastcall EditKeyPress(System::TObject* Sender, char &Key);
	void __fastcall UpToolButtonClick(System::TObject* Sender);
	void __fastcall BackToolButtonClick(System::TObject* Sender);
	void __fastcall NewFolderToolButtonClick(System::TObject* Sender);
	void __fastcall ReportItemClick(System::TObject* Sender);
	void __fastcall ListItemClick(System::TObject* Sender);
	void __fastcall SmallIconItemClick(System::TObject* Sender);
	void __fastcall IconItemClick(System::TObject* Sender);
	void __fastcall InitHistory(void);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspOpenDlgForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspOpenDlgForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspOpenDlgForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinOpenDialog;
class PASCALIMPLEMENTATION TspSkinOpenDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FShowHiddenFiles;
	bool FToolButtonsTransparent;
	bool FOverwritePromt;
	AnsiString FDefaultExt;
	int FDialogWidth;
	int FDialogHeight;
	int FDialogMinWidth;
	int FDialogMinHeight;
	Classes::TNotifyEvent FOnFolderChange;
	bool FCheckFileExists;
	bool FMultiSelection;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FLVHeaderSkinDataName;
	Graphics::TFont* FDefaultFont;
	AnsiString FTitle;
	TspOpenDlgForm* FDlgFrm;
	Classes::TNotifyEvent FOnChange;
	AnsiString FInitialDir;
	AnsiString FFilter;
	AnsiString FFileName;
	int FFilterIndex;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FCtrlAlphaBlend;
	Byte FCtrlAlphaBlendValue;
	bool FCtrlAlphaBlendAnimation;
	Classes::TStringList* FFiles;
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetFileName(const AnsiString Value);
	
protected:
	bool FSaveMode;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall Change(void);
	
public:
	Comctrls::TViewStyle ListViewStyle;
	__fastcall virtual TspSkinOpenDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinOpenDialog(void);
	bool __fastcall Execute(void);
	__property Classes::TStringList* Files = {read=FFiles};
	AnsiString __fastcall GetSelectedFile();
	
__published:
	__property bool ShowHiddenFiles = {read=FShowHiddenFiles, write=FShowHiddenFiles, nodefault};
	__property bool ToolButtonsTransparent = {read=FToolButtonsTransparent, write=FToolButtonsTransparent, nodefault};
	__property bool OverwritePromt = {read=FOverwritePromt, write=FOverwritePromt, nodefault};
	__property AnsiString DefaultExt = {read=FDefaultExt, write=FDefaultExt};
	__property int DialogWidth = {read=FDialogWidth, write=FDialogWidth, nodefault};
	__property int DialogHeight = {read=FDialogHeight, write=FDialogHeight, nodefault};
	__property int DialogMinWidth = {read=FDialogMinWidth, write=FDialogMinWidth, nodefault};
	__property int DialogMinHeight = {read=FDialogMinHeight, write=FDialogMinHeight, nodefault};
	__property bool CheckFileExists = {read=FCheckFileExists, write=FCheckFileExists, nodefault};
	__property bool MultiSelection = {read=FMultiSelection, write=FMultiSelection, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property bool CtrlAlphaBlend = {read=FCtrlAlphaBlend, write=FCtrlAlphaBlend, nodefault};
	__property Byte CtrlAlphaBlendValue = {read=FCtrlAlphaBlendValue, write=FCtrlAlphaBlendValue, nodefault};
	__property bool CtrlAlphaBlendAnimation = {read=FCtrlAlphaBlendAnimation, write=FCtrlAlphaBlendAnimation, nodefault};
	__property AnsiString LVHeaderSkinDataName = {read=FLVHeaderSkinDataName, write=FLVHeaderSkinDataName};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property AnsiString InitialDir = {read=FInitialDir, write=FInitialDir};
	__property AnsiString Filter = {read=FFilter, write=FFilter};
	__property int FilterIndex = {read=FFilterIndex, write=FFilterIndex, nodefault};
	__property AnsiString FileName = {read=FFileName, write=SetFileName};
	__property Classes::TNotifyEvent OnFolderChange = {read=FOnFolderChange, write=FOnFolderChange};
};


class DELPHICLASS TspSkinSaveDialog;
class PASCALIMPLEMENTATION TspSkinSaveDialog : public TspSkinOpenDialog 
{
	typedef TspSkinOpenDialog inherited;
	
public:
	__fastcall virtual TspSkinSaveDialog(Classes::TComponent* AOwner);
public:
	#pragma option push -w-inl
	/* TspSkinOpenDialog.Destroy */ inline __fastcall virtual ~TspSkinSaveDialog(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFileEdit;
class PASCALIMPLEMENTATION TspSkinFileEdit : public Skinboxctrls::TspSkinEdit 
{
	typedef Skinboxctrls::TspSkinEdit inherited;
	
protected:
	Skindata::TspSkinData* FDlgSkinData;
	Skindata::TspSkinData* FDlgCtrlSkinData;
	TspSkinOpenDialog* OD;
	AnsiString FLVHeaderSkinDataName;
	AnsiString __fastcall GetFilter();
	void __fastcall SetFilter(AnsiString Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinFileEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinFileEdit(void);
	void __fastcall ButtonClick(System::TObject* Sender);
	__property TspSkinOpenDialog* OpenDialog = {read=OD};
	
__published:
	__property AnsiString Filter = {read=GetFilter, write=SetFilter};
	__property Skindata::TspSkinData* DlgSkinData = {read=FDlgSkinData, write=FDlgSkinData};
	__property Skindata::TspSkinData* DlgCtrlSkinData = {read=FDlgCtrlSkinData, write=FDlgCtrlSkinData};
	__property AnsiString LVHeaderSkinDataName = {read=FLVHeaderSkinDataName, write=FLVHeaderSkinDataName};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinFileEdit(HWND ParentWindow) : Skinboxctrls::TspSkinEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinSaveFileEdit;
class PASCALIMPLEMENTATION TspSkinSaveFileEdit : public Skinboxctrls::TspSkinEdit 
{
	typedef Skinboxctrls::TspSkinEdit inherited;
	
protected:
	Skindata::TspSkinData* FDlgSkinData;
	Skindata::TspSkinData* FDlgCtrlSkinData;
	TspSkinSaveDialog* OD;
	AnsiString FLVHeaderSkinDataName;
	AnsiString __fastcall GetFilter();
	void __fastcall SetFilter(AnsiString Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinSaveFileEdit(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinSaveFileEdit(void);
	void __fastcall ButtonClick(System::TObject* Sender);
	__property TspSkinSaveDialog* SaveDialog = {read=OD};
	
__published:
	__property AnsiString Filter = {read=GetFilter, write=SetFilter};
	__property Skindata::TspSkinData* DlgSkinData = {read=FDlgSkinData, write=FDlgSkinData};
	__property Skindata::TspSkinData* DlgCtrlSkinData = {read=FDlgCtrlSkinData, write=FDlgCtrlSkinData};
	__property AnsiString LVHeaderSkinDataName = {read=FLVHeaderSkinDataName, write=FLVHeaderSkinDataName};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinSaveFileEdit(HWND ParentWindow) : Skinboxctrls::TspSkinEdit(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspOpenPictureDlgForm;
class PASCALIMPLEMENTATION TspOpenPictureDlgForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
private:
	bool SaveMode;
	Classes::TList* FolderHistory;
	bool StopAddToHistory;
	Skindata::TspSkinData* CtrlSD;
	int NewFolderCount;
	
public:
	bool OverwritePromt;
	AnsiString FileName;
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinPanel* FileListViewPanel;
	Skinctrls::TspSkinPanel* BottomPanel;
	Skinctrls::TspSkinScrollBar* FLVHScrollBar;
	Skinctrls::TspSkinScrollBar* FLVVScrollBar;
	TspSkinFileListView* FileListView;
	Skinboxctrls::TspSkinEdit* FileNameEdit;
	Spfilectrl::TspSkinFilterComboBox* FilterComboBox;
	TspSkinShellComboBox* ShellBox;
	Skinctrls::TspSkinButton* OpenButton;
	Skinctrls::TspSkinButton* CancelButton;
	Skinctrls::TspSkinStdLabel* Drivelabel;
	Skinctrls::TspSkinStdLabel* OpenFileLabel;
	Skinctrls::TspSkinStdLabel* FileTypeLabel;
	Skinctrls::TspSkinToolBar* ToolPanel;
	Skinctrls::TspSkinSpeedButton* NewFolderToolButton;
	Skinctrls::TspSkinSpeedButton* UpToolButton;
	Skinctrls::TspSkinSpeedButton* BackToolButton;
	Skinctrls::TspSkinMenuSpeedButton* StyleToolButton;
	Skinmenus::TspSkinPopupMenu* StylePopupMenu;
	Menus::TMenuItem* IconMenuItem;
	Menus::TMenuItem* SmallIconMenuItem;
	Menus::TMenuItem* ReportMenuItem;
	Menus::TMenuItem* ListMenuItem;
	Skinctrls::TspSkinPanel* ImagePanel;
	Extctrls::TImage* Image;
	Skinboxctrls::TspSkinScrollBox* ScrollBox;
	Skinctrls::TspSkinScrollBar* SBVScrollBar;
	Skinctrls::TspSkinScrollBar* SBHScrollBar;
	Skinctrls::TspSkinSpeedButton* StretchButton;
	Skinctrls::TspSkinSplitter* Splitter;
	bool CheckFileExists;
	void __fastcall StretchButtonClick(System::TObject* Sender);
	__fastcall TspOpenPictureDlgForm(Classes::TComponent* AOwner, bool ASaveMode, Skindata::TspSkinData* ACtrlSkinData, bool AToolButtonsTransparent);
	__fastcall virtual ~TspOpenPictureDlgForm(void);
	void __fastcall FLVChange(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange Change);
	void __fastcall FLVPathChange(System::TObject* Sender);
	void __fastcall FCBChange(System::TObject* Sender);
	void __fastcall OpenButtonClick(System::TObject* Sender);
	void __fastcall FLVDBLClick(System::TObject* Sender);
	void __fastcall FLVKeyPress(System::TObject* Sender, char &Key);
	void __fastcall EditKeyPress(System::TObject* Sender, char &Key);
	void __fastcall UpToolButtonClick(System::TObject* Sender);
	void __fastcall BackToolButtonClick(System::TObject* Sender);
	void __fastcall NewFolderToolButtonClick(System::TObject* Sender);
	void __fastcall ReportItemClick(System::TObject* Sender);
	void __fastcall ListItemClick(System::TObject* Sender);
	void __fastcall SmallIconItemClick(System::TObject* Sender);
	void __fastcall IconItemClick(System::TObject* Sender);
	void __fastcall InitHistory(void);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspOpenPictureDlgForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspOpenPictureDlgForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspOpenPictureDlgForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinOpenPictureDialog;
class PASCALIMPLEMENTATION TspSkinOpenPictureDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FShowHiddenFiles;
	bool FToolButtonsTransparent;
	bool FOverwritePromt;
	int FDialogWidth;
	int FDialogHeight;
	int FDialogMinWidth;
	int FDialogMinHeight;
	bool FCheckFileExists;
	bool FStretchPicture;
	bool FMultiSelection;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FLVHeaderSkinDataName;
	Graphics::TFont* FDefaultFont;
	AnsiString FTitle;
	TspOpenPictureDlgForm* FDlgFrm;
	Classes::TNotifyEvent FOnChange;
	AnsiString FInitialDir;
	AnsiString FFilter;
	AnsiString FFileName;
	int FFilterIndex;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FCtrlAlphaBlend;
	Byte FCtrlAlphaBlendValue;
	bool FCtrlAlphaBlendAnimation;
	Classes::TStringList* FFiles;
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	
protected:
	bool FSaveMode;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall Change(void);
	
public:
	Comctrls::TViewStyle ListViewStyle;
	int ImagePanelWidth;
	bool DialogStretch;
	__fastcall virtual TspSkinOpenPictureDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinOpenPictureDialog(void);
	bool __fastcall Execute(void);
	__property Classes::TStringList* Files = {read=FFiles};
	
__published:
	__property bool ShowHiddenFiles = {read=FShowHiddenFiles, write=FShowHiddenFiles, nodefault};
	__property bool ToolButtonsTransparent = {read=FToolButtonsTransparent, write=FToolButtonsTransparent, nodefault};
	__property bool OverwritePromt = {read=FOverwritePromt, write=FOverwritePromt, nodefault};
	__property int DialogWidth = {read=FDialogWidth, write=FDialogWidth, nodefault};
	__property int DialogHeight = {read=FDialogHeight, write=FDialogHeight, nodefault};
	__property int DialogMinWidth = {read=FDialogMinWidth, write=FDialogMinWidth, nodefault};
	__property int DialogMinHeight = {read=FDialogMinHeight, write=FDialogMinHeight, nodefault};
	__property bool CheckFileExists = {read=FCheckFileExists, write=FCheckFileExists, nodefault};
	__property bool StretchPicture = {read=FStretchPicture, write=FStretchPicture, nodefault};
	__property bool MultiSelection = {read=FMultiSelection, write=FMultiSelection, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property bool CtrlAlphaBlend = {read=FCtrlAlphaBlend, write=FCtrlAlphaBlend, nodefault};
	__property Byte CtrlAlphaBlendValue = {read=FCtrlAlphaBlendValue, write=FCtrlAlphaBlendValue, nodefault};
	__property bool CtrlAlphaBlendAnimation = {read=FCtrlAlphaBlendAnimation, write=FCtrlAlphaBlendAnimation, nodefault};
	__property AnsiString LVHeaderSkinDataName = {read=FLVHeaderSkinDataName, write=FLVHeaderSkinDataName};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property AnsiString InitialDir = {read=FInitialDir, write=FInitialDir};
	__property AnsiString Filter = {read=FFilter, write=FFilter};
	__property int FilterIndex = {read=FFilterIndex, write=FFilterIndex, nodefault};
	__property AnsiString FileName = {read=FFileName, write=FFileName};
};


class DELPHICLASS TspSkinSavePictureDialog;
class PASCALIMPLEMENTATION TspSkinSavePictureDialog : public TspSkinOpenPictureDialog 
{
	typedef TspSkinOpenPictureDialog inherited;
	
public:
	__fastcall virtual TspSkinSavePictureDialog(Classes::TComponent* AOwner);
public:
	#pragma option push -w-inl
	/* TspSkinOpenPictureDialog.Destroy */ inline __fastcall virtual ~TspSkinSavePictureDialog(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspOpenSkinDlgForm;
class PASCALIMPLEMENTATION TspOpenSkinDlgForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
private:
	Classes::TList* FolderHistory;
	bool StopAddToHistory;
	Skindata::TspSkinData* CtrlSD;
	int NewFolderCount;
	
public:
	int FCompressedFilterIndex;
	int FUnCompressedFilterIndex;
	AnsiString FileName;
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinPanel* FileListViewPanel;
	Skinctrls::TspSkinPanel* BottomPanel;
	Skinctrls::TspSkinScrollBar* FLVHScrollBar;
	Skinctrls::TspSkinScrollBar* FLVVScrollBar;
	TspSkinFileListView* FileListView;
	Skinboxctrls::TspSkinEdit* FileNameEdit;
	Spfilectrl::TspSkinFilterComboBox* FilterComboBox;
	TspSkinShellComboBox* ShellBox;
	Skinctrls::TspSkinButton* OpenButton;
	Skinctrls::TspSkinButton* CancelButton;
	Skinctrls::TspSkinStdLabel* Drivelabel;
	Skinctrls::TspSkinStdLabel* OpenFileLabel;
	Skinctrls::TspSkinStdLabel* FileTypeLabel;
	Skinctrls::TspSkinToolBar* ToolPanel;
	Skinctrls::TspSkinSpeedButton* NewFolderToolButton;
	Skinctrls::TspSkinSpeedButton* UpToolButton;
	Skinctrls::TspSkinSpeedButton* BackToolButton;
	Skinctrls::TspSkinMenuSpeedButton* StyleToolButton;
	Skinmenus::TspSkinPopupMenu* StylePopupMenu;
	Menus::TMenuItem* IconMenuItem;
	Menus::TMenuItem* SmallIconMenuItem;
	Menus::TMenuItem* ReportMenuItem;
	Menus::TMenuItem* ListMenuItem;
	Forms::TForm* PreviewForm;
	Dynamicskinform::TspDynamicSkinForm* PreviewDSF;
	Skindata::TspSkinData* PreviewSkinData;
	Skinctrls::TspSkinButton* PreviewButton;
	Skinctrls::TspSkinPanel* PreviewPanel;
	__fastcall TspOpenSkinDlgForm(Classes::TComponent* AOwner, Skindata::TspSkinData* ACtrlSkinData, bool AToolButtonsTransparent);
	__fastcall virtual ~TspOpenSkinDlgForm(void);
	void __fastcall FLVChange(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange Change);
	void __fastcall FLVPathChange(System::TObject* Sender);
	void __fastcall FCBChange(System::TObject* Sender);
	void __fastcall OpenButtonClick(System::TObject* Sender);
	void __fastcall FLVDBLClick(System::TObject* Sender);
	void __fastcall FLVKeyPress(System::TObject* Sender, char &Key);
	void __fastcall EditKeyPress(System::TObject* Sender, char &Key);
	void __fastcall UpToolButtonClick(System::TObject* Sender);
	void __fastcall BackToolButtonClick(System::TObject* Sender);
	void __fastcall NewFolderToolButtonClick(System::TObject* Sender);
	void __fastcall ReportItemClick(System::TObject* Sender);
	void __fastcall ListItemClick(System::TObject* Sender);
	void __fastcall SmallIconItemClick(System::TObject* Sender);
	void __fastcall IconItemClick(System::TObject* Sender);
	void __fastcall InitHistory(void);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspOpenSkinDlgForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspOpenSkinDlgForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspOpenSkinDlgForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspOpenSkinDialog;
class PASCALIMPLEMENTATION TspOpenSkinDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FToolButtonsTransparent;
	int FDialogWidth;
	int FDialogHeight;
	int FDialogMinWidth;
	int FDialogMinHeight;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FLVHeaderSkinDataName;
	Graphics::TFont* FDefaultFont;
	AnsiString FTitle;
	TspOpenSkinDlgForm* FDlgFrm;
	Classes::TNotifyEvent FOnChange;
	AnsiString FInitialDir;
	AnsiString FFilter;
	AnsiString FFileName;
	int FFilterIndex;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FCtrlAlphaBlend;
	Byte FCtrlAlphaBlendValue;
	bool FCtrlAlphaBlendAnimation;
	Classes::TStringList* FFiles;
	int FCompressedFilterIndex;
	int FUnCompressedFilterIndex;
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall Change(void);
	
public:
	Comctrls::TViewStyle ListViewStyle;
	__fastcall virtual TspOpenSkinDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspOpenSkinDialog(void);
	bool __fastcall Execute(void);
	__property Classes::TStringList* Files = {read=FFiles};
	
__published:
	__property bool ToolButtonsTransparent = {read=FToolButtonsTransparent, write=FToolButtonsTransparent, nodefault};
	__property int DialogWidth = {read=FDialogWidth, write=FDialogWidth, nodefault};
	__property int DialogHeight = {read=FDialogHeight, write=FDialogHeight, nodefault};
	__property int DialogMinWidth = {read=FDialogMinWidth, write=FDialogMinWidth, nodefault};
	__property int DialogMinHeight = {read=FDialogMinHeight, write=FDialogMinHeight, nodefault};
	__property int CompressedFilterIndex = {read=FCompressedFilterIndex, write=FCompressedFilterIndex, nodefault};
	__property int UnCompressedFilterIndex = {read=FUnCompressedFilterIndex, write=FUnCompressedFilterIndex, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property bool CtrlAlphaBlend = {read=FCtrlAlphaBlend, write=FCtrlAlphaBlend, nodefault};
	__property Byte CtrlAlphaBlendValue = {read=FCtrlAlphaBlendValue, write=FCtrlAlphaBlendValue, nodefault};
	__property bool CtrlAlphaBlendAnimation = {read=FCtrlAlphaBlendAnimation, write=FCtrlAlphaBlendAnimation, nodefault};
	__property AnsiString LVHeaderSkinDataName = {read=FLVHeaderSkinDataName, write=FLVHeaderSkinDataName};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property AnsiString InitialDir = {read=FInitialDir, write=FInitialDir};
	__property AnsiString Filter = {read=FFilter, write=FFilter};
	__property int FilterIndex = {read=FFilterIndex, write=FFilterIndex, nodefault};
	__property AnsiString FileName = {read=FFileName, write=FFileName};
};


class DELPHICLASS TspOpenPreviewDlgForm;
class PASCALIMPLEMENTATION TspOpenPreviewDlgForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
private:
	bool SaveMode;
	Classes::TList* FolderHistory;
	bool StopAddToHistory;
	Skindata::TspSkinData* CtrlSD;
	int NewFolderCount;
	
public:
	bool OverwritePromt;
	Skinctrls::TspPaintPanelEvent FOnPanelPaint;
	AnsiString FileName;
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinPanel* FileListViewPanel;
	Skinctrls::TspSkinPanel* BottomPanel;
	Skinctrls::TspSkinScrollBar* FLVHScrollBar;
	Skinctrls::TspSkinScrollBar* FLVVScrollBar;
	TspSkinFileListView* FileListView;
	Skinboxctrls::TspSkinEdit* FileNameEdit;
	Spfilectrl::TspSkinFilterComboBox* FilterComboBox;
	TspSkinShellComboBox* ShellBox;
	Skinctrls::TspSkinButton* OpenButton;
	Skinctrls::TspSkinButton* CancelButton;
	Skinctrls::TspSkinStdLabel* Drivelabel;
	Skinctrls::TspSkinStdLabel* OpenFileLabel;
	Skinctrls::TspSkinStdLabel* FileTypeLabel;
	Skinctrls::TspSkinToolBar* ToolPanel;
	Skinctrls::TspSkinSpeedButton* NewFolderToolButton;
	Skinctrls::TspSkinSpeedButton* UpToolButton;
	Skinctrls::TspSkinSpeedButton* BackToolButton;
	Skinctrls::TspSkinMenuSpeedButton* StyleToolButton;
	Skinmenus::TspSkinPopupMenu* StylePopupMenu;
	Menus::TMenuItem* IconMenuItem;
	Menus::TMenuItem* SmallIconMenuItem;
	Menus::TMenuItem* ReportMenuItem;
	Menus::TMenuItem* ListMenuItem;
	Classes::TNotifyEvent OnFolderChange;
	bool CheckFileExists;
	Skinctrls::TspSkinPaintPanel* PaintPanel;
	__fastcall TspOpenPreviewDlgForm(Classes::TComponent* AOwner, bool ASaveMode, Skindata::TspSkinData* ACtrlSkinData, bool AToolButtonsTransparent);
	__fastcall virtual ~TspOpenPreviewDlgForm(void);
	void __fastcall FLVChange(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange Change);
	void __fastcall FLVPathChange(System::TObject* Sender);
	void __fastcall FCBChange(System::TObject* Sender);
	void __fastcall OpenButtonClick(System::TObject* Sender);
	void __fastcall FLVDBLClick(System::TObject* Sender);
	void __fastcall FLVKeyPress(System::TObject* Sender, char &Key);
	void __fastcall EditKeyPress(System::TObject* Sender, char &Key);
	void __fastcall UpToolButtonClick(System::TObject* Sender);
	void __fastcall BackToolButtonClick(System::TObject* Sender);
	void __fastcall NewFolderToolButtonClick(System::TObject* Sender);
	void __fastcall ReportItemClick(System::TObject* Sender);
	void __fastcall ListItemClick(System::TObject* Sender);
	void __fastcall SmallIconItemClick(System::TObject* Sender);
	void __fastcall IconItemClick(System::TObject* Sender);
	__property Skinctrls::TspPaintPanelEvent OnPanelPaint = {read=FOnPanelPaint, write=FOnPanelPaint};
	void __fastcall InitHistory(void);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspOpenPreviewDlgForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspOpenPreviewDlgForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspOpenPreviewDlgForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinOpenPreviewDialog;
class PASCALIMPLEMENTATION TspSkinOpenPreviewDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FShowHiddenFiles;
	bool FToolButtonsTransparent;
	bool FOverwritePromt;
	int FDialogWidth;
	int FDialogHeight;
	int FDialogMinWidth;
	int FDialogMinHeight;
	Skinctrls::TspPaintPanelEvent FOnPreviewPanelPaint;
	int FPaintPanelSize;
	Classes::TNotifyEvent FOnFolderChange;
	bool FCheckFileExists;
	bool FMultiSelection;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FLVHeaderSkinDataName;
	Graphics::TFont* FDefaultFont;
	AnsiString FTitle;
	TspOpenPreviewDlgForm* FDlgFrm;
	Classes::TNotifyEvent FOnChange;
	AnsiString FInitialDir;
	AnsiString FFilter;
	AnsiString FFileName;
	int FFilterIndex;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FCtrlAlphaBlend;
	Byte FCtrlAlphaBlendValue;
	bool FCtrlAlphaBlendAnimation;
	Classes::TStringList* FFiles;
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetFileName(const AnsiString Value);
	
protected:
	bool FSaveMode;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall Change(void);
	
public:
	Comctrls::TViewStyle ListViewStyle;
	__fastcall virtual TspSkinOpenPreviewDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinOpenPreviewDialog(void);
	bool __fastcall Execute(void);
	__property Classes::TStringList* Files = {read=FFiles};
	AnsiString __fastcall GetSelectedFile();
	void __fastcall PreviewPanelRePaint(void);
	
__published:
	__property bool ShowHiddenFiles = {read=FShowHiddenFiles, write=FShowHiddenFiles, nodefault};
	__property bool ToolButtonsTransparent = {read=FToolButtonsTransparent, write=FToolButtonsTransparent, nodefault};
	__property bool OverwritePromt = {read=FOverwritePromt, write=FOverwritePromt, nodefault};
	__property int DialogWidth = {read=FDialogWidth, write=FDialogWidth, nodefault};
	__property int DialogHeight = {read=FDialogHeight, write=FDialogHeight, nodefault};
	__property int DialogMinWidth = {read=FDialogMinWidth, write=FDialogMinWidth, nodefault};
	__property int DialogMinHeight = {read=FDialogMinHeight, write=FDialogMinHeight, nodefault};
	__property int PaintPanelSize = {read=FPaintPanelSize, write=FPaintPanelSize, nodefault};
	__property bool CheckFileExists = {read=FCheckFileExists, write=FCheckFileExists, nodefault};
	__property bool MultiSelection = {read=FMultiSelection, write=FMultiSelection, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property bool CtrlAlphaBlend = {read=FCtrlAlphaBlend, write=FCtrlAlphaBlend, nodefault};
	__property Byte CtrlAlphaBlendValue = {read=FCtrlAlphaBlendValue, write=FCtrlAlphaBlendValue, nodefault};
	__property bool CtrlAlphaBlendAnimation = {read=FCtrlAlphaBlendAnimation, write=FCtrlAlphaBlendAnimation, nodefault};
	__property AnsiString LVHeaderSkinDataName = {read=FLVHeaderSkinDataName, write=FLVHeaderSkinDataName};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property AnsiString InitialDir = {read=FInitialDir, write=FInitialDir};
	__property AnsiString Filter = {read=FFilter, write=FFilter};
	__property int FilterIndex = {read=FFilterIndex, write=FFilterIndex, nodefault};
	__property AnsiString FileName = {read=FFileName, write=SetFileName};
	__property Classes::TNotifyEvent OnFolderChange = {read=FOnFolderChange, write=FOnFolderChange};
	__property Skinctrls::TspPaintPanelEvent OnPreviewPanelPaint = {read=FOnPreviewPanelPaint, write=FOnPreviewPanelPaint};
};


class DELPHICLASS TspSkinSavePreviewDialog;
class PASCALIMPLEMENTATION TspSkinSavePreviewDialog : public TspSkinOpenPreviewDialog 
{
	typedef TspSkinOpenPreviewDialog inherited;
	
public:
	__fastcall virtual TspSkinSavePreviewDialog(Classes::TComponent* AOwner);
public:
	#pragma option push -w-inl
	/* TspSkinOpenPreviewDialog.Destroy */ inline __fastcall virtual ~TspSkinSavePreviewDialog(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspOpenSoundDlgForm;
class PASCALIMPLEMENTATION TspOpenSoundDlgForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
private:
	bool SaveMode;
	Classes::TList* FolderHistory;
	bool StopAddToHistory;
	Skindata::TspSkinData* CtrlSD;
	int NewFolderCount;
	
public:
	bool OverwritePromt;
	Skinctrls::TspPaintPanelEvent FOnPanelPaint;
	AnsiString FileName;
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinPanel* FileListViewPanel;
	Skinctrls::TspSkinPanel* BottomPanel;
	Skinctrls::TspSkinScrollBar* FLVHScrollBar;
	Skinctrls::TspSkinScrollBar* FLVVScrollBar;
	TspSkinFileListView* FileListView;
	Skinboxctrls::TspSkinEdit* FileNameEdit;
	Spfilectrl::TspSkinFilterComboBox* FilterComboBox;
	TspSkinShellComboBox* ShellBox;
	Skinctrls::TspSkinButton* OpenButton;
	Skinctrls::TspSkinButton* CancelButton;
	Skinctrls::TspSkinSpeedButton* PlayButton;
	Skinctrls::TspSkinSpeedButton* StopButton;
	Skinctrls::TspSkinStdLabel* Drivelabel;
	Skinctrls::TspSkinStdLabel* OpenFileLabel;
	Skinctrls::TspSkinStdLabel* FileTypeLabel;
	Skinctrls::TspSkinToolBar* ToolPanel;
	Skinctrls::TspSkinSpeedButton* NewFolderToolButton;
	Skinctrls::TspSkinSpeedButton* UpToolButton;
	Skinctrls::TspSkinSpeedButton* BackToolButton;
	Skinctrls::TspSkinMenuSpeedButton* StyleToolButton;
	Skinmenus::TspSkinPopupMenu* StylePopupMenu;
	Menus::TMenuItem* IconMenuItem;
	Menus::TMenuItem* SmallIconMenuItem;
	Menus::TMenuItem* ReportMenuItem;
	Menus::TMenuItem* ListMenuItem;
	Classes::TNotifyEvent OnFolderChange;
	bool CheckFileExists;
	Skinctrls::TspSkinToolBar* SoundPanel;
	__fastcall TspOpenSoundDlgForm(Classes::TComponent* AOwner, bool ASaveMode, Skindata::TspSkinData* ACtrlSkinData, bool AToolButtonsTransparent);
	__fastcall virtual ~TspOpenSoundDlgForm(void);
	void __fastcall FLVChange(System::TObject* Sender, Comctrls::TListItem* Item, Comctrls::TItemChange Change);
	void __fastcall FLVPathChange(System::TObject* Sender);
	void __fastcall FCBChange(System::TObject* Sender);
	void __fastcall OpenButtonClick(System::TObject* Sender);
	void __fastcall FLVDBLClick(System::TObject* Sender);
	void __fastcall FLVKeyPress(System::TObject* Sender, char &Key);
	void __fastcall EditKeyPress(System::TObject* Sender, char &Key);
	void __fastcall UpToolButtonClick(System::TObject* Sender);
	void __fastcall BackToolButtonClick(System::TObject* Sender);
	void __fastcall NewFolderToolButtonClick(System::TObject* Sender);
	void __fastcall ReportItemClick(System::TObject* Sender);
	void __fastcall ListItemClick(System::TObject* Sender);
	void __fastcall SmallIconItemClick(System::TObject* Sender);
	void __fastcall IconItemClick(System::TObject* Sender);
	void __fastcall InitHistory(void);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspOpenSoundDlgForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspOpenSoundDlgForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspOpenSoundDlgForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinOpenSoundDialog;
class PASCALIMPLEMENTATION TspSkinOpenSoundDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FShowHiddenFiles;
	bool FToolButtonsTransparent;
	bool FOverwritePromt;
	Classes::TNotifyEvent FOnPlayButtonClick;
	Classes::TNotifyEvent FOnStopButtonClick;
	int FDialogWidth;
	int FDialogHeight;
	int FDialogMinWidth;
	int FDialogMinHeight;
	int FPaintPanelSize;
	Classes::TNotifyEvent FOnFolderChange;
	bool FCheckFileExists;
	bool FMultiSelection;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FLVHeaderSkinDataName;
	Graphics::TFont* FDefaultFont;
	AnsiString FTitle;
	TspOpenSoundDlgForm* FDlgFrm;
	Classes::TNotifyEvent FOnChange;
	AnsiString FInitialDir;
	AnsiString FFilter;
	AnsiString FFileName;
	int FFilterIndex;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FCtrlAlphaBlend;
	Byte FCtrlAlphaBlendValue;
	bool FCtrlAlphaBlendAnimation;
	Classes::TStringList* FFiles;
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetFileName(const AnsiString Value);
	
protected:
	bool FSaveMode;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall Change(void);
	
public:
	Comctrls::TViewStyle ListViewStyle;
	__fastcall virtual TspSkinOpenSoundDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinOpenSoundDialog(void);
	bool __fastcall Execute(void);
	__property Classes::TStringList* Files = {read=FFiles};
	AnsiString __fastcall GetSelectedFile();
	
__published:
	__property bool ShowHiddenFiles = {read=FShowHiddenFiles, write=FShowHiddenFiles, nodefault};
	__property bool ToolButtonsTransparent = {read=FToolButtonsTransparent, write=FToolButtonsTransparent, nodefault};
	__property bool OverwritePromt = {read=FOverwritePromt, write=FOverwritePromt, nodefault};
	__property int DialogWidth = {read=FDialogWidth, write=FDialogWidth, nodefault};
	__property int DialogHeight = {read=FDialogHeight, write=FDialogHeight, nodefault};
	__property int DialogMinWidth = {read=FDialogMinWidth, write=FDialogMinWidth, nodefault};
	__property int DialogMinHeight = {read=FDialogMinHeight, write=FDialogMinHeight, nodefault};
	__property int PaintPanelSize = {read=FPaintPanelSize, write=FPaintPanelSize, nodefault};
	__property bool CheckFileExists = {read=FCheckFileExists, write=FCheckFileExists, nodefault};
	__property bool MultiSelection = {read=FMultiSelection, write=FMultiSelection, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property bool CtrlAlphaBlend = {read=FCtrlAlphaBlend, write=FCtrlAlphaBlend, nodefault};
	__property Byte CtrlAlphaBlendValue = {read=FCtrlAlphaBlendValue, write=FCtrlAlphaBlendValue, nodefault};
	__property bool CtrlAlphaBlendAnimation = {read=FCtrlAlphaBlendAnimation, write=FCtrlAlphaBlendAnimation, nodefault};
	__property AnsiString LVHeaderSkinDataName = {read=FLVHeaderSkinDataName, write=FLVHeaderSkinDataName};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property AnsiString InitialDir = {read=FInitialDir, write=FInitialDir};
	__property AnsiString Filter = {read=FFilter, write=FFilter};
	__property int FilterIndex = {read=FFilterIndex, write=FFilterIndex, nodefault};
	__property AnsiString FileName = {read=FFileName, write=SetFileName};
	__property Classes::TNotifyEvent OnFolderChange = {read=FOnFolderChange, write=FOnFolderChange};
	__property Classes::TNotifyEvent OnPlayButtonClick = {read=FOnPlayButtonClick, write=FOnPlayButtonClick};
	__property Classes::TNotifyEvent OnStopButtonClick = {read=FOnStopButtonClick, write=FOnStopButtonClick};
};


class DELPHICLASS TspSkinSaveSoundDialog;
class PASCALIMPLEMENTATION TspSkinSaveSoundDialog : public TspSkinOpenSoundDialog 
{
	typedef TspSkinOpenSoundDialog inherited;
	
public:
	__fastcall virtual TspSkinSaveSoundDialog(Classes::TComponent* AOwner);
public:
	#pragma option push -w-inl
	/* TspSkinOpenSoundDialog.Destroy */ inline __fastcall virtual ~TspSkinSaveSoundDialog(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::ResourceString _SShellNoDetails;
#define Spskinshellctrls_SShellNoDetails System::LoadResourceString(&Spskinshellctrls::_SShellNoDetails)
extern PACKAGE System::ResourceString _SCallLoadDetails;
#define Spskinshellctrls_SCallLoadDetails System::LoadResourceString(&Spskinshellctrls::_SCallLoadDetails)
extern PACKAGE System::ResourceString _SPalletePage;
#define Spskinshellctrls_SPalletePage System::LoadResourceString(&Spskinshellctrls::_SPalletePage)
extern PACKAGE System::ResourceString _SPropertyName;
#define Spskinshellctrls_SPropertyName System::LoadResourceString(&Spskinshellctrls::_SPropertyName)
extern PACKAGE System::ResourceString _SRenamedFailedError;
#define Spskinshellctrls_SRenamedFailedError System::LoadResourceString(&Spskinshellctrls::_SRenamedFailedError)
extern PACKAGE System::ResourceString _SErrorSettingPath;
#define Spskinshellctrls_SErrorSettingPath System::LoadResourceString(&Spskinshellctrls::_SErrorSettingPath)
#define SRFDesktop "rfDesktop"
#define SCmdVerbOpen "open"
#define SCmdVerbRename "rename"
#define SCmdVerbDelete "delete"
#define SCmdVerbPaste "paste"
extern PACKAGE void __fastcall InvokeContextMenu(Controls::TWinControl* Owner, TspShellFolder* AFolder, int X, int Y);

}	/* namespace Spskinshellctrls */
using namespace Spskinshellctrls;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spSkinShellCtrls
