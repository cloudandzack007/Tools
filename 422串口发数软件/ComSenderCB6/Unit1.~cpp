//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DynamicSkinForm"
#pragma link "SkinData"
#pragma link "DynamicSkinForm"
#pragma link "SkinData"
#pragma link "SkinBoxCtrls"
#pragma link "SkinCtrls"
#pragma link "CPort"
#pragma link "CPortCtl"
#pragma link "spSkinShellCtrls"
#pragma link "CPort"
#pragma link "CPort"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        m_pBuf = NULL;
        m_bSendFrm = false;
        m_nSendCnt = 0;
        m_bPause = false;
        m_nLineLength = 0;
        m_nFileState = 0;
        m_bSending = false;
        m_bRead = false;
        AnsiString sName;
        sName = TDateTime::CurrentDateTime().FormatString("YYYYmmdd_HHMMSS");
        sName += ".dat";

        AnsiString sPath = ExtractFileDir(Application->ExeName);
        CreateDir(sPath + "\\log");
        sName = sPath + "\\log\\"+sName;

        if(FileExists(sName))
        {
            if(!DeleteFile(sName))
            {
                ShowMessage("请先关闭上次打开的文件。");
                return;
            }
        }
        
        m_fpRec = fopen(sName.c_str(), "wb");

        m_sLogFileName = sName;
        m_bFirstRun = true;
        m_nWorkMode = -1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::spSkinButton3Click(TObject *Sender)
{
        //ComPort1->Connected = true;
        //ComPort1->Port = Edit1->Text;
        AnsiString sIni = Application->ExeName + ".ini";
        ComPort1->LoadSettings(stIniFile, sIni);
        ComPort1->Open();

        ComPort2->LoadSettings(stIniFile, sIni);
        ComPort2->Open();
        
        //Comm1->StartComm();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::spSkinButton4Click(TObject *Sender)
{
        //ComPort1->Connected = false;
        ComPort1->Close();
        //Comm1->StopComm();
        AnsiString sIni = Application->ExeName + ".ini";
        ComPort1->StoreSettings(stIniFile, sIni);

        ComPort2->Close();
        ComPort2->StoreSettings(stIniFile, sIni);

        spSkinButton7Click(Sender);
        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::spSkinButton1Click(TObject *Sender)
{
    if(spSkinOpenDialog1->Execute())
    {
        spSkinEdit1->Text = spSkinOpenDialog1->FileName;
        m_nFileState = 1;
        m_bRead = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton5Click(TObject *Sender)
{
    spSkinButton7Click(Sender);
    if(m_pBuf)
    {
        delete[] m_pBuf;
        m_pBuf = NULL;
    }
    FILE *fp = fopen( spSkinEdit1->Text.c_str(), "rb");
    fseek(fp, 0, SEEK_END);
    int nFileLen = ftell(fp);
    m_nFileLen = nFileLen;
    m_pBuf = new char[nFileLen];
    fseek(fp, 0, SEEK_SET);
    fread(m_pBuf, 1, nFileLen, fp);
    fclose(fp);
    ShowMessage("文件读取完毕!");
    spSkinEdit6->Text = IntToStr(nFileLen);
    m_nFileState = 0;
    m_bRead = true;
}
//---------------------------------------------------------------------------

char g_ZhuRuBuf[8192] = {0};
void __fastcall TForm1::spSkinButton6Click(TObject *Sender)
{
    int nLen = spSkinEdit4->Text.Length();
    if(nLen == 0)
    {
        return;
    }
    int nCnt = (nLen - 2) / 3 + 1;
    char *sStr = new char[nLen + 1];

    ZeroMemory(g_ZhuRuBuf, 8192);
    
    AnsiString sSend = spSkinEdit4->Text;
    strcpy(sStr, sSend.c_str());

    char *sdeli = " ";
    
    char *out = NULL;
    out = strtok(sStr, sdeli);
    for(int i=0; out; i++)
    {
        sscanf(out, "%x", &g_ZhuRuBuf[i]);
        out = strtok(NULL, sdeli);
    }
    
    if(ComPort1->Connected)
    {
        ComPort1->Write(g_ZhuRuBuf, nCnt);
        int nSend = StrToInt(spSkinEdit8->Text);
        spSkinEdit8->Text = IntToStr(nSend + nCnt);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ApplicationEvents1Idle(TObject *Sender, bool &Done)
{
    if(m_bFirstRun)
    {
        spSkinCheckRadioBox3->Checked = true;
        spSkinCheckRadioBox3Click(Sender);
        this->Hide();
        m_bFirstRun = false;
    }
    if(m_bRead)
    {
        spSkinButton5->Enabled = false;
    }
    else
    {
        if(m_nFileState == 1)
        {
            spSkinButton5->Enabled = true;
        }
        else
        {
            spSkinButton5->Enabled = false;
        }
    }
    if(ComPort1->Connected)
    {
        spSkinButton3->Enabled = false;
        spSkinButton4->Enabled = true;
        if(spSkinEdit4->Text.Length())
        {
            spSkinButton6->Enabled = true;
            spSkinButton17->Enabled = true;
        }
        else
        {
            spSkinButton6->Enabled = false;
            spSkinButton17->Enabled = false;
        }

        if(m_bSending)
        {
            spSkinButton2->Enabled = false;
            spSkinButton8->Enabled = true;
            spSkinButton7->Enabled = true;
        }
        else
        {
            if(m_bRead)
            {
                spSkinButton2->Enabled = true;
                
                spSkinButton10->Enabled = true;
                if(m_nFileLen == m_nSendCnt)
                {
                    spSkinButton9->Enabled = false;
                }
                else
                {
                    spSkinButton9->Enabled = true;
                }

            }
            else
            {
                spSkinButton2->Enabled = false;
            }

            spSkinButton8->Enabled = false;
            //spSkinButton7->Enabled = false;
        }
        //spSkinButton2->Enabled = false;
        //spSkinButton8->Enabled = false;
        //spSkinButton7->Enabled = false;
        //spSkinButton9->Enabled = false;
    }
    else
    {
        spSkinButton3->Enabled = true;
        spSkinButton4->Enabled = false;
        spSkinButton2->Enabled = false;
        spSkinButton8->Enabled = false;
        //spSkinButton7->Enabled = false;
        spSkinButton9->Enabled = false;
        spSkinButton6->Enabled = false;
        spSkinButton17->Enabled = false;
        spSkinButton10->Enabled = false;
    }


    if(ComPort1->Connected)
    {
        unsigned char c;
        bool bUpdate = false;

        while( ComPort1->Read(&c, 1) )
        {
            spSkinEdit9->Text = IntToStr((int) StrToInt(spSkinEdit9->Text) + 1);
            fwrite(&c, 1, 1, m_fpRec);
            fflush(m_fpRec);
            Form2->RecData(c);
            if(spSkinCheckRadioBox2->Checked)
            {
                AnsiString sAdd = IntToHex((int)c, 2) + " ";
                int nLineCntNow = spSkinMemo21->Lines->Count;
                char tmpPre[10] = {0};
                sprintf(tmpPre, "%04i:  ", nLineCntNow);

                if(spSkinMemo21->Lines->Text.Length() == 0)
                {
                    spSkinMemo21->Lines->Text = spSkinMemo21->Lines->Text + tmpPre;
                }
                spSkinMemo21->Lines->Text = spSkinMemo21->Lines->Text + sAdd;

                int nLineCnt = StrToInt(spSkinEdit2->Text);
                if(m_nLineLength > 43)
                {
                    spSkinMemo21->Lines->Text = spSkinMemo21->Lines->Text + "\r\n";
                    spSkinMemo21->Lines->Text = spSkinMemo21->Lines->Text + tmpPre;
                    m_nLineLength = 0;
                }
                else
                {
                    m_nLineLength += sAdd.Length();

                }

                spSkinScrollBar1->Position = spSkinScrollBar1->Max;
                if(spSkinMemo21->Lines->Count > 5000)
                {
                    spSkinMemo21->Lines->Clear();
                }
            }
        }

    }

    if(ComPort2->Connected)
    {
        unsigned char c;

        if( ComPort2->Read(&c, 1) )
        {
            Form2->RecData2(c);
        }
    }


}
//---------------------------------------------------------------------------


void __fastcall TForm1::spSkinButton2Click(TObject *Sender)
{
    Timer1->Interval = StrToInt(spSkinEdit3->Text);
    m_bSendFrm = true;
    m_bSending = true;
    Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton7Click(TObject *Sender)
{
    Timer1->Enabled = false;
    m_bSendFrm = false;
    m_nSendCnt = 0;
    m_bSending = false;
    m_bPause = false;
    spSkinEdit5->Text = IntToStr( m_nSendCnt );
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    if(m_bSendFrm)
    {
        if(ComPort1->Connected)
        {
            if(m_bPause)
            {
                return;
            }

            if(m_pBuf)
            {
                int nLen = StrToInt(spSkinEdit2->Text);
                if( (nLen + m_nSendCnt) > m_nFileLen )
                {
                    spSkinButton7Click(Sender);
                    spSkinEdit5->Text = IntToStr( 0 );
                    return;
                    //nLen = m_nFileLen - m_nSendCnt;
                    
                }
                char* pSend = m_pBuf + m_nSendCnt;
                
                m_nSendCnt += ComPort1->Write(pSend, nLen);
                AnsiString sAdd = IntToHex((int)(*pSend), 2) + " ";
                //spSkinMemo21->Lines->Text = spSkinMemo21->Lines->Text + sAdd;
                if(m_nLineLength > 40)
                {
                    spSkinMemo21->Lines->Text = spSkinMemo21->Lines->Text + "\r\n";
                    m_nLineLength = 0;
                }
                else
                {
                    m_nLineLength += sAdd.Length();
                }
            }
            else
            {
                spSkinMemo21->Lines->Append("请先选择发送文件");
            }
        }
    }
    spSkinEdit5->Text = IntToStr( m_nSendCnt );
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton8Click(TObject *Sender)
{
    m_bPause = !m_bPause;
    if(m_bPause)
    {
        spSkinButton8->Caption = "继续";
    }
    else
    {
        spSkinButton8->Caption = "暂停";
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::spSkinButton9Click(TObject *Sender)
{
    if(ComPort1->Connected)
    {
        if(m_pBuf)
        {
            int nLen = StrToInt(spSkinEdit2->Text);
            if( (nLen + m_nSendCnt) > m_nFileLen )
            {
                nLen = m_nFileLen - m_nSendCnt;
            }
            char* pSend = m_pBuf + m_nSendCnt;
            int nSendCntOnce = ComPort1->Write(pSend, nLen);
            m_nSendCnt += nSendCntOnce;
            spSkinMemo21->Lines->Text = spSkinMemo21->Lines->Text + IntToHex((int)(*pSend), 2);
            spSkinMemo21->Lines->Text = spSkinMemo21->Lines->Text + " ";
            if(m_nFileLen == m_nSendCnt)
            {
                spSkinButton9->Enabled = false;
            }
            spSkinEdit5->Text = IntToStr( m_nSendCnt );
        }
        else
        {
            spSkinMemo21->Lines->Append("请先选择发送文件");
        }
    }
    else
    {
        ShowMessage("请先打开端口");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton10Click(TObject *Sender)
{
    ComPort1->Write(m_pBuf, m_nFileLen);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinEdit4Change(TObject *Sender)
{
    AnsiString sEdit = spSkinEdit4->Text;
    int nLen = sEdit.Length();
    if((nLen - 2)%3 == 0)
    {
        spSkinEdit4->Text = spSkinEdit4->Text + " ";
        spSkinEdit4->SelStart = nLen + 1;
    }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::spSkinButton12Click(TObject *Sender)
{
    float fAdd = StrToFloat(spSkinEdit7->Text);

    unsigned char *cAdd = (unsigned char*)&fAdd;
    char tmp[16] = {0};
    sprintf(tmp, "%02x %02x %02x %02x ", cAdd[0], cAdd[1], cAdd[2], cAdd[3]);

    spSkinEdit4->Text = spSkinEdit4->Text + tmp;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton13Click(TObject *Sender)
{
    spSkinEdit4->Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::spSkinButton15Click(TObject *Sender)
{
    spSkinMemo21->Lines->Clear();
    m_nLineLength = 0;    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
    Action = caNone;
    this->Hide();
    fflush(m_fpRec);
    //fclose(m_fpRec);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton14Click(TObject *Sender)
{
    fclose(m_fpRec);
    AnsiString sName;
    sName = TDateTime::CurrentDateTime().FormatString("YYYYmmdd_HHMMSS");
    sName += ".dat";

    AnsiString sPath = ExtractFileDir(Application->ExeName);
    CreateDir(sPath + "\\log");
    sName = sPath + "\\log\\"+sName;
    m_fpRec = fopen(sName.c_str(), "wb");
    m_sLogFileName = sName;
    spSkinEdit9->Text = "0";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton11Click(TObject *Sender)
{
    ShellExecute(NULL, "open", m_sLogFileName.c_str(), "", ExtractFilePath(m_sLogFileName).c_str(), SW_SHOW);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton16Click(TObject *Sender)
{
    if(!SaveDialog1->Execute())
    {
        return;
    }
    AnsiString sName = SaveDialog1->FileName;

    int nLen = spSkinEdit4->Text.Length();
    if(nLen == 0)
    {
        return;
    }
    int nCnt = (nLen - 2) / 3 + 1;
    char *sStr = new char[nLen + 1];

    ZeroMemory(g_ZhuRuBuf, 8192);
    
    AnsiString sSend = spSkinEdit4->Text;
    strcpy(sStr, sSend.c_str());

    char *sdeli = " ";
    
    char *out = NULL;
    out = strtok(sStr, sdeli);
    for(int i=0; out; i++)
    {
        sscanf(out, "%x", &g_ZhuRuBuf[i]);
        out = strtok(NULL, sdeli);
    }

    FILE *fp = fopen(sName.c_str(), "wb");
    fwrite(g_ZhuRuBuf, nCnt, 1, fp);
    fclose(fp);
    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinCheckRadioBox3Click(TObject *Sender)
{
    if(spSkinCheckRadioBox3->Checked)
    {
        Form2->Show();
    }
    else
    {
        Form2->Hide();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton17Click(TObject *Sender)
{
    if(!ComPort1->Connected)
    {
        ShowMessage("Open com port first!");
        return;
    }
    
    Timer2->Interval = StrToInt(spSkinEdit3->Text);
    Timer2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton18Click(TObject *Sender)
{
    Timer2->Enabled = false;    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
    spSkinButton6Click(Sender);    
}
//---------------------------------------------------------------------------


void __fastcall TForm1::spSkinButton21Click(TObject *Sender)
{
    if(spSkinOpenDialog1->Execute())
    {
        spSkinEdit10->Text = spSkinOpenDialog1->FileName;
    }

}
//---------------------------------------------------------------------------
char* g_bufUpZhu = NULL;
int g_nLenUpZhu = 0;
int g_nUpZhuSend = 0;
void __fastcall TForm1::spSkinButton19Click(TObject *Sender)
{
    if(ComPort1->Connected)
    {
        if(spSkinEdit10->Text.Length())
        {
            if(g_bufUpZhu)
            {
                delete[] g_bufUpZhu;
                g_bufUpZhu = NULL;
            }

            FILE *fp = fopen(spSkinEdit10->Text.c_str(), "rb");
            fseek(fp, 0, SEEK_END);
            int nLen = ftell(fp);
            g_nLenUpZhu = nLen;
            g_nUpZhuSend = 0;
            fseek(fp, 0, SEEK_SET);
            g_bufUpZhu = new char[nLen];
            fread(g_bufUpZhu, 1, nLen, fp);
            fclose(fp);

            int nInterval = StrToInt(spSkinEdit3->Text);

            Timer3->Enabled = true;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
    int nOnce = StrToInt(spSkinEdit11->Text);
    if( (g_nLenUpZhu - g_nUpZhuSend) > nOnce )
    {
        ComPort1->Write(g_bufUpZhu + g_nUpZhuSend, nOnce);
        g_nUpZhuSend += nOnce;
        spSkinButton19->Enabled = false;
    }
    else
    {
        nOnce = g_nLenUpZhu - g_nUpZhuSend;
        ComPort1->Write(g_bufUpZhu + g_nUpZhuSend, nOnce);
        Timer3->Enabled = false;
        spSkinButton19->Enabled = true;
    }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::spSkinButton20Click(TObject *Sender)
{
    Timer3->Enabled = false;
    spSkinButton19->Enabled = true;
}
//---------------------------------------------------------------------------

