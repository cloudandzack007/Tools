VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ChartPrintMarginsForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2685
   ClientTop       =   1665
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TeePreviewPanel TeePreviewPanel1 
      Height          =   4425
      Left            =   3660
      OleObjectBlob   =   "ChartPrintMarginsForm.frx":0000
      TabIndex        =   1
      Top             =   1260
      Width           =   3390
   End
   Begin TeeChart.TChart TChart1 
      Height          =   4425
      Left            =   0
      OleObjectBlob   =   "ChartPrintMarginsForm.frx":0051
      TabIndex        =   0
      Top             =   1260
      Width           =   3615
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1215
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "ChartPrintMarginsForm.frx":00C8
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ChartPrintMarginsForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
  TeePreviewPanel1.Chart = TChart1
End Sub
