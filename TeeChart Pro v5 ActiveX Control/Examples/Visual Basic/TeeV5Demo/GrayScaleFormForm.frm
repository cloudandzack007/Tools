VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form GrayScaleFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3525
   ClientTop       =   1995
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "GrayScaleFormForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Inverted"
      Height          =   315
      Left            =   2220
      TabIndex        =   3
      Top             =   1200
      Width           =   1515
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Greyscale"
      Height          =   315
      Left            =   300
      TabIndex        =   2
      Top             =   1200
      Value           =   1  'Checked
      Width           =   1455
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "GrayScaleFormForm.frx":017A
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "GrayScaleFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Repaint
End Sub

Private Sub Check2_Click()
  TChart1.Repaint
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 8
End Sub

Private Sub TChart1_OnAfterDraw()
  If Check1.Value = 1 Then
    TChart1.Canvas.GrayScale Check2.Value
  End If
End Sub
