VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form OpenGLTeeEditorForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2520
   ClientTop       =   3270
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "OpenGLTeeEditorForm.frx":0000
      TabIndex        =   0
      Top             =   1410
      Width           =   7050
   End
   Begin TeeChart.TeeCommander TeeCommander1 
      Height          =   495
      Left            =   0
      OleObjectBlob   =   "OpenGLTeeEditorForm.frx":0320
      TabIndex        =   2
      Top             =   480
      Width           =   7035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "OpenGL Editor page active"
      Height          =   255
      Left            =   240
      TabIndex        =   3
      Top             =   1080
      Value           =   1  'Checked
      Width           =   2535
   End
   Begin TeeChart.TeeEditor TeeEditor1 
      Left            =   6300
      OleObjectBlob   =   "OpenGLTeeEditorForm.frx":036C
      Top             =   60
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   495
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "OpenGLTeeEditorForm.frx":03A3
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "OpenGLTeeEditorForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
  TeeEditor1.ShowPages.OpenGL = Check1.Value
End Sub

Private Sub Form_Load()
  TeeCommander1.Chart = TChart1
  TeeEditor1.Chart = TChart1
  TeeCommander1.Editor = TeeEditor1
  
  TChart1.Series(0).FillSampleValues 30
End Sub
