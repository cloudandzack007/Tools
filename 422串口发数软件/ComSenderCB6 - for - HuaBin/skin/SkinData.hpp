// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SkinData.pas' rev: 6.00

#ifndef SkinDataHPP
#define SkinDataHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Dialogs.hpp>	// Pascal unit
#include <IniFiles.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <SPUtils.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Skindata
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TStdCommand { cmClose, cmMaximize, cmMinimize, cmSysMenu, cmDefault, cmRollUp, cmMinimizeToTray };
#pragma option pop

#pragma option push -b-
enum TMorphKind { mkDefault, mkGradient, mkLeftGradient, mkRightGradient, mkLeftSlide, mkRightSlide, mkPush };
#pragma option pop

#pragma option push -b-
enum TFramesPlacement { fpHorizontal, fpVertical };
#pragma option pop

#pragma option push -b-
enum TRegulatorKind { rkRound, rkHorizontal, rkVertical };
#pragma option pop

#pragma option push -b-
enum TspInActiveEffect { ieBrightness, ieDarkness, ieGrayScale, ieNoise, ieSplitBlur, ieInvert };
#pragma option pop

class DELPHICLASS TspDataSkinControl;
class PASCALIMPLEMENTATION TspDataSkinControl : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	AnsiString IDName;
	int PictureIndex;
	int MaskPictureIndex;
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	int CursorIndex;
	__fastcall TspDataSkinControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinBevel;
class PASCALIMPLEMENTATION TspDataSkinBevel : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	Graphics::TColor LightColor;
	Graphics::TColor DarkColor;
	__fastcall TspDataSkinBevel(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinBevel(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinSlider;
class PASCALIMPLEMENTATION TspDataSkinSlider : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect HRulerRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HThumbRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRulerRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VThumbRect;
	#pragma pack(pop)
	
	int EdgeSize;
	Graphics::TColor BGColor;
	Graphics::TColor PointsColor;
	__fastcall TspDataSkinSlider(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinSlider(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinTreeView;
class PASCALIMPLEMENTATION TspDataSkinTreeView : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor BGColor;
	__fastcall TspDataSkinTreeView(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinTreeView(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinRichEdit;
class PASCALIMPLEMENTATION TspDataSkinRichEdit : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor BGColor;
	__fastcall TspDataSkinRichEdit(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinRichEdit(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinListView;
class PASCALIMPLEMENTATION TspDataSkinListView : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor BGColor;
	__fastcall TspDataSkinListView(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinListView(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinMainMenuBar;
class PASCALIMPLEMENTATION TspDataSkinMainMenuBar : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect ItemsRect;
	#pragma pack(pop)
	
	AnsiString MenuBarItem;
	AnsiString CloseButton;
	AnsiString MaxButton;
	AnsiString MinButton;
	AnsiString SysMenuButton;
	int TrackMarkColor;
	int TrackMarkActiveColor;
	bool StretchEffect;
	bool ItemTransparent;
	__fastcall TspDataSkinMainMenuBar(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinMainMenuBar(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinTabControl;
class PASCALIMPLEMENTATION TspDataSkinTabControl : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect TabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MouseInTabRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TabsBGRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPoint;
	#pragma pack(pop)
	
	int TabLeftOffset;
	int TabRightOffset;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor FocusFontColor;
	Graphics::TColor MouseInFontColor;
	AnsiString UpDown;
	int BGPictureIndex;
	bool TabStretchEffect;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	bool ShowFocus;
	int FocusOffsetX;
	int FocusOffsetY;
	bool StretchEffect;
	Sputils::TspStretchType StretchType;
	#pragma pack(push, 1)
	Types::TRect CloseButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonDownRect;
	#pragma pack(pop)
	
	bool ButtonTransparent;
	Graphics::TColor ButtonTransparentColor;
	__fastcall TspDataSkinTabControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinTabControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinGridControl;
class PASCALIMPLEMENTATION TspDataSkinGridControl : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect FixedCellRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect SelectCellRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusCellRect;
	#pragma pack(pop)
	
	int FixedCellLeftOffset;
	int FixedCellRightOffset;
	#pragma pack(push, 1)
	Types::TRect FixedCellTextRect;
	#pragma pack(pop)
	
	int CellLeftOffset;
	int CellRightOffset;
	#pragma pack(push, 1)
	Types::TRect CellTextRect;
	#pragma pack(pop)
	
	Graphics::TColor LinesColor;
	Graphics::TColor BGColor;
	int BGPictureIndex;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor SelectFontColor;
	Graphics::TColor FocusFontColor;
	AnsiString FixedFontName;
	Graphics::TFontStyles FixedFontStyle;
	int FixedFontHeight;
	Graphics::TColor FixedFontColor;
	bool FixedCellStretchEffect;
	bool CellStretchEffect;
	bool ShowFocus;
	__fastcall TspDataSkinGridControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinGridControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinFrameControl;
class PASCALIMPLEMENTATION TspDataSkinFrameControl : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	int FramesCount;
	TFramesPlacement FramesPlacement;
	__fastcall TspDataSkinFrameControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinFrameControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinAnimateControl;
class PASCALIMPLEMENTATION TspDataSkinAnimateControl : public TspDataSkinFrameControl 
{
	typedef TspDataSkinFrameControl inherited;
	
public:
	#pragma option push -w-inl
	/* TspDataSkinFrameControl.Create */ inline __fastcall TspDataSkinAnimateControl(AnsiString AIDName) : TspDataSkinFrameControl(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinAnimateControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinSwitchControl;
class PASCALIMPLEMENTATION TspDataSkinSwitchControl : public TspDataSkinFrameControl 
{
	typedef TspDataSkinFrameControl inherited;
	
public:
	#pragma option push -w-inl
	/* TspDataSkinFrameControl.Create */ inline __fastcall TspDataSkinSwitchControl(AnsiString AIDName) : TspDataSkinFrameControl(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinSwitchControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinFrameGauge;
class PASCALIMPLEMENTATION TspDataSkinFrameGauge : public TspDataSkinFrameControl 
{
	typedef TspDataSkinFrameControl inherited;
	
public:
	#pragma option push -w-inl
	/* TspDataSkinFrameControl.Create */ inline __fastcall TspDataSkinFrameGauge(AnsiString AIDName) : TspDataSkinFrameControl(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinFrameGauge(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinFrameRegulator;
class PASCALIMPLEMENTATION TspDataSkinFrameRegulator : public TspDataSkinFrameControl 
{
	typedef TspDataSkinFrameControl inherited;
	
public:
	TRegulatorKind Kind;
	__fastcall TspDataSkinFrameRegulator(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinFrameRegulator(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinCustomControl;
class PASCALIMPLEMENTATION TspDataSkinCustomControl : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TPoint LTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	bool StretchEffect;
	bool LeftStretch;
	bool TopStretch;
	bool RightStretch;
	bool BottomStretch;
	Sputils::TspStretchType StretchType;
	__fastcall TspDataSkinCustomControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinCustomControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinControlBar;
class PASCALIMPLEMENTATION TspDataSkinControlBar : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect ItemRect;
	#pragma pack(pop)
	
	int BGPictureIndex;
	#pragma pack(push, 1)
	Types::TRect HGripRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VGripRect;
	#pragma pack(pop)
	
	int GripOffset1;
	int GripOffset2;
	bool ItemStretchEffect;
	int ItemOffset1;
	int ItemOffset2;
	bool ItemTransparent;
	Graphics::TColor ItemTransparentColor;
	bool GripTransparent;
	Graphics::TColor GripTransparentColor;
	__fastcall TspDataSkinControlBar(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinControlBar(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinUpDownControl;
class PASCALIMPLEMENTATION TspDataSkinUpDownControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect UpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveDownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownDownButtonRect;
	#pragma pack(pop)
	
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinCustomControl.Create */ inline __fastcall TspDataSkinUpDownControl(AnsiString AIDName) : TspDataSkinCustomControl(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinUpDownControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinComboBox;
class PASCALIMPLEMENTATION TspDataSkinComboBox : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect SItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusItemRect;
	#pragma pack(pop)
	
	int ItemLeftOffset;
	int ItemRightOffset;
	#pragma pack(push, 1)
	Types::TRect ItemTextRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor FocusFontColor;
	Graphics::TColor ActiveFontColor;
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnEnabledButtonRect;
	#pragma pack(pop)
	
	bool ItemStretchEffect;
	bool FocusItemStretchEffect;
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	bool ShowFocus;
	AnsiString ListBoxName;
	__fastcall TspDataSkinComboBox(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinComboBox(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinListBox;
class PASCALIMPLEMENTATION TspDataSkinListBox : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect SItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveItemRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusItemRect;
	#pragma pack(pop)
	
	int ItemLeftOffset;
	int ItemRightOffset;
	#pragma pack(push, 1)
	Types::TRect ItemTextRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor FocusFontColor;
	#pragma pack(push, 1)
	Types::TRect CaptionRect;
	#pragma pack(pop)
	
	AnsiString CaptionFontName;
	Graphics::TFontStyles CaptionFontStyle;
	int CaptionFontHeight;
	Graphics::TColor CaptionFontColor;
	#pragma pack(push, 1)
	Types::TRect UpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveDownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownDownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CheckButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveCheckButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownCheckButtonRect;
	#pragma pack(pop)
	
	AnsiString HScrollBarName;
	AnsiString VScrollBarName;
	AnsiString BothScrollBarName;
	bool ShowFocus;
	__fastcall TspDataSkinListBox(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinListBox(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinCheckListBox;
class PASCALIMPLEMENTATION TspDataSkinCheckListBox : public TspDataSkinListBox 
{
	typedef TspDataSkinListBox inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect UnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ItemCheckRect;
	#pragma pack(pop)
	
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinListBox.Create */ inline __fastcall TspDataSkinCheckListBox(AnsiString AIDName) : TspDataSkinListBox(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinCheckListBox(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinScrollBarControl;
class PASCALIMPLEMENTATION TspDataSkinScrollBarControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect TrackArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveDownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownDownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ThumbRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveThumbRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownThumbRect;
	#pragma pack(pop)
	
	int ThumbOffset1;
	int ThumbOffset2;
	#pragma pack(push, 1)
	Types::TRect GlyphRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveGlyphRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownGlyphRect;
	#pragma pack(pop)
	
	bool GlyphTransparent;
	Graphics::TColor GlyphTransparentColor;
	bool ThumbTransparent;
	Graphics::TColor ThumbTransparentColor;
	bool ThumbStretchEffect;
	int ThumbMinSize;
	int ThumbMinPageSize;
	__fastcall TspDataSkinScrollBarControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinScrollBarControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinSpinEditControl;
class PASCALIMPLEMENTATION TspDataSkinSpinEditControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor DisabledFontColor;
	#pragma pack(push, 1)
	Types::TRect UpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownUpButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveDownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownDownButtonRect;
	#pragma pack(pop)
	
	__fastcall TspDataSkinSpinEditControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinSpinEditControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinEditControl;
class PASCALIMPLEMENTATION TspDataSkinEditControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor DisabledFontColor;
	Graphics::TColor ActiveFontColor;
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnEnabledButtonRect;
	#pragma pack(pop)
	
	__fastcall TspDataSkinEditControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinEditControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinMemoControl;
class PASCALIMPLEMENTATION TspDataSkinMemoControl : public TspDataSkinEditControl 
{
	typedef TspDataSkinEditControl inherited;
	
public:
	Graphics::TColor BGColor;
	Graphics::TColor ActiveBGColor;
	__fastcall TspDataSkinMemoControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinMemoControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinStdLabelControl;
class PASCALIMPLEMENTATION TspDataSkinStdLabelControl : public TspDataSkinControl 
{
	typedef TspDataSkinControl inherited;
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	__fastcall TspDataSkinStdLabelControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinStdLabelControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinLabelControl;
class PASCALIMPLEMENTATION TspDataSkinLabelControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	__fastcall TspDataSkinLabelControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinLabelControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinBitLabelControl;
class PASCALIMPLEMENTATION TspDataSkinBitLabelControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect SkinTextRect;
	#pragma pack(pop)
	
	int SymbolWidth;
	int SymbolHeight;
	Classes::TStrings* Symbols;
	__fastcall TspDataSkinBitLabelControl(AnsiString AIDName);
	__fastcall virtual ~TspDataSkinBitLabelControl(void);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
};


class DELPHICLASS TspDataSkinTrackBarControl;
class PASCALIMPLEMENTATION TspDataSkinTrackBarControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TrackArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveButtonRect;
	#pragma pack(pop)
	
	bool Vertical;
	bool ButtonTransparent;
	Graphics::TColor ButtonTransparentColor;
	__fastcall TspDataSkinTrackBarControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinTrackBarControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinSplitterControl;
class PASCALIMPLEMENTATION TspDataSkinSplitterControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect GripperRect;
	#pragma pack(pop)
	
	bool GripperTransparent;
	Graphics::TColor GripperTransparentColor;
	__fastcall TspDataSkinSplitterControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinSplitterControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinGaugeControl;
class PASCALIMPLEMENTATION TspDataSkinGaugeControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect ProgressArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ProgressRect;
	#pragma pack(pop)
	
	bool ProgressTransparent;
	Graphics::TColor ProgressTransparentColor;
	bool ProgressStretch;
	bool Vertical;
	int BeginOffset;
	int EndOffset;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	#pragma pack(push, 1)
	Types::TRect AnimationSkinRect;
	#pragma pack(pop)
	
	int AnimationCountFrames;
	int AnimationTimerInterval;
	#pragma pack(push, 1)
	Types::TRect ProgressAnimationSkinRect;
	#pragma pack(pop)
	
	int ProgressAnimationCountFrames;
	int ProgressAnimationTimerInterval;
	int AnimationBeginOffset;
	int AnimationEndOffset;
	__fastcall TspDataSkinGaugeControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinGaugeControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinButtonControl;
class PASCALIMPLEMENTATION TspDataSkinButtonControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor DownFontColor;
	Graphics::TColor DisabledFontColor;
	bool Morphing;
	TMorphKind MorphKind;
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DownSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DisabledSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FocusedSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect AnimateSkinRect;
	#pragma pack(pop)
	
	int FrameCount;
	int AnimateInterval;
	bool ShowFocus;
	#pragma pack(push, 1)
	Types::TRect MenuMarkerFlatRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MenuMarkerRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MenuMarkerActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MenuMarkerDownRect;
	#pragma pack(pop)
	
	Graphics::TColor MenuMarkerTransparentColor;
	__fastcall TspDataSkinButtonControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinButtonControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinMenuButtonControl;
class PASCALIMPLEMENTATION TspDataSkinMenuButtonControl : public TspDataSkinButtonControl 
{
	typedef TspDataSkinButtonControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect TrackButtonRect;
	#pragma pack(pop)
	
	__fastcall TspDataSkinMenuButtonControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinMenuButtonControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinCheckRadioControl;
class PASCALIMPLEMENTATION TspDataSkinCheckRadioControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor UnEnabledFontColor;
	bool Morphing;
	TMorphKind MorphKind;
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CheckImageArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect TextArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveUnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnEnabledCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnEnabledUnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect GrayedCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveGrayedCheckImageRect;
	#pragma pack(pop)
	
	Graphics::TColor FrameFontColor;
	__fastcall TspDataSkinCheckRadioControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinCheckRadioControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinScrollBoxControl;
class PASCALIMPLEMENTATION TspDataSkinScrollBoxControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	int BGPictureIndex;
	__fastcall TspDataSkinScrollBoxControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinScrollBoxControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinPanelControl;
class PASCALIMPLEMENTATION TspDataSkinPanelControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect CaptionRect;
	#pragma pack(pop)
	
	Classes::TAlignment Alignment;
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	int BGPictureIndex;
	#pragma pack(push, 1)
	Types::TRect CheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect UnCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect MarkFrameRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect FrameRect;
	#pragma pack(pop)
	
	int FrameLeftOffset;
	int FrameRightOffset;
	#pragma pack(push, 1)
	Types::TRect FrameTextRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect GripperRect;
	#pragma pack(pop)
	
	bool GripperTransparent;
	Graphics::TColor GripperTransparentColor;
	__fastcall TspDataSkinPanelControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinPanelControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinExPanelControl;
class PASCALIMPLEMENTATION TspDataSkinExPanelControl : public TspDataSkinCustomControl 
{
	typedef TspDataSkinCustomControl inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect RollHSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RollVSkinRect;
	#pragma pack(pop)
	
	int RollLeftOffset;
	int RollRightOffset;
	int RollTopOffset;
	int RollBottomOffset;
	#pragma pack(push, 1)
	Types::TRect RollVCaptionRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RollHCaptionRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CloseButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRollButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRollButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRollButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRestoreButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRestoreButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect HRestoreButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRollButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRollButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRollButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRestoreButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRestoreButtonActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect VRestoreButtonDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CaptionRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	bool ButtonsTransparent;
	Graphics::TColor ButtonsTransparentColor;
	__fastcall TspDataSkinExPanelControl(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinExPanelControl(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinArea;
class PASCALIMPLEMENTATION TspDataSkinArea : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	AnsiString IDName;
	#pragma pack(push, 1)
	Types::TRect AreaRect;
	#pragma pack(pop)
	
	__fastcall TspDataSkinArea(AnsiString AIDName, const Types::TRect &ARect);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinArea(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinObject;
class PASCALIMPLEMENTATION TspDataSkinObject : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	AnsiString IDName;
	AnsiString Hint;
	bool SkinRectInAPicture;
	#pragma pack(push, 1)
	Types::TRect SkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect InActiveSkinRect;
	#pragma pack(pop)
	
	bool Morphing;
	TMorphKind MorphKind;
	int ActivePictureIndex;
	int CursorIndex;
	bool RollUp;
	__fastcall TspDataSkinObject(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataUserObject;
class PASCALIMPLEMENTATION TspDataUserObject : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataUserObject(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataUserObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinBitLabel;
class PASCALIMPLEMENTATION TspDataSkinBitLabel : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	Classes::TStrings* Symbols;
	AnsiString TextValue;
	int SymbolWidth;
	int SymbolHeight;
	bool Transparent;
	Graphics::TColor TransparentColor;
	__fastcall TspDataSkinBitLabel(AnsiString AIDName);
	__fastcall virtual ~TspDataSkinBitLabel(void);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
};


class DELPHICLASS TspDataSkinAnimate;
class PASCALIMPLEMENTATION TspDataSkinAnimate : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	int CountFrames;
	bool Cycle;
	bool ButtonStyle;
	int TimerInterval;
	TStdCommand Command;
	#pragma pack(push, 1)
	Types::TRect DownSkinRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreInActiveRect;
	#pragma pack(pop)
	
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinAnimate(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinAnimate(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinLabel;
class PASCALIMPLEMENTATION TspDataSkinLabel : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	AnsiString FontName;
	int FontHeight;
	Graphics::TFontStyles FontStyle;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Classes::TAlignment Alignment;
	AnsiString TextValue;
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinLabel(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinLabel(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinSwitch;
class PASCALIMPLEMENTATION TspDataSkinSwitch : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinSwitch(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinSwitch(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TGaugeKind { gkHorizontal, gkVertical };
#pragma option pop

class DELPHICLASS TspDataSkinGauge;
class PASCALIMPLEMENTATION TspDataSkinGauge : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	int MinValue;
	int MaxValue;
	TGaugeKind Kind;
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinGauge(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinGauge(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinFrameRegulatorObject;
class PASCALIMPLEMENTATION TspDataSkinFrameRegulatorObject : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	int MinValue;
	int MaxValue;
	int CountFrames;
	TFramesPlacement FramesPlacement;
	TRegulatorKind Kind;
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinFrameRegulatorObject(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinFrameRegulatorObject(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinFrameGaugeObject;
class PASCALIMPLEMENTATION TspDataSkinFrameGaugeObject : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	int MinValue;
	int MaxValue;
	int CountFrames;
	TFramesPlacement FramesPlacement;
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinFrameGaugeObject(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinFrameGaugeObject(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum TTrackKind { tkHorizontal, tkVertical };
#pragma option pop

class DELPHICLASS TspDataSkinTrackBar;
class PASCALIMPLEMENTATION TspDataSkinTrackBar : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect ButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveButtonRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint BeginPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint EndPoint;
	#pragma pack(pop)
	
	int MinValue;
	int MaxValue;
	bool MouseDownChangeValue;
	bool ButtonTransparent;
	Graphics::TColor ButtonTransparentColor;
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinTrackBar(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinTrackBar(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinButton;
class PASCALIMPLEMENTATION TspDataSkinButton : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	int GroupIndex;
	#pragma pack(push, 1)
	Types::TRect DownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect DisableSkinRect;
	#pragma pack(pop)
	
	__fastcall TspDataSkinButton(AnsiString AIDName);
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinStdButton;
class PASCALIMPLEMENTATION TspDataSkinStdButton : public TspDataSkinButton 
{
	typedef TspDataSkinButton inherited;
	
public:
	TStdCommand Command;
	#pragma pack(push, 1)
	Types::TRect RestoreRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreActiveRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreDownRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RestoreInActiveRect;
	#pragma pack(pop)
	
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinButton.Create */ inline __fastcall TspDataSkinStdButton(AnsiString AIDName) : TspDataSkinButton(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinStdButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinMainMenuBarButton;
class PASCALIMPLEMENTATION TspDataSkinMainMenuBarButton : public TspDataSkinStdButton 
{
	typedef TspDataSkinStdButton inherited;
	
public:
	#pragma option push -w-inl
	/* TspDataSkinButton.Create */ inline __fastcall TspDataSkinMainMenuBarButton(AnsiString AIDName) : TspDataSkinStdButton(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinMainMenuBarButton(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinPopupWindow;
class PASCALIMPLEMENTATION TspDataSkinPopupWindow : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	int WindowPictureIndex;
	int MaskPictureIndex;
	#pragma pack(push, 1)
	Types::TPoint LTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ItemsRect;
	#pragma pack(pop)
	
	int ScrollMarkerColor;
	int ScrollMarkerActiveColor;
	int CursorIndex;
	bool TopStretch;
	bool LeftStretch;
	bool RightStretch;
	bool BottomStretch;
	bool StretchEffect;
	Sputils::TspStretchType StretchType;
	__fastcall TspDataSkinPopupWindow(void);
	void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinPopupWindow(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinHintWindow;
class PASCALIMPLEMENTATION TspDataSkinHintWindow : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	int WindowPictureIndex;
	int MaskPictureIndex;
	#pragma pack(push, 1)
	Types::TPoint LTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	Graphics::TFontStyles FontStyle;
	int FontHeight;
	Graphics::TColor FontColor;
	bool TopStretch;
	bool LeftStretch;
	bool RightStretch;
	bool BottomStretch;
	bool StretchEffect;
	Sputils::TspStretchType StretchType;
	__fastcall TspDataSkinHintWindow(void);
	void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinHintWindow(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinMenuItem;
class PASCALIMPLEMENTATION TspDataSkinMenuItem : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect DividerRect;
	#pragma pack(pop)
	
	int DividerLO;
	int DividerRO;
	int ItemLO;
	int ItemRO;
	AnsiString FontName;
	int FontHeight;
	Graphics::TFontStyles FontStyle;
	Graphics::TColor UnEnabledFontColor;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	#pragma pack(push, 1)
	Types::TRect TextRct;
	#pragma pack(pop)
	
	bool StretchEffect;
	bool DividerStretchEffect;
	bool InActiveStretchEffect;
	#pragma pack(push, 1)
	Types::TRect AnimateSkinRect;
	#pragma pack(pop)
	
	int FrameCount;
	int AnimateInterval;
	bool InActiveAnimation;
	#pragma pack(push, 1)
	Types::TRect ImageRct;
	#pragma pack(pop)
	
	bool UseImageColor;
	Graphics::TColor ImageColor;
	Graphics::TColor ActiveImageColor;
	bool InActiveTransparent;
	#pragma pack(push, 1)
	Types::TRect CheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveCheckImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect RadioImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveRadioImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ArrowImageRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveArrowImageRect;
	#pragma pack(pop)
	
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinMenuItem(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinMenuItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinMainMenuItem;
class PASCALIMPLEMENTATION TspDataSkinMainMenuItem : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	#pragma pack(push, 1)
	Types::TRect DownRect;
	#pragma pack(pop)
	
	AnsiString FontName;
	int FontHeight;
	Graphics::TFontStyles FontStyle;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor DownFontColor;
	Graphics::TColor UnEnabledFontColor;
	#pragma pack(push, 1)
	Types::TRect TextRct;
	#pragma pack(pop)
	
	int ItemLO;
	int ItemRO;
	bool StretchEffect;
	#pragma pack(push, 1)
	Types::TRect AnimateSkinRect;
	#pragma pack(pop)
	
	int FrameCount;
	int AnimateInterval;
	bool InActiveAnimation;
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinMainMenuItem(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinMainMenuItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinMainMenuBarItem;
class PASCALIMPLEMENTATION TspDataSkinMainMenuBarItem : public TspDataSkinMainMenuItem 
{
	typedef TspDataSkinMainMenuItem inherited;
	
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinMainMenuBarItem(AnsiString AIDName) : TspDataSkinMainMenuItem(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinMainMenuBarItem(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspDataSkinCaption;
class PASCALIMPLEMENTATION TspDataSkinCaption : public TspDataSkinObject 
{
	typedef TspDataSkinObject inherited;
	
public:
	AnsiString FontName;
	int FontHeight;
	Graphics::TFontStyles FontStyle;
	Graphics::TColor FontColor;
	Graphics::TColor ActiveFontColor;
	Graphics::TColor ShadowColor;
	Graphics::TColor ActiveShadowColor;
	bool Shadow;
	Classes::TAlignment Alignment;
	#pragma pack(push, 1)
	Types::TRect TextRct;
	#pragma pack(pop)
	
	bool DefaultCaption;
	#pragma pack(push, 1)
	Types::TRect FrameRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ActiveFrameRect;
	#pragma pack(pop)
	
	int FrameLeftOffset;
	int FrameRightOffset;
	#pragma pack(push, 1)
	Types::TRect FrameTextRect;
	#pragma pack(pop)
	
	bool Light;
	Graphics::TColor LightColor;
	Graphics::TColor ActiveLightColor;
	bool StretchEffect;
	#pragma pack(push, 1)
	Types::TRect AnimateSkinRect;
	#pragma pack(pop)
	
	int FrameCount;
	int AnimateInterval;
	bool InActiveAnimation;
	bool FullFrame;
	virtual void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	virtual void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
public:
	#pragma option push -w-inl
	/* TspDataSkinObject.Create */ inline __fastcall TspDataSkinCaption(AnsiString AIDName) : TspDataSkinObject(AIDName) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspDataSkinCaption(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspCompressedStoredSkin;
class DELPHICLASS TspSkinData;
class PASCALIMPLEMENTATION TspCompressedStoredSkin : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	AnsiString FFileName;
	AnsiString FCompressedFileName;
	Classes::TMemoryStream* FCompressedStream;
	AnsiString FDescription;
	void __fastcall SetFileName(AnsiString Value);
	void __fastcall SetCompressedFileName(AnsiString Value);
	bool __fastcall GetEmpty(void);
	
protected:
	void __fastcall ReadData(Classes::TStream* Reader);
	void __fastcall WriteData(Classes::TStream* Writer);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	
public:
	__fastcall virtual TspCompressedStoredSkin(Classes::TComponent* AOwner);
	__fastcall virtual ~TspCompressedStoredSkin(void);
	void __fastcall LoadFromIniFile(AnsiString AFileName);
	void __fastcall LoadFromCompressFile(AnsiString AFileName);
	void __fastcall SaveToCompressFile(AnsiString AFileName);
	void __fastcall DeCompressToStream(Classes::TMemoryStream* &S);
	void __fastcall LoadFromSkinData(TspSkinData* ASkinData);
	void __fastcall LoadFromCompressStream(Classes::TStream* Stream);
	void __fastcall SaveToCompressStream(Classes::TStream* Stream);
	__property bool Empty = {read=GetEmpty, nodefault};
	
__published:
	__property AnsiString Description = {read=FDescription, write=FDescription};
	__property AnsiString FileName = {read=FFileName, write=SetFileName};
	__property AnsiString CompressedFileName = {read=FCompressedFileName, write=SetCompressedFileName};
};


class DELPHICLASS TspResourceStrData;
class PASCALIMPLEMENTATION TspResourceStrData : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	Classes::TStrings* FResStrs;
	Graphics::TFontCharset FCharSet;
	void __fastcall SetResStrs(Classes::TStrings* Value);
	void __fastcall Init(void);
	
public:
	__fastcall virtual TspResourceStrData(Classes::TComponent* AOwner);
	__fastcall virtual ~TspResourceStrData(void);
	AnsiString __fastcall GetResStr(const AnsiString ResName);
	
__published:
	__property Classes::TStrings* ResStrings = {read=FResStrs, write=SetResStrs};
	__property Graphics::TFontCharset CharSet = {read=FCharSet, write=FCharSet, nodefault};
};


class DELPHICLASS TspSkinColors;
class PASCALIMPLEMENTATION TspSkinColors : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	Graphics::TColor FcBtnFace;
	Graphics::TColor FcBtnText;
	Graphics::TColor FcWindow;
	Graphics::TColor FcWindowText;
	Graphics::TColor FcHighLight;
	Graphics::TColor FcHighLightText;
	Graphics::TColor FcBtnHighLight;
	Graphics::TColor FcBtnShadow;
	Graphics::TColor Fc3DLight;
	Graphics::TColor Fc3DDkShadow;
	
public:
	__fastcall TspSkinColors(void);
	void __fastcall LoadFromFile(Inifiles::TCustomIniFile* IniFile);
	void __fastcall SaveToFile(Inifiles::TCustomIniFile* IniFile);
	void __fastcall SetColorsToDefault(void);
	__property Graphics::TColor cBtnFace = {read=FcBtnFace, write=FcBtnFace, nodefault};
	__property Graphics::TColor cBtnText = {read=FcBtnText, write=FcBtnText, nodefault};
	__property Graphics::TColor cBtnHighLight = {read=FcBtnHighLight, write=FcBtnHighLight, nodefault};
	__property Graphics::TColor cBtnShadow = {read=FcBtnShadow, write=FcBtnShadow, nodefault};
	__property Graphics::TColor cHighLight = {read=FcHighLight, write=FcHighLight, nodefault};
	__property Graphics::TColor cHighLightText = {read=FcHighLightText, write=FcHighLightText, nodefault};
	__property Graphics::TColor cWindow = {read=FcWindow, write=FcWindow, nodefault};
	__property Graphics::TColor cWindowText = {read=FcWindowText, write=FcWindowText, nodefault};
	__property Graphics::TColor c3DLight = {read=Fc3DLight, write=Fc3DLight, nodefault};
	__property Graphics::TColor c3DDkShadow = {read=Fc3DDkShadow, write=Fc3DDkShadow, nodefault};
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TspSkinColors(void) { }
	#pragma option pop
	
};


class DELPHICLASS TspCompressedSkinList;
class DELPHICLASS TspSkinListItems;
class DELPHICLASS TspSkinListItem;
class PASCALIMPLEMENTATION TspSkinListItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TspSkinListItem* operator[](int Index) { return Items[Index]; }
	
private:
	HIDESBASE TspSkinListItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TspSkinListItem* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	TspCompressedSkinList* FSkinList;
	__fastcall TspSkinListItems(TspCompressedSkinList* ASkinList);
	__property TspSkinListItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TspSkinListItems(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TspCompressedSkinList : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	TspSkinListItems* FSkins;
	void __fastcall SetSkins(TspSkinListItems* Value);
	
public:
	__fastcall virtual TspCompressedSkinList(Classes::TComponent* AOwner);
	__fastcall virtual ~TspCompressedSkinList(void);
	
__published:
	__property TspSkinListItems* Skins = {read=FSkins, write=SetSkins};
};


class PASCALIMPLEMENTATION TspSkinData : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	TspCompressedSkinList* FCompressedSkinList;
	int FCompressedSkinIndex;
	bool FSkinnableForm;
	bool FEnableSkinEffects;
	TspCompressedStoredSkin* FCompressedStoredSkin;
	TspResourceStrData* FResourceStrData;
	TspSkinColors* FSkinColors;
	void __fastcall SetSkinnableForm(bool Value);
	void __fastcall SetCompressedStoredSkin(TspCompressedStoredSkin* Value);
	void __fastcall SetResourceStrData(TspResourceStrData* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall WriteFormInfo(Inifiles::TCustomIniFile* F);
	void __fastcall ReadFormInfo(Inifiles::TCustomIniFile* F);
	void __fastcall WriteAreas(Inifiles::TCustomIniFile* F);
	void __fastcall ReadAreas(Inifiles::TCustomIniFile* F);
	void __fastcall WriteObjects(Inifiles::TCustomIniFile* F);
	void __fastcall ReadObjects(Inifiles::TCustomIniFile* F);
	void __fastcall WriteCtrls(Inifiles::TCustomIniFile* F);
	void __fastcall ReadCtrls(Inifiles::TCustomIniFile* F);
	void __fastcall WriteActivePictures(Inifiles::TCustomIniFile* F);
	void __fastcall WriteCursors(Inifiles::TCustomIniFile* F);
	void __fastcall ReadActivePictures(Inifiles::TCustomIniFile* F, AnsiString Path);
	void __fastcall ReadCursors(Inifiles::TCustomIniFile* F, AnsiString Path);
	void __fastcall GetObjectTypeName(AnsiString S, AnsiString &AName, AnsiString &AType);
	void __fastcall GetAreaNameRect(AnsiString S, AnsiString &AName, Types::TRect &ARect);
	void __fastcall SetCompressedSkinIndex(int Value);
	void __fastcall SetCompressedSkinList(TspCompressedSkinList* Value);
	
public:
	#pragma pack(push, 1)
	Types::TRect SizeGripArea;
	#pragma pack(pop)
	
	AnsiString StatusBarName;
	#pragma pack(push, 1)
	Types::TRect ButtonsRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CaptionRect;
	#pragma pack(pop)
	
	int ButtonsOffset;
	bool CapButtonsInLeft;
	bool AutoRenderingInActiveImage;
	TspInActiveEffect InActiveEffect;
	int StartCursorIndex;
	int CursorIndex;
	bool BuildMode;
	TspDataSkinPopupWindow* PopupWindow;
	TspDataSkinHintWindow* HintWindow;
	bool Empty;
	Graphics::TBitmap* FPicture;
	Graphics::TBitmap* FInActivePicture;
	Graphics::TBitmap* FMask;
	Graphics::TBitmap* FRollUpPicture;
	Graphics::TBitmap* FRollUpMask;
	Classes::TList* FActivePictures;
	AnsiString FPictureName;
	AnsiString FInActivePictureName;
	AnsiString FMaskName;
	AnsiString FRollUpPictureName;
	AnsiString FRollUpMaskName;
	Classes::TStrings* FActivePicturesNames;
	Classes::TStrings* FCursorsNames;
	Classes::TList* ObjectList;
	Classes::TList* AreaList;
	Classes::TList* CtrlList;
	#pragma pack(push, 1)
	Types::TPoint LTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint LBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RBPoint;
	#pragma pack(pop)
	
	int BGPictureIndex;
	int MDIBGPictureIndex;
	#pragma pack(push, 1)
	Types::TRect MainMenuRect;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect IconRect;
	#pragma pack(pop)
	
	bool MainMenuPopupUp;
	#pragma pack(push, 1)
	Types::TRect MaskRectArea;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HitTestLTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HitTestRTPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HitTestLBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint HitTestRBPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect ClRect;
	#pragma pack(pop)
	
	int BorderW;
	int FormMinWidth;
	bool MDITabsTransparent;
	bool MainMenuBarTransparent;
	bool TopStretch;
	bool LeftStretch;
	bool RightStretch;
	bool BottomStretch;
	bool StretchEffect;
	Sputils::TspStretchType StretchType;
	bool MDIBGStretchEffect;
	Sputils::TspStretchType MDIBGStretchType;
	#pragma pack(push, 1)
	Types::TPoint RollUpLeftPoint;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TPoint RollUpRightPoint;
	#pragma pack(pop)
	
	AnsiString SkinName;
	AnsiString SkinAuthor;
	AnsiString AuthorURL;
	AnsiString AuthorEmail;
	AnsiString SkinComments;
	bool ChangeSkinDataProcess;
	void __fastcall SaveToCustomIniFile(Inifiles::TCustomIniFile* F);
	void __fastcall AddBitMap(AnsiString FileName);
	void __fastcall DeleteBitMap(int Index);
	void __fastcall AddSkinArea(AnsiString AName, const Types::TRect &ARect);
	void __fastcall SendSkinDataMessage(int M);
	int __fastcall GetIndex(AnsiString AIDName);
	int __fastcall GetControlIndex(AnsiString AIDName);
	int __fastcall GetAreaIndex(AnsiString AIDName);
	void __fastcall ClearObjects(void);
	void __fastcall ClearAll(void);
	__fastcall virtual TspSkinData(Classes::TComponent* AOwner);
	__fastcall virtual ~TspSkinData(void);
	void __fastcall LoadFromFile(AnsiString FileName);
	void __fastcall SaveToFile(AnsiString FileName);
	void __fastcall LoadFromCompressedFile(AnsiString FileName);
	void __fastcall SaveToCompressedFile(AnsiString FileName);
	void __fastcall StoreToDisk(AnsiString APath);
	void __fastcall LoadCompressedStoredSkin(TspCompressedStoredSkin* AStoredSkin);
	void __fastcall ClearSkin(void);
	__property TspSkinColors* SkinColors = {read=FSkinColors};
	
__published:
	__property bool SkinnableForm = {read=FSkinnableForm, write=SetSkinnableForm, nodefault};
	__property bool EnableSkinEffects = {read=FEnableSkinEffects, write=FEnableSkinEffects, nodefault};
	__property TspCompressedStoredSkin* CompressedStoredSkin = {read=FCompressedStoredSkin, write=SetCompressedStoredSkin};
	__property TspResourceStrData* ResourceStrData = {read=FResourceStrData, write=SetResourceStrData};
	__property TspCompressedSkinList* SkinList = {read=FCompressedSkinList, write=SetCompressedSkinList};
	__property int SkinIndex = {read=FCompressedSkinIndex, write=SetCompressedSkinIndex, nodefault};
};


class PASCALIMPLEMENTATION TspSkinListItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	TspCompressedStoredSkin* FSkin;
	AnsiString FDescription;
	AnsiString FFileName;
	AnsiString FCompressedFileName;
	AnsiString FName;
	
protected:
	void __fastcall ReadData(Classes::TStream* Stream);
	void __fastcall WriteData(Classes::TStream* Stream);
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	virtual AnsiString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TspSkinListItem(Classes::TCollection* Collection);
	__fastcall virtual ~TspSkinListItem(void);
	__property TspCompressedStoredSkin* Skin = {read=FSkin};
	void __fastcall SetDescription(AnsiString Value);
	void __fastcall SetFileName(AnsiString Value);
	void __fastcall SetCompressedFileName(AnsiString Value);
	
__published:
	__property AnsiString Description = {read=FDescription, write=SetDescription};
	__property AnsiString FileName = {read=FFileName, write=SetFileName};
	__property AnsiString CompressedFileName = {read=FCompressedFileName, write=SetCompressedFileName};
	__property AnsiString Name = {read=FName, write=FName};
};


//-- var, const, procedure ---------------------------------------------------
static const Word WM_BEFORECHANGESKINDATA = 0x4c9;
static const Word WM_CHANGESKINDATA = 0x4ca;
static const Word WM_AFTERCHANGESKINDATA = 0x4cb;
static const Word WM_CHANGERESSTRDATA = 0x4fa;
static const Word WM_CHECKPARENTBG = 0x504;
static const Word WM_CHANGEFORMSKINNABLE = 0x50e;
extern PACKAGE void __fastcall WriteStretchType(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, Sputils::TspStretchType ST);
extern PACKAGE Sputils::TspStretchType __fastcall ReadStretchType(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident);
extern PACKAGE TMorphKind __fastcall ReadMorphKind(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident);
extern PACKAGE void __fastcall WriteMorphKind(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, TMorphKind MK);
extern PACKAGE void __fastcall WriteInActiveEffect(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident, TspInActiveEffect IE);
extern PACKAGE TspInActiveEffect __fastcall ReadInActiveEffect(Inifiles::TCustomIniFile* IniFile, AnsiString Section, AnsiString Ident);

}	/* namespace Skindata */
using namespace Skindata;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SkinData
