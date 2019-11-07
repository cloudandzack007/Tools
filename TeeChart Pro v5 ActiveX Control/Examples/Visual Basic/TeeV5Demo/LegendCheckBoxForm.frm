VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form LegendCheckBoxForm 
   BorderStyle     =   0  'None
   Caption         =   "LegendCheckBoxForm"
   ClientHeight    =   5685
   ClientLeft      =   3330
   ClientTop       =   2595
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4035
      Left            =   0
      OleObjectBlob   =   "LegendCheckBoxForm.frx":0000
      TabIndex        =   0
      Top             =   1650
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1215
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "LegendCheckBoxForm.frx":03E6
      Top             =   0
      Width           =   7035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Legend Checkboxes"
      Height          =   375
      Left            =   0
      TabIndex        =   1
      Top             =   1260
      Value           =   1  'Checked
      Width           =   2235
   End
End
Attribute VB_Name = "LegendCheckBoxForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Legend.CheckBoxes = Check1.Value
End Sub

Private Sub Form_Load()
  TChart1.Legend.CheckBoxes = True
  TChart1.Series(0).FillSampleValues 10
  TChart1.Series(1).FillSampleValues 10
  TChart1.Series(2).FillSampleValues 10
  TChart1.Series(3).FillSampleValues 10
End Sub
