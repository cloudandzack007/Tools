VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BarSideAllForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3495
   ClientTop       =   2295
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4035
      Left            =   0
      OleObjectBlob   =   "BarSideAllForm.frx":0000
      TabIndex        =   0
      Top             =   1650
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1095
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   3
      Text            =   "BarSideAllForm.frx":01E7
      Top             =   0
      Width           =   7035
   End
   Begin VB.OptionButton Option1 
      Caption         =   "Side to Side"
      Height          =   375
      Index           =   1
      Left            =   3000
      TabIndex        =   2
      Top             =   1200
      Width           =   1155
   End
   Begin VB.OptionButton Option1 
      Caption         =   "Side all"
      Height          =   375
      Index           =   0
      Left            =   1620
      TabIndex        =   1
      Top             =   1200
      Value           =   -1  'True
      Width           =   1155
   End
End
Attribute VB_Name = "BarSideAllForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 4
    .Series(1).FillSampleValues 4
    .Series(0).asBar.MultiBar = mbSideAll
  End With
End Sub

Private Sub Option1_Click(Index As Integer)
  If Index = 0 Then
    TChart1.Series(0).asBar.MultiBar = mbSideAll
  Else
    TChart1.Series(0).asBar.MultiBar = mbSide
  End If
End Sub
