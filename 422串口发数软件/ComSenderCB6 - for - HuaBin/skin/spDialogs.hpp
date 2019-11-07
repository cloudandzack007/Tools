// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spDialogs.pas' rev: 6.00

#ifndef spDialogsHPP
#define spDialogsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <spColorCtrls.hpp>	// Pascal unit
#include <spSkinShellCtrls.hpp>	// Pascal unit
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

namespace Spdialogs
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TspPDShowType { stStayOnTop, stModal };
#pragma option pop

class DELPHICLASS TspSkinProgressDialog;
class PASCALIMPLEMENTATION TspSkinProgressDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	bool FProgressAnimation;
	int FProgressAnimationPause;
	TspPDShowType FShowType;
	Classes::TNotifyEvent FOnCancel;
	Classes::TNotifyEvent FOnShow;
	bool FExecute;
	Skinctrls::TspSkinGauge* Gauge;
	Forms::TForm* Form;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FButtonSkinDataName;
	AnsiString FGaugeSkinDataName;
	AnsiString FLabelSkinDataName;
	Graphics::TFont* FDefaultLabelFont;
	Graphics::TFont* FDefaultGaugeFont;
	Graphics::TFont* FDefaultButtonFont;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FUseSkinFont;
	int FMinValue;
	int FMaxValue;
	int FValue;
	AnsiString FCaption;
	AnsiString FLabelCaption;
	bool FShowPercent;
	bool FShowCancelButton;
	bool FShowCloseButton;
	void __fastcall SetValue(int AValue);
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultGaugeFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall CancelBtnClick(System::TObject* Sender);
	void __fastcall OnFormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall OnFormShow(System::TObject* Sender);
	
public:
	bool __fastcall Execute(void);
	__fastcall virtual TspSkinProgressDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinProgressDialog(void);
	
__published:
	__property bool ProgressAnimation = {read=FProgressAnimation, write=FProgressAnimation, nodefault};
	__property int ProgressAnimationPause = {read=FProgressAnimationPause, write=FProgressAnimationPause, nodefault};
	__property bool ShowCancelButton = {read=FShowCancelButton, write=FShowCancelButton, nodefault};
	__property bool ShowCloseButton = {read=FShowCloseButton, write=FShowCloseButton, nodefault};
	__property TspPDShowType ShowType = {read=FShowType, write=FShowType, nodefault};
	__property AnsiString Caption = {read=FCaption, write=FCaption};
	__property AnsiString LabelCaption = {read=FLabelCaption, write=FLabelCaption};
	__property bool ShowPercent = {read=FShowPercent, write=FShowPercent, nodefault};
	__property int MinValue = {read=FMinValue, write=FMinValue, nodefault};
	__property int MaxValue = {read=FMaxValue, write=FMaxValue, nodefault};
	__property int Value = {read=FValue, write=SetValue, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property AnsiString LabelSkinDataName = {read=FLabelSkinDataName, write=FLabelSkinDataName};
	__property AnsiString GaugeSkinDataName = {read=FGaugeSkinDataName, write=FGaugeSkinDataName};
	__property Graphics::TFont* DefaultLabelFont = {read=FDefaultLabelFont, write=SetDefaultLabelFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultGaugeFont = {read=FDefaultGaugeFont, write=SetDefaultGaugeFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property Classes::TNotifyEvent OnCancel = {read=FOnCancel, write=FOnCancel};
};


class DELPHICLASS TspSkinInputDialog;
class PASCALIMPLEMENTATION TspSkinInputDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	Forms::TForm* Form;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FButtonSkinDataName;
	AnsiString FEditSkinDataName;
	AnsiString FLabelSkinDataName;
	Graphics::TFont* FDefaultLabelFont;
	Graphics::TFont* FDefaultEditFont;
	Graphics::TFont* FDefaultButtonFont;
	bool FUseSkinFont;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultEditFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	AnsiString __fastcall InputBox(const AnsiString ACaption, const AnsiString APrompt, const AnsiString ADefault);
	bool __fastcall InputQuery(const AnsiString ACaption, const AnsiString APrompt, AnsiString &Value);
	__fastcall virtual TspSkinInputDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinInputDialog(void);
	
__published:
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


class DELPHICLASS TspFontDlgForm;
class PASCALIMPLEMENTATION TspFontDlgForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
public:
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinboxctrls::TspSkinComboBox* ScriptComboBox;
	Skinboxctrls::TspSkinFontComboBox* FontNameBox;
	Spcolorctrls::TspSkinTextColorButton* FontColorBox;
	Skinboxctrls::TspSkinFontSizeComboBox* FontSizeEdit;
	Skinboxctrls::TspSkinSpinEdit* FontHeightEdit;
	Skinctrls::TspSkinPanel* FontExamplePanel;
	Stdctrls::TLabel* FontExampleLabel;
	Skinctrls::TspSkinButton* OkButton;
	Skinctrls::TspSkinButton* CancelButton;
	Skinctrls::TspSkinStdLabel* ScriptLabel;
	Skinctrls::TspSkinStdLabel* FontNameLabel;
	Skinctrls::TspSkinStdLabel* FontColorLabel;
	Skinctrls::TspSkinStdLabel* FontSizeLabel;
	Skinctrls::TspSkinStdLabel* FontHeightLabel;
	Skinctrls::TspSkinStdLabel* FontStyleLabel;
	Skinctrls::TspSkinStdLabel* FontExLabel;
	Skinctrls::TspSkinSpeedButton* BoldButton;
	Skinctrls::TspSkinSpeedButton* ItalicButton;
	Skinctrls::TspSkinSpeedButton* UnderLineButton;
	Skinctrls::TspSkinSpeedButton* StrikeOutButton;
	__fastcall TspFontDlgForm(Classes::TComponent* AOwner, Skindata::TspSkinData* ACtrlSkinData, bool AShowScript);
	void __fastcall FontSizeChange(System::TObject* Sender);
	void __fastcall FontHeightChange(System::TObject* Sender);
	void __fastcall FontNameChange(System::TObject* Sender);
	void __fastcall FontScriptChange(System::TObject* Sender);
	void __fastcall FontColorChange(System::TObject* Sender);
	void __fastcall BoldButtonClick(System::TObject* Sender);
	void __fastcall ItalicButtonClick(System::TObject* Sender);
	void __fastcall StrikeOutButtonClick(System::TObject* Sender);
	void __fastcall UnderLineButtonClick(System::TObject* Sender);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspFontDlgForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspFontDlgForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TspFontDlgForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspFontDlgForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinFontDialog;
class PASCALIMPLEMENTATION TspSkinFontDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	Graphics::TFont* FDefaultFont;
	AnsiString FTitle;
	TspFontDlgForm* FDlgFrm;
	Classes::TNotifyEvent FOnChange;
	Graphics::TFont* FFont;
	bool FShowSizeEdit;
	bool FShowHeightEdit;
	bool FAlphaBlend;
	bool FAlphaBlendAnimation;
	Byte FAlphaBlendValue;
	bool FShowScript;
	void __fastcall SetShowSizeEdit(bool Value);
	void __fastcall SetShowHeightEdit(bool Value);
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall SetFont(Graphics::TFont* Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall Change(void);
	
public:
	__fastcall virtual TspSkinFontDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinFontDialog(void);
	bool __fastcall Execute(void);
	
__published:
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property bool ShowSizeEdit = {read=FShowSizeEdit, write=SetShowSizeEdit, nodefault};
	__property bool ShowHeightEdit = {read=FShowHeightEdit, write=SetShowHeightEdit, nodefault};
	__property bool ShowScript = {read=FShowScript, write=FShowScript, nodefault};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
};


class DELPHICLASS TspSkinTextDialog;
class PASCALIMPLEMENTATION TspSkinTextDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	bool FToolButtonsTransparent;
	Skinboxctrls::TspSkinMemo2* Memo;
	bool FShowToolBar;
	AnsiString FCaption;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FButtonSkinDataName;
	AnsiString FMemoSkinDataName;
	Graphics::TFont* FDefaultMemoFont;
	Graphics::TFont* FDefaultButtonFont;
	bool FUseSkinFont;
	int FClientWidth;
	int FClientHeight;
	Classes::TStrings* FLines;
	Spskinshellctrls::TspSkinOpenDialog* FSkinOpenDialog;
	Spskinshellctrls::TspSkinSaveDialog* FSkinSaveDialog;
	bool FAlphaBlend;
	bool FAlphaBlendAnimation;
	Byte FAlphaBlendValue;
	void __fastcall SetLines(Classes::TStrings* Value);
	void __fastcall SetClientWidth(int Value);
	void __fastcall SetClientHeight(int Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultMemoFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall NewButtonClick(System::TObject* Sender);
	void __fastcall OpenButtonClick(System::TObject* Sender);
	void __fastcall SaveButtonClick(System::TObject* Sender);
	void __fastcall CopyButtonClick(System::TObject* Sender);
	void __fastcall CutButtonClick(System::TObject* Sender);
	void __fastcall PasteButtonClick(System::TObject* Sender);
	void __fastcall DeleteButtonClick(System::TObject* Sender);
	
public:
	__fastcall virtual TspSkinTextDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinTextDialog(void);
	bool __fastcall Execute(void);
	
__published:
	__property bool ToolButtonsTransparent = {read=FToolButtonsTransparent, write=FToolButtonsTransparent, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Spskinshellctrls::TspSkinOpenDialog* SkinOpenDialog = {read=FSkinOpenDialog, write=FSkinOpenDialog};
	__property Spskinshellctrls::TspSkinSaveDialog* SkinSaveDialog = {read=FSkinSaveDialog, write=FSkinSaveDialog};
	__property bool ShowToolBar = {read=FShowToolBar, write=FShowToolBar, nodefault};
	__property Classes::TStrings* Lines = {read=FLines, write=SetLines};
	__property int ClientWidth = {read=FClientWidth, write=SetClientWidth, nodefault};
	__property int ClientHeight = {read=FClientHeight, write=SetClientHeight, nodefault};
	__property AnsiString Caption = {read=FCaption, write=FCaption};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property AnsiString MemoSkinDataName = {read=FMemoSkinDataName, write=FMemoSkinDataName};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultMemoFont = {read=FDefaultMemoFont, write=SetDefaultMemoFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
};


class DELPHICLASS TspSkinPasswordDialog;
class PASCALIMPLEMENTATION TspSkinPasswordDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	bool FLoginMode;
	AnsiString FCaption;
	AnsiString FLogin;
	AnsiString FLoginCaption;
	AnsiString FPasswordCaption;
	AnsiString FPassword;
	Skinboxctrls::TspPasswordKind FPasswordKind;
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
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultEditFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinPasswordDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinPasswordDialog(void);
	bool __fastcall Execute(void);
	
__published:
	__property bool LoginMode = {read=FLoginMode, write=FLoginMode, nodefault};
	__property AnsiString Login = {read=FLogin, write=FLogin};
	__property AnsiString LoginCaption = {read=FLoginCaption, write=FLoginCaption};
	__property AnsiString Password = {read=FPassword, write=FPassword};
	__property Skinboxctrls::TspPasswordKind PasswordKind = {read=FPasswordKind, write=FPasswordKind, nodefault};
	__property AnsiString Caption = {read=FCaption, write=FCaption};
	__property AnsiString PasswordCaption = {read=FPasswordCaption, write=FPasswordCaption};
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


class DELPHICLASS TspSkinConfirmDialog;
class PASCALIMPLEMENTATION TspSkinConfirmDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	AnsiString FCaption;
	AnsiString FPassword1;
	AnsiString FPassword1Caption;
	AnsiString FPassword2;
	AnsiString FPassword2Caption;
	Skinboxctrls::TspPasswordKind FPasswordKind;
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
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultEditFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSkinConfirmDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinConfirmDialog(void);
	bool __fastcall Execute(void);
	
__published:
	__property AnsiString Password1 = {read=FPassword1, write=FPassword1};
	__property AnsiString Password1Caption = {read=FPassword1Caption, write=FPassword1Caption};
	__property AnsiString Password2 = {read=FPassword2, write=FPassword2};
	__property AnsiString Password2Caption = {read=FPassword2Caption, write=FPassword2Caption};
	__property Skinboxctrls::TspPasswordKind PasswordKind = {read=FPasswordKind, write=FPasswordKind, nodefault};
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


class DELPHICLASS TspSelectSkinDlgForm;
class PASCALIMPLEMENTATION TspSelectSkinDlgForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
public:
	Skindata::TspCompressedSkinList* FCSkinList;
	int FCSkinIndex;
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinButton* OpenButton;
	Skinctrls::TspSkinButton* CancelButton;
	Forms::TForm* PreviewForm;
	Dynamicskinform::TspDynamicSkinForm* PreviewDSF;
	Skindata::TspSkinData* PreviewSkinData;
	Skinctrls::TspSkinButton* PreviewButton;
	Skinboxctrls::TspSkinListBox* SkinsListBox;
	Classes::TList* SkinList;
	__fastcall TspSelectSkinDlgForm(Classes::TComponent* AOwner, Skindata::TspCompressedSkinList* ASkinList, int ASkinIndex, Skindata::TspSkinData* ACtrlSkinData);
	__fastcall TspSelectSkinDlgForm(Classes::TComponent* AOwner, Forms::TForm* AForm, Skindata::TspCompressedStoredSkin* ADefaultSkin, Skindata::TspSkinData* ACtrlSkinData);
	__fastcall virtual ~TspSelectSkinDlgForm(void);
	Skindata::TspCompressedStoredSkin* __fastcall GetSelectedSkin(void);
	__property Skindata::TspCompressedStoredSkin* SelectedSkin = {read=GetSelectedSkin};
	void __fastcall SLBOnChange(System::TObject* Sender);
	void __fastcall SLBOnDblClick(System::TObject* Sender);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspSelectSkinDlgForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspSelectSkinDlgForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSelectSkinDlgForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSelectSkinDialog;
class PASCALIMPLEMENTATION TspSelectSkinDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	Skindata::TspSkinData* FSD;
	Skindata::TspCompressedSkinList* FSkinList;
	Skindata::TspSkinData* FCtrlFSD;
	Graphics::TFont* FDefaultFont;
	AnsiString FTitle;
	TspSelectSkinDlgForm* FDlgFrm;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	Skindata::TspCompressedStoredSkin* FSelectedSkin;
	int FSelectedSkinIndex;
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSelectSkinDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSelectSkinDialog(void);
	bool __fastcall Execute(Skindata::TspCompressedStoredSkin* DefaultCompressedSkin)/* overload */;
	bool __fastcall Execute(int SkinIndex)/* overload */;
	__property Skindata::TspCompressedStoredSkin* SelectedSkin = {read=FSelectedSkin};
	__property int SelectedSkinIndex = {read=FSelectedSkinIndex, nodefault};
	
__published:
	__property Skindata::TspCompressedSkinList* SkinList = {read=FSkinList, write=FSkinList};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
};


class DELPHICLASS TspSkinSelectValueDialog;
class PASCALIMPLEMENTATION TspSkinSelectValueDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	void __fastcall SetSelectValues(const Classes::TStrings* Value);
	
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
	int FDefaultValueIndex;
	Classes::TStrings* FSelectValues;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FUseSkinFont;
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultSelectFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	bool __fastcall Execute(const AnsiString ACaption, const AnsiString APrompt, int &ValueIndex);
	__fastcall virtual TspSkinSelectValueDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinSelectValueDialog(void);
	
__published:
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property AnsiString LabelSkinDataName = {read=FLabelSkinDataName, write=FLabelSkinDataName};
	__property AnsiString ComboboxSkinDataName = {read=FSelectSkinDataName, write=FSelectSkinDataName};
	__property Classes::TStrings* SelectValues = {read=FSelectValues, write=SetSelectValues};
	__property int DefaultValue = {read=FDefaultValueIndex, write=FDefaultValueIndex, nodefault};
	__property Graphics::TFont* DefaultLabelFont = {read=FDefaultLabelFont, write=SetDefaultLabelFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultComboBoxFont = {read=FDefaultSelectFont, write=SetDefaultSelectFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
};


class DELPHICLASS TspSelectSkinsFromFoldersDlgForm;
class PASCALIMPLEMENTATION TspSelectSkinsFromFoldersDlgForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
public:
	AnsiString FSkinsFolder;
	AnsiString FIniFileName;
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinButton* OpenButton;
	Skinctrls::TspSkinButton* CancelButton;
	Forms::TForm* PreviewForm;
	Dynamicskinform::TspDynamicSkinForm* PreviewDSF;
	Skindata::TspSkinData* PreviewSkinData;
	Skinctrls::TspSkinButton* PreviewButton;
	Skinboxctrls::TspSkinListBox* SkinsListBox;
	__fastcall TspSelectSkinsFromFoldersDlgForm(Classes::TComponent* AOwner, AnsiString ASkinsFolder, AnsiString ADefaultSkinFolder, AnsiString AIniFileName, Skindata::TspSkinData* ACtrlSkinData);
	__fastcall virtual ~TspSelectSkinsFromFoldersDlgForm(void);
	void __fastcall SLBOnChange(System::TObject* Sender);
	void __fastcall SLBOnDblClick(System::TObject* Sender);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspSelectSkinsFromFoldersDlgForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspSelectSkinsFromFoldersDlgForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSelectSkinsFromFoldersDlgForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSelectSkinsFromFoldersDialog;
class PASCALIMPLEMENTATION TspSelectSkinsFromFoldersDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	Graphics::TFont* FDefaultFont;
	AnsiString FTitle;
	TspSelectSkinsFromFoldersDlgForm* FDlgFrm;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	AnsiString FFileName;
	AnsiString FFolderName;
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TspSelectSkinsFromFoldersDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSelectSkinsFromFoldersDialog(void);
	bool __fastcall Execute(AnsiString ASkinsFolder, AnsiString ADefaultSkinFolder, AnsiString AIniFileName);
	__property AnsiString FileName = {read=FFileName};
	__property AnsiString FolderName = {read=FFolderName};
	
__published:
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
};


#pragma option push -b-
enum TspFindOption { spfrDown, spfrFindNext, spfrHideMatchCase, spfrHideWholeWord, spfrHideUpDown, spfrMatchCase, spfrDisableMatchCase, spfrDisableUpDown, spfrDisableWholeWord, spfrReplace, spfrReplaceAll, spfrWholeWord };
#pragma option pop

typedef Set<TspFindOption, spfrDown, spfrWholeWord>  TspFindOptions;

class DELPHICLASS TspSkinFindDialog;
class PASCALIMPLEMENTATION TspSkinFindDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	AnsiString FTitle;
	TspFindOptions FOptions;
	#pragma pack(push, 1)
	Types::TPoint FPosition;
	#pragma pack(pop)
	
	Classes::TNotifyEvent FOnFind;
	AnsiString FFindText;
	bool FGroupBoxTransparentMode;
	AnsiString __fastcall GetFindText();
	int __fastcall GetLeft(void);
	Types::TPoint __fastcall GetPosition();
	int __fastcall GetTop(void);
	void __fastcall SetFindText(const AnsiString Value);
	void __fastcall SetLeft(int Value);
	void __fastcall SetPosition(const Types::TPoint &Value);
	void __fastcall SetTop(int Value);
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall MatchCaseCheckBoxClick(System::TObject* Sender);
	void __fastcall MatchWWOnlyCheckBoxClick(System::TObject* Sender);
	void __fastcall DirecionUpClick(System::TObject* Sender);
	void __fastcall DirecionDownClick(System::TObject* Sender);
	void __fastcall CloseButtonClick(System::TObject* Sender);
	void __fastcall FindButtonClick(System::TObject* Sender);
	void __fastcall OnFormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall EditChange(System::TObject* Sender);
	void __fastcall EditKeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	
protected:
	Forms::TForm* Form;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	Skinboxctrls::TspSkinEdit* FEdit;
	Graphics::TFont* FDefaultLabelFont;
	Graphics::TFont* FDefaultButtonFont;
	Graphics::TFont* FDefaultEditFont;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FUseSkinFont;
	Skinctrls::TspSkinCheckRadioBox* MatchWWOnlyCheckBox;
	Skinctrls::TspSkinCheckRadioBox* MatchCaseCheckBox;
	Skinctrls::TspSkinButton* FindButton;
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultEditFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall Find(void);
	
public:
	__fastcall virtual TspSkinFindDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinFindDialog(void);
	bool __fastcall Execute(void);
	__property int Left = {read=GetLeft, write=SetLeft, nodefault};
	__property Types::TPoint Position = {read=GetPosition, write=SetPosition};
	__property int Top = {read=GetTop, write=SetTop, nodefault};
	
__published:
	__property bool GroupBoxTransparentMode = {read=FGroupBoxTransparentMode, write=FGroupBoxTransparentMode, nodefault};
	__property AnsiString FindText = {read=GetFindText, write=SetFindText};
	__property TspFindOptions Options = {read=FOptions, write=FOptions, default=1};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultLabelFont = {read=FDefaultLabelFont, write=SetDefaultLabelFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultEditFont = {read=FDefaultEditFont, write=SetDefaultEditFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Classes::TNotifyEvent OnFind = {read=FOnFind, write=FOnFind};
};


class DELPHICLASS TspSkinReplaceDialog;
class PASCALIMPLEMENTATION TspSkinReplaceDialog : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	AnsiString FTitle;
	TspFindOptions FOptions;
	#pragma pack(push, 1)
	Types::TPoint FPosition;
	#pragma pack(pop)
	
	Classes::TNotifyEvent FOnFind;
	Classes::TNotifyEvent FOnReplace;
	AnsiString FFindText;
	AnsiString FReplaceText;
	bool FGroupBoxTransparentMode;
	AnsiString __fastcall GetFindText();
	AnsiString __fastcall GetReplaceText();
	int __fastcall GetLeft(void);
	Types::TPoint __fastcall GetPosition();
	int __fastcall GetTop(void);
	void __fastcall SetFindText(const AnsiString Value);
	void __fastcall SetReplaceText(const AnsiString Value);
	void __fastcall SetLeft(int Value);
	void __fastcall SetPosition(const Types::TPoint &Value);
	void __fastcall SetTop(int Value);
	AnsiString __fastcall GetTitle();
	void __fastcall SetTitle(const AnsiString Value);
	void __fastcall MatchCaseCheckBoxClick(System::TObject* Sender);
	void __fastcall MatchWWOnlyCheckBoxClick(System::TObject* Sender);
	void __fastcall DirecionUpClick(System::TObject* Sender);
	void __fastcall DirecionDownClick(System::TObject* Sender);
	void __fastcall CloseButtonClick(System::TObject* Sender);
	void __fastcall FindButtonClick(System::TObject* Sender);
	void __fastcall ReplaceButtonClick(System::TObject* Sender);
	void __fastcall ReplaceAllButtonClick(System::TObject* Sender);
	void __fastcall OnFormClose(System::TObject* Sender, Forms::TCloseAction &Action);
	void __fastcall EditChange(System::TObject* Sender);
	void __fastcall ReplaceEditChange(System::TObject* Sender);
	void __fastcall EditKeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	void __fastcall ReplaceEditKeyDown(System::TObject* Sender, Word &Key, Classes::TShiftState Shift);
	
protected:
	Forms::TForm* Form;
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	Skinboxctrls::TspSkinEdit* FEdit;
	Skinboxctrls::TspSkinEdit* FReplaceEdit;
	Graphics::TFont* FDefaultLabelFont;
	Graphics::TFont* FDefaultButtonFont;
	Graphics::TFont* FDefaultEditFont;
	bool FAlphaBlend;
	Byte FAlphaBlendValue;
	bool FAlphaBlendAnimation;
	bool FUseSkinFont;
	Skinctrls::TspSkinCheckRadioBox* MatchWWOnlyCheckBox;
	Skinctrls::TspSkinCheckRadioBox* MatchCaseCheckBox;
	Skinctrls::TspSkinButton* CloseButton;
	Skinctrls::TspSkinButton* FindButton;
	Skinctrls::TspSkinButton* ReplaceButton;
	Skinctrls::TspSkinButton* ReplaceAllButton;
	void __fastcall SetDefaultLabelFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	void __fastcall SetDefaultEditFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall Find(void);
	DYNAMIC void __fastcall Replace(void);
	
public:
	__fastcall virtual TspSkinReplaceDialog(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinReplaceDialog(void);
	bool __fastcall Execute(void);
	__property int Left = {read=GetLeft, write=SetLeft, nodefault};
	__property Types::TPoint Position = {read=GetPosition, write=SetPosition};
	__property int Top = {read=GetTop, write=SetTop, nodefault};
	
__published:
	__property bool GroupBoxTransparentMode = {read=FGroupBoxTransparentMode, write=FGroupBoxTransparentMode, nodefault};
	__property AnsiString FindText = {read=GetFindText, write=SetFindText};
	__property AnsiString ReplaceText = {read=GetReplaceText, write=SetReplaceText};
	__property TspFindOptions Options = {read=FOptions, write=FOptions, default=1};
	__property AnsiString Title = {read=GetTitle, write=SetTitle};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property Graphics::TFont* DefaultLabelFont = {read=FDefaultLabelFont, write=SetDefaultLabelFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property Graphics::TFont* DefaultEditFont = {read=FDefaultEditFont, write=SetDefaultEditFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
	__property Classes::TNotifyEvent OnFind = {read=FOnFind, write=FOnFind};
	__property Classes::TNotifyEvent OnReplace = {read=FOnReplace, write=FOnReplace};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Spdialogs */
using namespace Spdialogs;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spDialogs
