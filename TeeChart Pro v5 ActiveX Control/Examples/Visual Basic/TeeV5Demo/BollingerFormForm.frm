VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BollingerFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   1650
   ClientTop       =   1545
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4215
      Left            =   0
      OleObjectBlob   =   "BollingerFormForm.frx":0000
      TabIndex        =   0
      Top             =   1470
      Width           =   7050
   End
   Begin VB.TextBox Text4 
      Appearance      =   0  'Flat
      Enabled         =   0   'False
      Height          =   195
      Left            =   1320
      TabIndex        =   10
      Top             =   1080
      Width           =   195
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Line pen     "
      Height          =   435
      Left            =   240
      TabIndex        =   9
      Top             =   960
      Width           =   1395
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   3360
      Max             =   1
      Min             =   1000
      TabIndex        =   6
      Top             =   1020
      Value           =   50
      Width           =   255
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   2940
      TabIndex        =   5
      Top             =   1020
      Width           =   435
   End
   Begin VB.VScrollBar VScroll2 
      Height          =   315
      Left            =   5100
      Max             =   1
      Min             =   1000
      TabIndex        =   4
      Top             =   1020
      Value           =   2
      Width           =   255
   End
   Begin VB.TextBox Text3 
      Height          =   315
      Left            =   4680
      TabIndex        =   3
      Top             =   1020
      Width           =   435
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Exponential"
      Height          =   375
      Left            =   5580
      TabIndex        =   2
      Top             =   1020
      Value           =   1  'Checked
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "BollingerFormForm.frx":033C
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Period:"
      Height          =   255
      Left            =   2340
      TabIndex        =   8
      Top             =   1080
      Width           =   555
   End
   Begin VB.Label Label2 
      Caption         =   "Deviation:"
      Height          =   255
      Left            =   3840
      TabIndex        =   7
      Top             =   1080
      Width           =   795
   End
End
Attribute VB_Name = "BollingerFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(1).FunctionType.asBollinger.Exponential = Check1.Value
End Sub

Private Sub Command1_Click()
  With TChart1.Series(1)
    PenColor = .asFastLine.LinePen.Color
    PenStyle = .asFastLine.LinePen.Style
    PenVisible = .asFastLine.LinePen.Visible
    PenWidth = .asFastLine.LinePen.Width
    PenForm.Show vbModal
    If PenCancel = False Then
      .asFastLine.LinePen.Color = PenColor
      .asFastLine.LinePen.Style = PenStyle
      .asFastLine.LinePen.Visible = PenVisible
      .asFastLine.LinePen.Width = PenWidth
      Text4.BackColor = PenColor
      With .FunctionType.asBollinger.LowBand
        .asFastLine.LinePen.Color = PenColor
        .asFastLine.LinePen.Style = PenStyle
        .asFastLine.LinePen.Visible = PenVisible
        .asFastLine.LinePen.Width = PenWidth
      End With
    End If
  End With
End Sub

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 400
    .Axis.Left.Title.Caption = .Series(0).Title
    With .Series(1)
      .FunctionType.asBollinger.LowBand.Color = .Color
      Text4.BackColor = .Color
    End With
  End With
  VScroll1_Scroll
  VScroll2_Scroll
End Sub

Private Sub Text2_Change()
  Text2_Confirm
End Sub

Private Sub Text2_Confirm()
  If Not IsNumeric(Text2.Text) Then
    KeepFocus = True
    MsgBox "Please insert a numeric value", , "Period"
  Else
    With TChart1.Series(1).FunctionType
      .Period = Val(Text2.Text)
    End With
    VScroll1.Value = Val(Text2.Text)
  End If
End Sub

Private Sub VScroll1_Change()
  VScroll1_Scroll
End Sub

Private Sub VScroll1_Scroll()
  Text2.Text = Str$(VScroll1.Value)
  Text2_Confirm
End Sub

Private Sub Text3_Change()
  Text3_Confirm
End Sub

Private Sub Text3_Confirm()
  If Not IsNumeric(Text3.Text) Then
    KeepFocus = True
    MsgBox "Please insert a numeric value", , "Deviation"
  Else
    With TChart1.Series(1).FunctionType
      .asBollinger.Deviation = Val(Text3.Text)
    End With
    VScroll2.Value = Val(Text3.Text)
  End If
End Sub

Private Sub VScroll2_Change()
  VScroll2_Scroll
End Sub

Private Sub VScroll2_Scroll()
  Text3.Text = Str$(VScroll2.Value)
  Text3_Confirm
End Sub
