VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ChartEditor_PageNum 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3660
   ClientTop       =   2025
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.ChartPageNavigator ChartPageNavigator1 
      Height          =   495
      Left            =   1980
      OleObjectBlob   =   "ChartEditor_PageNum.frx":0000
      TabIndex        =   2
      Top             =   900
      Width           =   5040
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "ChartEditor_PageNum.frx":0053
      TabIndex        =   1
      Top             =   1410
      Width           =   7050
   End
   Begin TeeChart.TeeEditor TeeEditor1 
      Left            =   1500
      OleObjectBlob   =   "ChartEditor_PageNum.frx":01CF
      Top             =   960
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit Paging"
      Height          =   375
      Left            =   180
      TabIndex        =   3
      Top             =   960
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "ChartEditor_PageNum.frx":01FB
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ChartEditor_PageNum"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
  TeeEditor1.DefaultPage = epPaging
  TeeEditor1.ShowEditor
End Sub

Private Sub Form_Load()
  TeeEditor1.Chart = TChart1
  ChartPageNavigator1.Chart = TChart1
  TChart1.Series(0).FillSampleValues 25
End Sub
