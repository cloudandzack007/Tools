VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ColorBandToolFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2415
   ClientTop       =   2190
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4395
      Left            =   0
      OleObjectBlob   =   "ColorBandToolFormForm.frx":0000
      TabIndex        =   0
      Top             =   1290
      Width           =   7050
   End
   Begin VB.CheckBox Check4 
      Caption         =   "Draw behind"
      Height          =   315
      Left            =   5160
      TabIndex        =   5
      Top             =   900
      Value           =   1  'Checked
      Width           =   1275
   End
   Begin VB.CheckBox Check3 
      Caption         =   "Gradient"
      Height          =   315
      Left            =   3540
      TabIndex        =   4
      Top             =   900
      Width           =   1395
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Invert axis"
      Height          =   315
      Left            =   1860
      TabIndex        =   3
      Top             =   900
      Width           =   1515
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show bands"
      Height          =   315
      Left            =   120
      TabIndex        =   2
      Top             =   900
      Value           =   1  'Checked
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   855
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ColorBandToolFormForm.frx":0329
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ColorBandToolFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
Dim i
  With TChart1.Tools
    For i = 0 To .Count - 1
      .Items(i).Active = Check1.Value
    Next i
  End With
End Sub

Private Sub Check2_Click()
  TChart1.Axis.Left.Inverted = Check2.Value
End Sub

Private Sub Check3_Click()
  TChart1.Tools.Items(2).asColorband.Gradient.Visible = Check3.Value
End Sub

Private Sub Check4_Click()
  TChart1.Tools.Items(0).asColorband.DrawBehind = Check4.Value
End Sub

Private Sub Form_Load()
Dim a
  a = Array(30, 150, 75, 280, 600)
  TChart1.Series(0).AddArray 5, a
End Sub
