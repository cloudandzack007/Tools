VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PolarRadar_Transparency 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3495
   ClientTop       =   2415
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4095
      Left            =   0
      OleObjectBlob   =   "PolarRadar_Transparency.frx":0000
      TabIndex        =   1
      Top             =   1590
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Transparency"
      Height          =   315
      Left            =   180
      TabIndex        =   5
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1755
   End
   Begin VB.HScrollBar HScroll1 
      Height          =   195
      LargeChange     =   5
      Left            =   2160
      Max             =   100
      SmallChange     =   5
      TabIndex        =   4
      Top             =   1260
      Value           =   45
      Width           =   1095
   End
   Begin VB.HScrollBar HScroll2 
      Height          =   195
      LargeChange     =   5
      Left            =   3780
      Max             =   100
      SmallChange     =   5
      TabIndex        =   3
      Top             =   1260
      Value           =   45
      Width           =   1095
   End
   Begin VB.HScrollBar HScroll3 
      Height          =   195
      LargeChange     =   5
      Left            =   5460
      Max             =   100
      SmallChange     =   5
      TabIndex        =   2
      Top             =   1260
      Value           =   45
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "PolarRadar_Transparency.frx":0536
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Series0"
      Height          =   195
      Left            =   2160
      TabIndex        =   8
      Top             =   1020
      Width           =   675
   End
   Begin VB.Label Label2 
      Caption         =   "Series1"
      Height          =   255
      Left            =   3780
      TabIndex        =   7
      Top             =   1020
      Width           =   735
   End
   Begin VB.Label Label3 
      Caption         =   "Series2"
      Height          =   195
      Left            =   5460
      TabIndex        =   6
      Top             =   1020
      Width           =   735
   End
End
Attribute VB_Name = "PolarRadar_Transparency"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
  With TChart1
    If Check1.Value = 1 Then
      CheckTransparencyValues
    Else
      .Series(0).asPolar.Transparency = 0
      .Series(1).asPolar.Transparency = 1
      .Series(2).asPolar.Transparency = 2
    End If
  End With
End Sub

Private Sub Form_Load()
  With TChart1
    If Not .Canvas.IsScreenHighColor = True Then
      .Panel.Gradient.Visible = False
    End If
    .Series(0).FillSampleValues 10
    .Series(1).FillSampleValues 10
    .Series(2).FillSampleValues 10
  End With
  Check1_Click
End Sub
Private Sub CheckTransparencyValues()
  If Check1.Value = 1 Then
   With TChart1
    .Series(0).asPolar.Transparency = HScroll1.Value
    .Series(1).asPolar.Transparency = HScroll2.Value
    .Series(2).asPolar.Transparency = HScroll3.Value
   End With
  End If
End Sub
Private Sub HScroll1_Change()
  CheckTransparencyValues
End Sub

Private Sub HScroll1_Scroll()
  CheckTransparencyValues
End Sub

Private Sub HScroll2_Change()
  CheckTransparencyValues
End Sub

Private Sub HScroll2_Scroll()
  CheckTransparencyValues
End Sub

Private Sub HScroll3_Change()
  CheckTransparencyValues
End Sub

Private Sub HScroll3_Scroll()
  CheckTransparencyValues
End Sub

Private Sub Text1_DblClick()
  TChart1.ShowEditor
End Sub
