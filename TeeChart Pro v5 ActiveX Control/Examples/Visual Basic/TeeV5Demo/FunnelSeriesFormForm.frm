VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form FunnelSeriesFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5688
   ClientLeft      =   1656
   ClientTop       =   1548
   ClientWidth     =   7044
   LinkTopic       =   "Form2"
   ScaleHeight     =   5688
   ScaleWidth      =   7044
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4152
      Left            =   0
      TabIndex        =   0
      Top             =   1536
      Width           =   7044
      Base64          =   $"FunnelSeriesFormForm.frx":0000
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit"
      Height          =   375
      Left            =   4260
      TabIndex        =   5
      Top             =   1080
      Width           =   1395
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   2940
      Max             =   1
      Min             =   50
      TabIndex        =   3
      Top             =   1140
      Value           =   30
      Width           =   255
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   2520
      TabIndex        =   2
      Top             =   1140
      Width           =   435
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "FunnelSeriesFormForm.frx":01F0
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Desired tolerance for acceptance:"
      Height          =   435
      Left            =   1140
      TabIndex        =   4
      Top             =   1020
      Width           =   1395
   End
End
Attribute VB_Name = "FunnelSeriesFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
  TChart1.EditOneSeries 0
End Sub

Private Sub Form_Load()

 With TChart1.Series(0)
   .Marks.Visible = True
   .Marks.Clip = True
   
   .asFunnel.DifferenceLimit = Val(Text2.Text)

  ' add some points to Funnnel/Pipeline
   .asFunnel.AddSegment 50, 110, "1st", clTeeColor
   .asFunnel.AddSegment 200, 50, "2nd", clTeeColor
   .asFunnel.AddSegment 100, 50, "3rd", clTeeColor
   .asFunnel.AddSegment 60, 55, "4th", clTeeColor
 End With
 VScroll1_Scroll
End Sub

Private Sub TChart1_OnClickSeries(ByVal SeriesIndex As Long, ByVal ValueIndex As Long, ByVal Button As TeeChart.EMouseButton, ByVal Shift As TeeChart.EShiftState, ByVal X As Long, ByVal Y As Long)
Dim tmpStr As String
Dim funnel As IFunnelSeries

 With TChart1
  If (.Series(SeriesIndex).SeriesType = scFunnel) And (Button = mbLeft) Then
    Set funnel = TChart1.Series(SeriesIndex).asFunnel

    tmpStr = "Quote = " & Format(funnel.QuoteValues.Value(ValueIndex), "0.000") & Chr$(13)
    tmpStr = tmpStr & "Opportunity =" & _
              Format(funnel.OpportunityValues.Value(ValueIndex), "0.000") & Chr$(13)
    tmpStr = tmpStr & "Percentage = " & _
              Format(funnel.OpportunityValues.Value(ValueIndex) / funnel.QuoteValues.Value(ValueIndex) * 100, "0.00") & "%"
    MsgBox (tmpStr)
    .StopMouse
  End If
 End With
End Sub

Private Sub Text2_Change()
 Text2_Confirm
End Sub
Private Sub Text2_Confirm()
 If Not IsNumeric(Text2.Text) Then
  KeepFocus = True
  MsgBox "Please insert a numeric value", , "tolerance"
 Else
  With TChart1.Series(0).asFunnel
   .DifferenceLimit = Val(Text2.Text)
  End With
  VScroll1.Value = Val(Text2.Text)
 End If
End Sub
Private Sub VScroll1_Change()
 VScroll1_Scroll
End Sub
Private Sub VScroll1_Scroll()
 Text2.Text = Str$(VScroll1.Value)
 Text2_Confirm
End Sub
