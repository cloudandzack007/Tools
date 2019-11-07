VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form Volume_Origin 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3945
   ClientTop       =   2175
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "Volume_Origin.frx":0000
      TabIndex        =   0
      Top             =   1410
      Width           =   7050
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   3300
      Max             =   -20
      Min             =   100
      TabIndex        =   4
      Top             =   1080
      Value           =   33
      Width           =   255
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   2580
      TabIndex        =   3
      Text            =   "33"
      Top             =   1080
      Width           =   735
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Use Origin"
      Height          =   315
      Left            =   360
      TabIndex        =   2
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1035
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "Volume_Origin.frx":0186
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "Volume_Origin"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
  TChart1.Series(0).asVolume.UseYOrigin = Check1.Value
  TChart1.Repaint
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 50
  TChart1.Series(0).asVolume.YOrigin = Val(Text2.Text)
  TChart1.Series(0).asVolume.UseYOrigin = True
End Sub

Private Sub Text2_Change()
  Text2_Confirm
End Sub

Private Sub Text2_Confirm()
  If Not IsNumeric(Text2.Text) Then
    KeepFocus = True
    MsgBox "Please insert a numeric value", , "Period"
  Else
    TChart1.Series(0).asVolume.YOrigin = Val(Text2.Text)
    VScroll1.Value = Val(Text2.Text)
  End If
End Sub

Private Sub VScroll1_Change()
  VScroll1_Scroll
End Sub

Private Sub VScroll1_Scroll()
  Text2.Text = Str$(VScroll1.Value)
  Text2_Confirm
End Sub
