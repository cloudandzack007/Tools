//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//#include "CPort.hpp"
#include "CPortCtl.hpp"
#include <ComCtrls.hpp>
#include <stdio.h>

#include "skin/DynamicSkinForm.hpp"
#include "skin/SkinData.hpp"
#include "DynamicSkinForm.hpp"
#include "SkinData.hpp"
#include "SkinBoxCtrls.hpp"
#include "SkinCtrls.hpp"
#include <Mask.hpp>

#include "spSkinShellCtrls.hpp"
#include <AppEvnts.hpp>
#include <ExtCtrls.hpp>
#include "CPort.hpp"
#include <Dialogs.hpp>



//#include "SPComm.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TspSkinData *spSkinData1;
        TspCompressedSkinList *spCompressedSkinList1;
        TspSkinEdit *spSkinEdit1;
        TspSkinButton *spSkinButton1;
        TspSkinGroupBox *spSkinGroupBox1;
        TspSkinButton *spSkinButton2;
        TComLed *ComLed1;
        TComPort *ComPort1;
        TspSkinButton *spSkinButton3;
        TspSkinButton *spSkinButton4;
        TspSkinGroupBox *spSkinGroupBox2;
        TspSkinLabel *spSkinLabel1;
        TspSkinLabel *spSkinLabel2;
        TspSkinEdit *spSkinEdit2;
        TspSkinEdit *spSkinEdit3;
        TspSkinButton *spSkinButton5;
        TspSkinGroupBox *spSkinGroupBox3;
        TspSkinEdit *spSkinEdit4;
        TspSkinButton *spSkinButton6;
        TspSkinGroupBox *spSkinGroupBox4;
        TspSkinOpenDialog *spSkinOpenDialog1;
    TspSkinLabel *spSkinLabel3;
    TspSkinEdit *spSkinEdit5;
    TTimer *Timer1;
    TApplicationEvents *ApplicationEvents1;
    TspSkinButton *spSkinButton7;
    TspSkinSplitter *spSkinSplitter1;
    TspSkinPanel *spSkinPanel1;
    TspSkinLabel *spSkinLabel4;
    TspSkinEdit *spSkinEdit6;
    TspSkinMemo2 *spSkinMemo21;
    TspSkinScrollBar *spSkinScrollBar1;
    TspSkinGroupBox *spSkinGroupBox5;
    TspSkinButton *spSkinButton8;
    TspSkinCheckRadioBox *spSkinCheckRadioBox1;
    TspSkinButton *spSkinButton9;
    TspSkinButton *spSkinButton10;
    TspSkinButton *spSkinButton11;
    TspSkinButton *spSkinButton12;
    TspSkinEdit *spSkinEdit7;
    TspSkinButton *spSkinButton13;
    TspSkinCheckRadioBox *spSkinCheckRadioBox2;
    TspSkinLabel *spSkinLabel5;
    TspSkinEdit *spSkinEdit8;
    TspSkinLabel *spSkinLabel6;
    TspSkinEdit *spSkinEdit9;
    TspSkinButton *spSkinButton14;
    TspSkinButton *spSkinButton15;
    TspSkinButton *spSkinButton16;
    TSaveDialog *SaveDialog1;
    TspSkinCheckRadioBox *spSkinCheckRadioBox3;
    TspDynamicSkinForm *spDynamicSkinForm1;
    TspSkinButton *spSkinButton17;
    TspSkinButton *spSkinButton18;
    TTimer *Timer2;
    TspSkinGroupBox *spSkinGroupBox6;
    TspSkinEdit *spSkinEdit10;
    TspSkinButton *spSkinButton19;
    TspSkinButton *spSkinButton21;
    TspSkinEdit *spSkinEdit11;
    TspSkinLabel *spSkinLabel7;
    TTimer *Timer3;
    TspSkinButton *spSkinButton20;
    TComPort *ComPort2;
    TComLed *ComLed2;
        void __fastcall spSkinButton3Click(TObject *Sender);
        void __fastcall spSkinButton4Click(TObject *Sender);
        void __fastcall spSkinButton1Click(TObject *Sender);
        void __fastcall spSkinButton5Click(TObject *Sender);
    void __fastcall spSkinButton6Click(TObject *Sender);
    void __fastcall ApplicationEvents1Idle(TObject *Sender, bool &Done);
    void __fastcall spSkinButton2Click(TObject *Sender);
    void __fastcall spSkinButton7Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall spSkinButton8Click(TObject *Sender);
    void __fastcall spSkinButton9Click(TObject *Sender);
    void __fastcall spSkinButton10Click(TObject *Sender);
        void __fastcall spSkinEdit4Change(TObject *Sender);
    void __fastcall spSkinButton12Click(TObject *Sender);
    void __fastcall spSkinButton13Click(TObject *Sender);
    void __fastcall spSkinButton15Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall spSkinButton14Click(TObject *Sender);
    void __fastcall spSkinButton11Click(TObject *Sender);
    void __fastcall spSkinButton16Click(TObject *Sender);
    void __fastcall spSkinCheckRadioBox3Click(TObject *Sender);
    void __fastcall spSkinButton17Click(TObject *Sender);
    void __fastcall spSkinButton18Click(TObject *Sender);
    void __fastcall Timer2Timer(TObject *Sender);
    void __fastcall spSkinButton21Click(TObject *Sender);
    void __fastcall spSkinButton19Click(TObject *Sender);
    void __fastcall Timer3Timer(TObject *Sender);
    void __fastcall spSkinButton20Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        char* m_pBuf;
        bool m_bSendFrm;
    unsigned int m_nSendCnt;
    unsigned int m_nFileLen;
    bool m_bPause;
    int m_nLineLength;
    int m_nFileState;
    bool m_bSending;
    bool m_bRead;
    FILE *m_fpRec;
    bool m_bFirstRun;
    int m_nWorkMode;
    AnsiString m_sLogFileName;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
