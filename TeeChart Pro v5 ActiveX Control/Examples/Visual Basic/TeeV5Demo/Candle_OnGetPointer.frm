VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form Candle_OnGetPointer 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3600
   ClientTop       =   2775
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "Candle_OnGetPointer.frx":0000
      TabIndex        =   0
      Top             =   1410
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Use event to Change border colours"
      Height          =   375
      Left            =   1860
      TabIndex        =   2
      Top             =   1020
      Value           =   1  'Checked
      Width           =   3735
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "Candle_OnGetPointer.frx":024B
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "Candle_OnGetPointer"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
 TChart1.Repaint
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 20
End Sub

Private Sub TChart1_OnGetSeriesPointerStyle(ByVal SeriesIndex As Long, ByVal ValueIndex As Long, AStyle As TeeChart.EPointerStyle)
 With TChart1
  If Check1.Value = 1 Then
    ' change some candle colors...
    If ValueIndex Mod 2 = 0 Then
      AStyle = psRectangle
      .Series(0).asCandle.Pointer.Pen.Color = vbYellow
    Else
      AStyle = psDiamond
      .Series(0).asCandle.Pointer.Pen.Color = vbBlue
    End If
  Else
    AStyle = psRectangle ' default
    .Series(0).asCandle.Pointer.Pen.Color = vbBlack
  End If
 End With
End Sub
