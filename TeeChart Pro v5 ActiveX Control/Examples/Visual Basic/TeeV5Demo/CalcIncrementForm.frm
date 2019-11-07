VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form CalcIncrementForm 
   BorderStyle     =   0  'None
   Caption         =   "Form3"
   ClientHeight    =   5685
   ClientLeft      =   2745
   ClientTop       =   3105
   ClientWidth     =   7050
   LinkTopic       =   "Form3"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4305
      Left            =   0
      TabIndex        =   0
      Top             =   1380
      Width           =   7050
      Base64          =   $"CalcIncrementForm.frx":0000
   End
   Begin VB.TextBox MaxMinVisibleForm 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "CalcIncrementForm.frx":01EC
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label4 
      Caption         =   "Y Axis increment:"
      Height          =   255
      Left            =   3840
      TabIndex        =   5
      Top             =   900
      Width           =   1335
   End
   Begin VB.Label Label3 
      Caption         =   "X Axis increment:"
      Height          =   255
      Left            =   480
      TabIndex        =   4
      Top             =   900
      Width           =   1275
   End
   Begin VB.Label Label2 
      Height          =   255
      Left            =   5220
      TabIndex        =   3
      Top             =   900
      Width           =   1095
   End
   Begin VB.Label Label1 
      Height          =   255
      Left            =   1800
      TabIndex        =   2
      Top             =   900
      Width           =   1395
   End
End
Attribute VB_Name = "CalcIncrementForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
  With TChart1.Series(0)
    For i = 0 To 30 Step 2
      .AddXY i, Rnd * 100, "", clTeeColor
    Next i
  End With
End Sub

Private Sub TChart1_OnAfterDraw()
  With TChart1.Axis
    Label1.Caption = .Bottom.CalcIncrement
    Label2.Caption = .Left.CalcIncrement
  End With
End Sub
