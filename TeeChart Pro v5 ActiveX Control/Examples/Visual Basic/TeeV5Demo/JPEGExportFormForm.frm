VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form JPEGExportFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3540
   ClientTop       =   3210
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4395
      Left            =   0
      OleObjectBlob   =   "JPEGExportFormForm.frx":0000
      TabIndex        =   0
      Top             =   1290
      Width           =   7050
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   315
      Left            =   3480
      Max             =   1
      Min             =   100
      TabIndex        =   6
      Top             =   840
      Value           =   70
      Width           =   255
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   3060
      TabIndex        =   5
      Top             =   840
      Width           =   435
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Show Export dialog"
      Height          =   315
      Left            =   4560
      TabIndex        =   3
      Top             =   840
      Width           =   1815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Save to file"
      Height          =   315
      Left            =   120
      TabIndex        =   2
      Top             =   840
      Width           =   1275
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   675
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "JPEGExportFormForm.frx":0301
      Top             =   0
      Width           =   7035
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   6360
      Top             =   720
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin VB.Label Label1 
      Caption         =   "Quality:"
      Height          =   255
      Left            =   2520
      TabIndex        =   4
      Top             =   900
      Width           =   555
   End
End
Attribute VB_Name = "JPEGExportFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  With TChart1.Export.asJPEG
    CommonDialog1.Filter = "JPEG files(*.jpg)|*.jpg"
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
  VScroll1_Scroll
End Sub

Private Sub Text2_Change()
 Text2_Confirm
End Sub
Private Sub Text2_Confirm()
 If Not IsNumeric(Text2.Text) Then
  KeepFocus = True
  MsgBox "Please insert a numeric value", , "Quality"
 Else
  With TChart1.Export.asJPEG
   .CompressionQuality = Val(Text2.Text)
  End With
  VScroll1.Value = Val(Text2.Text)
 End If
End Sub
Private Sub VScroll1_Change()
 VScroll1_Scroll
End Sub
Private Sub VScroll1_Scroll()
 Text2.Text = Str$(VScroll1.Value)
Text2_Confirm
End Sub
