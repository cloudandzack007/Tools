VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form SubTitlesForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2250
   ClientTop       =   2220
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4215
      Left            =   0
      OleObjectBlob   =   "SubTitlesForm.frx":0000
      TabIndex        =   0
      Top             =   1470
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   3
      Text            =   "SubTitlesForm.frx":026C
      Top             =   0
      Width           =   7035
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Show Subfooter"
      Height          =   315
      Left            =   3360
      TabIndex        =   2
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1875
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show Subtitle"
      Height          =   315
      Left            =   120
      TabIndex        =   1
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1695
   End
End
Attribute VB_Name = "SubTitlesForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.SubHeader.Visible = Check1.Value
End Sub

Private Sub Check2_Click()
  TChart1.SubFooter.Visible = Check2.Value
End Sub
