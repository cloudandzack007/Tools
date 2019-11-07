VERSION 4.00
Begin VB.Form Form2 
   Caption         =   "Form2"
   ClientHeight    =   5940
   ClientLeft      =   2685
   ClientTop       =   1485
   ClientWidth     =   6690
   Height          =   6345
   Left            =   2625
   LinkTopic       =   "Form2"
   ScaleHeight     =   5940
   ScaleWidth      =   6690
   Top             =   1140
   Width           =   6810
   Begin VB.FileListBox ImageFind 
      Height          =   840
      Left            =   360
      TabIndex        =   2
      Top             =   2520
      Width           =   2415
   End
   Begin VB.DirListBox Dir1 
      Height          =   1380
      Left            =   360
      TabIndex        =   1
      Top             =   840
      Width           =   2415
   End
   Begin VB.DriveListBox Drive1 
      Height          =   315
      Left            =   360
      TabIndex        =   0
      Top             =   240
      Width           =   2415
   End
End
Attribute VB_Name = "Form2"
Attribute VB_Creatable = False
Attribute VB_Exposed = False
