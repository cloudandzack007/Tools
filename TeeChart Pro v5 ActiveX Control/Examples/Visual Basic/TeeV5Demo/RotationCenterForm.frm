VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form RotationCenterForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5688
   ClientLeft      =   2892
   ClientTop       =   3192
   ClientWidth     =   7056
   LinkTopic       =   "Form2"
   ScaleHeight     =   5688
   ScaleWidth      =   7056
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4212
      Left            =   0
      TabIndex        =   0
      Top             =   1476
      Width           =   7056
      Base64          =   $"RotationCenterForm.frx":0000
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Surface"
      Height          =   255
      Left            =   6000
      TabIndex        =   9
      Top             =   1080
      Value           =   1  'Checked
      Width           =   915
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Animate"
      Height          =   255
      Left            =   60
      TabIndex        =   8
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1095
   End
   Begin VB.Timer Timer1 
      Interval        =   30
      Left            =   6600
      Top             =   1020
   End
   Begin VB.HScrollBar HScroll3 
      Height          =   255
      LargeChange     =   10
      Left            =   4740
      Max             =   100
      Min             =   -100
      SmallChange     =   5
      TabIndex        =   4
      Top             =   1080
      Width           =   1095
   End
   Begin VB.HScrollBar HScroll2 
      Height          =   255
      LargeChange     =   10
      Left            =   3180
      Max             =   100
      Min             =   -100
      SmallChange     =   5
      TabIndex        =   3
      Top             =   1080
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "RotationCenterForm.frx":02FE
      Top             =   0
      Width           =   7035
   End
   Begin VB.HScrollBar HScroll1 
      Height          =   255
      LargeChange     =   10
      Left            =   1500
      Max             =   200
      Min             =   -200
      SmallChange     =   5
      TabIndex        =   1
      Top             =   1080
      Width           =   1095
   End
   Begin VB.Label Label3 
      Caption         =   "Z:"
      Height          =   255
      Left            =   4560
      TabIndex        =   7
      Top             =   1080
      Width           =   195
   End
   Begin VB.Label Label2 
      Caption         =   "Y:"
      Height          =   255
      Left            =   2940
      TabIndex        =   6
      Top             =   1080
      Width           =   195
   End
   Begin VB.Label Label1 
      Caption         =   "X:"
      Height          =   255
      Left            =   1260
      TabIndex        =   5
      Top             =   1080
      Width           =   195
   End
End
Attribute VB_Name = "RotationCenterForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim Delta, DeltaE As Integer

Private Sub Check1_Click()
  Timer1.Enabled = Check1.Value
End Sub

Private Sub Check2_Click()
  TChart1.Series(0).Active = Check2.Value
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 20
  Delta = 1
  DeltaE = 1
  Timer1.Enabled = True
End Sub

Private Sub HScroll1_Change()
  HScroll1_Scroll
End Sub

Private Sub HScroll1_Scroll()
  TChart1.Canvas.RotationCenter.X = HScroll1.Value
End Sub
Private Sub HScroll2_Change()
  HScroll2_Scroll
End Sub
Private Sub HScroll2_Scroll()
  TChart1.Canvas.RotationCenter.Y = HScroll2.Value
End Sub
Private Sub HScroll3_Change()
  HScroll3_Scroll
End Sub
Private Sub HScroll3_Scroll()
  TChart1.Canvas.RotationCenter.Z = HScroll3.Value
End Sub
Private Sub TChart1_OnAfterDraw()
  Dim tmpx, tmpY, tmpZ As Integer
If Check1.Value = 1 Then ' draw 3D axes
With TChart1
    ' set pen style
    .Canvas.Pen.Color = vbBlue
    .Canvas.Pen.Width = 1
    .Canvas.Pen.Style = psDot
    ' center position
    tmpY = .Canvas.ChartYCenter + CInt(.Canvas.RotationCenter.Y)
    tmpx = .Canvas.ChartXCenter + CInt(.Canvas.RotationCenter.X)
    tmpZ = (.Aspect.Width3D / 2) + CInt(.Canvas.RotationCenter.Z)
    ' draw axes
    .Canvas.HorizLine3D .Axis.Left.Position, .Axis.Right.Position, tmpY, tmpZ
    .Canvas.VertLine3D tmpx, .Axis.Top.Position, .Axis.Bottom.Position, tmpZ
    .Canvas.ZLine3D tmpx, tmpY, 0, .Aspect.Width3D
End With
End If
End Sub
Private Sub Timer1_Timer()
With TChart1.Aspect
    .Rotation = .Rotation + Delta
    If .Rotation = 360 Then
      Delta = -1
    ElseIf .Rotation = 270 Then
      Delta = 1
    End If
      .Elevation = .Elevation + DeltaE
    If .Elevation = 360 Then
      DeltaE = -1
    ElseIf .Elevation = 300 Then
      DeltaE = 1
    End If
End With
End Sub
