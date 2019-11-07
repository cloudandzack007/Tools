VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4980
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6660
   LinkTopic       =   "Form1"
   ScaleHeight     =   4980
   ScaleWidth      =   6660
   StartUpPosition =   3  'Windows Default
   Begin TeeChart.TChart TChart1 
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "MoveMarks.frx":0000
      TabIndex        =   0
      Top             =   0
      Width           =   6615
   End
   Begin VB.Frame Frame1 
      Height          =   615
      Left            =   0
      TabIndex        =   1
      Top             =   4320
      Width           =   6615
      Begin VB.Label Label1 
         Alignment       =   2  'Center
         Caption         =   "Drag Marks to move them"
         BeginProperty Font 
            Name            =   "MS Sans Serif"
            Size            =   9.75
            Charset         =   0
            Weight          =   400
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   120
         TabIndex        =   2
         Top             =   240
         Width           =   6255
      End
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim OldX, OldY As Integer
Dim Dragged As Integer
Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 7
  Dragged = -1
End Sub

Private Sub TChart1_OnMouseDown(ByVal Button As TeeChart.EMouseButton, ByVal Shift As TeeChart.EShiftState, ByVal X As Long, ByVal Y As Long)
  Dragged = TChart1.Series(0).Marks.Clicked(X, Y)
  OldX = X
  OldY = Y
End Sub

Private Sub TChart1_OnMouseMove(ByVal Shift As TeeChart.EShiftState, ByVal X As Long, ByVal Y As Long)
Dim DifX, DifY As Integer
If TChart1.SeriesCount > 0 Then
  If Dragged <> -1 Then
   With TChart1.Series(0).Marks.Positions.Position(Dragged)
     DifX = X - OldX
     DifY = Y - OldY
     .Custom = True
     .LeftTop.X = .LeftTop.X + DifX
     .LeftTop.Y = .LeftTop.Y + DifY
     .ArrowTo.X = .ArrowTo.X + DifX
     .ArrowTo.Y = .ArrowTo.Y + DifY
     OldX = X
     OldY = Y
     TChart1.Repaint
   End With
 Else
   If TChart1.Series(0).Marks.Clicked(X, Y) <> -1 Then
      TChart1.Cursor = 2020
      TChart1.Cursor = 2020
   Else
    If TChart1.Cursor <> -2 Then
      TChart1.Cursor = -2
      TChart1.DragCursor = -2
    End If
  End If
 End If
End If
End Sub

Private Sub TChart1_OnMouseUp(ByVal Button As TeeChart.EMouseButton, ByVal Shift As TeeChart.EShiftState, ByVal X As Long, ByVal Y As Long)
Dragged = -1
TChart1.Cursor = -21
End Sub


