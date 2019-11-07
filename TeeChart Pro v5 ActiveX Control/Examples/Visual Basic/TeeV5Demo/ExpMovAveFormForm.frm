VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ExpMovAveFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   1650
   ClientTop       =   1545
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "ExpMovAveFormForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "ExpMovAveFormForm.frx":036B
      Left            =   2880
      List            =   "ExpMovAveFormForm.frx":037B
      TabIndex        =   6
      Text            =   "Open"
      Top             =   1140
      Width           =   1095
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   840
      TabIndex        =   3
      Top             =   1140
      Width           =   435
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   1260
      Max             =   1
      Min             =   100
      TabIndex        =   2
      Top             =   1140
      Value           =   10
      Width           =   255
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1035
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ExpMovAveFormForm.frx":0397
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label2 
      Caption         =   "Use:"
      Height          =   195
      Left            =   2460
      TabIndex        =   5
      Top             =   1200
      Width           =   375
   End
   Begin VB.Label Label1 
      Caption         =   "Period:"
      Height          =   255
      Left            =   240
      TabIndex        =   4
      Top             =   1200
      Width           =   555
   End
End
Attribute VB_Name = "ExpMovAveFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Combo1_Change()
  Combo1_Click
End Sub

Private Sub Combo1_Click()
  TChart1.Series(1).YValues.ValueSource = Combo1.List(Combo1.ListIndex)
  TChart1.Series(1).CheckDataSource
End Sub

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 20
  End With
  VScroll1_Scroll
End Sub

Private Sub Text1_Click()
  TChart1.ShowEditor
End Sub

Private Sub Text2_Change()
  Text2_Confirm
End Sub

Private Sub Text2_Confirm()
  If Not IsNumeric(Text2.Text) Then
    KeepFocus = True
    MsgBox "Please insert a numeric value", , "Period 1"
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
