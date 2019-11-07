VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ChartEditorFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2310
   ClientTop       =   1710
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4455
      Left            =   0
      OleObjectBlob   =   "ChartEditorFormForm.frx":0000
      TabIndex        =   0
      Top             =   1230
      Width           =   7050
   End
   Begin TeeChart.TeeEditor TeeEditor1 
      Left            =   5160
      OleObjectBlob   =   "ChartEditorFormForm.frx":013A
      Top             =   780
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Show Editor"
      Height          =   315
      Left            =   840
      TabIndex        =   3
      Top             =   780
      Width           =   1275
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Include new Editor tabs"
      Height          =   195
      Left            =   2520
      TabIndex        =   2
      Top             =   840
      Value           =   1  'Checked
      Width           =   2115
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   675
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ChartEditorFormForm.frx":0171
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ChartEditorFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  With TeeEditor1
    .ShowPages.Tools = Check1.Value
    .ShowPages.ExportDialog = Check1.Value
    .ShowPages.PrintPreview = Check1.Value
    .ShowPages.SeriesData = Check1.Value
  End With
  TeeEditor1.ShowEditor
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 7
  
  With TeeEditor1
    .Chart = TChart1
    .ShowPages.Tools = True
    .ShowPages.ExportDialog = True
    .ShowPages.PrintPreview = True
    .ShowPages.SeriesData = True
  End With
End Sub
