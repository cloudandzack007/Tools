VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form TriSurfaceFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2970
   ClientTop       =   2055
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "TriSurfaceFormForm.frx":0000
      TabIndex        =   0
      Top             =   1410
      Width           =   7050
   End
   Begin VB.TextBox Text3 
      Appearance      =   0  'Flat
      Enabled         =   0   'False
      Height          =   195
      Left            =   2955
      TabIndex        =   5
      Top             =   1035
      Width           =   195
   End
   Begin VB.TextBox Text2 
      Appearance      =   0  'Flat
      Enabled         =   0   'False
      Height          =   195
      Left            =   1320
      TabIndex        =   4
      Top             =   1035
      Width           =   195
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Border"
      Height          =   375
      Left            =   1740
      TabIndex        =   3
      Top             =   960
      Width           =   1515
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Pen"
      Height          =   375
      Left            =   120
      TabIndex        =   2
      Top             =   960
      Width           =   1515
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "TriSurfaceFormForm.frx":020A
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "TriSurfaceFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  With TChart1.Series(0).asTriSurface
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
      Text2.BackColor = PenColor
    End If
  End With
End Sub

Private Sub Command2_Click()
  With TChart1.Series(0).asTriSurface
    PenColor = .Border.Color
    PenStyle = .Border.Style
    PenVisible = .Border.Visible
    PenWidth = .Border.Width
    PenForm.Show vbModal
    If PenCancel = False Then
      .Border.Color = PenColor
      .Border.Style = PenStyle
      .Border.Visible = PenVisible
      .Border.Width = PenWidth
      Text3.BackColor = PenColor
    End If
  End With
End Sub

Private Sub Form_Load()
  With TChart1.Series(0)
    .FillSampleValues 30
    Text2.BackColor = .asTriSurface.Pen.Color
    Text3.BackColor = .asTriSurface.Border.Color
  End With
End Sub
