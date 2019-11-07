VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BarStackNegativeForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2940
   ClientTop       =   3285
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TeeCommander TeeCommander1 
      Height          =   495
      Left            =   0
      OleObjectBlob   =   "BarStackNegativeForm.frx":0000
      TabIndex        =   2
      Top             =   720
      Width           =   7050
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4455
      Left            =   0
      OleObjectBlob   =   "BarStackNegativeForm.frx":005C
      TabIndex        =   0
      Top             =   1230
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   735
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "BarStackNegativeForm.frx":0365
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "BarStackNegativeForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
Dim a, b, c As Variant
'Dim bArr As Variant
'Dim cArr As Variant
  aArr = Array(23, -56, 42, 9, -8)
  bArr = Array(32, -16, 9, 39, -28)
  cArr = Array(12, -21, 14, 22, -13)
  TeeCommander1.Chart = TChart1
  With TChart1
    .Series(0).AddArray 5, aArr
    .Series(1).AddArray 5, bArr
    .Series(2).AddArray 5, cArr
  End With
End Sub
