//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CPort"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    unsigned char buf[7] = {0x52,0x45,0x41,0x44, 0x3f, 0xd,0xa};
    ComPort1->Write(buf, 7);
    unsigned char buf1[256];
    int n = ComPort1->Read(buf1, 256);
}
//---------------------------------------------------------------------------
