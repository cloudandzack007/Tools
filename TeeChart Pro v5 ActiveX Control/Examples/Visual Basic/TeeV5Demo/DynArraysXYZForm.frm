VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form DynArraysXYZForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3030
   ClientTop       =   2310
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TeeCommander TeeCommander1 
      Height          =   495
      Left            =   0
      OleObjectBlob   =   "DynArraysXYZForm.frx":0000
      TabIndex        =   4
      Top             =   900
      Width           =   1935
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4280
      Left            =   0
      OleObjectBlob   =   "DynArraysXYZForm.frx":004C
      TabIndex        =   0
      Top             =   1410
      Width           =   7050
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Toggle OpenGL to rotate 360º"
      Height          =   375
      Left            =   4620
      TabIndex        =   3
      Top             =   960
      Width           =   2415
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Add data"
      Height          =   375
      Left            =   2520
      TabIndex        =   2
      Top             =   960
      Width           =   1455
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "DynArraysXYZForm.frx":0215
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "DynArraysXYZForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim ZArray() As Double
Dim YArray() As Double
Dim XArray() As Double

Private Sub Command1_Click()
  With TChart1.Series(0)
    .asSurface.IrregularGrid = True
    .asSurface.AddArrayXYZ XArray, YArray, ZArray
  End With
End Sub

Private Sub Command2_Click()
  With TChart1
    .Series(0).asSurface.Pen.Visible = Not .Series(0).asSurface.Pen.Visible
    .Aspect.OpenGL.Active = Not .Aspect.OpenGL.Active
    .Walls.Left.Transparent = .Aspect.OpenGL.Active
    .Walls.Bottom.Transparent = .Aspect.OpenGL.Active
  End With
End Sub

Private Sub Form_Load()
Dim CountVal As Integer
Dim HalfPi As Double

  TeeCommander1.Chart = TChart1
  TeeCommander1.Controls = Array(tcbNormal, tcbRotate, tcbZoom, tcbSeparator, tcbEdit)
  
  TChart1.Aspect.OpenGL.LightPosition.X = 122
  TChart1.Series(0).Clear
 
  ReDim ZArray(14000)
  ReDim YArray(14000)
  ReDim XArray(14000)

  CountVal = 0
  HalfPi = 3.142 / 2
 
  For i = 0 To 199
    For j = 0 To 69
      XArray(CountVal + j) = i
      ZArray(CountVal + j) = j
      YArray(CountVal + j) = Cos(Abs((XArray(CountVal + j) / 20) - HalfPi)) _
                               * Sin(ZArray(CountVal + j) / 20)
    Next j
    CountVal = (i + 1) * 70
  Next i
End Sub
