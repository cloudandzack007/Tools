VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form WaterFallFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2985
   ClientTop       =   3960
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "WaterFallFormForm.frx":0000
      TabIndex        =   0
      Top             =   1410
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit"
      Height          =   375
      Left            =   3720
      TabIndex        =   6
      Top             =   960
      Width           =   1335
   End
   Begin VB.TextBox Text3 
      Appearance      =   0  'Flat
      Enabled         =   0   'False
      Height          =   225
      Left            =   2580
      TabIndex        =   3
      Top             =   1020
      Width           =   255
   End
   Begin VB.TextBox Text2 
      Appearance      =   0  'Flat
      Enabled         =   0   'False
      Height          =   225
      Left            =   1140
      TabIndex        =   2
      Top             =   1020
      Width           =   255
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "WaterFallFormForm.frx":025E
      Top             =   0
      Width           =   7035
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Lines"
      Height          =   375
      Left            =   1560
      TabIndex        =   4
      Top             =   960
      Width           =   1335
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Border    "
      Height          =   375
      Left            =   120
      TabIndex        =   5
      Top             =   960
      Width           =   1335
   End
End
Attribute VB_Name = "WaterFallFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  TChart1.EditOneSeries 0
End Sub

Private Sub Command2_Click()
Dim Pen As IPen
  Set Pen = TChart1.Series(0).asWaterfall.Pen
  PenColor = Pen.Color
  PenStyle = Pen.Style
  PenVisible = Pen.Visible
  PenWidth = Pen.Width
  PenForm.Show vbModal
  If PenCancel = False Then
    Pen.Color = PenColor
    Pen.Style = PenStyle
    Pen.Visible = PenVisible
    Pen.Width = PenWidth
  End If
  Text2.BackColor = Pen.Color
End Sub

Private Sub Command3_Click()
Dim Pen As IPen
  Set Pen = TChart1.Series(0).asWaterfall.WaterLines
  PenColor = Pen.Color
  PenStyle = Pen.Style
  PenVisible = Pen.Visible
  PenWidth = Pen.Width
  PenForm.Show vbModal
  If PenCancel = False Then
    Pen.Color = PenColor
    Pen.Style = PenStyle
    Pen.Visible = PenVisible
    Pen.Width = PenWidth
  End If
  Text3.BackColor = Pen.Color
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 20
  Text3.BackColor = TChart1.Series(0).asWaterfall.WaterLines.Color
  Text2.BackColor = TChart1.Series(0).asWaterfall.Pen.Color
End Sub
