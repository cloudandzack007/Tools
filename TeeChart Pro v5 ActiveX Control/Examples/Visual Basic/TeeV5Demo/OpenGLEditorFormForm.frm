VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form OpenGLEditorFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2955
   ClientTop       =   2745
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4395
      Left            =   0
      OleObjectBlob   =   "OpenGLEditorFormForm.frx":0000
      TabIndex        =   1
      Top             =   1290
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "OpenGL Active"
      Height          =   375
      Left            =   1020
      TabIndex        =   3
      Top             =   780
      Value           =   1  'Checked
      Width           =   1635
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Editor"
      Height          =   375
      Left            =   4140
      TabIndex        =   2
      Top             =   780
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "OpenGLEditorFormForm.frx":02BC
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "OpenGLEditorFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Aspect.OpenGL.Active = Check1.Value
End Sub

Private Sub Command1_Click()
  TChart1.ShowEditor
End Sub

Private Sub Form_Load()
  With TChart1.Series(0)
    .Add 7, "", clTeeColor
    .Add 3, "", clTeeColor
    .Add -4, "", clTeeColor
    .Add -1, "", clTeeColor
    .Add -2, "", clTeeColor
    .Add 6, "", clTeeColor
    .Add 4, "", clTeeColor
  End With
  
  TChart1.Aspect.OpenGL.Active = True
End Sub

