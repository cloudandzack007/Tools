VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form MarksEveryForm 
   BackColor       =   &H8000000A&
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2775
   ClientTop       =   2835
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "MarksEveryForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.TextBox Text2 
      BackColor       =   &H00C0FFFF&
      Height          =   1035
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   4
      Text            =   "MarksEveryForm.frx":0077
      Top             =   0
      Width           =   7035
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   375
      LargeChange     =   5
      Left            =   1920
      Max             =   1
      Min             =   100
      SmallChange     =   2
      TabIndex        =   2
      Top             =   1080
      Value           =   5
      Width           =   255
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1320
      TabIndex        =   1
      Top             =   1080
      Width           =   555
   End
   Begin VB.Label Label2 
      Caption         =   "Marks every:"
      Height          =   255
      Left            =   240
      TabIndex        =   3
      Top             =   1140
      Width           =   1035
   End
End
Attribute VB_Name = "MarksEveryForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  With TChart1
    .AddSeries scLine
    .Series(0).FillSampleValues 80
    .Series(0).Marks.Visible = True
    .Aspect.Chart3DPercent = 50
  End With
  VScroll1_Scroll
End Sub

Private Sub Text1_Change()
  Text1_Confirm
End Sub

Private Sub Text1_Confirm()
  If Not IsNumeric(Text1.Text) Then
    KeepFocus = True
    MsgBox "Please insert a numeric value", , "Text1"
  Else
    TChart1.Series(0).Marks.DrawEvery = Val(Text1.Text)
    VScroll1.Value = Val(Text1.Text)
  End If
End Sub

Private Sub VScroll1_Change()
  VScroll1_Scroll
End Sub

Private Sub VScroll1_Scroll()
  Text1.Text = Str$(VScroll1.Value)
  Text1_Confirm
End Sub
