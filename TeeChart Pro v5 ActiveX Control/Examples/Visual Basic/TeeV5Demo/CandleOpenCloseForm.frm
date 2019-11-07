VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form CandleOpenCloseForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2715
   ClientTop       =   2370
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4035
      Left            =   0
      OleObjectBlob   =   "CandleOpenCloseForm.frx":0000
      TabIndex        =   0
      Top             =   1650
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "3D"
      Height          =   255
      Left            =   4680
      TabIndex        =   6
      Top             =   1200
      Value           =   1  'Checked
      Width           =   1215
   End
   Begin VB.Frame Frame1 
      Caption         =   "Candle style"
      Height          =   555
      Left            =   0
      TabIndex        =   2
      Top             =   1020
      Width           =   4395
      Begin VB.OptionButton Option1 
         Caption         =   "OpenClose"
         Height          =   255
         Index           =   2
         Left            =   3000
         TabIndex        =   5
         Top             =   240
         Width           =   1215
      End
      Begin VB.OptionButton Option1 
         Caption         =   "Bar"
         Height          =   255
         Index           =   1
         Left            =   1740
         TabIndex        =   4
         Top             =   240
         Value           =   -1  'True
         Width           =   855
      End
      Begin VB.OptionButton Option1 
         Caption         =   "Stick"
         Height          =   255
         Index           =   0
         Left            =   300
         TabIndex        =   3
         Top             =   240
         Width           =   855
      End
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "CandleOpenCloseForm.frx":01C3
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "CandleOpenCloseForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Aspect.View3D = Check1.Value
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 30
End Sub

Private Sub Option1_Click(Index As Integer)
  With TChart1.Series(0)
    Select Case Index
      Case 0: .asCandle.CandleStyle = csCandleStick
      Case 1: .asCandle.CandleStyle = csCandleBar
      Case 2: .asCandle.CandleStyle = csOpenClose
    End Select
  End With
End Sub
