VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form Histogram_Transparency 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3900
   ClientTop       =   2505
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin VB.HScrollBar HScroll1 
      Height          =   255
      LargeChange     =   10
      Left            =   2280
      Max             =   100
      SmallChange     =   10
      TabIndex        =   2
      Top             =   1080
      Value           =   60
      Width           =   2415
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "Histogram_Transparency.frx":0000
      TabIndex        =   1
      Top             =   1410
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "Histogram_Transparency.frx":037E
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label3 
      Caption         =   "Transparency:"
      Height          =   255
      Left            =   1020
      TabIndex        =   5
      Top             =   1080
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "100%"
      Height          =   195
      Left            =   4440
      TabIndex        =   4
      Top             =   840
      Width           =   615
   End
   Begin VB.Label Label1 
      Caption         =   "0%"
      Height          =   195
      Left            =   2220
      TabIndex        =   3
      Top             =   840
      Width           =   375
   End
End
Attribute VB_Name = "Histogram_Transparency"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
 TChart1.Series(0).FillSampleValues 25
 TChart1.Series(1).FillSampleValues 25
 HScroll1_Scroll
End Sub

Private Sub HScroll1_Change()
  HScroll1_Scroll
End Sub

Private Sub HScroll1_Scroll()
  TChart1.Series(1).asHistogram.Transparency = HScroll1.Value
End Sub

