VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form RotateToolFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2955
   ClientTop       =   2730
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4575
      Left            =   0
      OleObjectBlob   =   "RotateToolFormForm.frx":0000
      TabIndex        =   0
      Top             =   1110
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Active"
      Height          =   315
      Left            =   180
      TabIndex        =   2
      Top             =   660
      Value           =   1  'Checked
      Width           =   1275
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "RotateToolFormForm.frx":022D
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "RotateToolFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Tools(0).asRotate.Active = Check1.Value
End Sub

Private Sub Form_Load()
TChart1.Series(0).FillSampleValues 50
End Sub

Private Sub Text1_DblClick()
 TChart1.ShowEditor
End Sub
