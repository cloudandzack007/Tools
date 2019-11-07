VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PrintPreviewNavigateForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2925
   ClientTop       =   1740
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.ChartPageNavigator ChartPageNavigator1 
      Height          =   270
      Left            =   2160
      OleObjectBlob   =   "PrintPreviewNavigateForm.frx":0000
      TabIndex        =   2
      Top             =   1140
      Width           =   2940
   End
   Begin TeeChart.TeePreviewPanel TeePreviewPanel1 
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "PrintPreviewNavigateForm.frx":0053
      TabIndex        =   1
      Top             =   1500
      Width           =   3555
   End
   Begin TeeChart.TChart TChart1 
      Height          =   4155
      Left            =   3600
      OleObjectBlob   =   "PrintPreviewNavigateForm.frx":00A3
      TabIndex        =   0
      Top             =   1500
      Width           =   3435
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1095
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   3
      Text            =   "PrintPreviewNavigateForm.frx":011B
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "PrintPreviewNavigateForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  With TChart1
    .AddSeries scArea
    .Series(0).FillSampleValues 100
    .Page.MaxPointsPerPage = 10
    ChartPageNavigator1.Chart = TChart1
    TeePreviewPanel1.Chart = TChart1
    TeePreviewPanel1.Orientation = ppoPortrait
  End With
End Sub

Private Sub TChart1_OnAfterDraw()
  TeePreviewPanel1.Repaint
End Sub

