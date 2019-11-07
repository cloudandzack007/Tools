VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form MarksAngleForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2700
   ClientTop       =   2400
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3915
      Left            =   0
      OleObjectBlob   =   "MarksAngleForm.frx":0000
      TabIndex        =   0
      Top             =   1770
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Reset"
      Height          =   375
      Left            =   3960
      TabIndex        =   5
      Top             =   1320
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1680
      TabIndex        =   4
      Top             =   1320
      Width           =   555
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   375
      LargeChange     =   5
      Left            =   2280
      Max             =   0
      Min             =   360
      SmallChange     =   5
      TabIndex        =   3
      Top             =   1320
      Width           =   255
   End
   Begin VB.Label Label2 
      Caption         =   "Marks Angle:"
      Height          =   255
      Left            =   600
      TabIndex        =   2
      Top             =   1380
      Width           =   1035
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   1215
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "MarksAngleForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  VScroll1.Value = 0
  VScroll1_Change
End Sub

Private Sub Form_Load()
  Label1.Caption = "Series Marks can now be rotated using the Angle property." & Chr(13) _
  & Chr(13) _
  & "Example:  TChart1.Series(0).Marks.Angle = 90"
  With TChart1
    .AddSeries scHorizBar
    .Series(0).FillSampleValues 8
  End With
  VScroll1_Change
End Sub

Private Sub Text1_Change()
  Text1_Validate (True)
End Sub

Private Sub Text1_Validate(Cancel As Boolean)
  If Not IsNumeric(Text1.Text) Or Val(Text1.Text) > 360 Then
    KeepFocus = True
    MsgBox "Please insert a number less than or equal to 360", , "Text1"
  Else
    TChart1.Series(0).Marks.Angle = Val(Text1.Text)
    VScroll1.Value = Val(Text1.Text)
  End If
End Sub

Private Sub VScroll1_Change()
  VScroll1_Scroll
End Sub

Private Sub VScroll1_Scroll()
  Text1.Text = Str$(VScroll1.Value)
  Text1_Validate (False)
End Sub
