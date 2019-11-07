VERSION 5.00
Begin VB.Form CodeForm 
   Caption         =   "Form2"
   ClientHeight    =   7515
   ClientLeft      =   1650
   ClientTop       =   1545
   ClientWidth     =   11475
   LinkTopic       =   "Form2"
   ScaleHeight     =   7515
   ScaleWidth      =   11475
   Begin VB.TextBox Text1 
      BeginProperty Font 
         Name            =   "Courier New"
         Size            =   9
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   6615
      Left            =   60
      MultiLine       =   -1  'True
      ScrollBars      =   3  'Both
      TabIndex        =   1
      Top             =   60
      Width           =   11355
   End
   Begin VB.CommandButton Command1 
      Caption         =   "OK"
      Height          =   375
      Left            =   10080
      TabIndex        =   0
      Top             =   7080
      Width           =   1335
   End
End
Attribute VB_Name = "CodeForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
  Unload Me
End Sub
