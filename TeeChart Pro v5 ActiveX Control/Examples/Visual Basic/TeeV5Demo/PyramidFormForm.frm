VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PyramidFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3975
   ClientTop       =   3555
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4455
      Left            =   0
      OleObjectBlob   =   "PyramidFormForm.frx":0000
      TabIndex        =   0
      Top             =   1230
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit"
      Height          =   315
      Left            =   5940
      TabIndex        =   8
      Top             =   840
      Width           =   1035
   End
   Begin VB.CheckBox Check3 
      Caption         =   "With null points"
      Height          =   315
      Left            =   4320
      TabIndex        =   7
      Top             =   840
      Width           =   1575
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   3780
      Max             =   1
      Min             =   1000
      TabIndex        =   5
      Top             =   840
      Value           =   50
      Width           =   255
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   3360
      TabIndex        =   4
      Top             =   840
      Width           =   435
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Inverted"
      Height          =   315
      Left            =   1440
      TabIndex        =   3
      Top             =   840
      Width           =   1275
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Colour each"
      Height          =   315
      Left            =   180
      TabIndex        =   2
      Top             =   840
      Value           =   1  'Checked
      Width           =   1275
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "PyramidFormForm.frx":0117
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Size %:"
      Height          =   255
      Left            =   2760
      TabIndex        =   6
      Top             =   900
      Width           =   555
   End
End
Attribute VB_Name = "PyramidFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).ColorEachPoint = Check1.Value
End Sub

Private Sub Check2_Click()
  TChart1.Axis.Left.Inverted = Check2.Value
End Sub

Private Sub Check3_Click()
  With TChart1
    If Check3.Value = 0 Then
      .Series(0).PointColor(2) = clTeeColor
      .Series(0).PointColor(5) = clTeeColor
    Else
      .Series(0).PointColor(2) = clNone
      .Series(0).PointColor(5) = clNone
    End If
  End With
End Sub

Private Sub Command1_Click()
  TChart1.EditOneSeries 0
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 10
  VScroll1_Scroll
End Sub

Private Sub Text2_Change()
Text2_Confirm
End Sub
Private Sub Text2_Confirm()
 If Not IsNumeric(Text2.Text) Then
  KeepFocus = True
  MsgBox "Please insert a numeric value", , "Size"
 Else
  TChart1.Series(0).asPyramid.SizePercent = Val(Text2.Text)
  VScroll1.Value = Val(Text2.Text)
 End If
End Sub
Private Sub VScroll1_Change()
VScroll1_Scroll
End Sub
Private Sub VScroll1_Scroll()
Text2.Text = Str$(VScroll1.Value)
Text2_Confirm
End Sub
