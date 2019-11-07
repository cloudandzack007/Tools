VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AxisMultiRuntimeForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2790
   ClientTop       =   2340
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleMode       =   0  'User
   ScaleWidth      =   6518.182
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "AxisMultiRuntimeForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Single Axis"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   1200
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "AxisMultiRuntimeForm.frx":028E
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "AxisMultiRuntimeForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  With TChart1
    If Check1.Value = 1 Then
      .Series(1).VerticalAxis = aLeftAxis
      .Series(2).VerticalAxis = aLeftAxis
      .Axis.Left.EndPosition = 100
    Else
      .Series(1).VerticalAxisCustom = 0
      .Series(2).VerticalAxisCustom = 1
      .Axis.Left.EndPosition = 30
    End If
  End With
End Sub

Private Sub Form_Load()
Dim Axis As Integer
  With TChart1
    .Series(0).FillSampleValues (1000)
    .Series(1).FillSampleValues (1000)
    .Series(2).FillSampleValues (1000)
    ' create the axes...
    Axis = .Axis.AddCustom(False)
    .Axis.Custom(Axis).StartPosition = 30
    .Axis.Custom(Axis).EndPosition = 60
    .Axis.Custom(Axis).AxisPen.Color = .Series(1).Color
    .Series(1).VerticalAxisCustom = Axis
    Axis = .Axis.AddCustom(False)
    .Axis.Custom(Axis).StartPosition = 60
    .Axis.Custom(Axis).EndPosition = 100
    .Axis.Custom(Axis).AxisPen.Color = .Series(2).Color
    .Series(2).VerticalAxisCustom = Axis
    .Axis.Left.EndPosition = 30
  End With
End Sub
