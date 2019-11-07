VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form HorizLineFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2430
   ClientTop       =   3105
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3915
      Left            =   0
      OleObjectBlob   =   "HorizLineFormForm.frx":0000
      TabIndex        =   1
      Top             =   1770
      Width           =   7050
   End
   Begin TeeChart.TeeCommander TeeCommander1 
      Align           =   2  'Align Bottom
      Height          =   495
      Left            =   0
      OleObjectBlob   =   "HorizLineFormForm.frx":01CD
      TabIndex        =   3
      Top             =   1275
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Stairs"
      Height          =   315
      Left            =   240
      TabIndex        =   2
      Top             =   900
      Width           =   1395
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "HorizLineFormForm.frx":0229
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "HorizLineFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).asHorizLine.Stairs = Check1.Value
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 12
  TeeCommander1.Chart = TChart1
End Sub
