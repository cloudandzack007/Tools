VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form SurfaceFloatForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3060
   ClientTop       =   3780
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4395
      Left            =   0
      OleObjectBlob   =   "SurfaceFloatForm.frx":0000
      TabIndex        =   0
      Top             =   1290
      Width           =   7050
   End
   Begin VB.CheckBox Check2 
      Caption         =   "OpenGL"
      Height          =   315
      Left            =   3060
      TabIndex        =   3
      Top             =   960
      Width           =   2175
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Irregular grid"
      Height          =   315
      Left            =   60
      TabIndex        =   2
      Top             =   960
      Value           =   1  'Checked
      Width           =   2115
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   915
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "SurfaceFloatForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).asSurface.IrregularGrid = Check1.Value
End Sub

Private Sub Check2_Click()
  With TChart1
    .Aspect.OpenGL.Active = Check2.Value
  End With
End Sub

Private Sub Form_Load()
Dim XVal, ZVal As Variant
Dim X, Z As Integer
Dim Y As Double
Dim Pi
  Label1.Caption = "Surface series accept now X,Y and Z values as ""double"" floating point numbers. " _
  & "The IrregularGrid property controls if X and Z values should be equi-distant or not." & Chr(13) _
  & Chr(13) _
  & "Example: TChart1.Series(0).asSurface.AddXYZ -123.456, 321.45, 456.789 "
  XVal = Array(0.1, 0.2, 0.3, 0.5, 0.8, 1.1, 1.5, 2, 2.2, 3)
  ZVal = Array(0.5, 0.6, 0.7, 0.75, 0.8, 1.1, 1.5, 2, 2.2, 5.6)
  Pi = 3.141592
  With TChart1.Series(0)
    'Now add all "Y" points...
    .Clear
    'An irregular grid of 10 x 10 cells
    .asSurface.IrregularGrid = True
    .asSurface.NumXValues = 10
    .asSurface.NumZValues = 10
    For X = 0 To 9 ' = 10 rows
      For Z = 0 To 9 ' = 10 columns
        Y = Sin(Z * Pi / 10) * Cos(X * Pi / 5) ' example Y value
        .asSurface.AddXYZ XVal(X), Y, ZVal(Z), "", clTeeColor
      Next Z
    Next X
  End With
End Sub
