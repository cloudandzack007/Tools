VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BezierSeriesFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3060
   ClientTop       =   2685
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "BezierSeriesFormForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit Series"
      Height          =   315
      Left            =   4380
      TabIndex        =   8
      Top             =   1140
      Width           =   1275
   End
   Begin VB.CheckBox Check1 
      Caption         =   "3D Chart"
      Height          =   315
      Left            =   5880
      TabIndex        =   7
      Top             =   1140
      Value           =   1  'Checked
      Width           =   975
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   3840
      Max             =   3
      Min             =   250
      TabIndex        =   4
      Top             =   1140
      Value           =   32
      Width           =   255
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   3420
      TabIndex        =   3
      Text            =   "32"
      Top             =   1140
      Width           =   435
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "BezierSeriesFormForm.frx":018B
      Left            =   960
      List            =   "BezierSeriesFormForm.frx":0198
      TabIndex        =   2
      Text            =   "Windows"
      Top             =   1140
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1095
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "BezierSeriesFormForm.frx":01B9
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label2 
      Caption         =   "Middle points:"
      Height          =   255
      Left            =   2400
      TabIndex        =   6
      Top             =   1200
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "Style:"
      Height          =   255
      Left            =   480
      TabIndex        =   5
      Top             =   1200
      Width           =   435
   End
End
Attribute VB_Name = "BezierSeriesFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Aspect.View3D = Check1.Value
End Sub

Private Sub Combo1_Change()
  Combo1_Click
End Sub

Private Sub Combo1_Click()
  TChart1.Series(0).asBezier.BezierStyle = Combo1.ListIndex
End Sub

Private Sub Command1_Click()
  TChart1.EditOneSeries 0
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 30
  TChart1.Series(0).asBezier.BezierStyle = 0
End Sub

Private Sub Text2_Change()
  On Error GoTo proc_err
  TChart1.Series(0).asBezier.NumBezierPoints = CInt(Text2.Text)
  VScroll1.Value = Text2.Text
  Exit Sub
proc_err:
  MsgBox ("Please enter a valid integer value")
End Sub

Private Sub VScroll1_Change()
  TChart1.Series(0).asBezier.NumBezierPoints = VScroll1.Value
  Text2.Text = VScroll1.Value
End Sub
