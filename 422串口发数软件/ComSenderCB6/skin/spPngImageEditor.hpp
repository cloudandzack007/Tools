// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spPngImageEditor.pas' rev: 6.00

#ifndef spPngImageEditorHPP
#define spPngImageEditorHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Buttons.hpp>	// Pascal unit
#include <sppngimage.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
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

namespace Sppngimageeditor
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TspPNGEditorForm;
class PASCALIMPLEMENTATION TspPNGEditorForm : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* Button1;
	Stdctrls::TButton* Button2;
	Dialogs::TOpenDialog* OD;
	Buttons::TBitBtn* BitBtn1;
	Buttons::TBitBtn* BitBtn2;
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall Button2Click(System::TObject* Sender);
	void __fastcall Button1Click(System::TObject* Sender);
	void __fastcall BitBtn1Click(System::TObject* Sender);
	void __fastcall BitBtn2Click(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	
private:
	Skinctrls::TspSkinPaintPanel* PaintPanel;
	void __fastcall PaintPanelOnPaint(Graphics::TCanvas* Cnvs, const Types::TRect &R);
	
public:
	Sppngimage::TspPngImage* FPngImage;
public:
	#pragma option push -w-inl
	/* TCustomForm.Create */ inline __fastcall virtual TspPNGEditorForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TspPNGEditorForm(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TspPNGEditorForm(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspPNGEditorForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TspPNGEditorForm* spPNGEditorForm;
extern PACKAGE void __fastcall ExecutePngEditor(Sppngimage::TspPngImage* AEditImage);

}	/* namespace Sppngimageeditor */
using namespace Sppngimageeditor;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spPngImageEditor
