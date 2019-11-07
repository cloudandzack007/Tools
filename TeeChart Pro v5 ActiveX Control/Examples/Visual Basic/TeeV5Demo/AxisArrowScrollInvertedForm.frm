VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AxisArrowScrollInvertedForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2400
   ClientTop       =   4200
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4425
      Left            =   0
      TabIndex        =   0
      Top             =   1260
      Width           =   7050
      Base64          =   $"AxisArrowScrollInvertedForm.frx":0000
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Scroll Inverted"
      Height          =   255
      Left            =   2760
      TabIndex        =   2
      Top             =   780
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "AxisArrowScrollInvertedForm.frx":023A
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "AxisArrowScrollInvertedForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
  TChart1.Tools.Items(0).asAxisArrow.ScrollInverted = Check1.Value
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 60
  TChart1.Page.Current = 3
End Sub
