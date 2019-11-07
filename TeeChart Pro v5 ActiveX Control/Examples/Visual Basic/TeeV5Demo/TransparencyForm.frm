VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form TransparencyForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2340
   ClientTop       =   1905
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4215
      Left            =   0
      OleObjectBlob   =   "TransparencyForm.frx":0000
      TabIndex        =   0
      Top             =   1470
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1095
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "TransparencyForm.frx":ADBB
      Top             =   0
      Width           =   7035
   End
   Begin VB.HScrollBar HScroll1 
      Height          =   255
      LargeChange     =   10
      Left            =   1440
      Max             =   100
      SmallChange     =   5
      TabIndex        =   1
      Top             =   1140
      Width           =   3015
   End
   Begin VB.Label Label2 
      Height          =   255
      Left            =   4560
      TabIndex        =   4
      Top             =   1080
      Width           =   495
   End
   Begin VB.Label Label1 
      Caption         =   "Transparency %:"
      Height          =   195
      Left            =   120
      TabIndex        =   3
      Top             =   1140
      Width           =   1635
   End
End
Attribute VB_Name = "TransparencyForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 10
  HScroll1.Value = 70
  HScroll1_Scroll
  Label2.Caption = HScroll1.Value & "%"
End Sub

Private Sub HScroll1_Change()
  HScroll1_Scroll
End Sub

Private Sub HScroll1_Scroll()
  With TChart1
    .Legend.Transparency = HScroll1.Value
    .Header.Transparency = HScroll1.Value
    .Walls.Back.Transparency = HScroll1.Value
  End With
  Label2.Caption = HScroll1.Value & "%"
End Sub

Private Sub Text1_DblClick()
  TChart1.ShowEditor
End Sub
