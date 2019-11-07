VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form TitleCustomPosForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2745
   ClientTop       =   2010
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "TitleCustomPosForm.frx":0000
      TabIndex        =   0
      Top             =   1410
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   6
      Text            =   "TitleCustomPosForm.frx":012A
      Top             =   0
      Width           =   7035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Custom position"
      Height          =   195
      Left            =   60
      TabIndex        =   5
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1575
   End
   Begin VB.HScrollBar HScroll2 
      Height          =   255
      LargeChange     =   5
      Left            =   4440
      Max             =   1000
      SmallChange     =   2
      TabIndex        =   2
      Top             =   1080
      Value           =   90
      Width           =   1755
   End
   Begin VB.HScrollBar HScroll1 
      Height          =   255
      LargeChange     =   5
      Left            =   2160
      Max             =   1000
      SmallChange     =   2
      TabIndex        =   1
      Top             =   1080
      Value           =   90
      Width           =   1755
   End
   Begin VB.Label Label2 
      Caption         =   "Top"
      Height          =   255
      Left            =   4080
      TabIndex        =   4
      Top             =   1080
      Width           =   315
   End
   Begin VB.Label Label1 
      Caption         =   "Left"
      Height          =   255
      Left            =   1800
      TabIndex        =   3
      Top             =   1080
      Width           =   315
   End
End
Attribute VB_Name = "TitleCustomPosForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim FirstRepaint As Boolean

Private Sub Check1_Click()
  TChart1.Header.CustomPosition = Check1.Value
  TChart1.Repaint
  HScroll1.Value = TChart1.Header.Left
  HScroll2.Value = TChart1.Header.Top
  HScroll1.Enabled = Check1.Value
  HScroll2.Enabled = Check1.Value
End Sub

Private Sub Form_Load()
  FirstRepaint = False
  TChart1.Header.CustomPosition = True
  TChart1.Header.Left = 90
  TChart1.Header.Top = 90
End Sub

Private Sub HScroll1_Change()
  TChart1.Header.Left = HScroll1.Value
End Sub

Private Sub HScroll1_Scroll()
  HScroll1_Change
End Sub

Private Sub HScroll2_Change()
  TChart1.Header.Top = HScroll2.Value
End Sub

Private Sub HScroll2_Scroll()
  HScroll2_Change
End Sub

Private Sub TChart1_OnAfterDraw()
  If FirstRepaint = False Then
    FirstRepaint = True
    HScroll1.Max = TChart1.Canvas.Width - TChart1.Canvas.TextWidth(TChart1.Header.Text.Item(0) & "    ")
    HScroll2.Max = TChart1.Canvas.Height - TChart1.Canvas.TextHeight("T")
  End If
End Sub
