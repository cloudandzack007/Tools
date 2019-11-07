VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BoxPlotFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2445
   ClientTop       =   2280
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Height          =   4335
      Left            =   0
      OleObjectBlob   =   "BoxPlotFormForm.frx":0000
      TabIndex        =   0
      Top             =   1320
      Width           =   7035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Vertical"
      Height          =   315
      Left            =   660
      TabIndex        =   2
      Top             =   960
      Value           =   1  'Checked
      Width           =   1275
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "BoxPlotFormForm.frx":0762
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "BoxPlotFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  If Check1.Value = 1 Then
    For i = 0 To TChart1.SeriesCount - 1
      TChart1.ChangeSeriesType i, scBox
    Next i
  Else
    For i = 0 To TChart1.SeriesCount - 1
      TChart1.ChangeSeriesType i, scHorizBox
    Next i
  End If
End Sub

Private Sub Form_Load()
Dim a
  a = Array(3, 6, 8, 15, 19, 21)
  With TChart1
    .Series(0).AddArray UBound(a) + 1, a
    .Series(1).AddArray UBound(a) + 1, a
    .Series(2).AddArray UBound(a) + 1, a
  End With
End Sub

Private Sub Text1_DblClick()
  TChart1.ShowEditor
End Sub
