VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form HistogramFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2520
   ClientTop       =   2640
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4395
      Left            =   0
      OleObjectBlob   =   "HistogramFormForm.frx":0000
      TabIndex        =   0
      Top             =   1290
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   735
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   5
      Text            =   "HistogramFormForm.frx":01ED
      Top             =   0
      Width           =   7035
   End
   Begin VB.TextBox Text2 
      Appearance      =   0  'Flat
      Enabled         =   0   'False
      Height          =   195
      Left            =   1320
      TabIndex        =   2
      Top             =   915
      Width           =   195
   End
   Begin VB.TextBox Text3 
      Appearance      =   0  'Flat
      Enabled         =   0   'False
      Height          =   195
      Left            =   2955
      TabIndex        =   1
      Top             =   915
      Width           =   195
   End
   Begin VB.CommandButton Command1 
      Caption         =   "LinesPen   "
      Height          =   375
      Left            =   120
      TabIndex        =   4
      Top             =   840
      Width           =   1515
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Border"
      Height          =   375
      Left            =   1740
      TabIndex        =   3
      Top             =   840
      Width           =   1515
   End
End
Attribute VB_Name = "HistogramFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  With TChart1.Series(0).asHistogram
    PenColor = .LinesPen.Color
    PenStyle = .LinesPen.Style
    PenVisible = .LinesPen.Visible
    PenWidth = .LinesPen.Width
    PenForm.Show vbModal
    If PenCancel = False Then
      .LinesPen.Color = PenColor
      .LinesPen.Style = PenStyle
      .LinesPen.Visible = PenVisible
      .LinesPen.Width = PenWidth
      Text2.BackColor = PenColor
    End If
  End With
End Sub

Private Sub Command2_Click()
  With TChart1.Series(0).asHistogram
    PenColor = .LinePen.Color
    PenStyle = .LinePen.Style
    PenVisible = .LinePen.Visible
    PenWidth = .LinePen.Width
    PenForm.Show vbModal
    If PenCancel = False Then
      .LinePen.Color = PenColor
      .LinePen.Style = PenStyle
      .LinePen.Visible = PenVisible
      .LinePen.Width = PenWidth
      Text3.BackColor = PenColor
    End If
  End With
End Sub

Private Sub Form_Load()
  With TChart1.Series(0)
    .FillSampleValues 10
    Text2.BackColor = .asHistogram.LinesPen.Color
    Text3.BackColor = .asHistogram.LinePen.Color
  End With
End Sub
