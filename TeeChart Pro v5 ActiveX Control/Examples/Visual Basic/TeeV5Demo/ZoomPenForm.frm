VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ZoomPenForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3570
   ClientTop       =   4440
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4065
      Left            =   0
      OleObjectBlob   =   "ZoomPenForm.frx":0000
      TabIndex        =   0
      Top             =   1620
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   3
      Text            =   "ZoomPenForm.frx":0077
      Top             =   0
      Width           =   7035
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Zoom Brush"
      Height          =   375
      Left            =   1680
      TabIndex        =   2
      Top             =   1200
      Width           =   1455
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Zoom Pen"
      Height          =   375
      Left            =   0
      TabIndex        =   1
      Top             =   1200
      Width           =   1515
   End
End
Attribute VB_Name = "ZoomPenForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  With TChart1.Zoom
    PenColor = .Pen.Color
    PenStyle = .Pen.Style
    PenVisible = .Pen.Visible
    PenWidth = .Pen.Width
    PenForm.Show vbModal
    If PenCancel = False Then
      .Pen.Color = PenColor
      .Pen.Style = PenStyle
      .Pen.Visible = PenVisible
      .Pen.Width = PenWidth
    End If
  End With
End Sub

Private Sub Command2_Click()
  With TChart1.Zoom
    BrushColor = .Brush.Color
    BrushStyle = .Brush.Style
    BrushForm.Show vbModal
    If BrushCancel = False Then
      .Brush.Color = BrushColor
      .Brush.Style = BrushStyle
    End If
  End With
End Sub

Private Sub Form_Load()
  With TChart1
    PenColor = vbWhite
    PenVisible = True
    PenWidth = 1
    PenStyle = 0
    .AddSeries scLine
    .Series(0).FillSampleValues 200
  End With
End Sub
