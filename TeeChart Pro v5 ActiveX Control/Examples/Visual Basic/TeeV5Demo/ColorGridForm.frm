VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ColorGridForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2790
   ClientTop       =   2145
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "ColorGridForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   6240
      Max             =   1
      Min             =   1000
      TabIndex        =   7
      Top             =   1140
      Value           =   30
      Width           =   255
   End
   Begin VB.TextBox Text3 
      Height          =   315
      Left            =   5820
      TabIndex        =   6
      Top             =   1140
      Width           =   435
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Edit"
      Height          =   315
      Left            =   3120
      TabIndex        =   5
      Top             =   1140
      Width           =   1275
   End
   Begin VB.TextBox Text2 
      Appearance      =   0  'Flat
      Enabled         =   0   'False
      Height          =   195
      Left            =   2580
      TabIndex        =   4
      Top             =   1200
      Width           =   195
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Grid"
      Height          =   315
      Left            =   1560
      TabIndex        =   3
      Top             =   1140
      Width           =   1335
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Grid"
      Height          =   315
      Left            =   120
      TabIndex        =   2
      Top             =   1140
      Value           =   1  'Checked
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1095
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ColorGridForm.frx":0170
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "No. of values:"
      Height          =   255
      Left            =   4800
      TabIndex        =   8
      Top             =   1200
      Width           =   1035
   End
End
Attribute VB_Name = "ColorGridForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).asColorGrid.Pen.Visible = Check1.Value
End Sub

Private Sub Command1_Click()
  With TChart1.Series(0).asColorGrid.Pen
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
      If .Visible = True Then
        Check1.Value = 1
      Else
        Check1.Value = 0
      End If
    End If
  End With
End Sub

Private Sub Command2_Click()
  TChart1.EditOneSeries 0
End Sub

Private Sub Form_Load()
  VScroll1_Scroll
  Text2.BackColor = TChart1.Series(0).asColorGrid.Pen.Color
End Sub

Private Sub Text3_Change()
  Text3_Confirm
End Sub

Private Sub Text3_Confirm()
  If Not IsNumeric(Text3.Text) Then
    KeepFocus = True
    MsgBox "Please insert a numeric value", , "Size"
  Else
    TChart1.Series(0).FillSampleValues Val(Text3.Text)
    VScroll1.Value = Val(Text3.Text)
  End If
End Sub

Private Sub VScroll1_Change()
  VScroll1_Scroll
End Sub

Private Sub VScroll1_Scroll()
  Text3.Text = Str$(VScroll1.Value)
  Text3_Confirm
End Sub
