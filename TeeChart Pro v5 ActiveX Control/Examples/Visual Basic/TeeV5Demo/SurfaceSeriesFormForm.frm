VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form SurfaceSeriesFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3615
   ClientTop       =   2550
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4455
      Left            =   0
      OleObjectBlob   =   "SurfaceSeriesFormForm.frx":0000
      TabIndex        =   0
      Top             =   1230
      Width           =   7050
   End
   Begin VB.Timer Timer1 
      Enabled         =   0   'False
      Interval        =   50
      Left            =   5700
      Top             =   240
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Animate"
      Height          =   195
      Left            =   120
      TabIndex        =   8
      Top             =   900
      Width           =   1035
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   6720
      Max             =   1
      Min             =   8
      TabIndex        =   7
      Top             =   840
      Value           =   1
      Width           =   255
   End
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   6420
      TabIndex        =   6
      Top             =   840
      Width           =   315
   End
   Begin VB.ComboBox Combo2 
      Height          =   315
      ItemData        =   "SurfaceSeriesFormForm.frx":02B5
      Left            =   3780
      List            =   "SurfaceSeriesFormForm.frx":02C5
      TabIndex        =   3
      Text            =   "Solid & Grid"
      Top             =   840
      Width           =   1755
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "SurfaceSeriesFormForm.frx":02F1
      Left            =   1920
      List            =   "SurfaceSeriesFormForm.frx":0301
      TabIndex        =   2
      Text            =   "Strong Palette"
      Top             =   840
      Width           =   1755
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "SurfaceSeriesFormForm.frx":033F
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label2 
      Caption         =   "Sample:"
      Height          =   195
      Left            =   5760
      TabIndex        =   5
      Top             =   900
      Width           =   615
   End
   Begin VB.Label Label1 
      Caption         =   "Style:"
      Height          =   195
      Left            =   1440
      TabIndex        =   4
      Top             =   900
      Width           =   435
   End
End
Attribute VB_Name = "SurfaceSeriesFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim Delta As Integer

Private Sub Check1_Click()
  Timer1.Enabled = Check1.Value
End Sub

Private Sub Combo1_Change()
  With TChart1.Series(0)
    Select Case Combo1.ListIndex
      Case 0
        .asSurface.UseColorRange = False
        .asSurface.UsePalette = False
      Case 1
        .asSurface.UseColorRange = True
        .asSurface.UsePalette = False
      Case 2
        .asSurface.UseColorRange = False
        .asSurface.UsePalette = True
        .asSurface.PaletteStyle = psPale
      Case 3
        .asSurface.UseColorRange = False
        .asSurface.UsePalette = True
        .asSurface.PaletteStyle = psStrong
    End Select
  End With
  TChart1.Repaint
End Sub

Private Sub Combo1_Click()
  Combo1_Change
End Sub

Private Sub Combo2_Change()
  With TChart1.Series(0)
    Select Case Combo2.ListIndex
      Case 0
        .asSurface.WireFrame = False
        .asSurface.DotFrame = False
        .asSurface.Pen.Visible = True
      Case 1
        .asSurface.WireFrame = False
        .asSurface.DotFrame = False
        .asSurface.Pen.Visible = False
      Case 2
        .asSurface.WireFrame = True
        .asSurface.Pen.Visible = True
      Case 3
        .asSurface.DotFrame = True
    End Select
  End With
  TChart1.Repaint
End Sub

Private Sub Combo2_Click()
  Combo2_Change
End Sub

Private Sub Form_Load()
  Timer1.Enabled = False
  Delta = 1
  VScroll1.Value = 1
  TChart1.Series(0).FillSampleValues (30)
End Sub

Private Sub TChart1_OnBeforeDrawChart()
Dim i
Dim tmpY, tmpZ As Double
  
  tmpY = 0
  tmpZ = 0
  With TChart1.Series(0)
    For i = 0 To .Count - 1
      .YValues.Value(i) = GetYValue(.XValues.Value(i), .asSurface.ZValues.Value(i))
    Next i
  End With
End Sub

Function Square(Value As Double) As Double
  Square = Value * Value
End Function

Private Function GetYValue(ByVal X As Integer, ByVal Z As Integer) As Double
Dim Pi, PiPortion, HalfPi, tmpx, tmpZ As Double
  Pi = 3.142
  GetYValue = 0
  With TChart1.Series(0)
    PiPortion = Pi / (.asSurface.NumXValues)
    HalfPi = Pi * 0.5
    tmpx = X * PiPortion
    tmpZ = Z * PiPortion
    Select Case VScroll1.Value  'sample surfaces
      Case 1
        GetYValue = 0.5 * Square(Cos(X / (.asSurface.NumXValues * 0.2))) + _
        Square(Cos(Z / (.asSurface.NumXValues * 0.2))) - _
        Cos(Z / (.asSurface.NumXValues * 0.5))
      Case 2
        GetYValue = Square(Cos(tmpx)) * Square(Sin(tmpZ))
      Case 3
        GetYValue = Cos(tmpx * tmpx) + Sin(tmpZ * tmpZ)
      Case 4
        GetYValue = Square(Cos(tmpx)) + Square(Sin(tmpZ))
      Case 5
        GetYValue = -tmpx + Square(tmpZ) * Sin(tmpx * tmpZ)
      Case 6
        GetYValue = Sqr(tmpx * tmpx + tmpZ * tmpZ)
      Case 7
        GetYValue = Cos(Abs(tmpx - HalfPi)) * Sin(tmpZ)
      Case 8
        GetYValue = Cos(Abs(tmpx - HalfPi) * Abs(tmpZ - HalfPi))
    End Select
  End With
End Function

Private Sub Text1_Click()
  TChart1.ShowEditor
End Sub

Private Sub Text2_Change()
On Error GoTo proc_err
  VScroll1.Value = Text2.Text
  Exit Sub

proc_err:
  MsgBox ("Please enter a valid integer value from 1 to 8")
End Sub

Private Sub Timer1_Timer()
  If (VScroll1.Value = 8) Then
    Delta = -1
  ElseIf (VScroll1.Value = 1) Then
    Delta = 1
  End If
  VScroll1.Value = VScroll1.Value + Delta
End Sub

Private Sub VScroll1_Change()
  Text2.Text = Str$(VScroll1.Value)
  TChart1.Repaint
End Sub
