VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form LegendImageForm 
BorderStyle     =   0  'None
Caption         =   "LegendImageForm"
ClientHeight    =   5685
ClientLeft      =   3255
ClientTop       =   2400
ClientWidth     =   7050
LinkTopic       =   "Form2"
ScaleHeight     =   5685
ScaleWidth      =   7050
ShowInTaskbar   =   0   'False
Begin TeeChart.TChart TChart1 
Align           =   2  'Align Bottom
Height          =   3915
Left            =   0
OleObjectBlob   =   "LegendImageForm.frx":0000
TabIndex        =   0
Top             =   1770
Width           =   7050
End
Begin VB.TextBox Text1 
BackColor       =   &H00C0FFFF&
Height          =   1395
Left            =   0
MultiLine       =   -1  'True
TabIndex        =   2
Text            =   "LegendImageForm.frx":0076
Top             =   0
Width           =   7035
End
Begin VB.CheckBox Check1 
Caption         =   "Display Legend image"
Height          =   315
Left            =   60
TabIndex        =   1
Top             =   1440
Value           =   1  'Checked
Width           =   1935
End
End
Attribute VB_Name = "LegendImageForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
If Check1.Value = 1 Then
TChart1.Legend.Brush.LoadImage App.Path & "\backimage.bmp"
TChart1.Repaint
Else
TChart1.Legend.Brush.ClearImage
End If
End Sub
Private Sub Form_Load()
TChart1.AddSeries scPolar
TChart1.Series(0).FillSampleValues 8
TChart1.Legend.Brush.LoadImage App.Path & "\backimage.bmp"
End Sub
