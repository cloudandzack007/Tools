//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "DynamicSkinForm.hpp"
#include "SkinCtrls.hpp"
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
    TspDynamicSkinForm *spDynamicSkinForm1;
    TspSkinGroupBox *spSkinGroupBox1;
    TspSkinListView *spSkinListView1;
    TspSkinGroupBox *spSkinGroupBox2;
    TspSkinListView *spSkinListView2;
    TspSkinGroupBox *spSkinGroupBox8;
    TspSkinListView *spSkinListView8;
    TspSkinGroupBox *spSkinGroupBox3;
    TspSkinGroupBox *spSkinGroupBox4;
    TspSkinGroupBox *spSkinGroupBox5;
    TspSkinGroupBox *spSkinGroupBox6;
    TspSkinGroupBox *spSkinGroupBox7;
    TspSkinSpeedButton *spSkinSpeedButton1;
    TspSkinPanel *spSkinPanel1;
    TspSkinPanel *spSkinPanel2;
    TspSkinPanel *spSkinPanel3;
    TspSkinSplitterEx *spSkinSplitterEx1;
    TspSkinSplitterEx *spSkinSplitterEx2;
    TspSkinSplitterEx *spSkinSplitterEx3;
    TspSkinPanel *spSkinPanel4;
    TspSkinSplitterEx *spSkinSplitterEx4;
    TspSkinSplitterEx *spSkinSplitterEx5;
    TspSkinSplitterEx *spSkinSplitterEx6;
    TspSkinSplitterEx *spSkinSplitterEx7;
    TImageList *ImageList1;
    TspSkinListView *spSkinListView3;
    TspSkinListView *spSkinListView4;
    TspSkinListView *spSkinListView5;
    TspSkinListView *spSkinListView6;
    TspSkinListView *spSkinListView7;
    TPanel *Panel1;
    TspSkinSpeedButton *spSkinSpeedButton2;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall spSkinSpeedButton1Click(TObject *Sender);
    void __fastcall spSkinSpeedButton2Click(TObject *Sender);
private:	// User declarations
    unsigned char m_buf[40960];
    unsigned int m_revCnt;
    void __fastcall ShowData();
public:		// User declarations
    __fastcall TForm2(TComponent* Owner);
    void __fastcall RecData(unsigned char c);
    void __fastcall RecData2(unsigned char c);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
int _sub_int_ext(unsigned int *aux, int pos, int n);
//---------------------------------------------------------------------------
#endif
