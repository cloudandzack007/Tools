VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form SurfaceSidesForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2880
   ClientTop       =   2910
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4215
      Left            =   0
      OleObjectBlob   =   "SurfaceSidesForm.frx":0000
      TabIndex        =   0
      Top             =   1470
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Sides visible"
      Height          =   315
      Left            =   60
      TabIndex        =   2
      Top             =   1140
      Value           =   1  'Checked
      Width           =   1455
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
Attribute VB_Name = "SurfaceSidesForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  With TChart1.Series(0).asSurface.SideBrush
    If Check1.Value = 1 Then
      .Style = bsSolid
      .Color = RGB(Rnd * 255, Rnd * 255, Rnd * 255)
    Else
      .Style = bsClear
    End If
  End With
End Sub

Private Sub Form_Load()
  Label1.Caption = "Surface series can now display ""sides"", using the SideBrush property." & Chr$(13) _
  & "Drag with the Mouse to Rotate the Chart."
  With TChart1.Series(0)
    .FillSampleValues 50
    .asSurface.SideBrush.Style = bsSolid
    .asSurface.SideBrush.Color = RGB(Rnd * 255, Rnd * 255, Rnd * 255)
  End With
End Sub
