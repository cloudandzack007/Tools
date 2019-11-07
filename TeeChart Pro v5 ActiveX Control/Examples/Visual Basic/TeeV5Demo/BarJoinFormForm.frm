VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BarJoinFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2535
   ClientTop       =   2250
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4395
      Left            =   0
      TabIndex        =   0
      Top             =   1290
      Width           =   7050
      Base64          =   $"BarJoinFormForm.frx":0000
   End
   Begin VB.TextBox Text2 
      Appearance      =   0  'Flat
      Enabled         =   0   'False
      Height          =   195
      Left            =   1860
      TabIndex        =   2
      Top             =   960
      Width           =   195
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "BarJoinFormForm.frx":020C
      Top             =   0
      Width           =   7035
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Join"
      Height          =   315
      Left            =   840
      TabIndex        =   3
      Top             =   900
      Width           =   1335
   End
End
Attribute VB_Name = "BarJoinFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  With TChart1.Series(0).asBarJoin.JoinPen
    PenColor = .Color
    PenStyle = .Style
    PenVisible = .Visible
    PenWidth = .Width
    PenForm.Show vbModal
    If PenCancel = False Then
      .Color = PenColor
      .Style = PenStyle
      .Visible = PenVisible
      .Width = PenWidth
      Text2.BackColor = .Color
    End If
  End With
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 3
  TChart1.Series(0).asBarJoin.JoinPen.Color = vbBlue
  Text2.BackColor = TChart1.Series(0).asBarJoin.JoinPen.Color
End Sub
