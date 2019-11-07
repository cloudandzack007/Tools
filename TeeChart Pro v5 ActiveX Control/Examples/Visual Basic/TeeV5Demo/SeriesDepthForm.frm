VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form SeriesDepthForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2415
   ClientTop       =   3210
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3915
      Left            =   0
      OleObjectBlob   =   "SeriesDepthForm.frx":0000
      TabIndex        =   0
      Top             =   1770
      Width           =   7050
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   375
      LargeChange     =   5
      Left            =   2040
      Max             =   0
      Min             =   360
      SmallChange     =   5
      TabIndex        =   4
      Top             =   1320
      Value           =   5
      Width           =   255
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1440
      TabIndex        =   3
      Top             =   1320
      Width           =   555
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Automatic depth"
      Height          =   255
      Left            =   3060
      TabIndex        =   2
      Top             =   1380
      Width           =   1695
   End
   Begin VB.Label Label2 
      Caption         =   "Series depth:"
      Height          =   255
      Left            =   360
      TabIndex        =   5
      Top             =   1380
      Width           =   1035
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   1275
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "SeriesDepthForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
Dim tmp
  If Check1.Value = 1 Then
    tmp = -1
  Else
    tmp = VScroll1.Value
  End If
  With TChart1
    .Series(0).Depth = tmp
    .Series(1).Depth = tmp
    .Series(2).Depth = tmp
  End With
End Sub

Private Sub Form_Load()
  Label1.Caption = "Most Series have a new property to control the size in the Z (Depth) direction. By default, Depth is -1, meaning ""automatic"" depth calculation." & Chr(13) _
  & Chr(13) _
  & "Example: TChart1.Series(0).Depth = 3"
  With TChart1
    .Series(0).FillSampleValues 8
    .Series(1).FillSampleValues 8
    .Series(2).FillSampleValues 8
  End With
  VScroll1_Change
End Sub
Private Sub Text1_Change()
Text1_Validate (True)
End Sub
Private Sub Text1_Validate(Cancel As Boolean)
If Not IsNumeric(Text1.Text) Or Val(Text1.Text) > 360 Then
KeepFocus = True
MsgBox "Please insert a number", , "Text1"
Else
With TChart1
.Series(0).Depth = Val(Text1.Text)
.Series(1).Depth = Val(Text1.Text)
.Series(2).Depth = Val(Text1.Text)
End With
VScroll1.Value = Val(Text1.Text)
End If
End Sub
Private Sub VScroll1_Change()
VScroll1_Scroll
End Sub
Private Sub VScroll1_Scroll()
Text1.Text = Str$(VScroll1.Value)
Text1_Validate (False)
End Sub
