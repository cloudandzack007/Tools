VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form CandleCustomColorsForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3015
   ClientTop       =   3360
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4515
      Left            =   0
      OleObjectBlob   =   "CandleCustomColorsForm.frx":0000
      TabIndex        =   0
      Top             =   1170
      Width           =   7050
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "CandleCustomColorsForm.frx":01C3
      Left            =   3000
      List            =   "CandleCustomColorsForm.frx":01D0
      TabIndex        =   4
      Text            =   "Bar"
      Top             =   780
      Width           =   1515
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Custom colours"
      Height          =   195
      Left            =   360
      TabIndex        =   2
      Top             =   840
      Value           =   1  'Checked
      Width           =   1635
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   675
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "CandleCustomColorsForm.frx":01EB
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Style:"
      Height          =   195
      Left            =   2520
      TabIndex        =   3
      Top             =   840
      Width           =   435
   End
End
Attribute VB_Name = "CandleCustomColorsForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
Dim t As Integer
  If Check1.Value = 1 Then
    SetCustomColors
  Else
    'reset colors to default...
    With TChart1.Series(0)
      For t = 0 To .Count - 1
        .PointColor(t) = clTeeColor
      Next t
    End With
  End If
End Sub

Private Sub Combo1_Click()
  With TChart1.Series(0)
    Select Case Combo1.ListIndex
      Case 0: .asCandle.CandleStyle = csCandleStick
      Case 1: .asCandle.CandleStyle = csCandleBar
      Case 2: .asCandle.CandleStyle = csOpenClose
    End Select
  End With
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 30
  TChart1.Series(0).asCandle.CandleStyle = csCandleBar
  SetCustomColors
End Sub

Private Function SetCustomColors()
  With TChart1.Series(0)
    .PointColor(11) = vbYellow
    .PointColor(15) = vbCyan
    .PointColor(16) = vbBlue
  End With
End Function
