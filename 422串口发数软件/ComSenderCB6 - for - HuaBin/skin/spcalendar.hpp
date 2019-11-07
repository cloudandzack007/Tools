// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'spcalendar.pas' rev: 6.00

#ifndef spcalendarHPP
#define spcalendarHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <ExtCtrls.hpp>	// Pascal unit
#include <SkinData.hpp>	// Pascal unit
#include <SkinCtrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
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

namespace Spcalendar
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TspDaysOfWeek { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
#pragma option pop

class DELPHICLASS TspSkinMonthCalendar;
class PASCALIMPLEMENTATION TspSkinMonthCalendar : public Skinctrls::TspSkinPanel 
{
	typedef Skinctrls::TspSkinPanel inherited;
	
protected:
	bool FTodayDefault;
	int BevelTop;
	int CellW;
	int CellH;
	Skinctrls::TspSkinSpeedButton* FBtns[4];
	TDate FDate;
	TspDaysOfWeek FFirstDayOfWeek;
	Graphics::TColor CalFontColor;
	Graphics::TColor CalActiveFontColor;
	Classes::TNotifyEvent FOnNumberClick;
	bool FBoldDays;
	virtual void __fastcall Loaded(void);
	void __fastcall SetTodayDefault(bool Value);
	void __fastcall OffsetMonth(int AOffset);
	void __fastcall OffsetYear(int AOffset);
	void __fastcall SetFirstDayOfWeek(TspDaysOfWeek Value);
	void __fastcall UpdateCalendar(void);
	void __fastcall ArangeControls(void);
	HIDESBASE MESSAGE void __fastcall WMSIZE(Messages::TWMSize &Message);
	virtual void __fastcall SetSkinData(Skindata::TspSkinData* Value);
	virtual void __fastcall CreateControlDefaultImage(Graphics::TBitmap* B);
	virtual void __fastcall CreateControlSkinImage(Graphics::TBitmap* B);
	void __fastcall SetDate(TDate Value);
	void __fastcall DrawCalendar(Graphics::TCanvas* Cnvs);
	int __fastcall DaysThisMonth(void);
	int __fastcall GetMonthOffset(void);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	Word __fastcall DayNumFromPoint(int X, int Y);
	void __fastcall NextMButtonClick(System::TObject* Sender);
	void __fastcall PriorMButtonClick(System::TObject* Sender);
	void __fastcall NextYButtonClick(System::TObject* Sender);
	void __fastcall PriorYButtonClick(System::TObject* Sender);
	virtual void __fastcall SetCaptionMode(bool Value);
	virtual void __fastcall SetDefaultCaptionHeight(int Value);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Msg);
	void __fastcall SetBoldDays(bool Value);
	void __fastcall DrawFrame(const Types::TRect &R, Graphics::TCanvas* C);
	
public:
	__fastcall virtual TspSkinMonthCalendar(Classes::TComponent* AOwner);
	virtual void __fastcall ChangeSkinData(void);
	
__published:
	__property TDate Date = {read=FDate, write=SetDate};
	__property bool TodayDefault = {read=FTodayDefault, write=SetTodayDefault, nodefault};
	__property TspDaysOfWeek FirstDayOfWeek = {read=FFirstDayOfWeek, write=SetFirstDayOfWeek, nodefault};
	__property Classes::TNotifyEvent OnNumberClick = {read=FOnNumberClick, write=FOnNumberClick};
	__property bool BoldDays = {read=FBoldDays, write=SetBoldDays, nodefault};
public:
	#pragma option push -w-inl
	/* TspSkinPanel.Destroy */ inline __fastcall virtual ~TspSkinMonthCalendar(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TspSkinMonthCalendar(HWND ParentWindow) : Skinctrls::TspSkinPanel(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Spcalendar */
using namespace Spcalendar;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// spcalendar
