VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form MarkTipsToolDemoForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3120
   ClientTop       =   3525
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "MarkTipsToolDemoForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      LargeChange     =   10
      Left            =   5700
      Max             =   0
      Min             =   1001
      TabIndex        =   7
      Top             =   1140
      Value           =   10
      Width           =   195
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   5280
      TabIndex        =   6
      Text            =   "10"
      Top             =   1140
      Width           =   435
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit"
      Height          =   315
      Left            =   2820
      TabIndex        =   4
      Top             =   1140
      Width           =   1155
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "MarkTipsToolDemoForm.frx":0200
      Left            =   1500
      List            =   "MarkTipsToolDemoForm.frx":020A
      TabIndex        =   3
      Text            =   "Move"
      Top             =   1140
      Width           =   1215
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show Tips on:"
      Height          =   315
      Left            =   120
      TabIndex        =   2
      Top             =   1140
      Value           =   1  'Checked
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1095
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "MarkTipsToolDemoForm.frx":021B
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Delay (msec):"
      Height          =   255
      Left            =   4140
      TabIndex        =   5
      Top             =   1200
      Width           =   1035
   End
End
Attribute VB_Name = "MarkTipsToolDemoForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Tools(0).Active = Check1.Value
End Sub

Private Sub Combo1_Change()
  Combo1_Click
End Sub

Private Sub Combo1_Click()
  TChart1.Tools(0).asMarksTip.MouseAction = Combo1.ListIndex
End Sub

Private Sub Command1_Click()
  TChart1.ShowEditor
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 8
  VScroll1_Scroll
End Sub

Private Sub Text2_Change()
  Text2_Validate True
End Sub

Private Sub Text2_Validate(Cancel As Boolean)
  If Not IsNumeric(Text2.Text) Then
    KeepFocus = True
    MsgBox "Please insert a numeric value", , "Error warning"
  Else
    TChart1.Tools.Items(0).asMarksTip.Delay = Val(Text2.Text)
    VScroll1.Value = Val(Text2.Text)
  End If
End Sub

Private Sub VScroll1_Change()
  VScroll1_Scroll
End Sub

Private Sub VScroll1_Scroll()
  Text2.Text = Str$(VScroll1.Value)
  Text2_Validate (False)
End Sub
