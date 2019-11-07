VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ExponentialTrendFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   1650
   ClientTop       =   1545
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4755
      Left            =   0
      OleObjectBlob   =   "ExponentialTrendFormForm.frx":0000
      TabIndex        =   0
      Top             =   930
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   735
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ExponentialTrendFormForm.frx":0381
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ExponentialTrendFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 1000
End Sub

Private Sub Text1_Click()
  TChart1.ShowEditor
End Sub
