VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form GradientMiddleForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3795
   ClientTop       =   3270
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Tag             =   "U"
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3795
      Left            =   0
      OleObjectBlob   =   "MiddleColorForm.frx":0000
      TabIndex        =   0
      Top             =   1890
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   4
      Text            =   "MiddleColorForm.frx":00E0
      Top             =   0
      Width           =   7035
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   5100
      Top             =   1260
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show MiddleColor"
      Height          =   375
      Left            =   0
      TabIndex        =   1
      Top             =   1320
      Width           =   1935
   End
   Begin VB.Label Label2 
      Caption         =   "Click to set colour"
      Height          =   255
      Left            =   3420
      TabIndex        =   2
      Top             =   1380
      Width           =   1575
   End
   Begin VB.Label Label1 
      BackColor       =   &H00FFFFFF&
      BorderStyle     =   1  'Fixed Single
      Height          =   435
      Left            =   2880
      TabIndex        =   3
      Top             =   1260
      Width           =   435
   End
End
Attribute VB_Name = "GradientMiddleForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim Colorset As Boolean

Private Sub Check1_Click()
  If Check1.Value = 1 Then
    If Colorset = False Then
      TChart1.Panel.Gradient.MidColor = RGB(128, 128, 0)
    Else
      TChart1.Panel.Gradient.MidColor = Label1.BackColor
    End If
  Else
    TChart1.Panel.Gradient.MidColor = clNone
  End If
End Sub

Private Sub Form_Load()
  Check1.Value = 1
  Colorset = False
  Label1.BackColor = TChart1.Panel.Gradient.MidColor
End Sub

Private Sub Label1_Click()
  CommonDialog1.ShowColor
  If CommonDialog1.Color > 0 Then
    TChart1.Panel.Gradient.MidColor = CommonDialog1.Color
    Label1.BackColor = CommonDialog1.Color
    Colorset = True
  End If
End Sub
