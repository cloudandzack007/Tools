VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form SeriesFunctionFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2970
   ClientTop       =   2100
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart2 
      Align           =   2  'Align Bottom
      Height          =   2475
      Left            =   0
      OleObjectBlob   =   "SeriesFunctionFormForm.frx":0000
      TabIndex        =   2
      Top             =   3210
      Width           =   7050
   End
   Begin TeeChart.TChart TChart1 
      Height          =   2535
      Left            =   0
      OleObjectBlob   =   "SeriesFunctionFormForm.frx":0303
      TabIndex        =   0
      Top             =   660
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   555
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "SeriesFunctionFormForm.frx":0656
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "SeriesFunctionFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
  With TChart1
    .Axis.Left.Labels.Size = 20
    .Series(0).FillSampleValues 50
    .Zoom.Direction = tzdHorizontal
  End With
  With TChart2
    .Axis.Left.Labels.Size = 20
    .Zoom.Enable = False
    .Scroll.Enable = pmNone
    '.ClipPoints = False
    .Series(0).DataSource = TChart1.Series(0)
    .Series(0).CheckDataSource
    .Axis.Left.SetMinMax .Series(0).YValues.Minimum - 3, .Series(0).YValues.Maximum + 3
  End With
  
End Sub

Private Sub TChart1_OnScroll()
  UpdateAxes
End Sub

Private Sub TChart1_OnUndoZoom()
  UpdateAxes
End Sub

Private Sub TChart1_OnZoom()
  UpdateAxes
End Sub

Private Sub UpdateAxes()
  TChart1.Environment.InternalRepaint
  With TChart1.Axis
    TChart2.Axis.Bottom.SetMinMax .Bottom.Minimum, _
                                  .Bottom.Maximum
  End With
End Sub
