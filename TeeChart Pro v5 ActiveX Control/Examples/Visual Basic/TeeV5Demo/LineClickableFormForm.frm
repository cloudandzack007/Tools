VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form LineClickableFormForm 
   BorderStyle     =   0  'None
   Caption         =   "LineClickableFormForm"
   ClientHeight    =   5685
   ClientLeft      =   2835
   ClientTop       =   2985
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4095
      Left            =   0
      OleObjectBlob   =   "LineClickableFormForm.frx":0000
      TabIndex        =   0
      Top             =   1590
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Clickable line"
      Height          =   315
      Left            =   0
      TabIndex        =   2
      Top             =   1200
      Width           =   1395
   End
   Begin VB.Label Label2 
      Caption         =   "...."
      Height          =   255
      Left            =   2820
      TabIndex        =   3
      Top             =   1260
      Visible         =   0   'False
      Width           =   675
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   1095
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "LineClickableFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).asLine.ClickableLine = Check1.Value
End Sub

Private Sub Form_Load()
  Label1.Caption = "Line, Point and Area series have a new property:" _
    & "ClickableLine that controls if the mouse cursor and mouse clicks apply to the line or to the points only." & Chr(13) _
    & Chr(13) _
    & "Move the mouse over lines and points, with and without ""clickable line"""
  With TChart1
    .Series(0).FillSampleValues 10
    .Series(0).asLine.ClickableLine = False
    .Series(0).Cursor = 2020
  End With
End Sub

Private Sub Label1_DblClick()
  TChart1.ShowEditor
End Sub

Private Sub TChart1_OnMouseMove(ByVal Shift As TeeChart.EShiftState, ByVal X As Long, ByVal Y As Long)
Dim tmp
  With TChart1.Series(0)
    tmp = .Clicked(X, Y)
    If tmp <> -1 Then
      Label2.Caption = "Point: " & Str$(tmp)
      Label2.Visible = True
    Else
      Label2.Visible = False
    End If
  End With
End Sub
