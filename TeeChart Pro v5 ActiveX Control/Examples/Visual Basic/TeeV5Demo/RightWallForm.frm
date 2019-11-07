VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form RightWallFormForm 
   BorderStyle     =   0  'None
   Caption         =   "RightWallForm"
   ClientHeight    =   5685
   ClientLeft      =   1905
   ClientTop       =   2265
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "RightWallForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      TabIndex        =   4
      Text            =   "Right wall new in TeeChart Pro v5. Default display Visible = False."
      Top             =   0
      Width           =   7035
   End
   Begin VB.HScrollBar HScroll1 
      Height          =   255
      LargeChange     =   5
      Left            =   2640
      Max             =   20
      Min             =   1
      TabIndex        =   2
      Top             =   1080
      Value           =   5
      Width           =   1815
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show Right wall"
      Height          =   255
      Left            =   60
      TabIndex        =   1
      Top             =   1080
      Width           =   1815
   End
   Begin VB.Label Label1 
      Caption         =   "Right wall thickness"
      Height          =   255
      Left            =   4620
      TabIndex        =   3
      Top             =   1080
      Width           =   1455
   End
End
Attribute VB_Name = "RightWallFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Walls.Right.Visible = Check1.Value
End Sub

Private Sub Form_Load()
  TChart1.AddSeries scBar
  TChart1.Series(0).FillSampleValues 10
  Check1.Value = 1
  TChart1.Walls.Right.Visible = True
  TChart1.Walls.Right.Size = HScroll1.Value
End Sub

Private Sub HScroll1_Scroll()
  TChart1.Walls.Right.Size = HScroll1.Value
End Sub
