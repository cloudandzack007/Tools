VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ColorLine_DragRepaint 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3690
   ClientTop       =   1980
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4335
      Left            =   0
      OleObjectBlob   =   "ColorLine_DragRepaint.frx":0000
      TabIndex        =   1
      Top             =   1350
      Width           =   7050
   End
   Begin VB.CheckBox Check2 
      Caption         =   "3D"
      Height          =   255
      Left            =   2940
      TabIndex        =   3
      Top             =   1020
      Width           =   1095
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Repaint when drawing"
      Height          =   195
      Left            =   240
      TabIndex        =   2
      Top             =   1020
      Width           =   2055
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "ColorLine_DragRepaint.frx":0245
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ColorLine_DragRepaint"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
Dim i
  With TChart1.Tools
    For i = 0 To .Count - 1
      .Items(i).asColorLine.DragRepaint = Check1.Value
    Next i
  End With
End Sub

Private Sub Check2_Click()
  TChart1.Aspect.View3D = Check2.Value
End Sub

Private Sub Form_Load()
Dim a

  a = Array(40, 220, 140, 512, 256, 310, 60, 100, 600)
  
  With TChart1.Series(0)
    .AddArray 9, a
  End With
End Sub

Private Sub Text1_DblClick()
  TChart1.ShowEditor
End Sub
