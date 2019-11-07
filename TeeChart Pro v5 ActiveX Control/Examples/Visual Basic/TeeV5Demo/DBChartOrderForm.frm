VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TEECHA~1.OCX"
Begin VB.Form DBChartOrderForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2985
   ClientTop       =   2685
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4335
      Left            =   0
      OleObjectBlob   =   "DBChartOrderForm.frx":0000
      TabIndex        =   1
      Top             =   1350
      Width           =   7050
   End
   Begin VB.Frame Frame1 
      Caption         =   " Sort order "
      Height          =   555
      Left            =   2400
      TabIndex        =   2
      Top             =   720
      Width           =   4635
      Begin VB.OptionButton Option1 
         Caption         =   "Descending"
         Height          =   255
         Index           =   2
         Left            =   3120
         TabIndex        =   5
         Top             =   240
         Width           =   1215
      End
      Begin VB.OptionButton Option1 
         Caption         =   "Ascending"
         Height          =   255
         Index           =   1
         Left            =   1620
         TabIndex        =   4
         Top             =   240
         Width           =   1155
      End
      Begin VB.OptionButton Option1 
         Caption         =   "None"
         Height          =   255
         Index           =   0
         Left            =   300
         TabIndex        =   3
         Top             =   240
         Value           =   -1  'True
         Width           =   1455
      End
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   675
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "DBChartOrderForm.frx":018D
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "DBChartOrderForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  With TChart1
      With .Series(0)
        .DataSource = "DSN=TeeChart Pro Database; SQL=select * from employee"
        .LabelsSource = "LASTNAME"
        .YValues.ValueSource = "SALARY"
        .XValues.ValueSource = ""
      End With
  End With
End Sub

Private Sub Option1_Click(Index As Integer)
  With TChart1.Series(0)
    .Marks.Style = smsValue
    Select Case Index
      Case 0
         .YValues.Order = loNone
      Case 1
         .YValues.Order = loAscending
      Case 2
         .YValues.Order = loDescending
    End Select
  End With
  TChart1.RefreshData
End Sub

Private Sub Text1_DblClick()
  TChart1.ShowEditor
End Sub
