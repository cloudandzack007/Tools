VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form DonutSeriesFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2820
   ClientTop       =   4365
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4335
      Left            =   0
      OleObjectBlob   =   "DonutSeriesFormForm.frx":0000
      TabIndex        =   1
      Top             =   1350
      Width           =   7050
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   1620
      TabIndex        =   3
      Top             =   960
      Width           =   435
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   2040
      Max             =   1
      Min             =   100
      TabIndex        =   2
      Top             =   960
      Value           =   50
      Width           =   255
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "DonutSeriesFormForm.frx":018E
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Hole %:"
      Height          =   255
      Left            =   1020
      TabIndex        =   4
      Top             =   1020
      Width           =   555
   End
End
Attribute VB_Name = "DonutSeriesFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 8
  VScroll1_Scroll
End Sub

Private Sub Text2_Change()
  Text2_Confirm
End Sub

Private Sub Text2_Confirm()
  If Not IsNumeric(Text2.Text) Then
    KeepFocus = True
    MsgBox "Please insert a numeric value", , "Hole size"
  Else
    With TChart1.Series(0)
    .asDonut.DonutPercent = VScroll1.Value
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
