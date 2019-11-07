VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form MovAveWeightedFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3495
   ClientTop       =   2235
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "MovAveWeightedFormForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Weighted"
      Height          =   255
      Left            =   180
      TabIndex        =   2
      Top             =   1200
      Width           =   1635
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "MovAveWeightedFormForm.frx":0253
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "MovAveWeightedFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(1).FunctionType.asMovAvg.Weighted = Check1.Value
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 100
  TChart1.Series(1).FunctionType.asMovAvg.Weighted = True
End Sub

Private Sub Text1_DblClick()
  TChart1.ShowEditor
End Sub
