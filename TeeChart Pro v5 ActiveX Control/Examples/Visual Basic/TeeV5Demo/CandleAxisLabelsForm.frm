VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form CandleAxisLabelsForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2775
   ClientTop       =   2145
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
      Base64          =   $"CandleAxisLabelsForm.frx":0000
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Non datetime Axis - no weekends"
      Height          =   255
      Left            =   120
      TabIndex        =   2
      Top             =   1200
      Value           =   1  'Checked
      Width           =   3135
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "CandleAxisLabelsForm.frx":00FA
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "CandleAxisLabelsForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim NotDateTime As Boolean

Private Sub Check1_Click()
  If Check1.Value = 1 Then
    AddAsNoWeekend
  Else
    AddAsDatetime
  End If
End Sub

Private Sub Form_Load()
  AddAsNoWeekend
End Sub

Private Sub TChart1_OnAfterDraw()
Dim i

  If NotDateTime = True Then
    With TChart1
      ' Contain output within Chart rectangle
      .Canvas.ClipRectangle .Axis.Left.Position, _
                            .Axis.Top.Position, _
                            .Axis.Right.Position, _
                            .Axis.Bottom.Position
      '.Canvas.Font.Bold = True
      .Canvas.Font.Color = vbYellow
      For i = 0 To .Series(0).Count - 1
        If Weekday(DateValue(.Series(0).PointLabel(i))) = 2 Then
          .Canvas.RotateLabel .Series(0).CalcXPos(i - 1) + ((.Series(0).CalcXPos(i) - .Series(0).CalcXPos(i - 1)) / 2) - 5, .Axis.Bottom.Position - 10, "eg. Weekend", 90
        End If
      Next i
    End With
  End If
End Sub

Private Sub AddAsDatetime()
Dim tmpopen, tmp As Integer
  ' This option simulates a sequential datetime Axis
  ' Candle Series
  NotDateTime = False
  TChart1.RemoveAllSeries
  TChart1.AddSeries (scCandle)
  TChart1.Axis.Bottom.Labels.Angle = 90

  With TChart1.Series(0)
    .Clear
    tmpopen = 1000 + Rnd(100)
    For t = 0 To 14
      tmp = Int(100 * Rnd - 50)
      .asCandle.AddCandle Format(Now - 15, "000000") + t, tmpopen, tmpopen + 20, tmpopen - 20, tmpopen + tmp
      tmpopen = tmpopen + tmp
    Next t
  End With
End Sub

Private Sub AddAsNoWeekend()
  'Create an array of example dates
Dim myDates(14) As Variant
Dim StartDate As Date
  ' If this were to have a database datasource it would be simpler
  ' as you could use Series(xx).LabelsSource
  ' If using ADO Recordset the following principle would apply, replacing the
  ' Array with a step-through the Recordset
  NotDateTime = True
  StartDate = Now - 15
  For i = 0 To 13
    While (Weekday(StartDate) = 1) Or (Weekday(StartDate) = 7)
      StartDate = StartDate + 1
    Wend
    myDates(i) = Format(StartDate, "d-mmm-yyyy")
    StartDate = StartDate + 1
  Next i
  TChart1.RemoveAllSeries
  TChart1.AddSeries scCandle
  With TChart1.Series(0)
    .XValues.DateTime = False
    .Clear
    tmpopen = 1000 + Rnd(100)
    For t = 0 To 8
      tmp = Int(100 * Rnd - 50)
      .asCandle.AddCandle 1 + t, tmpopen, tmpopen + 20, tmpopen - 20, tmpopen + tmp
      .PointLabel(t) = myDates(t)
      tmpopen = tmpopen + tmp
    Next t
  End With
End Sub
