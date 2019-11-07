// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spNBPagesEditor.pas' rev: 6.00

#ifndef spNBPagesEditorHPP
#define spNBPagesEditorHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <StdCtrls.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
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

namespace Spnbpageseditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TNBPagesForm;
class PASCALIMPLEMENTATION TNBPagesForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TListBox* PageListBox;
	Stdctrls::TEdit* CaptionEdit;
	Stdctrls::TButton* AddButton;
	Stdctrls::TButton* DeleteButton;
	Stdctrls::TButton* MoveUpButton;
	Stdctrls::TButton* MoveDownButton;
	Stdctrls::TComboBox* IIndexBox;
	Stdctrls::TLabel* Label1;
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall AddButtonClick(System::TObject* Sender);
	void __fastcall DeleteButtonClick(System::TObject* Sender);
	void __fastcall PageListBoxClick(System::TObject* Sender);
	void __fastcall CaptionEditChange(System::TObject* Sender);
	void __fastcall MoveUpButtonClick(System::TObject* Sender);
	void __fastcall MoveDownButtonClick(System::TObject* Sender);
	void __fastcall IIndexBoxChange(System::TObject* Sender);
	
private:
	Skinctrls::TspSkinNotebook* NB;
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TNBPagesForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TNBPagesForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TNBPagesForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TNBPagesForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TNBPagesForm* NBPagesForm;
extern PACKAGE void __fastcall Execute(Skinctrls::TspSkinNotebook* ANoteBook);

}	/* namespace Spnbpageseditor */
using namespace Spnbpageseditor;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spNBPagesEditor
