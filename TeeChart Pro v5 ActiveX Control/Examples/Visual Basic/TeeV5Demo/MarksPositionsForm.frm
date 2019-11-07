VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form MarksPositionsForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3615
   ClientTop       =   2895
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "MarksPositionsForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   4620
      Top             =   840
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Load .TEE"
      Height          =   375
      Left            =   1980
      TabIndex        =   3
      Top             =   900
      Width           =   1455
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Save to .TEE"
      Height          =   375
      Left            =   300
      TabIndex        =   2
      Top             =   900
      Width           =   1455
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   735
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "MarksPositionsForm.frx":0176
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "MarksPositionsForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  CommonDialog1.Filter = "Tee files(*.tee)|*.tee"
  CommonDialog1.ShowSave
  If CommonDialog1.FileName <> "" Then
    TChart1.Export.SaveToFile CommonDialog1.FileName
  End If
End Sub

Private Sub Command2_Click()
  CommonDialog1.Filter = "Tee files(*.tee)|*.tee"
  CommonDialog1.ShowOpen
  If CommonDialog1.FileName <> "" Then
    TChart1.Import.LoadFromFile CommonDialog1.FileName
  End If
End Sub

Private Sub Form_Load()
Dim i As Integer
  With TChart1
    .Series(0).FillSampleValues 7
  End With
End Sub
