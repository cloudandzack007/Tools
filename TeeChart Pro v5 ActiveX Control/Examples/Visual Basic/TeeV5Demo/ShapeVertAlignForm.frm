VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form ShapeVertAlignForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3030
   ClientTop       =   2550
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4035
      Left            =   0
      OleObjectBlob   =   "ShapeVertAlignForm.frx":0000
      TabIndex        =   0
      Top             =   1650
      Width           =   7050
   End
   Begin VB.OptionButton Option1 
      Caption         =   "Bottom"
      Height          =   315
      Index           =   2
      Left            =   4080
      TabIndex        =   4
      Top             =   1260
      Width           =   1155
   End
   Begin VB.OptionButton Option1 
      Caption         =   "Centre"
      Height          =   315
      Index           =   1
      Left            =   2820
      TabIndex        =   3
      Top             =   1260
      Width           =   1155
   End
   Begin VB.OptionButton Option1 
      Caption         =   "Top"
      Height          =   315
      Index           =   0
      Left            =   1560
      TabIndex        =   2
      Top             =   1260
      Width           =   1155
   End
   Begin VB.Label Label2 
      Caption         =   "Vertical align:"
      Height          =   195
      Left            =   120
      TabIndex        =   5
      Top             =   1320
      Width           =   1155
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   1215
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ShapeVertAlignForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim shapeText As Variant

Private Sub Form_Load()
  Label1.Caption = "Shape text can now be top, center or bottom aligned." _
  & Chr(13) _
  & "Example: TChart1.Series(0).asShape.VertAlign= vaBottom"
  shapeText = Array("Text at Top", "Text at Centre", "Text at Bottom")
End Sub

Private Sub Option1_Click(Index As Integer)
  Select Case Index
    Case 0: setText (0)
    Case 1: setText (1)
    Case 2: setText (2)
  End Select
End Sub

Private Sub setText(Pos As Integer)
Dim i
  With TChart1
    For i = 0 To .SeriesCount - 1
      .Series(i).asShape.VertAlign = Pos
      .Series(i).asShape.Text.Item(0) = shapeText(Pos)
    Next i
  End With
End Sub
