VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form Tool_CursorProgForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3090
   ClientTop       =   2325
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4575
      Left            =   0
      OleObjectBlob   =   "Tool_CursorProgForm.frx":0000
      TabIndex        =   0
      Top             =   1110
      Width           =   7050
   End
   Begin VB.CommandButton Command4 
      Caption         =   "v  Down"
      Height          =   375
      Left            =   4440
      TabIndex        =   5
      Top             =   600
      Width           =   1155
   End
   Begin VB.CommandButton Command3 
      Caption         =   "^  Up"
      Height          =   375
      Left            =   3180
      TabIndex        =   4
      Top             =   600
      Width           =   1155
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Right  >"
      Height          =   375
      Left            =   1500
      TabIndex        =   3
      Top             =   600
      Width           =   1155
   End
   Begin VB.CommandButton Command1 
      Caption         =   "<   Left"
      Height          =   375
      Left            =   240
      TabIndex        =   2
      Top             =   600
      Width           =   1155
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   495
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "Tool_CursorProgForm.frx":01CF
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "Tool_CursorProgForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  TChart1.Tools.Items(0).asTeeCursor.XVal = TChart1.Tools.Items(0).asTeeCursor.XVal - 1
End Sub

Private Sub Command2_Click()
  TChart1.Tools.Items(0).asTeeCursor.XVal = TChart1.Tools.Items(0).asTeeCursor.XVal + 1
End Sub

Private Sub Command3_Click()
  TChart1.Tools.Items(0).asTeeCursor.YVal = TChart1.Tools.Items(0).asTeeCursor.YVal + 10
End Sub

Private Sub Command4_Click()
  TChart1.Tools.Items(0).asTeeCursor.YVal = TChart1.Tools.Items(0).asTeeCursor.YVal - 10
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 20
End Sub
