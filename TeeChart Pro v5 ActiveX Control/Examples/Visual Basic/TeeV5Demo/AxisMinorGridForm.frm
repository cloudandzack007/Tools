VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AxisMinorGridForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5595
   ClientLeft      =   2085
   ClientTop       =   1575
   ClientWidth     =   7065
   LinkTopic       =   "Form2"
   ScaleHeight     =   5595
   ScaleWidth      =   7065
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Height          =   4095
      Left            =   60
      OleObjectBlob   =   "AxisMinorGridForm.frx":0000
      TabIndex        =   0
      Top             =   1500
      Width           =   6975
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1065
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "AxisMinorGridForm.frx":01C7
      Top             =   0
      Width           =   7035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show Minor Grid"
      Height          =   315
      Left            =   60
      TabIndex        =   1
      Top             =   1140
      Value           =   1  'Checked
      Width           =   2955
   End
End
Attribute VB_Name = "AxisMinorGridForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Axis.Bottom.MinorGrid.Visible = Check1.Value
End Sub

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 4
  End With
End Sub
