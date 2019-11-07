VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PieSemiForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2925
   ClientTop       =   4125
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4095
      Left            =   0
      OleObjectBlob   =   "PieSemiForm.frx":0000
      TabIndex        =   0
      Top             =   1590
      Width           =   7050
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Vertical"
      Height          =   375
      Left            =   2760
      TabIndex        =   3
      Top             =   1140
      Value           =   1  'Checked
      Width           =   2415
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Semi-Pie"
      Height          =   375
      Left            =   240
      TabIndex        =   2
      Top             =   1140
      Value           =   1  'Checked
      Width           =   2295
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
Attribute VB_Name = "PieSemiForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  With TChart1
    If Check1.Value = 1 Then
      .Series(0).asPie.AngleSize = 180
    Else
      .Series(0).asPie.AngleSize = 360
    End If
  End With
End Sub

Private Sub Check2_Click()
  With TChart1
    If Check2.Value = 1 Then
      .Series(0).asPie.RotationAngle = 90
    Else
      .Series(0).asPie.RotationAngle = 0
    End If
  End With
End Sub

Private Sub Form_Load()
  Label1.Caption = "The new AngleSize property, used with RotationAngle, can display " _
  & "horizontal or vertical partial pie series." & Chr(13) _
  & Chr(13) _
  & "Example: TChart1.Series(0).asPie.AngleSize = 180 " & Chr(13) _
  & "         TChart1.Series(0).asPie.RotationAngle=90 "
  With TChart1
    .Series(0).FillSampleValues 5
    .Series(0).asPie.AngleSize = 180
    .Series(0).asPie.RotationAngle = 90
  End With
End Sub
