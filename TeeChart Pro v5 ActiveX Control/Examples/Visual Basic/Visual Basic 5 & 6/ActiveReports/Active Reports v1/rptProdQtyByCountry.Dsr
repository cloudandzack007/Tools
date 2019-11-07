VERSION 5.00
Begin {82282820-C017-11D0-A87C-00A0C90F29FC} rptProdQtyByCountry 
   Caption         =   "TeeChartARProject - rptProdQtyByCountry (ActiveReport)"
   ClientHeight    =   8355
   ClientLeft      =   690
   ClientTop       =   2595
   ClientWidth     =   13425
   _ExtentX        =   23680
   _ExtentY        =   14737
   SectionData     =   "rptProdQtyByCountry.dsx":0000
End
Attribute VB_Name = "rptProdQtyByCountry"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

' The following sets Chart events to be associated with 'on-page' Chart
' The use of Withevents is not obligatory to use TeeChart but facilitates
' a link to events, a step not inherent to the ActiveReport page
Private WithEvents mChart As TeeChart.TChart
Attribute mChart.VB_VarHelpID = -1

Private Sub ActiveReport_PageStart()
  Me.TChart1.Series(0).Clear
End Sub

Private Sub ActiveReport_ReportStart()
  With Me.TChart1
    .Axis.Left.Inverted = True
    .Aspect.View3D = False
  End With
End Sub

Private Sub Detail_BeforePrint()
  'Can work directly with Recordset eg:
    'mChart.Series(0).Add RptData.Recordset(1), "", clTeeColor
  '..or use the Report output as source
  mChart.Series(0).Add CDbl(txtSumQty.Text), txtCategoryName.Text, clTeeColor
End Sub

Private Sub mChart_OnAfterDraw()
Dim CurrentCountry As String
  CurrentCountry = TeeARForm.CbCountry.List(TeeARForm.CbCountry.ListIndex)
  ' In this example with Withevents used, you may refer to Chart as mChart or Me.TChart1
  With Me.TChart1.Canvas
    .Font.Bold = True
    .TextOut TChart1.Axis.Left.Position - 10, 7, "Max qty: " & Str$(mChart.Series(0).XValues.Maximum) & " units"
  End With
End Sub

Private Sub mChart_OnClick()
  'click not supported in report view mode
  'by ActiveReports
  mChart.ShowEditor
End Sub

Private Sub mChart_OnGetSeriesMark(ByVal SeriesIndex As Long, ByVal ValueIndex As Long, MarkText As String)
 ' Modify each Mark here if required
 ' here with normal Marktext disabled
 ' ie. TChart1.Series(0).PercentFormat was "##0,## %", now: "##0,##"
 If CDbl(MarkText) > 23 Then
   MarkText = MarkText & " % (High!)"
 Else
   MarkText = MarkText & " %"
 End If
 ' MarkText = "$" & MarkText
End Sub

Private Sub PageHeader_Format()
  'Set on page Chart to use Withevents
  Set mChart = Me.TChart1
  
  ' add a gradient if the screen is high colour
  'If mChart.Canvas.IsScreenHighColor = True Then
  '  mChart.Panel.Gradient.EndColor = RGB(0, 32, 192)
  '  mChart.Header.Font.Color = RGB(204, 204, 204)
  '  mChart.Panel.Gradient.Visible = True
  'End If
End Sub
