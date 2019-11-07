//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "DynamicSkinForm"
#pragma link "SkinCtrls"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
    : TForm(Owner)
{
    ZeroMemory(m_buf, 40960);
    m_revCnt = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::RecData(unsigned char c)
{
    *(m_buf + m_revCnt) = c;
    m_revCnt++;
    if(m_buf[0] != 0x39 && m_buf[0] != 0xE8)
    {
        m_revCnt = 0;
        ZeroMemory(m_buf, 27);
    }
    else
    {
        if(m_buf[0] == 0x39)
        {
            if(m_revCnt >= 27)
            {
                if(this->Visible)
                {
                    ShowData();
                }
                m_revCnt = 0;
                ZeroMemory(m_buf, 27);
            }
        }
        else
        {
            if(m_revCnt >= 13)
            {
                if(this->Visible)
                {
                    RecData2();
                }
                m_revCnt = 0;
                ZeroMemory(m_buf, 13);
            }
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm2::RecData2()
{
    char ctmp[260] = {0};


    sprintf(ctmp, "%d", m_buf[3]);
    spSkinListView1->Items->Item[9]->SubItems->Strings[0] = ctmp;

    sprintf(ctmp, "%d", m_buf[7]);
    spSkinListView1->Items->Item[10]->SubItems->Strings[0] = ctmp;


    if(m_buf[7]==1)
    {
        sprintf(ctmp, "��������");
        spSkinListView1->Items->Item[7]->SubItems->Strings[0] = ctmp;
        spSkinListView1->Items->Item[7]->SubItemImages[0] = 1;
    }
    else
    {
        sprintf(ctmp, "�ػ�����");
        spSkinListView1->Items->Item[7]->SubItems->Strings[0] = ctmp;
        spSkinListView1->Items->Item[7]->SubItemImages[0] = 1;
    }

    sprintf(ctmp, "%d", m_buf[4]);
    spSkinListView1->Items->Item[8]->SubItems->Strings[0] = ctmp;
    spSkinListView1->Items->Item[8]->SubItemImages[0] = 1;

    sprintf(ctmp, "0x%X 0x%X", m_buf[5], m_buf[6]);
    spSkinListView1->Items->Item[11]->SubItems->Strings[0] = ctmp;


}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
    Form1->spSkinCheckRadioBox3->Checked = false;
    fclose(Form1->m_fpRec);
    exit(0);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ShowData()
{
    AnsiString s;
    unsigned int i;
    int nIcon = -1;
    char ctmp[260] = {0};

    //1��39h
    i = m_buf[0];
    sprintf(ctmp, "%XH", i);
    spSkinListView1->Items->Item[0]->SubItems->Strings[0] = ctmp;

    //2:D7H
    i = m_buf[1];
    sprintf(ctmp, "%XH", i);
    spSkinListView1->Items->Item[1]->SubItems->Strings[0] = ctmp;

    //3:11h
    i = m_buf[2];
    sprintf(ctmp, "%XH", i);
    spSkinListView1->Items->Item[2]->SubItems->Strings[0] = ctmp;

    //4:frame cnt

    
    /*
    i = m_buf[3] & 0xf;
    sprintf(ctmp, "%XH", i);
    spSkinListView1->Items->Item[3]->SubItems->Strings[0] = ctmp;

    //4:cmd type
    i = ( m_buf[3] >> 4);
    (i == 0) ? sprintf(ctmp, "%XH:��ע����", i): sprintf(ctmp, "%XH:�ڲ�ָ��", i);
    spSkinListView1->Items->Item[4]->SubItems->Strings[0] = ctmp;
    */

    



    //11:----------���ذ�------------
    //work mode
    i = m_buf[3] & 0x7;
    switch(i)
    {
        case 0:sprintf(ctmp, "%XH:����", i);    nIcon = 1;
        break;
        case 1:sprintf(ctmp, "%XH:ʵ��", i);    nIcon = 1;
        break;
        case 2:sprintf(ctmp, "%XH:�洢", i);    nIcon = 1;
        break;
        case 3:sprintf(ctmp, "%XH:ȫ�ط�", i);    nIcon = 1;
        break;
        case 4:sprintf(ctmp, "%XH:�ϵ�ط�", i);    nIcon = 1;
        break;
        case 5:sprintf(ctmp, "%XH:FLASH����", i);    nIcon = 1;
        break;
        case 6:sprintf(ctmp, "%XH:�ط����", i);    nIcon = 1;
        break;
        case 7:sprintf(ctmp, "%XH:����ģʽ", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);   nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[0]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[0]->SubItemImages[0] = nIcon;
    //�������յ��ڲ�ָ������
    i = m_buf[3] >> 3;
    switch(i)
    {
        case 0:sprintf(ctmp, "%XH:��ע����", i);    nIcon = 1;
        break;
        case 1:sprintf(ctmp, "%XH:�ϵ�ط�", i);    nIcon = 1;
        break;
        case 2:sprintf(ctmp, "%XH:�洢", i);    nIcon = 1;
        break;
        case 3:sprintf(ctmp, "%XH:ʵ��", i);    nIcon = 1;
        break;
        case 4:sprintf(ctmp, "%XH:ȫ�ط�", i);    nIcon = 1;
        break;
        case 5:sprintf(ctmp, "%XH:FLASH����", i);    nIcon = 1;
        break;
        case 6:sprintf(ctmp, "%XH:���ز���0", i);    nIcon = 1;
        break;
        case 7:sprintf(ctmp, "%XH:���ز���1", i);    nIcon = 1;
        break;
        case 8:sprintf(ctmp, "%XH:���ز���2", i);    nIcon = 1;
        break;
        case 9:sprintf(ctmp, "%XH:���ز���3", i);    nIcon = 1;
        break;
        case 10:sprintf(ctmp, "%XH:���ز���4", i);    nIcon = 1;
        break;
        case 11:sprintf(ctmp, "%XH:���ز���5", i);    nIcon = 1;
        break;
        case 12:sprintf(ctmp, "%XH:���ز���6", i);    nIcon = 1;
        break;
        case 13:sprintf(ctmp, "%XH:���ز���7", i);    nIcon = 1;
        break;
        case 14:sprintf(ctmp, "%XH:ָֹͣ��", i);    nIcon = 1;
        break;
        case 15:sprintf(ctmp, "%XH:ϵͳ��λ", i);    nIcon = 1;
        break;
        case 16:sprintf(ctmp, "%XH:xxxx", i);    nIcon = 1;
        break;
        case 17:sprintf(ctmp, "%XH:����˿FPGA��ؿ�", i);    nIcon = 1;
        break;
        case 18:sprintf(ctmp, "%XH:���ض�̬��ע����", i);    nIcon = 1;
        break;
        case 19:sprintf(ctmp, "%XH:����ģʽ", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);   nIcon = 2;
        break;
    }
    spSkinListView1->Items->Item[4]->SubItems->Strings[0] = ctmp;
    spSkinListView1->Items->Item[4]->SubItemImages[0] = nIcon;
    

    //main Board rev state
    i = m_buf[10] & 0x1;
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:�ɽ���", i);    nIcon = 1;
        break;
        case 1:sprintf(ctmp, "%d:���ɽ���", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[1]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[1]->SubItemImages[0] = nIcon;

    //board 1 state
    i = (m_buf[10] >> 1) & 0x1;
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ��ѯ������", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:��ѯ������", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[2]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[2]->SubItemImages[0] = nIcon;

        //board 2 state
    i = (m_buf[10] >> 2) & 0x1;
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ��ѯ������", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:��ѯ������", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);     nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[3]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[3]->SubItemImages[0] = nIcon;

        //board 3 state
    i = (m_buf[10] >> 3) & 0x1;
    switch(i)
    {
         case 0:sprintf(ctmp, "%d:δ��ѯ������", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:��ѯ������", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);      nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[4]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[4]->SubItemImages[0] = nIcon;

        //board 4 state
    i = (m_buf[10] >> 4) & 0x1;
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ��ѯ������", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:��ѯ������", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);      nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[5]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[5]->SubItemImages[0] = nIcon;

        //board 5 state
    i = (m_buf[10] >> 5) & 0x1;
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ��ѯ������", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:��ѯ������", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);      nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[6]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[6]->SubItemImages[0] = nIcon;

    //board 6 state
    i = (m_buf[10] >> 6) & 0x1;
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ��ѯ������", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:��ѯ������", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);      nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[7]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[7]->SubItemImages[0] = nIcon;

    //����˿FPGA����״̬
    i = (m_buf[10] >> 7) & 0x1;
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:��عر�", i);    nIcon = 1;
        break;
        case 1:sprintf(ctmp, "%d:��ؿ���", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);      nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[10]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[10]->SubItemImages[0] = nIcon;


    //��ȷָ��֡����
    i = m_buf[11] & 0xf;
    nIcon = -1;
    sprintf(ctmp, "%d", i);
    spSkinListView1->Items->Item[3]->SubItems->Strings[0] = ctmp;
    spSkinListView1->Items->Item[3]->SubItemImages[0] = nIcon;

    
    //FPGA reset times
    nIcon = -1;
    i = (m_buf[11] >> 4) & 0x7;
    sprintf(ctmp, "%d", i);
    spSkinListView8->Items->Item[8]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[8]->SubItemImages[0] = nIcon;

    //���������ذ�洢����ʼ��״̬
    i = (m_buf[11] >> 7) & 0x1;
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ���", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:���", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);      nIcon = 2;
        break;
    }
    spSkinListView8->Items->Item[11]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[11]->SubItemImages[0] = nIcon;

    //Storage
    nIcon = -1;
    i = m_buf[12];
    sprintf(ctmp, "%d(��16 MB)", i);
    spSkinListView8->Items->Item[9]->SubItems->Strings[0] = ctmp;
    spSkinListView8->Items->Item[9]->SubItemImages[0] = nIcon;

    //�������յ���ȷ������������֡����
    nIcon = -1;
    i = m_buf[25]; 
    sprintf(ctmp, "%d", i);
    spSkinListView8->Items->Item[12]->SubItems->Strings[0] = ctmp;
    
    //��У��
    int sum = m_buf[2];
    for(int m=3; m<26; m++)
    {
        sum ^= m_buf[m];
    }
    i = m_buf[26];
    if(i == sum)
    {
        sprintf(ctmp, "%XH:��ȷ", i);   nIcon = 1;
    }
    else
    {
        sprintf(ctmp, "%XH:����(%XH)", i, sum);    nIcon = 2;
    }
    spSkinListView1->Items->Item[5]->SubItems->Strings[0] = ctmp;
    spSkinListView1->Items->Item[5]->SubItemImages[0] = nIcon;

//board1------------------------------------------------------------------------
    i = (m_buf[4] & 0x1); //YC state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ӧ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��Ӧ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[0]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[0]->SubItemImages[0] = nIcon;

    i = (m_buf[4] & 0x2) >> 1; //work state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
        case 0:sprintf(ctmp, "%d:��������", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[1]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[1]->SubItemImages[0] = nIcon;
    
    i = (m_buf[4] & 0x4) >> 2; //CCD DATA
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��CCD����", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��CCD����", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[2]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[2]->SubItemImages[0] = nIcon;    

    i = (m_buf[4] & 0x8) >> 3; //Target have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��⵽Ŀ��", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��⵽Ŀ��", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[3]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[3]->SubItemImages[0] = nIcon;

    i = (m_buf[4] & 0x10) >> 4; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ���ѯ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ���ѯ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[4]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[4]->SubItemImages[0] = nIcon;

    i = (m_buf[4] & 0x20) >> 5; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ŀ������", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��Ŀ������", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[5]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[5]->SubItemImages[0] = nIcon;

    i = (m_buf[4] & 0x40) >> 6; //data up
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ�", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ�", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[6]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[6]->SubItemImages[0] = nIcon;

    i = (m_buf[4] & 0x80) >> 7; //data up
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ�յ���ȷ����", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:�յ���ȷ����", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[7]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[7]->SubItemImages[0] = nIcon;

    i = (m_buf[13] & 0x0f); //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
        default:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
    }
    spSkinListView2->Items->Item[8]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[8]->SubItemImages[0] = nIcon;

    i = (m_buf[13] & 0x10)>>4; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[9]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[9]->SubItemImages[0] = nIcon;

    i = (m_buf[13] & 0x20)>>5; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[10]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[10]->SubItemImages[0] = nIcon;

    i = (m_buf[13] & 0x40)>>6; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[11]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[11]->SubItemImages[0] = nIcon;

    i = (m_buf[13] & 0x80)>>7; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
    }
    spSkinListView2->Items->Item[12]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[12]->SubItemImages[0] = nIcon;

    //DSP1&2��ʼ��
    i = m_buf[14] & 0x1; //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:���", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:δ���", i);    nIcon = 2;
        break;
    }
    spSkinListView2->Items->Item[14]->SubItems->Strings[0] = ctmp;
    spSkinListView2->Items->Item[14]->SubItemImages[0] = nIcon;
    

    i = m_buf[14]>>1; //super cha
    sprintf(ctmp, "%d", i);
    spSkinListView2->Items->Item[13]->SubItems->Strings[0] = ctmp;
     

//board2------------------------------------------------------------------------
    i = (m_buf[5] & 0x1); //YC state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ӧ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��Ӧ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[0]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[0]->SubItemImages[0] = nIcon;

    i = (m_buf[5] & 0x2) >> 1; //work state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
        case 0:sprintf(ctmp, "%d:��������", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[1]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[1]->SubItemImages[0] = nIcon;
    
    i = (m_buf[5] & 0x4) >> 2; //CCD DATA
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��CCD����", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��CCD����", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[2]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[2]->SubItemImages[0] = nIcon;

    i = (m_buf[5] & 0x8) >> 3; //Target have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��⵽Ŀ��", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��⵽Ŀ��", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[3]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[3]->SubItemImages[0] = nIcon;

    i = (m_buf[5] & 0x10) >> 4; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ���ѯ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ���ѯ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[4]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[4]->SubItemImages[0] = nIcon;

    i = (m_buf[5] & 0x20) >> 5; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ŀ������", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��Ŀ������", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[5]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[5]->SubItemImages[0] = nIcon;

    i = (m_buf[5] & 0x40) >> 6; //data up
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ�", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ�", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[6]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[6]->SubItemImages[0] = nIcon;

    i = (m_buf[5] & 0x80) >> 7; //data up
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ�յ���ȷ����", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:�յ���ȷ����", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[7]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[7]->SubItemImages[0] = nIcon;

    i = (m_buf[15] & 0x0f); //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
        default:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
    }
    spSkinListView3->Items->Item[8]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[8]->SubItemImages[0] = nIcon;

    i = (m_buf[15] & 0x10)>>4; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[9]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[9]->SubItemImages[0] = nIcon;

    i = (m_buf[15] & 0x20)>>5; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[10]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[10]->SubItemImages[0] = nIcon;

    i = (m_buf[15] & 0x40)>>6; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[11]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[11]->SubItemImages[0] = nIcon;

    i = (m_buf[15] & 0x80)>>7; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
    }
    spSkinListView3->Items->Item[12]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[12]->SubItemImages[0] = nIcon;

    //DSP1&2��ʼ��
    i = m_buf[16] & 0x1; //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:���", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:δ���", i);    nIcon = 2;
        break;
    }
    spSkinListView3->Items->Item[14]->SubItems->Strings[0] = ctmp;
    spSkinListView3->Items->Item[14]->SubItemImages[0] = nIcon;
    

    i = m_buf[16]>>1; //super cha
    sprintf(ctmp, "%d", i);
    spSkinListView3->Items->Item[13]->SubItems->Strings[0] = ctmp;

//board3------------------------------------------------------------------------
    i = (m_buf[6] & 0x1); //YC state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ӧ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��Ӧ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[0]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[0]->SubItemImages[0] = nIcon;

    i = (m_buf[6] & 0x2) >> 1; //work state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
        case 0:sprintf(ctmp, "%d:��������", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[1]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[1]->SubItemImages[0] = nIcon;
    
    i = (m_buf[6] & 0x4) >> 2; //CCD DATA
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��CCD����", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��CCD����", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[2]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[2]->SubItemImages[0] = nIcon;

    i = (m_buf[6] & 0x8) >> 3; //Target have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��⵽Ŀ��", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��⵽Ŀ��", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[3]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[3]->SubItemImages[0] = nIcon;

    i = (m_buf[6] & 0x10) >> 4; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ���ѯ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ���ѯ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[4]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[4]->SubItemImages[0] = nIcon;

    i = (m_buf[6] & 0x20) >> 5; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ŀ������", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��Ŀ������", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[5]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[5]->SubItemImages[0] = nIcon;

    i = (m_buf[6] & 0x40) >> 6; //data up
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ�", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ�", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[6]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[6]->SubItemImages[0] = nIcon;

    i = (m_buf[6] & 0x80) >> 7; //data up
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ�յ���ȷ����", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:�յ���ȷ����", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[7]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[7]->SubItemImages[0] = nIcon;

    i = (m_buf[17] & 0x0f); //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
        default:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
    }
    spSkinListView4->Items->Item[8]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[8]->SubItemImages[0] = nIcon;

    i = (m_buf[17] & 0x10)>>4; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[9]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[9]->SubItemImages[0] = nIcon;

    i = (m_buf[17] & 0x20)>>5; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[10]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[10]->SubItemImages[0] = nIcon;

    i = (m_buf[17] & 0x40)>>6; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[11]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[11]->SubItemImages[0] = nIcon;

    i = (m_buf[17] & 0x80)>>7; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
    }
    spSkinListView4->Items->Item[12]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[12]->SubItemImages[0] = nIcon;

    //DSP1&2��ʼ��
    i = m_buf[18] & 0x1; //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:���", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:δ���", i);    nIcon = 2;
        break;
    }
    spSkinListView4->Items->Item[14]->SubItems->Strings[0] = ctmp;
    spSkinListView4->Items->Item[14]->SubItemImages[0] = nIcon;
    

    i = m_buf[18]>>1; //super cha
    sprintf(ctmp, "%d", i);
    spSkinListView4->Items->Item[13]->SubItems->Strings[0] = ctmp;

//board4------------------------------------------------------------------------
    i = (m_buf[7] & 0x1); //YC state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ӧ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��Ӧ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[0]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[0]->SubItemImages[0] = nIcon;

    i = (m_buf[7] & 0x2) >> 1; //work state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
        case 0:sprintf(ctmp, "%d:��������", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[1]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[1]->SubItemImages[0] = nIcon;
    
    i = (m_buf[7] & 0x4) >> 2; //CCD DATA
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��CCD����", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��CCD����", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[2]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[2]->SubItemImages[0] = nIcon;

    i = (m_buf[7] & 0x8) >> 3; //Target have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��⵽Ŀ��", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��⵽Ŀ��", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[3]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[3]->SubItemImages[0] = nIcon;

    i = (m_buf[7] & 0x10) >> 4; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ���ѯ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ���ѯ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[4]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[4]->SubItemImages[0] = nIcon;

    i = (m_buf[7] & 0x20) >> 5; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ŀ������", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��Ŀ������", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[5]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[5]->SubItemImages[0] = nIcon;

    i = (m_buf[7] & 0x40) >> 6; //data up
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ�", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ�", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[6]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[6]->SubItemImages[0] = nIcon;

    i = (m_buf[7] & 0x80) >> 7; //data up
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ�յ���ȷ����", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:�յ���ȷ����", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[7]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[7]->SubItemImages[0] = nIcon;

    i = (m_buf[19] & 0x0f); //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
        default:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
    }
    spSkinListView5->Items->Item[8]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[8]->SubItemImages[0] = nIcon;

    i = (m_buf[19] & 0x10)>>4; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[9]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[9]->SubItemImages[0] = nIcon;

    i = (m_buf[19] & 0x20)>>5; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[10]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[10]->SubItemImages[0] = nIcon;

    i = (m_buf[19] & 0x40)>>6; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[11]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[11]->SubItemImages[0] = nIcon;

    i = (m_buf[19] & 0x80)>>7; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
    }
    spSkinListView5->Items->Item[12]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[12]->SubItemImages[0] = nIcon;

    //DSP1&2��ʼ��
    i = m_buf[20] & 0x1; //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:���", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:δ���", i);    nIcon = 2;
        break;
    }
    spSkinListView5->Items->Item[14]->SubItems->Strings[0] = ctmp;
    spSkinListView5->Items->Item[14]->SubItemImages[0] = nIcon;
    

    i = m_buf[20]>>1; //super cha
    sprintf(ctmp, "%d", i);
    spSkinListView5->Items->Item[13]->SubItems->Strings[0] = ctmp;


    //board5------------------------------------------------------------------------
    i = (m_buf[8] & 0x1); //YC state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ӧ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��Ӧ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[0]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[0]->SubItemImages[0] = nIcon;

    i = (m_buf[8] & 0x2) >> 1; //work state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
        case 0:sprintf(ctmp, "%d:��������", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[1]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[1]->SubItemImages[0] = nIcon;
    
    i = (m_buf[8] & 0x4) >> 2; //CCD DATA
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��CCD����", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��CCD����", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[2]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[2]->SubItemImages[0] = nIcon;

    i = (m_buf[8] & 0x8) >> 3; //Target have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��⵽Ŀ��", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��⵽Ŀ��", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[3]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[3]->SubItemImages[0] = nIcon;

    i = (m_buf[8] & 0x10) >> 4; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ���ѯ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ���ѯ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[4]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[4]->SubItemImages[0] = nIcon;

    i = (m_buf[8] & 0x20) >> 5; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ŀ������", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��Ŀ������", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[5]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[5]->SubItemImages[0] = nIcon;

    i = (m_buf[8] & 0x40) >> 6; //data up
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ�", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ�", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[6]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[6]->SubItemImages[0] = nIcon;

    i = (m_buf[8] & 0x80) >> 7; //data up
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ�յ���ȷ����", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:�յ���ȷ����", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[7]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[7]->SubItemImages[0] = nIcon;

    i = (m_buf[21] & 0x0f); //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
        default:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
    }
    spSkinListView6->Items->Item[8]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[8]->SubItemImages[0] = nIcon;

    i = (m_buf[21] & 0x10)>>4; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[9]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[9]->SubItemImages[0] = nIcon;

    i = (m_buf[21] & 0x20)>>5; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[10]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[10]->SubItemImages[0] = nIcon;

    i = (m_buf[21] & 0x40)>>6; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[11]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[11]->SubItemImages[0] = nIcon;

    i = (m_buf[21] & 0x80)>>7; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
    }
    spSkinListView6->Items->Item[12]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[12]->SubItemImages[0] = nIcon;

    //DSP1&2��ʼ��
    i = m_buf[22] & 0x1; //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:���", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:δ���", i);    nIcon = 2;
        break;
    }
    spSkinListView6->Items->Item[14]->SubItems->Strings[0] = ctmp;
    spSkinListView6->Items->Item[14]->SubItemImages[0] = nIcon;
    

    i = m_buf[22]>>1; //super cha
    sprintf(ctmp, "%d", i);
    spSkinListView6->Items->Item[13]->SubItems->Strings[0] = ctmp;

    //board6------------------------------------------------------------------------
    i = (m_buf[9] & 0x1); //YC state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ӧ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��Ӧ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[0]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[0]->SubItemImages[0] = nIcon;

    i = (m_buf[9] & 0x2) >> 1; //work state
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
        case 0:sprintf(ctmp, "%d:��������", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[1]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[1]->SubItemImages[0] = nIcon;
    
    i = (m_buf[9] & 0x4) >> 2; //CCD DATA
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��CCD����", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��CCD����", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[2]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[2]->SubItemImages[0] = nIcon;

    i = (m_buf[9] & 0x8) >> 3; //Target have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��⵽Ŀ��", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ��⵽Ŀ��", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[3]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[3]->SubItemImages[0] = nIcon;

    i = (m_buf[9] & 0x10) >> 4; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ���ѯ", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ���ѯ", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[4]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[4]->SubItemImages[0] = nIcon;

    i = (m_buf[9] & 0x20) >> 5; //ask have
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:��Ŀ������", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:��Ŀ������", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[5]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[5]->SubItemImages[0] = nIcon;

    i = (m_buf[9] & 0x40) >> 6; //data up
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:�յ�", i);    nIcon = 1;
        break;
        case 0:sprintf(ctmp, "%d:δ�յ�", i);  nIcon = 2;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[6]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[6]->SubItemImages[0] = nIcon;

    i = (m_buf[9] & 0x80) >> 7; //data up
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:δ�յ���ȷ����", i);    nIcon = 2;
        break;
        case 1:sprintf(ctmp, "%d:�յ���ȷ����", i);  nIcon = 1;
        break;
        default:sprintf(ctmp, "%XH:����", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[7]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[7]->SubItemImages[0] = nIcon;

    i = (m_buf[23] & 0x0f); //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
        default:sprintf(ctmp, "%d", i);    nIcon = -1;
        break;
    }
    spSkinListView7->Items->Item[8]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[8]->SubItemImages[0] = nIcon;

    i = (m_buf[23] & 0x10)>>4; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[9]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[9]->SubItemImages[0] = nIcon;

    i = (m_buf[23] & 0x20)>>5; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[10]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[10]->SubItemImages[0] = nIcon;

    i = (m_buf[23] & 0x40)>>6; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:������", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[11]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[11]->SubItemImages[0] = nIcon;

    i = (m_buf[23] & 0x80)>>7; //work parameter
    switch(i)
    {
        case 0:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:����ģʽ", i);    nIcon = 1;
        break;
    }
    spSkinListView7->Items->Item[12]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[12]->SubItemImages[0] = nIcon;

    //DSP1&2��ʼ��
    i = m_buf[24] & 0x1; //work parameter
    switch(i)
    {
        case 1:sprintf(ctmp, "%d:���", i);    nIcon = 1;
        break;
        default:sprintf(ctmp, "%d:δ���", i);    nIcon = 2;
        break;
    }
    spSkinListView7->Items->Item[14]->SubItems->Strings[0] = ctmp;
    spSkinListView7->Items->Item[14]->SubItemImages[0] = nIcon;
    

    i = m_buf[24]>>1; //super cha
    sprintf(ctmp, "%d", i);
    spSkinListView7->Items->Item[13]->SubItems->Strings[0] = ctmp;
    //Beep(44000*8, 50);
}

void __fastcall TForm2::spSkinSpeedButton1Click(TObject *Sender)
{
    Form1->Show();    
}
//---------------------------------------------------------------------------


void __fastcall TForm2::spSkinSpeedButton2Click(TObject *Sender)
{
    Form3->Show();    
}
//---------------------------------------------------------------------------

