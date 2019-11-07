VERSION 4.00
Begin VB.Form Form1 
   Caption         =   "TeeChart-ActiveX Visual Basic Example"
   ClientHeight    =   4605
   ClientLeft      =   1530
   ClientTop       =   1425
   ClientWidth     =   6240
   Height          =   4965
   Left            =   1470
   LinkTopic       =   "Form1"
   ScaleHeight     =   4605
   ScaleWidth      =   6240
   Top             =   1125
   Width           =   6360
   Begin TeeChart.TChart TChart1 
      Height          =   3750
      Left            =   120
      OleObjectBlob   =   "fmanual.frx":0000
      TabIndex        =   0
      Top             =   120
      Width           =   6000
   End
   Begin VB.CommandButton Command3 
      Caption         =   "3) Show Editor"
      Height          =   495
      Left            =   4320
      TabIndex        =   3
      Top             =   3960
      Width           =   1695
   End
   Begin VB.CommandButton Command2 
      Caption         =   "2) Change Scales"
      Height          =   495
      Left            =   2040
      TabIndex        =   2
      Top             =   3960
      Width           =   2055
   End
   Begin VB.CommandButton Command1 
      Caption         =   "1) Add points"
      Height          =   495
      Left            =   120
      TabIndex        =   1
      Top             =   3960
      Width           =   1695
   End
End
Attribute VB_Name = "Form1"
Attribute VB_Creatable = False
Attribute VB_Exposed = False
Private Sub Command1_Click()
  With TChart1.Series(0)
    .Clear
    .Add 100, "Europe", vbRed
    .Add 300, "USA", vbBlue
    .Add 200, "Asia", vbGreen
  End With
End Sub


Private Sub Command2_Click()
  TChart1.Axis.Left.SetMinMax -100, 1000
End Sub


Private Sub Command3_Click()
TChart1.ShowEditor
End Sub


