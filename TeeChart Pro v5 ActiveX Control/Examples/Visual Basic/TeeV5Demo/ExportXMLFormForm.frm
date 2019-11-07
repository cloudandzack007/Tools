VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "comdlg32.ocx"
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ExportXMLFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3285
   ClientTop       =   3090
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4335
      Left            =   0
      OleObjectBlob   =   "ExportXMLFormForm.frx":0000
      TabIndex        =   0
      Top             =   1350
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Save to file"
      Height          =   375
      Left            =   180
      TabIndex        =   4
      Top             =   900
      Width           =   1275
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Include Point index"
      Height          =   255
      Left            =   2400
      TabIndex        =   3
      Top             =   960
      Value           =   1  'Checked
      Width           =   1935
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Show Export dialog"
      Height          =   375
      Left            =   4800
      TabIndex        =   2
      Top             =   900
      Width           =   1815
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ExportXMLFormForm.frx":034F
      Top             =   0
      Width           =   7035
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   1740
      Top             =   840
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
End
Attribute VB_Name = "ExportXMLFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
  TChart1.Export.asXML.IncludeIndex = Check1.Value
End Sub

Private Sub Command1_Click()
  With TChart1.Export.asXML
    CommonDialog1.Filter = "XML files(*.xml)|*.xml"
    CommonDialog1.ShowSave
     If CommonDialog1.FileName <> "" Then
       .IncludeIndex = Check1.Value
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
  Check1_Click
End Sub
