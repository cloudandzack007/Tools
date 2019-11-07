VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PieMultipleForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2805
   ClientTop       =   2280
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4755
      Left            =   0
      OleObjectBlob   =   "PieMultipleForm.frx":0000
      TabIndex        =   0
      Top             =   930
      Width           =   7050
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   915
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "PieMultipleForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  Label1.Caption = "Multiple Pie series can be aligned using the SeriesBeforeDrawValues event and " _
  & "the ChartRect property." & Chr(13) _
  & Chr(13) _
  & "Example: TChart1.ChartRect 0, 0, 200, 200"
  With TChart1
    .Legend.Visible = False
    For i = 0 To 3
      .AddSeries scPie
      .Series(i).FillSampleValues 7
      .Series(i).Marks.Style = smsValue
    Next i
  End With
End Sub

Private Sub TChart1_OnSeriesBeforeDrawValues(ByVal SeriesIndex As Long)
  'Place the new location of the Chart before painting the Series
  With TChart1
    Select Case SeriesIndex
      Case 0: .ChartRect 0, 0, .Canvas.Width / 2, .Canvas.Height / 2
      Case 1: .ChartRect .Canvas.Width / 2, 0, .Canvas.Width, .Canvas.Height / 2
      Case 2: .ChartRect 0, .Canvas.Height / 2, .Canvas.Width / 2, .Canvas.Height
      Case 3: .ChartRect .Canvas.Width / 2, .Canvas.Height / 2, .Canvas.Width, .Canvas.Height
    End Select
  End With
End Sub
