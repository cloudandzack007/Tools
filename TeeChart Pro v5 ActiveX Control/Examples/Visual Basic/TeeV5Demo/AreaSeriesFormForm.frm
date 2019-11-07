VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form AreaSeriesFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2970
   ClientTop       =   2265
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "AreaSeriesFormForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "AreaSeriesFormForm.frx":034E
      Left            =   720
      List            =   "AreaSeriesFormForm.frx":035B
      TabIndex        =   6
      Text            =   "3D"
      Top             =   1080
      Width           =   1155
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Editor"
      Height          =   375
      Left            =   5460
      TabIndex        =   5
      Top             =   1080
      Width           =   1155
   End
   Begin VB.CheckBox Check2 
      Caption         =   "3D"
      Height          =   315
      Left            =   3360
      TabIndex        =   4
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1215
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Stairs"
      Height          =   315
      Left            =   2100
      TabIndex        =   3
      Top             =   1080
      Width           =   1155
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "AreaSeriesFormForm.frx":037A
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Layout:"
      Height          =   195
      Left            =   120
      TabIndex        =   2
      Top             =   1140
      Width           =   555
   End
End
Attribute VB_Name = "AreaSeriesFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
Dim i
  With TChart1
    For i = 0 To .SeriesCount - 1
      .Series(i).asArea.Stairs = Check1.Value
    Next i
  End With
End Sub

Private Sub Check2_Click()
  TChart1.Aspect.View3D = Check2.Value
End Sub

Private Sub Combo1_Change()
  Combo1_Click
End Sub

Private Sub Combo1_Click()
  TChart1.Series(0).asArea.MultiArea = Combo1.ListIndex
End Sub

Private Sub Command1_Click()
  TChart1.ShowEditor
End Sub


Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 6
    .Series(1).FillSampleValues 6
    .Series(2).FillSampleValues 6
  End With
End Sub
