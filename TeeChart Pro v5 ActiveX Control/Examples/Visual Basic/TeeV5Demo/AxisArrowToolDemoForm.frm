VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AxisArrowToolDemoForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2640
   ClientTop       =   2925
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
      Base64          =   $"AxisArrowToolDemoForm.frx":0000
   End
   Begin VB.CommandButton Command2 
      Caption         =   "By code - Right Axis"
      Height          =   375
      Left            =   5280
      TabIndex        =   5
      Top             =   1080
      Width           =   1755
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit"
      Height          =   375
      Left            =   3720
      TabIndex        =   4
      Top             =   1080
      Width           =   1275
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Active Bottom"
      Height          =   315
      Left            =   1980
      TabIndex        =   3
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1455
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Active Left Top"
      Height          =   315
      Left            =   60
      TabIndex        =   2
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1035
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "AxisArrowToolDemoForm.frx":02CA
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "AxisArrowToolDemoForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Tools.Items(0).Active = Check1.Value
End Sub

Private Sub Check2_Click()
  TChart1.Tools.Items(2).Active = Check2.Value
End Sub

Private Sub Command1_Click()
  TChart1.ShowEditor
End Sub

Private Sub Command2_Click()
Dim tmpIndex
 With TChart1
   .Series(0).VerticalAxis = aRightAxis
   tmpIndex = .Tools.Add(tcAxisArrow)
   .Tools.Items(tmpIndex).asAxisArrow.Axis = TChart1.Axis.Right
   .Tools.Items(0).Active = False
   .Tools.Items(1).Active = False
   Check1.Enabled = False
   Check2.Enabled = False
 End With
End Sub

Private Sub Form_Load()
  With TChart1
   .Series(0).FillSampleValues 10
   With .Tools
    .Items(0).asAxisArrow.Pen.Color = vbYellow
    .Items(1).asAxisArrow.Pen.Color = vbBlue
   End With
  End With
End Sub
