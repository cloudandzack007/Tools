VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form Point3DEventForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3000
   ClientTop       =   2955
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TeeCommander TeeCommander1 
      Height          =   555
      Left            =   0
      OleObjectBlob   =   "Point3DEventForm.frx":0000
      TabIndex        =   2
      Top             =   540
      Width           =   7035
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4215
      Left            =   0
      OleObjectBlob   =   "Point3DEventForm.frx":005C
      TabIndex        =   0
      Top             =   1470
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Use event"
      Height          =   315
      Left            =   0
      TabIndex        =   3
      Top             =   1140
      Value           =   1  'Checked
      Width           =   2235
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Point 3D series now has an event to supply each point style, color, etc."
      Height          =   495
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "Point3DEventForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Repaint
End Sub

Private Sub Form_Load()
  TeeCommander1.Chart = TChart1
  With TChart1
    .Series(0).FillSampleValues 20
  End With
End Sub

Private Sub TChart1_OnGetSeriesPointerStyle(ByVal SeriesIndex As Long, ByVal ValueIndex As Long, AStyle As TeeChart.EPointerStyle)
  AStyle = psRectangle
  With TChart1
    If Check1.Value = 1 Then
      Select Case ValueIndex Mod 3
        Case 0: AStyle = psCircle
                .Series(0).asPoint3D.Pointer.Brush.Color = vbRed
        Case 1: AStyle = psTriangle
                .Series(0).asPoint3D.Pointer.Brush.Color = vbBlue
        Case 2: AStyle = psRectangle
                .Series(0).asPoint3D.Pointer.Brush.Color = vbYellow
      End Select
    Else
    AStyle = psRectangle
      .Series(0).asPoint3D.Pointer.Brush.Color = clTeeColor
    End If
  End With
End Sub
