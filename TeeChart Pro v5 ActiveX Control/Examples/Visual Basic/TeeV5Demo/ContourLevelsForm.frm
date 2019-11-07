VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ContourLevelsForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3060
   ClientTop       =   2580
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4335
      Left            =   0
      OleObjectBlob   =   "ContourLevelsForm.frx":0000
      TabIndex        =   0
      Top             =   1350
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1035
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "ContourLevelsForm.frx":01ED
      Top             =   0
      Width           =   7170
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Custom levels"
      Height          =   375
      Left            =   0
      TabIndex        =   1
      Top             =   1020
      Value           =   1  'Checked
      Width           =   1875
   End
End
Attribute VB_Name = "ContourLevelsForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  With TChart1.Series(0).asContour
    If Check1.Value = 0 Then
      .AutomaticLevels = True
    Else
      .AutomaticLevels = False
      AddCustomLevels
    End If
  End With
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 20
  AddCustomLevels
End Sub

Private Sub AddCustomLevels()
  With TChart1.Series(0).asContour
    .NumLevels = 10
    .CreateAutoLevels
    With .Levels
      .Items(0).UpToValue = -1
      .Items(1).UpToValue = -0.8
      .Items(2).UpToValue = -0.6
      .Items(3).UpToValue = -0.4
      .Items(4).UpToValue = -0.2
      .Items(5).UpToValue = 0
      .Items(6).UpToValue = 0.2
      .Items(7).UpToValue = 0.4
      .Items(8).UpToValue = 0.6
      .Items(9).UpToValue = 0.8
    End With
  End With
End Sub
