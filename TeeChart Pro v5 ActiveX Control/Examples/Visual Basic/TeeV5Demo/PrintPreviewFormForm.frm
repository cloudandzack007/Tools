VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PrintPreviewFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   0
   ClientTop       =   0
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Height          =   3915
      Left            =   0
      OleObjectBlob   =   "PrintPreviewFormForm.frx":0000
      TabIndex        =   0
      Top             =   1740
      Width           =   3450
   End
   Begin TeeChart.TeePreviewPanel TeePreviewPanel1 
      Height          =   3915
      Left            =   3480
      OleObjectBlob   =   "PrintPreviewFormForm.frx":0077
      TabIndex        =   2
      Top             =   1740
      Width           =   3555
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit Chart"
      Height          =   375
      Left            =   300
      TabIndex        =   3
      Top             =   1260
      Width           =   1275
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "PrintPreviewFormForm.frx":00C8
      Top             =   0
      Width           =   7025
   End
End
Attribute VB_Name = "PrintPreviewFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  TChart1.ShowEditor
  TChart1.Repaint
End Sub

Private Sub Form_Load()
  With TeePreviewPanel1
    .Chart = TChart1
    .PaperColor = RGB(255, 255, 128)
    .Gradient.Visible = True
    .Gradient.StartColor = vbCyan
    .Gradient.EndColor = vbGreen
    .Gradient.MidColor = vbBlack
  End With
  TChart1.Printer.MarginLeft = 30
End Sub

Private Sub TChart1_OnAfterDraw()
  TeePreviewPanel1.Repaint
End Sub
