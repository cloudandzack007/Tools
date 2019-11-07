VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form CustomAxisEventForm 
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
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4188
      Left            =   0
      TabIndex        =   0
      Top             =   1500
      Width           =   7056
      Base64          =   $"CustomAxisEvent.frx":0000
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "CustomAxisEvent.frx":1330
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Height          =   252
      Left            =   120
      TabIndex        =   2
      Top             =   1080
      Width           =   6252
   End
End
Attribute VB_Name = "CustomAxisEventForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim axisText As String
Dim axisIndex As Integer

Private Sub TChart1_OnMouseMove(ByVal Shift As TeeChart.EShiftState, ByVal X As Long, ByVal Y As Long)
  With TChart1.Axis
  For i = 0 To .CustomCount - 1
    If .Custom(i).Clicked(X, Y) = True Then
      Label1.Caption = "Last Custom Axis under Mouse: " & i
      DoEvents
    End If
  Next i
  End With
End Sub
