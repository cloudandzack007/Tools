VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PenEndStyleForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2925
   ClientTop       =   2880
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin VB.CommandButton Command1 
      Caption         =   "Edit Chart"
      Height          =   315
      Left            =   4800
      TabIndex        =   4
      Top             =   1200
      Width           =   1335
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4065
      Left            =   0
      TabIndex        =   0
      Top             =   1620
      Width           =   7050
      Base64          =   $"PenEndStyleForm.frx":0000
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "PenEndStyleForm.frx":02FA
      Left            =   2640
      List            =   "PenEndStyleForm.frx":0307
      TabIndex        =   2
      Text            =   "Round"
      Top             =   1200
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "PenEndStyleForm.frx":0320
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Pen End Style:"
      Height          =   255
      Left            =   1380
      TabIndex        =   3
      Top             =   1260
      Width           =   1155
   End
End
Attribute VB_Name = "PenEndStyleForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Combo1_Change()
  TChart1.Series(0).asCandle.Pointer.Pen.EndStyle = Combo1.ListIndex
End Sub

Private Sub Combo1_Click()
  Combo1_Change
End Sub

Private Sub Command1_Click()
  TChart1.ShowEditor
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 20
End Sub
