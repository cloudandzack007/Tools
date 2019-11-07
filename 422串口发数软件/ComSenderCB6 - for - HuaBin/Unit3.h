//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "DynamicSkinForm.hpp"
#include "SkinBoxCtrls.hpp"
#include "SkinCtrls.hpp"
#include <Mask.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
    TspDynamicSkinForm *spDynamicSkinForm1;
    TspSkinSpeedButton *spSkinSpeedButton1;
    TspSkinSpeedButton *spSkinSpeedButton2;
    TspSkinListBox *spSkinListBox1;
    TspSkinSpeedButton *spSkinSpeedButton3;
    TspSkinComboBox *spSkinComboBox1;
    TspSkinStdLabel *spSkinStdLabel1;
    TspSkinEdit *spSkinEdit1;
    TspSkinStdLabel *spSkinStdLabel2;
    TspSkinStdLabel *spSkinStdLabel3;
    TspSkinSpeedButton *spSkinSpeedButton4;
    TspSkinSpeedButton *spSkinSpeedButton5;
    TSaveDialog *SaveDialog1;
    TOpenDialog *OpenDialog1;
    TTimer *Timer1;
    TPopupMenu *PopupMenu1;
    TMenuItem *N1;
    TspSkinPanel *spSkinPanel1;
    TspSkinStdLabel *spSkinStdLabel4;
    TspSkinEdit *spSkinEdit2;
    TspSkinStdLabel *spSkinStdLabel5;
    TspSkinSpeedButton *spSkinSpeedButton6;
    void __fastcall spSkinSpeedButton3Click(TObject *Sender);
    void __fastcall spSkinSpeedButton2Click(TObject *Sender);
    void __fastcall spSkinSpeedButton4Click(TObject *Sender);
    void __fastcall spSkinSpeedButton5Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall spSkinSpeedButton1Click(TObject *Sender);
    void __fastcall spSkinSpeedButton6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm3(TComponent* Owner);
    int nStep;
    int m_nCircleTimes;
    bool m_bPause;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
