VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form OnBeforeAddForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   4245
   ClientTop       =   1950
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4395
      Left            =   0
      OleObjectBlob   =   "OnBeforeAddForm.frx":0000
      TabIndex        =   0
      Top             =   1290
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Refresh data"
      Height          =   375
      Left            =   3780
      TabIndex        =   3
      Top             =   780
      Width           =   1215
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Apply custom function to data y=(y*x)+2"
      Height          =   255
      Left            =   180
      TabIndex        =   2
      Top             =   840
      Width           =   3195
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   735
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "OnBeforeAddForm.frx":0160
      Top             =   0
      Width           =   7095
   End
End
Attribute VB_Name = "OnBeforeAddForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim ApplyFunction As Boolean

Private Sub Check1_Click()
  ApplyFunction = Check1.Value
End Sub

Private Sub Command1_Click()
  AddData
End Sub

Private Sub Form_Load()
  ApplyFunction = False
  AddData
End Sub

Private Sub AddData()
   With TChart1.Series(0)
     .Clear
     .AddXY 1, 1, "", clTeeColor
     .AddXY 2, 2, "", clTeeColor
     .AddXY 3, 3, "", clTeeColor
     .AddXY 4, 4, "", clTeeColor
     .AddXY 5, 5, "", clTeeColor
   End With
End Sub


Private Sub TChart1_OnSeriesBeforeAdd(ByVal SeriesIndex As Long, Continue As Boolean)
  If ApplyFunction = True Then
    With TChart1.Series(SeriesIndex)
      .YValues.TempValue = (.YValues.TempValue * .XValues.TempValue) + 2
    End With
  End If
End Sub
