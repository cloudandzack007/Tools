VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ChartGridRowsForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2640
   ClientTop       =   2595
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Height          =   4065
      Left            =   0
      TabIndex        =   0
      Top             =   1620
      Width           =   3990
      Base64          =   $"ChartGridRowsForm.frx":0000
   End
   Begin TeeChart.ChartGrid ChartGrid1 
      Height          =   4035
      Left            =   4020
      OleObjectBlob   =   "ChartGridRowsForm.frx":01BA
      TabIndex        =   2
      Top             =   1620
      Width           =   3015
   End
   Begin VB.TextBox Text3 
      Height          =   315
      Left            =   6300
      MaxLength       =   2
      TabIndex        =   8
      Text            =   "0"
      Top             =   1200
      Width           =   435
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Goto Row/Column"
      Height          =   315
      Left            =   2640
      TabIndex        =   5
      Top             =   1200
      Width           =   1695
   End
   Begin VB.TextBox Text2 
      Height          =   315
      Left            =   5040
      MaxLength       =   2
      TabIndex        =   4
      Text            =   "0"
      Top             =   1200
      Width           =   435
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ChartGridRowsForm.frx":0280
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label3 
      Caption         =   "Column:"
      Height          =   255
      Left            =   5580
      TabIndex        =   7
      Top             =   1260
      Width           =   615
   End
   Begin VB.Label Label2 
      Caption         =   "Row:"
      Height          =   255
      Left            =   4560
      TabIndex        =   6
      Top             =   1260
      Width           =   435
   End
   Begin VB.Label Label1 
      Caption         =   "Select Row, Column by code:"
      Height          =   255
      Left            =   120
      TabIndex        =   3
      Top             =   1200
      Width           =   2235
   End
End
Attribute VB_Name = "ChartGridRowsForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
  If (Val(Text3.Text) < ChartGrid1.Cols.Count - 1) _
     And (Val(Text2.Text) < ChartGrid1.Rows.Count - 2) _
     And (Val(Text2.Text) >= 0) _
     And (Val(Text3.Text) >= 0) Then
    ChartGrid1.Rows.Row = Val(Text2.Text) + 2 '(0 and 1 are Header and Field names)
    ChartGrid1.Cols.Col = Val(Text3.Text) + 1 '1 is index column
  End If
End Sub

Private Sub Form_Load()
  ChartGrid1.Chart = TChart1
  TChart1.Series(0).FillSampleValues 7
End Sub

Private Sub Text2_Validate(Cancel As Boolean)
   If (Not IsNumeric(Text2.Text)) Or (Val(Text2.Text) > ChartGrid1.Rows.Count - 3) Then
      KeepFocus = True
      MsgBox "Please insert a Row number less than or equal to " & Str$(ChartGrid1.Rows.Count - 3)
   End If
End Sub

Private Sub Text3_Validate(Cancel As Boolean)
   If Not IsNumeric(Text3.Text) Or Val(Text3.Text) > ChartGrid1.Cols.Count - 2 Then
      KeepFocus = True
      MsgBox "Please insert a Column number less than or equal to " & Str$(ChartGrid1.Cols.Count - 2)
   End If
End Sub
