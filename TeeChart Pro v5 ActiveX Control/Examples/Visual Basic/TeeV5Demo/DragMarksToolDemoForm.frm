VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form DragMarksToolDemoForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2580
   ClientTop       =   2190
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4635
      Left            =   0
      OleObjectBlob   =   "DragMarksToolDemoForm.frx":0000
      TabIndex        =   0
      Top             =   1050
      Width           =   7050
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Edit"
      Height          =   315
      Left            =   3540
      TabIndex        =   4
      Top             =   600
      Width           =   1155
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Active"
      Height          =   195
      Left            =   180
      TabIndex        =   3
      Top             =   660
      Value           =   1  'Checked
      Width           =   1455
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Reset"
      Height          =   315
      Left            =   1800
      TabIndex        =   2
      Top             =   600
      Width           =   1155
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   555
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "DragMarksToolDemoForm.frx":02CA
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "DragMarksToolDemoForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  For i = 0 To TChart1.Tools.Count - 1
    TChart1.Tools(i).Active = Check1.Value
  Next i
End Sub

Private Sub Command1_Click()
  With TChart1
    .Series(0).Marks.ResetPositions
    .Series(1).Marks.ResetPositions
  End With
End Sub

Private Sub Command2_Click()
  TChart1.ShowEditor
End Sub

Private Sub Form_Load()
Dim tmpIndex As Integer
  With TChart1
    .Series(0).FillSampleValues 10
    .Series(1).FillSampleValues 10
    With .Tools
      tmpIndex = .Add(tcDragMarks)
      .Items(tmpIndex).asDragMarks.Series = 0
      tmpIndex = .Add(tcDragMarks)
      .Items(tmpIndex).asDragMarks.Series = 1
    End With
  End With
End Sub
