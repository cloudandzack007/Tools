VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AxisTitleVisibleForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2220
   ClientTop       =   1890
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4695
      Left            =   0
      OleObjectBlob   =   "AxisTitleVisibleForm.frx":0000
      TabIndex        =   0
      Top             =   990
      Width           =   7050
   End
   Begin VB.TextBox Text2 
      BackColor       =   &H00C0FFFF&
      Height          =   555
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   4
      Text            =   "AxisTitleVisibleForm.frx":023C
      Top             =   0
      Width           =   7035
   End
   Begin VB.TextBox Text1 
      Height          =   315
      Left            =   3000
      TabIndex        =   2
      Top             =   600
      Width           =   2055
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Axis Title visible"
      Height          =   315
      Left            =   120
      TabIndex        =   1
      Top             =   600
      Value           =   1  'Checked
      Width           =   1875
   End
   Begin VB.Label Label2 
      Caption         =   "Axis Title text"
      Height          =   255
      Left            =   5160
      TabIndex        =   3
      Top             =   660
      Width           =   1335
   End
End
Attribute VB_Name = "AxisTitleVisibleForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Axis.Left.Title.Visible = Check1.Value
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 15
  Text1.Text = TChart1.Axis.Left.Title.Caption
End Sub

Private Sub Text1_Change()
  TChart1.Axis.Left.Title.Caption = Text1.Text
End Sub
