VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form DBChartSingleRecordByCode 
   BorderStyle     =   0  'None
   Caption         =   "DBChartSingleRecordByCode"
   ClientHeight    =   5685
   ClientLeft      =   2445
   ClientTop       =   2670
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "DBChartSingleRecordByCode.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   5
      Text            =   "DBChartSingleRecordByCode.frx":0725
      Top             =   0
      Width           =   7035
   End
   Begin VB.CommandButton Command1 
      Caption         =   "<"
      Height          =   375
      Left            =   2880
      TabIndex        =   4
      Top             =   1080
      Width           =   375
   End
   Begin VB.CommandButton Command2 
      Caption         =   ">"
      Height          =   375
      Left            =   3360
      TabIndex        =   3
      Top             =   1080
      Width           =   375
   End
   Begin VB.CommandButton Command3 
      Caption         =   ">>"
      Height          =   375
      Left            =   3840
      TabIndex        =   2
      Top             =   1080
      Width           =   375
   End
   Begin VB.CommandButton Command4 
      Caption         =   "<<"
      Height          =   375
      Left            =   2400
      TabIndex        =   1
      Top             =   1080
      Width           =   375
   End
End
Attribute VB_Name = "DBChartSingleRecordByCode"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim rst

Private Sub Command1_Click()
  rst.MovePrevious
  CheckKeys
End Sub

Private Sub Command2_Click()
  rst.MoveNext
  CheckKeys
End Sub

Private Sub Command3_Click()
  rst.MoveLast
  CheckKeys
End Sub

Private Sub Command4_Click()
  rst.MoveFirst
  CheckKeys
End Sub

Private Sub Form_Load()
  Set Conn = CreateObject("ADODB.Connection")
  Set rst = CreateObject("ADODB.Recordset")
  Conn.Open "DSN=TeeChart Pro Database"
  rst.Open "select * from months", Conn, 1, 1
  
     
  With TChart1.Series(0)
    ' ****************************************************************
    ' The DatasourceType line should be run before the Recordset is
    ' applied to the Series. The default is dstAllRecords so this
    ' method only really needs to be called for Single Record charting.
    ' ****************************************************************
    .DatasourceType = dstSingleRecord
    .DataSource = rst
    .YValues.ValueSource = "Jan;Feb;Mar;Apr;May;Jun;Jul;Aug;Sep;Oct;Nov;Dec"
  End With
  
  With TChart1.Tools
    .Add tcAnnotate
    .Items(0).asAnnotation.Position = ppLeftTop
  End With
  
  CheckKeys
End Sub

Private Sub CheckKeys()

  TChart1.RefreshData
  TChart1.Tools.Items(0).asAnnotation.Text = "Year: " & rst!Year
  If rst!Year = "1997" Then
     Command4.Enabled = False
     Command1.Enabled = False
     Command2.Enabled = True
     Command3.Enabled = True
  ElseIf rst!Year = "2000" Then
     Command2.Enabled = False
     Command3.Enabled = False
     Command1.Enabled = True
     Command4.Enabled = True
  Else
     Command4.Enabled = True
     Command1.Enabled = True
     Command2.Enabled = True
     Command3.Enabled = True
  End If
End Sub
