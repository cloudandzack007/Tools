VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PCXExportFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2460
   ClientTop       =   2205
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4455
      Left            =   0
      OleObjectBlob   =   "PCXExportFormForm.frx":0000
      TabIndex        =   0
      Top             =   1230
      Width           =   7050
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Show Export dialog"
      Height          =   315
      Left            =   4500
      TabIndex        =   3
      Top             =   840
      Width           =   1815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Save to file"
      Height          =   315
      Left            =   60
      TabIndex        =   2
      Top             =   840
      Width           =   1275
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   735
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "PCXExportFormForm.frx":02D9
      Top             =   0
      Width           =   7035
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   6300
      Top             =   720
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
End
Attribute VB_Name = "PCXExportFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  With TChart1.Export.asPCX
    CommonDialog1.Filter = "PCX files(*.pcx)|*.pcx"
    CommonDialog1.ShowSave
     If CommonDialog1.FileName <> "" Then
       .SaveToFile CommonDialog1.FileName
     End If
  End With
End Sub

Private Sub Command2_Click()
  TChart1.Export.ShowExport
End Sub

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 10
    .Series(1).FillSampleValues 10
    .Series(2).FillSampleValues 10
  End With
End Sub
