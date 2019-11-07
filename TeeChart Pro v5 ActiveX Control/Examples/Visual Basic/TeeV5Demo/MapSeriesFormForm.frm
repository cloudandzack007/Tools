VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form MapSeriesFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2895
   ClientTop       =   1725
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4515
      Left            =   0
      OleObjectBlob   =   "MapSeriesFormForm.frx":0000
      TabIndex        =   0
      Top             =   1170
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Axes"
      Height          =   315
      Left            =   2400
      TabIndex        =   5
      Top             =   780
      Value           =   1  'Checked
      Width           =   915
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Marks"
      Height          =   315
      Left            =   3540
      TabIndex        =   4
      Top             =   780
      Value           =   1  'Checked
      Width           =   975
   End
   Begin VB.CheckBox Check3 
      Caption         =   "Palette"
      Height          =   315
      Left            =   4740
      TabIndex        =   3
      Top             =   780
      Value           =   1  'Checked
      Width           =   1035
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit"
      Height          =   315
      Left            =   660
      TabIndex        =   2
      Top             =   780
      Width           =   1155
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   735
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "MapSeriesFormForm.frx":01FA
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "MapSeriesFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
  TChart1.Axis.Visible = Check1.Value
End Sub

Private Sub Check2_Click()
  TChart1.Series(0).Marks.Visible = Check2.Value
End Sub

Private Sub Check3_Click()
  With TChart1.Series(0).asMap
    If Check3.Value = 1 Then
      .UsePalette = True
      .UseColorRange = False
    Else
      .UseColorRange = True
    End If
  End With
End Sub

Private Sub Command1_Click()
  TChart1.EditOneSeries 0
End Sub

Private Sub AddShape(X, Y As Variant, Color As OLE_COLOR, Label As String)
Dim tmpIndex
  With TChart1.Series(0).asMap
    tmpIndex = .Shapes.Add
    For i = 0 To UBound(X)
    .Shapes.Polygon(tmpIndex).AddXY X(i), Y(i)
    Next i
    .Shapes.Polygon(tmpIndex).Color = Color
    .Shapes.Polygon(tmpIndex).Text = Label
    .Shapes.Polygon(tmpIndex).Z = Rnd * 1000 / 1000
  End With
End Sub

Private Sub Form_Load()

 AX = Array(1, 3, 4, 4, 5, 5, 6, 6, 4, 3, 2, 1, 2, 2)
 AY = Array(7, 5, 5, 7, 8, 9, 10, 11, 11, 12, 12, 11, 10, 8)
 BX = Array(5, 7, 8, 8, 7, 6, 5, 4, 4)
 By = Array(4, 4, 5, 6, 7, 7, 8, 7, 5)
 CX = Array(9, 10, 11, 11, 12, 9, 8, 7, 6, 6, 5, 5, 6, 7, 8, 8)
 CY = Array(5, 6, 6, 7, 8, 11, 11, 12, 11, 10, 9, 8, 7, 7, 6, 5)
 DX = Array(12, 14, 15, 14, 13, 12, 11, 11)
 DY = Array(5, 5, 6, 7, 7, 8, 7, 6)
 EX = Array(4, 6, 7, 7, 6, 6, 5, 4, 3, 3, 2)
 EY = Array(11, 11, 12, 13, 14, 15, 16, 16, 15, 14, 13)
 FX = Array(7, 8, 9, 11, 10, 8, 7, 6, 5, 5, 6, 6)
 FY = Array(13, 14, 14, 16, 17, 17, 18, 18, 17, 16, 15, 14)
 GX = Array(10, 12, 12, 14, 13, 11, 9, 8, 7, 7, 8, 9)
 GY = Array(10, 12, 13, 15, 16, 16, 14, 14, 13, 12, 11, 11)
 HX = Array(17, 19, 18, 18, 17, 15, 14, 13, 15, 16)
 HY = Array(11, 13, 14, 16, 17, 15, 15, 14, 12, 12)
 IX = Array(15, 16, 17, 16, 15, 14, 14, 13, 12, 11, 10, 11, 12, 13, 14)
 IY = Array(6, 6, 7, 8, 8, 9, 10, 11, 12, 11, 10, 9, 8, 7, 7)
 JX = Array(15, 16, 16, 17, 17, 16, 15, 13, 12, 12, 14, 14)
 JY = Array(8, 8, 9, 10, 11, 12, 12, 14, 13, 12, 10, 9)
 KX = Array(17, 19, 20, 20, 19, 17, 16, 16, 17, 16)
 KY = Array(5, 5, 6, 8, 8, 10, 9, 8, 7, 6)
 LX = Array(19, 20, 21, 21, 19, 17, 17)
 LY = Array(8, 8, 9, 11, 13, 11, 10)
 
 AddShape AX, AY, vbBlue, "A"
 AddShape BX, By, vbRed, "B"
 AddShape CX, CY, vbYellow, "C"
 AddShape DX, DY, vbGreen, "D"
 AddShape EX, EY, vbCyan, "E"
 AddShape FX, FY, vbBlue, "F"
 AddShape GX, GY, vbMagenta, "G"
 AddShape HX, HY, vbWhite, "H"
 AddShape IX, IY, vbYellow, "I"
 AddShape JX, JY, vbBlack, "J"
 AddShape KX, KY, vbGreen, "K"
 AddShape LX, LY, vbRed, "L"


End Sub
