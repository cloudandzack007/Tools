VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PolarLabelsInsideForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3210
   ClientTop       =   2700
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4215
      Left            =   0
      OleObjectBlob   =   "PolarLabelsInsideForm.frx":0000
      TabIndex        =   0
      Top             =   1470
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Circle labels inside"
      Height          =   375
      Left            =   0
      TabIndex        =   2
      Top             =   1140
      Value           =   1  'Checked
      Width           =   2235
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   1095
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "PolarLabelsInsideForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).asPolar.CircleLabelsInside = Check1.Value
End Sub

Private Sub Form_Load()
  Label1.Caption = "Polar (and Clock, and Radar) series can now display labels inside the circle." _
  & Chr(13) & Chr(13) _
  & "Example: TChart1.Series(0).asPolar.CircleLabelsInside = True"
  With TChart1
    .Aspect.View3D = False
    .Header.Visible = False
    .Axis.Visible = False
    .AddSeries scPolar
    .Series(0).FillSampleValues 9
    With .Series(0).asPolar
      .Circled = True
      .AngleIncrement = 30
      .CircleLabels.Font.Size = 10
      .CircleLabels.Font.Color = vbBlue
      .CircleLabels.Visible = True
      .CircleLabelsInside = True
    End With
  End With
End Sub

Private Sub TChart1_OnBeforeDrawChart()
  With TChart1
    .Canvas.Font.Color = vbBlue
    .Canvas.Font.Bold = True
    .Canvas.Font.Name = "Arial"
    .Canvas.Font.Size = 10
    .Canvas.TextOut 10, 20, "TeeChart"
    .Canvas.TextOut 10, 20 + .Canvas.TextHeight("H") + 2, "Polar Series"
  End With
End Sub

Private Sub TChart1_OnDblClick()
  TChart1.ShowEditor
  TChart1.StopMouse
End Sub
