VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AxisLabelExpForm 
   BorderStyle     =   0  'None
   Caption         =   "AxisLabelExpForm"
   ClientHeight    =   5685
   ClientLeft      =   1950
   ClientTop       =   2040
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "AxisLabelExpForm.frx":0000
      TabIndex        =   1
      Top             =   1410
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1035
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "AxisLabelExpForm.frx":0161
      Top             =   0
      Width           =   7035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show Exponent labels"
      Height          =   255
      Left            =   60
      TabIndex        =   0
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1995
   End
End
Attribute VB_Name = "AxisLabelExpForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Axis.Left.Labels.Exponent = Check1.Value
End Sub

Private Sub Form_Load()
  With TChart1
    TChart1.Axis.Left.Labels.Exponent = True
    .Axis.Left.Labels.ValueFormat = "00e-0"
    .Series(0).Add 1, "", clTeeColor
    .Series(0).Add 10, "", clTeeColor
    .Series(0).Add 100, "", clTeeColor
    .Series(0).Add 1000, "", clTeeColor
    .Series(0).Add 10000, "", clTeeColor
    .Series(0).Add 100000, "", clTeeColor
  End With
End Sub
