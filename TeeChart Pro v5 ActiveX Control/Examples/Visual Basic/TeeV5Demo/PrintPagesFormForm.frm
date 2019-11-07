VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PrintPagesFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3300
   ClientTop       =   3405
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.ChartPageNavigator ChartPageNavigator1 
      Height          =   270
      Left            =   2700
      OleObjectBlob   =   "PrintPagesFormForm.frx":0000
      TabIndex        =   2
      Top             =   1380
      Width           =   3660
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3915
      Left            =   0
      OleObjectBlob   =   "PrintPagesFormForm.frx":0053
      TabIndex        =   1
      Top             =   1770
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Print all pages"
      Height          =   375
      Left            =   360
      TabIndex        =   3
      Top             =   1320
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1215
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "PrintPagesFormForm.frx":00CA
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "PrintPagesFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  With TChart1.Printer
    .PrintPages 1, TChart1.Page.Count
  End With
End Sub

Private Sub Form_Load()
  ChartPageNavigator1.Chart = TChart1
  With TChart1
    .AddSeries scBar
    .Series(0).FillSampleValues 30
    .Page.MaxPointsPerPage = 10
  End With
End Sub
