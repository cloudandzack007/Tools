VERSION 4.00
Begin VB.Form Form1 
   Caption         =   "TeeChart Pro -- ODBC Charting example"
   ClientHeight    =   4635
   ClientLeft      =   1140
   ClientTop       =   1425
   ClientWidth     =   6690
   Height          =   4995
   Left            =   1080
   LinkTopic       =   "Form1"
   ScaleHeight     =   4635
   ScaleWidth      =   6690
   Top             =   1125
   Width           =   6810
   Begin TeeChart.TChart TChart1 
      Height          =   3750
      Left            =   120
      OleObjectBlob   =   "Form ODBC.frx":0000
      TabIndex        =   0
      Top             =   120
      Width           =   6495
   End
   Begin VB.CommandButton Command2 
      Caption         =   "&Edit Chart..."
      Height          =   495
      Left            =   120
      TabIndex        =   2
      Top             =   4080
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "&Close"
      Height          =   495
      Left            =   5280
      TabIndex        =   1
      Top             =   4080
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "This Chart is connected to EMPLOYEE.DBF"
      Height          =   255
      Left            =   1680
      TabIndex        =   3
      Top             =   4200
      Width           =   3495
   End
End
Attribute VB_Name = "Form1"
Attribute VB_Creatable = False
Attribute VB_Exposed = False
Private Sub Command1_Click()
  End
End Sub


Private Sub Command2_Click()
 TChart1.ShowEditor
End Sub


