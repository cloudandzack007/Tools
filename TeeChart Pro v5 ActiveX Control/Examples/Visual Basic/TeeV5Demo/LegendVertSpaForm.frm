VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form LegendVertSpaForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3120
   ClientTop       =   1995
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3915
      Left            =   0
      OleObjectBlob   =   "LegendVertSpaForm.frx":0000
      TabIndex        =   0
      Top             =   1770
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1275
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   4
      Text            =   "LegendVertSpaForm.frx":0077
      Top             =   0
      Width           =   7035
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   375
      Left            =   1980
      Max             =   -8
      Min             =   30
      TabIndex        =   2
      Top             =   1320
      Width           =   255
   End
   Begin VB.Label Label3 
      Height          =   255
      Left            =   2400
      TabIndex        =   3
      Top             =   1380
      Width           =   1155
   End
   Begin VB.Label Label2 
      Caption         =   "Legend vertical spacing:"
      Height          =   255
      Left            =   60
      TabIndex        =   1
      Top             =   1380
      Width           =   1815
   End
End
Attribute VB_Name = "LegendVertSpaForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  TChart1.AddSeries scBubble
  TChart1.Series(0).FillSampleValues 9
  VScroll1.Value = 0
  Label3.Caption = Str$(VScroll1.Value)
End Sub

Private Sub VScroll1_Change()
  TChart1.Legend.Vertspacing = VScroll1.Value
  Label3.Caption = Str$(VScroll1.Value)
End Sub