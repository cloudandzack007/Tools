VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BackWallGradientForm 
   BorderStyle     =   0  'None
   Caption         =   "GradientForm"
   ClientHeight    =   5685
   ClientLeft      =   2145
   ClientTop       =   2445
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4395
      Left            =   0
      TabIndex        =   0
      Top             =   1290
      Width           =   7050
      Base64          =   $"BackWallGradientForm.frx":0000
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   675
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "BackWallGradientForm.frx":009E
      Top             =   0
      Width           =   7035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Backwall gradient"
      Height          =   375
      Left            =   60
      TabIndex        =   1
      Top             =   780
      Value           =   1  'Checked
      Width           =   1635
   End
End
Attribute VB_Name = "BackWallGradientForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Walls.Back.Transparent = False
  TChart1.Walls.Back.Gradient.Visible = Check1.Value
End Sub

Private Sub Form_Load()
  TChart1.Walls.Back.Transparent = False
  TChart1.Walls.Back.Gradient.Visible = True
  TChart1.Walls.Back.Gradient.MidColor = vbCyan
End Sub

Private Sub TChart1_OnDblClick()
  TChart1.ShowEditor
  TChart1.StopMouse
End Sub
