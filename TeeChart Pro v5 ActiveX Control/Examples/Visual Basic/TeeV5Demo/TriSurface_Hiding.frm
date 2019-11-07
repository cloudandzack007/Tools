VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form TriSurface_Hiding 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3645
   ClientTop       =   1845
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4035
      Left            =   0
      OleObjectBlob   =   "TriSurface_Hiding.frx":0000
      TabIndex        =   1
      Top             =   1650
      Width           =   7050
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Cache Triangles"
      Height          =   255
      Left            =   3720
      TabIndex        =   3
      Top             =   1380
      Value           =   1  'Checked
      Width           =   1575
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Hide Triangles"
      Height          =   255
      Left            =   1320
      TabIndex        =   2
      Top             =   1380
      Value           =   1  'Checked
      Width           =   1515
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1335
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "TriSurface_Hiding.frx":02E6
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "TriSurface_Hiding"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
  CheckParams
End Sub

Private Sub Check2_Click()
  CheckParams
End Sub

Private Sub Form_Load()
  CheckParams
  Fill
End Sub

Private Sub CheckParams()
  With TChart1.Series(0).asTriSurface
    .HideTriangles = Check1.Value
    .CacheTriangles = Check2.Value
  End With
End Sub

Private Sub Text1_DblClick()
  TChart1.ShowEditor
End Sub

Private Function Square(a As Double) As Double
  Square = a * a
End Function

Private Sub Fill()
Dim n, m, X, Z

  With TChart1.Series(0)
    .Clear
    n = 0.5
    m = 10
    For X = -m To m
        For Z = -m To m
          .asTriSurface.AddXYZ X, _
          4 * Cos(3 * Sqr(Square(X / 3) + Square(Z / 3))) * Exp(-n * (Sqr(Square(X / 3) + Square(Z / 3)))), _
          Z, "", clTeeColor
        Next Z
    Next X
  End With
End Sub
