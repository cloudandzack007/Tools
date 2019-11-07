VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form NearestToolDemoForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3045
   ClientTop       =   3330
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "NearestToolDemoForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit"
      Height          =   435
      Left            =   5700
      TabIndex        =   6
      Top             =   1020
      Width           =   1335
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "NearestToolDemoForm.frx":01E5
      Left            =   1440
      List            =   "NearestToolDemoForm.frx":01F5
      TabIndex        =   4
      Text            =   "Circle"
      Top             =   1080
      Width           =   1635
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Draw lines"
      Height          =   315
      Left            =   4320
      TabIndex        =   3
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Active"
      Height          =   315
      Left            =   3240
      TabIndex        =   2
      Top             =   1080
      Value           =   1  'Checked
      Width           =   855
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "NearestToolDemoForm.frx":021B
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Style:"
      Height          =   195
      Left            =   900
      TabIndex        =   5
      Top             =   1140
      Width           =   495
   End
End
Attribute VB_Name = "NearestToolDemoForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Tools.Items(0).Active = Check1.Value
End Sub

Private Sub Check2_Click()
  TChart1.Tools.Items(0).asNearest.DrawLine = Check2.Value
End Sub

Private Sub Combo1_Change()
  Combo1_Click
End Sub

Private Sub Combo1_Click()
  With TChart1.Tools(0)
    .asNearest.Style = Combo1.ListIndex
  End With
End Sub

Private Sub Command1_Click()
  TChart1.ShowEditor
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 6
End Sub
