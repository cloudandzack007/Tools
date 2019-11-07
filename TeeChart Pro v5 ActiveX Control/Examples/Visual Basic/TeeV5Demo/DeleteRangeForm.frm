VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form DeleteRangeForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5688
   ClientLeft      =   0
   ClientTop       =   0
   ClientWidth     =   7056
   LinkTopic       =   "Form2"
   ScaleHeight     =   5688
   ScaleWidth      =   7056
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  'Windows Default
   Begin TeeChart.TeeCommander TeeCommander1 
      Height          =   456
      Left            =   0
      OleObjectBlob   =   "DeleteRangeForm.frx":0000
      TabIndex        =   3
      Top             =   900
      Width           =   7044
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3948
      Left            =   0
      TabIndex        =   0
      Top             =   1740
      Width           =   7056
      Base64          =   $"DeleteRangeForm.frx":004C
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Animate"
      Height          =   192
      Left            =   5760
      TabIndex        =   2
      Top             =   1440
      Value           =   1  'Checked
      Width           =   972
   End
   Begin VB.Timer Timer1 
      Interval        =   5
      Left            =   4080
      Top             =   960
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "DeleteRangeForm.frx":0216
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "DeleteRangeForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim totalCtr As Double

Private Sub Check1_Click()
  Timer1.Enabled = Check1.Value
End Sub

Private Sub Form_Load()
  TeeCommander1.Chart = TChart1
  With TChart1
    .Series(0).asFastLine.AddRealTime 0, Sin(0)
    For i = 0 To 49
      .Series(0).asFastLine.AddRealTime .Series(0).XValues.Last + 1, Sin((.Series(0).XValues.Last + 1) / 2)
    Next i
    totalCtr = .Series(0).Count
  End With
End Sub

Private Sub TChart1_OnAfterDraw()
  TChart1.Canvas.TextOut 10, 10, "Point count: " & TChart1.Series(0).Count & ", Total points processed: " & totalCtr
End Sub

Private Sub Timer1_Timer()
  If Check1.Value = 1 Then
  With TChart1
    .Series(0).asFastLine.AddRealTime .Series(0).XValues.Last + 1, Sin((.Series(0).XValues.Last + 1) / 2)
    totalCtr = totalCtr + 1
    If .Series(0).Count > 100 And .Axis.Bottom.Minimum > .Series(0).XValues.Minimum + 199 Then
      .Series(0).DeleteRange 0, 100
    End If
  End With
  End If
End Sub
