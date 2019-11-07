VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form LegendCurrentPageForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2715
   ClientTop       =   3645
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3945
      Left            =   0
      OleObjectBlob   =   "LegendCurrentPageForm.frx":0000
      TabIndex        =   0
      Top             =   1740
      Width           =   7050
   End
   Begin TeeChart.ChartPageNavigator ChartPageNavigator1 
      Height          =   420
      Left            =   0
      OleObjectBlob   =   "LegendCurrentPageForm.frx":016F
      TabIndex        =   2
      Top             =   1260
      Width           =   4860
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1215
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "LegendCurrentPageForm.frx":01C1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "LegendCurrentPageForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  ChartPageNavigator1.Chart = TChart1
  With TChart1
    .Series(0).FillSampleValues 100
    .Page.MaxPointsPerPage = 10
    .Legend.CurrentPage = True
  End With
End Sub
