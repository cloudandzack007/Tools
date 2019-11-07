VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AxisCustomForm 
   BorderStyle     =   0  'None
   Caption         =   "AxisCustomForm"
   ClientHeight    =   5685
   ClientLeft      =   2340
   ClientTop       =   2220
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4755
      Left            =   0
      OleObjectBlob   =   "AxisCustomForm.frx":0000
      TabIndex        =   0
      Top             =   930
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Custom axes visible"
      Height          =   255
      Left            =   180
      TabIndex        =   2
      Top             =   660
      Value           =   1  'Checked
      Width           =   1815
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "AxisCustomForm.frx":05F7
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "AxisCustomForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
Dim i
  With TChart1.Axis
    For i = 0 To .CustomCount - 1
      .Custom(i).Visible = Check1.Value
    Next i
  End With
End Sub

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 15
    .Series(1).FillSampleValues 10
    .Series(2).FillSampleValues 18
  End With
End Sub

Private Sub Text1_DblClick()
  TChart1.ShowEditor
End Sub
