VERSION 4.00
Begin VB.Form Form1 
   Caption         =   "TeeChart Pro -- ODBC Candle charting without programming"
   ClientHeight    =   3720
   ClientLeft      =   1665
   ClientTop       =   1395
   ClientWidth     =   6870
   Height          =   4080
   Left            =   1605
   LinkTopic       =   "Form1"
   ScaleHeight     =   3720
   ScaleWidth      =   6870
   Top             =   1095
   Width           =   6990
   Begin TeeChart.TChart TChart1 
      Height          =   3030
      Left            =   120
      OleObjectBlob   =   "Form ODBC Candle.frx":0000
      TabIndex        =   0
      Top             =   120
      Width           =   6615
   End
   Begin VB.HScrollBar HScroll1 
      Height          =   255
      Left            =   4200
      Max             =   50
      Min             =   1
      TabIndex        =   4
      Top             =   3360
      Value           =   5
      Width           =   1215
   End
   Begin VB.CheckBox Check1 
      Caption         =   "&Candle Stick"
      Height          =   255
      Left            =   1800
      TabIndex        =   3
      Top             =   3360
      Width           =   1335
   End
   Begin VB.CommandButton Command2 
      Caption         =   "&Edit Chart..."
      Height          =   375
      Left            =   120
      TabIndex        =   2
      Top             =   3240
      Width           =   1455
   End
   Begin VB.CommandButton Command1 
      Caption         =   "&Close"
      Height          =   375
      Left            =   5640
      TabIndex        =   1
      Top             =   3240
      Width           =   1095
   End
   Begin VB.Label Label1 
      Caption         =   "Width:"
      Height          =   255
      Left            =   3600
      TabIndex        =   5
      Top             =   3360
      Width           =   495
   End
End
Attribute VB_Name = "Form1"
Attribute VB_Creatable = False
Attribute VB_Exposed = False
Private Sub Check1_Click()
 If Check1.Value Then
    TChart1.Series(0).asCandle.CandleStyle = csCandleStick
 Else
    TChart1.Series(0).asCandle.CandleStyle = csCandleBar
 End If
End Sub


Private Sub Command1_Click()
  End
End Sub

Private Sub Command2_Click()
 TChart1.ShowEditor
End Sub


Private Sub HScroll1_Change()
 TChart1.Series(0).asCandle.CandleWidth = HScroll1.Value
End Sub


