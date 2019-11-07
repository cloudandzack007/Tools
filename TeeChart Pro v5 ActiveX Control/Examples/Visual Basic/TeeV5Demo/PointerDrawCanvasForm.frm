VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PointerDrawCanvasForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3030
   ClientTop       =   2370
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4035
      Left            =   0
      OleObjectBlob   =   "PointerDrawCanvasForm.frx":0000
      TabIndex        =   0
      Top             =   1650
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "3D"
      Height          =   315
      Left            =   3300
      TabIndex        =   4
      Top             =   1200
      Width           =   975
   End
   Begin VB.PictureBox Picture1 
      BorderStyle     =   0  'None
      Height          =   255
      Left            =   1800
      ScaleHeight     =   255
      ScaleWidth      =   495
      TabIndex        =   2
      Top             =   1260
      Width           =   495
   End
   Begin VB.Label Label2 
      Caption         =   "Pointer displayed here:"
      Height          =   255
      Left            =   60
      TabIndex        =   3
      Top             =   1200
      Width           =   1635
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   1095
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "PointerDrawCanvasForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim Iconset As Boolean

Private Sub Check1_Click()
  TChart1.Aspect.View3D = Check1.Value
End Sub

Private Sub Form_Load()
  Label1.Caption = "Series Pointer objects can now draw into custom Canvas. " _
  & "Eg. They are now displayed in TeeChart's editor comboboxes and in this example they are painted to a Picturebox." & Chr(13) _
  & Chr(13) _
  & "See the example code. Move the mouse over a point..."
  TChart1.Series(0).asPoint.Pointer.Style = CInt(Rnd * 8)
  TChart1.Series(0).FillSampleValues 10
End Sub

Private Sub TChart1_OnMouseMove(ByVal Shift As TeeChart.EShiftState, ByVal X As Long, ByVal Y As Long)
Dim tmp
  With TChart1.Series(0)
    tmp = .Clicked(X, Y)
    If tmp <> -1 Then
      .asPoint.Pointer.DrawPointer Picture1.hDC, _
      False, 5, 5, 5, 5, .PointColor(tmp), .asPoint.Pointer.Style
      Iconset = True
    ElseIf Iconset = True Then
      Picture1.Refresh
      Iconset = False
    End If
  End With
End Sub
