VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AxisMillisecForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2100
   ClientTop       =   2025
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TeeCommander TeeCommander1 
      Height          =   495
      Left            =   0
      OleObjectBlob   =   "AxisMillisecForm.frx":0000
      TabIndex        =   1
      Top             =   720
      Width           =   7035
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4455
      Left            =   0
      OleObjectBlob   =   "AxisMillisecForm.frx":005C
      TabIndex        =   0
      Top             =   1230
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      ForeColor       =   &H00000000&
      Height          =   675
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "AxisMillisecForm.frx":01DE
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "AxisMillisecForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  MsgBox (CDbl(Now))
End Sub

Private Sub Form_Load()
Dim MilliSecTimeConst As Variant
  TeeCommander1.Chart = TChart1
  ' How do we add Milliseconds in VB ?
  ' Don't know ... therefore we'll put double equivalent in this case
  ' 0 in Windows terms = 30th Dec 1899 midnight
  ' 1 = 1 day
  ' Days to now 14th July 2000 = 36721
  ' 1 Sec = 1/86400
  MilliSecTimeConst = (1 / 86400) / 1000
  With TChart1
    .Series(0).XValues.DateTime = True
    .Axis.Bottom.Labels.DateTimeFormat = "ss.zzz"
    .Axis.Bottom.Labels.Angle = 90
    .Axis.Bottom.Labels.OnAxis = False
    .Series(0).AddXY 36721 + (MilliSecTimeConst * 3), Rnd * 3, "", clTeeColor
    .Series(0).AddXY 36721 + (MilliSecTimeConst * 5), Rnd * 3, "", clTeeColor
    .Series(0).AddXY 36721 + (MilliSecTimeConst * 7), Rnd * 3, "", clTeeColor
    .Series(0).AddXY 36721 + (MilliSecTimeConst * 11), Rnd * 3, "", clTeeColor
  End With
End Sub
