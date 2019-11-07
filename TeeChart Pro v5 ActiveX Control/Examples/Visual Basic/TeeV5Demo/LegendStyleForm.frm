VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form LegendStyleForm 
BorderStyle     =   0  'None
Caption         =   "Form2"
ClientHeight    =   5685
ClientLeft      =   3660
ClientTop       =   3210
ClientWidth     =   7050
LinkTopic       =   "Form2"
ScaleHeight     =   5685
ScaleWidth      =   7050
ShowInTaskbar   =   0   'False
Begin TeeChart.TChart TChart1 
Align           =   2  'Align Bottom
Height          =   4395
Left            =   0
OleObjectBlob   =   "LegendStyleForm.frx":0000
TabIndex        =   0
Top             =   1290
Width           =   7050
End
Begin VB.TextBox Text1 
BackColor       =   &H00C0FFFF&
Height          =   795
Left            =   0
MultiLine       =   -1  'True
TabIndex        =   3
Text            =   "LegendStyleForm.frx":0180
Top             =   0
Width           =   7035
End
Begin VB.ComboBox Combo1 
Height          =   315
ItemData        =   "LegendStyleForm.frx":01FD
Left            =   1740
List            =   "LegendStyleForm.frx":020A
TabIndex        =   2
Text            =   "Percent"
Top             =   900
Width           =   1515
End
Begin VB.Label Label2 
Caption         =   "New &Legend styles:"
Height          =   195
Left            =   120
TabIndex        =   1
Top             =   960
Width           =   1455
End
End
Attribute VB_Name = "LegendStyleForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Combo1_Click()
TChart1.Legend.TextStyle = Combo1.ItemData(Combo1.ListIndex)
End Sub
Private Sub Form_Load()
TChart1.Series(0).FillSampleValues 7
End Sub
