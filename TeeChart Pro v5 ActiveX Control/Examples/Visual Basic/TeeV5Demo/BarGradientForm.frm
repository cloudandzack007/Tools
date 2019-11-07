VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BarGradientForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5760
   ClientLeft      =   2790
   ClientTop       =   2205
   ClientWidth     =   6375
   LinkTopic       =   "Form2"
   ScaleHeight     =   5760
   ScaleWidth      =   6375
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4395
      Left            =   0
      OleObjectBlob   =   "BarGradientForm.frx":0000
      TabIndex        =   0
      Top             =   1365
      Width           =   6375
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1275
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "BarGradientForm.frx":012C
      Top             =   0
      Width           =   6375
   End
End
Attribute VB_Name = "BarGradientForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 3
    .Series(0).asBar.BarStyle = bsRectGradient
    .Series(0).asBar.Gradient.Visible = True
    .Series(0).asBar.Gradient.StartColor = vbButtonFace
    .Series(0).asBar.Gradient.MidColor = vbWhite
  End With
End Sub
