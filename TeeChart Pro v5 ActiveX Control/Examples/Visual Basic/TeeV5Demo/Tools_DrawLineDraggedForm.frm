VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form Tools_DrawLineDraggedForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3615
   ClientTop       =   3225
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "Tools_DrawLineDraggedForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   855
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "Tools_DrawLineDraggedForm.frx":01B6
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label4 
      Caption         =   "Triggered Line event:"
      Height          =   255
      Left            =   0
      TabIndex        =   5
      Top             =   1260
      Width           =   1575
   End
   Begin VB.Label Label3 
      Caption         =   "Cursor position:"
      Height          =   255
      Left            =   420
      TabIndex        =   4
      Top             =   960
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "..."
      Height          =   255
      Left            =   1620
      TabIndex        =   3
      Top             =   1260
      Width           =   3915
   End
   Begin VB.Label Label1 
      Caption         =   "..."
      Height          =   195
      Left            =   1620
      TabIndex        =   2
      Top             =   960
      Width           =   5355
   End
End
Attribute VB_Name = "Tools_DrawLineDraggedForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
 TChart1.Series(0).FillSampleValues 7
End Sub

Private Sub TChart1_OnCursorToolChange(ByVal Tool As Long, ByVal X As Long, ByVal Y As Long, ByVal XVal As Double, ByVal YVal As Double, ByVal Series As Long, ByVal ValueIndex As Long)
  Label1.Caption = "X pixel: " & X & ", Y pixel: " & Y & ", XValue: " & Format(XVal, "#.00") & ", YValue: " & Format(YVal, "#.00")
End Sub

Private Sub TChart1_OnDrawLineToolDraggedLine()
  Label2.Caption = "Line Dragged"
End Sub

Private Sub TChart1_OnDrawLineToolLineDrag()
  Label2.Caption = "Line Drag"
End Sub

Private Sub TChart1_OnDrawLineToolNewLine()
  Label2.Caption = "NewLine"
End Sub

Private Sub TChart1_OnDrawLineToolSelectLine()
  Label2.Caption = "Line selected"
End Sub
