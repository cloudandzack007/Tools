VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AxisBehindForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2295
   ClientTop       =   2235
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4635
      Left            =   0
      TabIndex        =   0
      Top             =   1050
      Width           =   7050
      Base64          =   $"AxisBehindForm.frx":0000
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   555
      Left            =   0
      TabIndex        =   2
      Text            =   "Place the grid in front or behind the Series."
      Top             =   0
      Width           =   7035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Axis behind"
      Height          =   315
      Left            =   60
      TabIndex        =   1
      Top             =   660
      Value           =   1  'Checked
      Width           =   2055
   End
End
Attribute VB_Name = "AxisBehindForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Axis.DrawAxesBeforeSeries = Check1.Value
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 10
  TChart1.Axis.DrawAxesBeforeSeries = True
End Sub
