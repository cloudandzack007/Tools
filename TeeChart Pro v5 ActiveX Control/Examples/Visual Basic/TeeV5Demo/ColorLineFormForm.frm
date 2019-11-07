VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ColorLineFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3345
   ClientTop       =   2490
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4215
      Left            =   0
      OleObjectBlob   =   "ColorLineFormForm.frx":0000
      TabIndex        =   0
      Top             =   1470
      Width           =   7050
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   6360
      Top             =   1020
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin VB.CheckBox Check3 
      Caption         =   "Allow drag"
      Height          =   315
      Left            =   2880
      TabIndex        =   4
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1275
   End
   Begin VB.CheckBox Check2 
      Caption         =   "3D"
      Height          =   315
      Left            =   1740
      TabIndex        =   3
      Top             =   1080
      Value           =   1  'Checked
      Width           =   555
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show lines"
      Height          =   315
      Left            =   180
      TabIndex        =   2
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1515
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ColorLineFormForm.frx":02FC
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label2 
      BackColor       =   &H00FFFFFF&
      BorderStyle     =   1  'Fixed Single
      Height          =   315
      Left            =   5280
      TabIndex        =   6
      Top             =   1080
      Width           =   315
   End
   Begin VB.Label Label1 
      BackColor       =   &H00FFFFFF&
      BorderStyle     =   1  'Fixed Single
      Height          =   315
      Left            =   4740
      TabIndex        =   5
      Top             =   1080
      Width           =   315
   End
End
Attribute VB_Name = "ColorLineFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Tools.Items(0).Active = Check1.Value
  TChart1.Tools.Items(1).Active = Check1.Value
End Sub

Private Sub Check2_Click()
  TChart1.Aspect.View3D = Check2.Value
End Sub

Private Sub Check3_Click()
  TChart1.Tools.Items(0).asColorLine.AllowDrag = Check3.Value
  TChart1.Tools.Items(1).asColorLine.AllowDrag = Check3.Value
End Sub

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 20
    .Series(1).FillSampleValues 20
    .Tools.Items(0).asColorLine.Value = .Series(0).YValues.Minimum _
        + ((.Series(0).YValues.Maximum _
        - .Series(0).YValues.Minimum) / 2)
    .Tools.Items(1).asColorLine.Value = .Series(0).XValues.Minimum _
        + ((.Series(0).XValues.Maximum _
        - .Series(0).XValues.Minimum) / 2)
    Label1.BackColor = TChart1.Tools(0).asColorLine.Pen.Color
    Label2.BackColor = TChart1.Tools(1).asColorLine.Pen.Color
  End With
End Sub

Private Sub Label1_Click()
  CommonDialog1.ShowColor
  If CommonDialog1.Color <> 0 Then
    TChart1.Tools.Items(0).asColorLine.Pen.Color = CommonDialog1.Color
    Label1.BackColor = CommonDialog1.Color
  End If
End Sub

Private Sub Label2_Click()
  CommonDialog1.ShowColor
  If CommonDialog1.Color <> 0 Then
    TChart1.Tools.Items(1).asColorLine.Pen.Color = CommonDialog1.Color
    Label1.BackColor = CommonDialog1.Color
  End If
End Sub
