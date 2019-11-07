VERSION 5.00
Object = "{698E14D0-8B82-11D1-8B57-00A0C98CD92B}#1.0#0"; "arviewer.ocx"
Begin VB.Form TeeARForm 
Caption         =   "TeeChart in Active Reports"
ClientHeight    =   7755
ClientLeft      =   2415
ClientTop       =   1560
ClientWidth     =   9195
LinkTopic       =   "Form1"
ScaleHeight     =   7755
ScaleWidth      =   9195
Begin VB.ComboBox CbCountry 
Height          =   315
Left            =   2820
TabIndex        =   2
Text            =   "Combo1"
Top             =   60
Width           =   3315
End
Begin DDActiveReportsViewerCtl.ARViewer ARViewer1 
Height          =   7275
Left            =   60
TabIndex        =   0
Top             =   420
Width           =   9075
_ExtentX        =   16007
_ExtentY        =   12832
SectionData     =   "TeeARForm.frx":0000
End
Begin VB.Label Label1 
Caption         =   "Select a country:"
Height          =   315
Left            =   60
TabIndex        =   1
Top             =   120
Width           =   2535
End
End
Attribute VB_Name = "TeeARForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit
Private Sub cbCountry_Click()
Dim rpt As rptProdQtyByCountry
If CbCountry.ListIndex >= 0 Then
If ARViewer1.ReportSource Is Nothing Then
Set rpt = New rptProdQtyByCountry
rpt.RptData.DatabaseName = GetVBPath() & "\Nwind.mdb"
rpt.RptData.RecordSource = "SELECT Sum([Order Details].Quantity) as SumQty, Orders.ShipCountry, Categories.CategoryName" & _
" From Orders, [Order Details], Products, Categories" & _
" Where Orders.OrderID = [Order Details].OrderID" & _
" And [Order Details].ProductID = Products.ProductID" & _
" And Products.CategoryID = Categories.CategoryID" & _
" And Orders.ShipCountry = '" & CbCountry.List(CbCountry.ListIndex) & "' GROUP BY Orders.ShipCountry, Categories.CategoryName"
Set ARViewer1.ReportSource = rpt
Else
ARViewer1.ReportSource.Stop
ARViewer1.ReportSource.RptData.RecordSource = "SELECT Sum([Order Details].Quantity) as SumQty, Orders.ShipCountry, Categories.CategoryName" & _
" From Orders, [Order Details], Products, Categories" & _
" Where Orders.OrderID = [Order Details].OrderID" & _
" And [Order Details].ProductID = Products.ProductID" & _
" And Products.CategoryID = Categories.CategoryID" & _
" And Orders.ShipCountry = '" & CbCountry.List(CbCountry.ListIndex) & "' GROUP BY Orders.ShipCountry, Categories.CategoryName"
ARViewer1.ReportSource.Restart
Set ARViewer1.ReportSource = ARViewer1.ReportSource
End If
End If
End Sub
Private Sub Form_Load()
Dim db As Database
Dim rs As Recordset
Dim rpt As New rptProdQtyByCountry
On Error GoTo ehInitialize
Set db = DBEngine.Workspaces(0).OpenDatabase(GetVBPath() & "\NWind.mdb")
Set rs = db.OpenRecordset("SELECT DISTINCT ShipCountry FROM Orders")
Do While Not rs.EOF
CbCountry.AddItem rs!ShipCountry
rs.MoveNext
Loop
rs.Close: Set rs = Nothing
db.Close: Set db = Nothing
CbCountry.ListIndex = 0
exInitialize:
Exit Sub
ehInitialize:
MsgBox "Unable to initialize data source" & vbCrLf & Error$
Resume exInitialize
End Sub
Private Sub Form_Resize()
On Error Resume Next
ARViewer1.Move 0, ARViewer1.Top, ScaleWidth, ScaleHeight - ARViewer1.Top
End Sub
