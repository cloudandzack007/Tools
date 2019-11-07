//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "NetCtl.h"
#include <stdio.h>
#include <vector>
#include <IniFiles.hpp>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DynamicSkinForm"
#pragma link "SkinBoxCtrls"
#pragma link "SkinCtrls"
#pragma resource "*.dfm"
TForm3 *Form3;
typedef struct _TXMB_CMD
{
    int nCmd;
    int nSleep;
}TXMB_CMD;
vector<TXMB_CMD> g_vCmd;
char g_ccCmd[30][10] = {
//-------------ǰ0~18����19����������-------------------------------------
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x11, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x22, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x33, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x44, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x55, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x66, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x77, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x88, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x99, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0xAA, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0xBB, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0xCC, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0xDD, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0xD2, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0xEE, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0xE1, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0x0F, 0x55, 0x55, 0x00},
//--------------17~23,7��������------------------------------------------
{0x58, 0x97, 0x33, 0x05, 0x99, 0x55, 0x0F, 0x55, 0x55, 0x00},
{0x59, 0x97, 0x33, 0x05, 0x99, 0x55, 0x0F, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x44, 0x03, 0x33, 0x33, 0x33, 0x33, 0x55, 0x00},
{0x1D, 0x97, 0x44, 0x03, 0x55, 0x55, 0x55, 0x55, 0x55, 0x00},
{0x1D, 0x97, 0x44, 0x03, 0xAA, 0xAA, 0xAA, 0xAA, 0x55, 0x00},
{0x1D, 0x97, 0x44, 0x03, 0xCC, 0xCC, 0xCC, 0xCC, 0x55, 0x00},
{0x57, 0x97, 0x33, 0x05, 0x99, 0x55, 0x0F, 0x55, 0x55, 0x00},
//------------------24~��ģ��Դ��������ʾ��ȶ�------------
{0x1D, 0x97, 0x33, 0x05, 0x99, 0x55, 0xF1, 0x55, 0x55, 0x00}};
bool SendDSInit();
bool SendDSSelFile();
bool SendDSStart();
bool SendDSStop();
bool SendTDStart();
bool SendTDStop();
bool SendTDCompare();
bool SendTDShichuan();
bool SendTDHuifang();
bool SendTDJingdu();
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
    : TForm(Owner)
{
    g_vCmd.clear();
    nStep = 0;
    m_bPause = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::spSkinSpeedButton3Click(TObject *Sender)
{
    int nSize = g_vCmd.size();
    AnsiString ss = IntToStr(nSize) + ": " + spSkinComboBox1->Text + " -> " + spSkinEdit1->Text + "��";
    spSkinListBox1->Items->Add(ss);
    TXMB_CMD cmd;
    cmd.nCmd = spSkinComboBox1->ItemIndex;
    cmd.nSleep = StrToInt(spSkinEdit1->Text);
    g_vCmd.push_back(cmd);
    spSkinEdit1->Text = "1";
}
//---------------------------------------------------------------------------
void __fastcall TForm3::spSkinSpeedButton2Click(TObject *Sender)
{
    spSkinListBox1->Items->Clear();
    g_vCmd.clear();
    nStep = 0;
    m_nCircleTimes = 1;
    spSkinEdit2->Text = "1";
    m_bPause = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::spSkinSpeedButton4Click(TObject *Sender)
{
    int nSize = g_vCmd.size();
    if( nSize > 0 )
    {
        if(!SaveDialog1->Execute())
        {
            return;
        }
        else
        {
            FILE *fp = fopen(SaveDialog1->FileName.c_str(), "wb");
            if(!fp)
            {
                ShowMessage("�ļ�����ʧ��!");
                return;
            }
            for(int i = 0; i<nSize; i++)
            {
                fwrite(&g_vCmd[i], sizeof(TXMB_CMD), 1, fp);
            }
            fclose(fp);
        }
    }    
}
//---------------------------------------------------------------------------
void __fastcall TForm3::spSkinSpeedButton5Click(TObject *Sender)
{
    if(!OpenDialog1->Execute())
    {
        return;
    }
    FILE *fp = fopen(OpenDialog1->FileName.c_str(), "rb");
    if(!fp)
    {
        return;
    }
    TXMB_CMD cmd;
    spSkinListBox1->Items->Clear();
    g_vCmd.clear();
    nStep = 0;
    fseek(fp, 0, SEEK_END);
    int nFileSize = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    for(int i=0; i < nFileSize / ( 2*sizeof(int) ); i++)
    {
        fread(&cmd, 1, sizeof(cmd), fp);
        spSkinEdit1->Text = IntToStr(cmd.nSleep);
        spSkinComboBox1->ItemIndex = cmd.nCmd;
        spSkinSpeedButton3Click(Sender);
    }
    fclose(fp);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
    if(m_bPause)
    {
        return;
    }
    Timer1->Enabled = false;
    if(!Form1->ComPort1->Connected)
    {
        ShowMessage("����δ�򿪣�");
        return;
    }

    if(g_vCmd.size()<1)
    {
        ShowMessage("ָ���б�Ϊ�գ�");
        return;
    }
    
    TXMB_CMD cmd = g_vCmd[nStep];
    if(cmd.nSleep)
    {
        Timer1->Interval = cmd.nSleep*1000;
    }
    else
    {
        Timer1->Interval = 10;
    }


    if(cmd.nCmd < 17 || cmd.nCmd == 40)//---����--
    {
        if(cmd.nCmd == 40)
        {
            cmd.nCmd = 24;
            g_ccCmd[cmd.nCmd][9] = 0x00;
            for(int i=2; i<9; i++)
            {
                g_ccCmd[cmd.nCmd][9] ^= g_ccCmd[cmd.nCmd][i];
            }
            Form1->ComPort1->Write(g_ccCmd[cmd.nCmd], 10);
        }
        else
        {
            g_ccCmd[cmd.nCmd][9] = 0x00;
            for(int i=2; i<9; i++)
            {
                g_ccCmd[cmd.nCmd][9] ^= g_ccCmd[cmd.nCmd][i];
            }
            Form1->ComPort1->Write(g_ccCmd[cmd.nCmd], 10);
        }
    }
    else if(cmd.nCmd < 24)//���
    {
        Form1->ComPort1->Write(g_ccCmd[cmd.nCmd], 8);
        Form1->m_nWorkMode = cmd.nCmd;
    }
    else if(cmd.nCmd < 34)//Data Sender and Display for wangna
    {
        int tCmd = cmd.nCmd - 24;
        bool bRet = false;
        switch(tCmd)
        {
            case 0: bRet = SendDSInit();  break; //��ģ��Դ���ͳ�ʼ��ָ��
            case 1: bRet = SendDSSelFile();  break; //��ģ��Դ��������ѡ��ָ��
            case 2: bRet = SendDSStart();  break; //��ģ��Դ���Ϳ�ʼ����ָ��
            case 3: bRet = SendDSStop();  break; //��ģ��Դ����ָֹͣ��
            case 4: bRet = SendTDStart();  break; //����ʾ������Ϳ�ʼָ��
            case 5: bRet = SendTDStop();  break; //����ʾ�������ָֹͣ��
            case 6: bRet = SendTDCompare();  break; //����ʾ������ͱȶ�ָ��
            case 7: bRet = SendTDShichuan();  break; //����ʾ������ͱȶ�ָ��
            case 8: bRet = SendTDHuifang();  break; //����ʾ������ͱȶ�ָ��
            case 9: bRet = SendTDJingdu();  break; //����ʾ������ͱȶ�ָ��
            default: bRet = false;  break;
        }
        if(!bRet)
        {
            return;    
        }
    }
    else if(cmd.nCmd < 35)
    {
        Form1->spSkinButton2Click(NULL);
    }
    else if(cmd.nCmd < 36)
    {
        Form1->spSkinButton7Click(NULL);
    }
    else if(cmd.nCmd < 37)
    {
        Form1->spSkinButton17Click(NULL);
    }
    else if(cmd.nCmd < 38)
    {
        Form1->spSkinButton18Click(NULL);
    }
    else if(cmd.nCmd < 39)
    {
        Form1->spSkinButton19Click(NULL);
    }
    else if(cmd.nCmd < 40)
    {
        Form1->spSkinButton20Click(NULL);
    }

    spSkinListBox1->ItemIndex = nStep;

    nStep++;

    if(nStep < g_vCmd.size())
    {
        Timer1->Enabled = true;
    }
    else
    {
        m_nCircleTimes--;
        if(m_nCircleTimes == 0)
        {
            ShowMessage("��ɣ�");
        }
        else
        {
            nStep = 0;
            spSkinStdLabel2->Caption = "����" + IntToStr(m_nCircleTimes) + "��";
            Timer1->Enabled = true;
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::spSkinSpeedButton1Click(TObject *Sender)
{
    m_nCircleTimes = StrToInt(spSkinEdit2->Text);
    spSkinStdLabel2->Caption = "����" + IntToStr(m_nCircleTimes) + "��";
    Timer1->Enabled = true;
    Timer1->Interval = 10;
    nStep = 0;    
}

//---------------------------------------------------------------------------
bool SendDSInit()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("DataSource", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("DataSource", "Port", 8041);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x00;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    
    return true;
}
//---------------------------------------------------------------------------
bool SendDSSelFile()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("DataSource", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("DataSource", "Port", 8041);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x01;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    return true;
}
//---------------------------------------------------------------------------
bool SendDSStart()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("DataSource", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("DataSource", "Port", 8041);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x02;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    return true;
}
//---------------------------------------------------------------------------
bool SendDSStop()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("DataSource", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("DataSource", "Port", 8041);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x03;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    return true;
}
//---------------------------------------------------------------------------
bool SendTDStart()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("TargDis", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("TargDis", "Port", 8042);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x04;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    return true;
}
//---------------------------------------------------------------------------
bool SendTDStop()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("TargDis", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("TargDis", "Port", 8042);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x05;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    return true;
}
//---------------------------------------------------------------------------
bool SendTDCompare()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("TargDis", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("TargDis", "Port", 8042);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x06;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    return true;
}
//---------------------------------------------------------------------------
bool SendTDShichuan()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("TargDis", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("TargDis", "Port", 8042);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x07;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    return true;
}
//---------------------------------------------------------------------------
bool SendTDHuifang()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("TargDis", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("TargDis", "Port", 8042);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x08;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    return true;
}
//---------------------------------------------------------------------------
bool SendTDJingdu()
{
    AnsiString sIni = Application->ExeName + ".ini";
    TIniFile * ini = new TIniFile( sIni );;
    
    Struct_Mysock sock = {0};
    sock.Protocol = TCP_CLIENT;
    AnsiString sIP = ini->ReadString("Local", "IP", "127.0.0.1");
    AnsiString sServerIP = ini->ReadString("TargDis", "IP", "127.0.0.1");
    sock.LocalAddr = sIP.c_str();
    sock.ServerAddr = sServerIP.c_str();
    sock.Port = ini->ReadInteger("TargDis", "Port", 8042);

    CNetCtl net;
    if(!net.Socket_Open(&sock))
    {
        ShowMessage("�޷�����ģ��Դ�˿ڣ����������Ƿ����ӣ��������ļ���IP��ַ�Ƿ���ȷ");
        return false;
    }

    char cmd[16] = {0};
    cmd[0] = 0xff;
    cmd[1] = 0x09 ;//cmd code;
    cmd[2] = 0x61;
    if(0!=net.Socket_Send(&sock, NULL, cmd, 16))
    {
        ShowMessage("ģ��Դָ���ʧ�ܣ������������ӣ�������ѿ���");
        return false;
    }
    net.Socket_Close(&sock);
    return true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::spSkinSpeedButton6Click(TObject *Sender)
{
    m_bPause = !m_bPause;
    if(m_bPause)
    {
        spSkinSpeedButton6->Caption = "����";
    }
    else
    {
        spSkinSpeedButton6->Caption = "��ͣ";
    }
}
//---------------------------------------------------------------------------

