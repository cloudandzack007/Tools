VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form MultiAxisScrollForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3270
   ClientTop       =   1875
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "MultiAxisScrollForm.frx":0000
      TabIndex        =   1
      Top             =   1530
      Width           =   7050
   End
   Begin VB.CheckBox CheckGreen 
      Caption         =   "Green"
      Height          =   255
      Left            =   5280
      TabIndex        =   4
      Top             =   1200
      Width           =   1095
   End
   Begin VB.CheckBox CheckBlue 
      Caption         =   "Blue"
      Height          =   255
      Left            =   3840
      TabIndex        =   3
      Top             =   1200
      Width           =   1215
   End
   Begin VB.CheckBox CheckRed 
      Caption         =   "Red"
      Height          =   255
      Left            =   2520
      TabIndex        =   2
      Top             =   1200
      Value           =   1  'Checked
      Width           =   1155
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "MultiAxisScrollForm.frx":043D
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Enable vertical scroll on Axis:"
      Height          =   255
      Left            =   60
      TabIndex        =   5
      Top             =   1200
      Width           =   2175
   End
End
Attribute VB_Name = "MultiAxisScrollForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim green, blue As Integer

Private Sub Form_Load()
  
  With TChart1
    .Series(0).FillSampleValues (100)
    .Series(1).FillSampleValues (100)
    .Series(2).FillSampleValues (100)
    .Series(3).FillSampleValues (100)
    'change the Left axis properties
    With .Axis.Left
      .AxisPen.Color = vbRed
      .StartPosition = 0
      .EndPosition = 33
    End With
    ' create custom axes. This can be done at design-time
    ' with the chart editor.
    green = .Axis.AddCustom(False)
    With .Axis.Custom(green)
      .AxisPen.Color = vbGreen
      .StartPosition = 33
      .EndPosition = 66
    End With
    blue = .Axis.AddCustom(False)
    With .Axis.Custom(blue)
      .AxisPen.Color = vbBlue
      .StartPosition = 66
      .EndPosition = 100
    End With
    ' associate series
    .Series(0).VerticalAxis = aLeftAxis
    .Series(1).VerticalAxis = aLeftAxis
    .Series(2).VerticalAxisCustom = green
    .Series(3).VerticalAxisCustom = blue
    TChart1_OnScroll
    .Repaint
  End With
End Sub

Function MaxDouble(a, b As Double) As Double
  If a > b Then MaxDouble = a Else MaxDouble = b
End Function

Function MinDouble(a, b As Double) As Double
  If a < b Then MinDouble = a Else MinDouble = b
End Function

Private Sub TChart1_OnScroll()
Dim tmpMin, tmpMax As Double
  With TChart1
    If Not CheckRed.Value = 1 Then
      tmpMin = MinDouble(.Series(0).YValues.Minimum, .Series(1).YValues.Minimum)
      tmpMax = MaxDouble(.Series(0).YValues.Maximum, .Series(1).YValues.Maximum)
      .Axis.Left.SetMinMax tmpMin, tmpMax
    End If
    If Not CheckGreen.Value = 1 Then
      .Axis.Custom(green).SetMinMax .Series(2).YValues.Minimum, .Series(2).YValues.Maximum
    End If
    If Not CheckBlue.Value = 1 Then
      .Axis.Custom(blue).SetMinMax .Series(3).YValues.Minimum, .Series(3).YValues.Maximum
    End If
  End With
End Sub
