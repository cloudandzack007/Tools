VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form LegendSeriesFormForm 
BorderStyle     =   0  'None
Caption         =   "LegendSeriesFormForm"
ClientHeight    =   5685
ClientLeft      =   3060
ClientTop       =   3360
ClientWidth     =   7050
LinkTopic       =   "Form2"
ScaleHeight     =   5685
ScaleWidth      =   7050
ShowInTaskbar   =   0   'False
Begin TeeChart.TChart TChart1 
Align           =   2  'Align Bottom
Height          =   3945
Left            =   0
OleObjectBlob   =   "LegendSeriesFormForm.frx":0000
TabIndex        =   0
Top             =   1740
Width           =   7050
End
Begin VB.TextBox Text1 
BackColor       =   &H00C0FFFF&
Height          =   1095
Left            =   0
MultiLine       =   -1  'True
TabIndex        =   4
Text            =   "LegendSeriesFormForm.frx":0271
Top             =   0
Width           =   7035
End
Begin VB.Frame Frame1 
Height          =   675
Left            =   0
TabIndex        =   1
Top             =   1020
Width           =   7035
Begin VB.OptionButton Option2 
Caption         =   "Line"
Height          =   315
Left            =   2700
TabIndex        =   3
Top             =   240
Width           =   1095
End
Begin VB.OptionButton Option1 
Caption         =   "Bar"
Height          =   315
Left            =   960
TabIndex        =   2
Top             =   240
Value           =   -1  'True
Width           =   1275
End
End
End
Attribute VB_Name = "LegendSeriesFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
With TChart1
.Series(0).FillSampleValues 10
.Series(1).FillSampleValues 10
.Legend.ColumnWidthAuto = False
.Legend.ColumnWidths(0) = 30
End With
End Sub
Private Sub Option1_Click()
TChart1.Legend.Series = 0
End Sub
Private Sub Option2_Click()
TChart1.Legend.Series = 1
End Sub
