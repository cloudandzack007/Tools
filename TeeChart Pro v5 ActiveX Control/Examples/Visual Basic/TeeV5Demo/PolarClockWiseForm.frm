VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PolarClockWiseForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3210
   ClientTop       =   2565
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4515
      Left            =   0
      OleObjectBlob   =   "PolarClockWiseForm.frx":0000
      TabIndex        =   0
      Top             =   1170
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Clockwise labels"
      Height          =   315
      Left            =   60
      TabIndex        =   2
      Top             =   840
      Value           =   1  'Checked
      Width           =   1815
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   795
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "PolarClockWiseForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).asPolar.ClockWiseLabels = Check1.Value
End Sub

Private Sub Form_Load()
  Label1.Caption = "The Polar circle labels can now be displayed in ""ClockWise"" orientation." _
  & Chr(13) & Chr(13) _
  & "Example: TChart1.Series(0).asPolar.ClockWiseLabels = True"
  With TChart1
    .Series(0).FillSampleValues 8
    .Series(0).asPolar.ClockWiseLabels = True
  End With
End Sub

Private Sub TChart1_OnAfterDraw()
  With TChart1
    .Canvas.Font.Color = vbCyan
    .Canvas.Font.Bold = True
    .Canvas.TextOut 10, 20, "TeeChart"
    .Canvas.TextOut 10, 20 + .Canvas.TextHeight("H") + 2, "Polar Series"
  End With
End Sub
