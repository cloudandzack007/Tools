VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form LineColorEachLineForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2880
   ClientTop       =   2610
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "TLineColorEachLineForm.frx":0000
      TabIndex        =   1
      Top             =   1530
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Color each Line"
      Height          =   315
      Left            =   120
      TabIndex        =   3
      Top             =   1200
      Width           =   1515
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Color each Point"
      Height          =   315
      Left            =   1920
      TabIndex        =   2
      Top             =   1200
      Value           =   1  'Checked
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1155
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "TLineColorEachLineForm.frx":0178
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "LineColorEachLineForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).asLine.ColorEachLine = Check1.Value
End Sub

Private Sub Check2_Click()
  TChart1.Series(0).ColorEachPoint = Check2.Value
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues (20)
  TChart1.Aspect.View3D = False
  TChart1.Series(0).asLine.ColorEachLine = False
  TChart1.Series(0).ColorEachPoint = True
End Sub
