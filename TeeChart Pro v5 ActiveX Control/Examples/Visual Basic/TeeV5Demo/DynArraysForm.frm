VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form DynArraysForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2850
   ClientTop       =   2295
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Height          =   3975
      Left            =   1800
      OleObjectBlob   =   "DynArraysForm.frx":0000
      TabIndex        =   0
      Top             =   1680
      Width           =   5250
   End
   Begin VB.Frame Frame1 
      Caption         =   "Time taken"
      Height          =   615
      Left            =   0
      TabIndex        =   14
      Top             =   3420
      Width           =   1755
      Begin VB.Label Label1 
         ForeColor       =   &H000000FF&
         Height          =   255
         Left            =   120
         TabIndex        =   15
         Top             =   300
         Width           =   1515
      End
   End
   Begin VB.Frame Frame2 
      Caption         =   "AddXY -  2 arrays, non ordered points"
      Height          =   795
      Left            =   3960
      TabIndex        =   12
      Top             =   840
      Width           =   3075
      Begin VB.CommandButton Command3 
         Caption         =   "Load to Chart"
         Height          =   375
         Left            =   900
         TabIndex        =   13
         Top             =   300
         Width           =   1335
      End
   End
   Begin VB.Frame Frame6 
      Caption         =   "AddXY - 2 arrays, x ordered points, random intervals"
      Height          =   795
      Left            =   0
      TabIndex        =   10
      Top             =   840
      Width           =   3915
      Begin VB.CommandButton Command4 
         Caption         =   "Load to Chart"
         Height          =   375
         Left            =   1320
         TabIndex        =   11
         Top             =   300
         Width           =   1335
      End
   End
   Begin VB.Frame Frame5 
      Caption         =   "Create arrays"
      Height          =   1755
      Left            =   0
      TabIndex        =   5
      Top             =   1620
      Width           =   1755
      Begin VB.ComboBox Combo1 
         Height          =   315
         ItemData        =   "DynArraysForm.frx":0145
         Left            =   180
         List            =   "DynArraysForm.frx":0167
         TabIndex        =   7
         Text            =   "100"
         Top             =   480
         Width           =   1455
      End
      Begin VB.CommandButton Command2 
         Caption         =   "Clear Chart"
         Height          =   375
         Left            =   240
         TabIndex        =   6
         Top             =   900
         Width           =   1215
      End
      Begin VB.Label Label7 
         Caption         =   "Array size"
         Height          =   195
         Left            =   540
         TabIndex        =   9
         Top             =   240
         Width           =   795
      End
      Begin VB.Label Label9 
         Caption         =   "Creating array..."
         ForeColor       =   &H00C00000&
         Height          =   315
         Left            =   300
         TabIndex        =   8
         Top             =   1380
         Visible         =   0   'False
         Width           =   1275
      End
   End
   Begin VB.Frame Frame3 
      Height          =   1575
      Left            =   0
      TabIndex        =   2
      Top             =   4020
      Width           =   1755
      Begin VB.CommandButton Command1 
         Caption         =   "Add small array"
         Height          =   375
         Left            =   180
         TabIndex        =   3
         Top             =   420
         Width           =   1335
      End
      Begin VB.Label Label8 
         Caption         =   "Small test (9 points)"
         Height          =   255
         Left            =   180
         TabIndex        =   4
         Top             =   960
         Width           =   1395
      End
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "DynArraysForm.frx":01B6
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "DynArraysForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim StartTime, EndTime, TotalTime As Double
' global variable used to control the demo...
Dim AddingData As Boolean
Dim MyYArray() As Double
Dim MyXArray() As Double
Dim MyXLinearArray() As Double

Private Sub Combo1_Click()
  Combo1_Change
End Sub

Private Sub Combo1_Change()
 Command3.Enabled = False
 Command4.Enabled = False
 Label9.Visible = True
 DoEvents
 
  TChart1.Series(0).Clear
 
  If Combo1.ListIndex = -1 Then Combo1.ListIndex = 0
  
  ReDim MyYArray(CDbl(Combo1.List(Combo1.ListIndex)))
  ReDim MyXArray(CDbl(Combo1.List(Combo1.ListIndex)))
  ReDim MyXLinearArray(CDbl(Combo1.List(Combo1.ListIndex)))

  For i = 0 To UBound(MyYArray) - 1
     If i = 0 Then
       MyYArray(i) = 1 + (Rnd * 3)
     Else
       MyYArray(i) = MyYArray(i - 1) - 1 + (Rnd * 2)
     End If
     MyXArray(i) = Cos(i) * 10
     If i = 0 Then
       MyXLinearArray(i) = 0
     Else
       MyXLinearArray(i) = MyXLinearArray(i - 1) + (Rnd * 10)
     End If
  Next i
  
 Label9.Visible = False
 Command3.Enabled = True
 Command4.Enabled = True

End Sub

Private Sub Command1_Click()
Dim a, b
  Label1.Caption = ""
  StartTime = Now
  a = Array(2, 3, 4, 5, 7, 1, 4, 5, 2)
  b = Array(4, 1, 8, 6, 2, 3, 3, 7, 1)

  EndTime = Now
  TChart1.Series(0).AddArray 9, a, b
End Sub

Private Sub Command2_Click()
  TChart1.RemoveAllSeries
  TChart1.AddSeries scFastLine
End Sub

Private Sub Command3_Click()
 StartTime = Now
 Label1.Caption = ""
 DoEvents
 AddingData = True
 TChart1.Series(0).AddArray UBound(MyYArray), MyYArray(), MyXArray()
End Sub

Private Sub Command4_Click()
 StartTime = Now
 Label1.Caption = ""
 DoEvents
 AddingData = True
 TChart1.Series(0).AddArray UBound(MyYArray), MyYArray(), MyXLinearArray()
End Sub

Private Sub Form_Load()
  AddingData = False
  Combo1_Change
  'TChart1.Axis.Left.SetMinMax 0, 5
End Sub

Private Sub TChart1_OnAfterDraw()
If AddingData = True Then
 If TChart1.SeriesCount > 0 Then
   If TChart1.Series(0).Count > 0 Then
     EndTime = Now
     TotalTime = (EndTime - StartTime) * 86400
     Label1.Caption = Mid(Str(TotalTime), 1, 6) & " secs."
     AddingData = False
     DoEvents
   End If
 End If
End If
End Sub
