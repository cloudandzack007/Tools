// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spMessages.pas' rev: 6.00

#ifndef spMessagesHPP
#define spMessagesHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ImgList.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
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

namespace Spmessages
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TspMessageForm;
class PASCALIMPLEMENTATION TspMessageForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
protected:
	void __fastcall HelpButtonClick(System::TObject* Sender);
	
public:
	Dynamicskinform::TspDynamicSkinForm* DSF;
	Skinctrls::TspSkinCheckRadioBox* DisplayCheckBox;
	Skinctrls::TspSkinStdLabel* Message;
	__fastcall TspMessageForm(Classes::TComponent* AOwner, int X, int Y);
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspMessageForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspMessageForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TspMessageForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspMessageForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


class DELPHICLASS TspSkinMessage;
class PASCALIMPLEMENTATION TspSkinMessage : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	Skindata::TspSkinData* FSD;
	Skindata::TspSkinData* FCtrlFSD;
	AnsiString FButtonSkinDataName;
	AnsiString FMessageLabelSkinDataName;
	Graphics::TFont* FDefaultFont;
	Graphics::TFont* FDefaultButtonFont;
	bool FUseSkinFont;
	bool FAlphaBlend;
	bool FAlphaBlendAnimation;
	Byte FAlphaBlendValue;
	bool FShowAgainFlag;
	bool FShowAgainFlagValue;
	void __fastcall SetDefaultFont(Graphics::TFont* Value);
	void __fastcall SetDefaultButtonFont(Graphics::TFont* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	int __fastcall WideMessageDlg(const WideString Msg, Dialogs::TMsgDlgType DlgType, Dialogs::TMsgDlgButtons Buttons, int HelpCtx);
	int __fastcall WideMessageDlgPos(const WideString Msg, Dialogs::TMsgDlgType DlgType, Dialogs::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y);
	int __fastcall MessageDlg(const AnsiString Msg, Dialogs::TMsgDlgType DlgType, Dialogs::TMsgDlgButtons Buttons, int HelpCtx);
	int __fastcall MessageDlgPos(const AnsiString Msg, Dialogs::TMsgDlgType DlgType, Dialogs::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y);
	int __fastcall MessageDlgHelp(const AnsiString Msg, Dialogs::TMsgDlgType DlgType, Dialogs::TMsgDlgButtons Buttons, int HelpCtx, const AnsiString HelpFileName);
	int __fastcall MessageDlg2(const AnsiString Msg, AnsiString ACaption, Dialogs::TMsgDlgType DlgType, Dialogs::TMsgDlgButtons Buttons, int HelpCtx);
	int __fastcall MessageDlgHelp2(const AnsiString Msg, AnsiString ACaption, Dialogs::TMsgDlgType DlgType, Dialogs::TMsgDlgButtons Buttons, int HelpCtx, const AnsiString HelpFileName);
	int __fastcall CustomMessageDlg(const AnsiString Msg, AnsiString ACaption, Imglist::TCustomImageList* AImages, int AImageIndex, Dialogs::TMsgDlgButtons Buttons, int HelpCtx);
	int __fastcall CustomMessageDlgPos(const AnsiString Msg, AnsiString ACaption, Imglist::TCustomImageList* AImages, int AImageIndex, Dialogs::TMsgDlgButtons Buttons, int HelpCtx, int X, int Y);
	int __fastcall CustomMessageDlgHelp(const AnsiString Msg, AnsiString ACaption, Imglist::TCustomImageList* AImages, int AImageIndex, Dialogs::TMsgDlgButtons Buttons, int HelpCtx, const AnsiString HelpFileName);
	__fastcall virtual TspSkinMessage(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinMessage(void);
	
__published:
	__property bool ShowAgainFlag = {read=FShowAgainFlag, write=FShowAgainFlag, nodefault};
	__property bool ShowAgainFlagValue = {read=FShowAgainFlagValue, write=FShowAgainFlagValue, nodefault};
	__property bool AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, nodefault};
	__property bool AlphaBlendAnimation = {read=FAlphaBlendAnimation, write=FAlphaBlendAnimation, nodefault};
	__property Byte AlphaBlendValue = {read=FAlphaBlendValue, write=FAlphaBlendValue, nodefault};
	__property Skindata::TspSkinData* SkinData = {read=FSD, write=FSD};
	__property Skindata::TspSkinData* CtrlSkinData = {read=FCtrlFSD, write=FCtrlFSD};
	__property AnsiString ButtonSkinDataName = {read=FButtonSkinDataName, write=FButtonSkinDataName};
	__property AnsiString MessageLabelSkinDataName = {read=FMessageLabelSkinDataName, write=FMessageLabelSkinDataName};
	__property Graphics::TFont* DefaultFont = {read=FDefaultFont, write=SetDefaultFont};
	__property Graphics::TFont* DefaultButtonFont = {read=FDefaultButtonFont, write=SetDefaultButtonFont};
	__property bool UseSkinFont = {read=FUseSkinFont, write=FUseSkinFont, nodefault};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Spmessages */
using namespace Spmessages;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spMessages
