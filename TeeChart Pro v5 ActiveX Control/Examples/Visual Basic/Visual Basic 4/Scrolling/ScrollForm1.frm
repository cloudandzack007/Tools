VERSION 4.00
Begin VB.Form Form1 
   Caption         =   "ScrollForm"
   ClientHeight    =   5415
   ClientLeft      =   1620
   ClientTop       =   1485
   ClientWidth     =   7110
   Height          =   5775
   Left            =   1560
   LinkTopic       =   "Form1"
   ScaleHeight     =   5415
   ScaleWidth      =   7110
   Top             =   1185
   Width           =   7230
   Begin TeeChart.TChart TChart1 
      Height          =   4230
      Left            =   120
      OleObjectBlob   =   "ScrollForm1.frx":0000
      TabIndex        =   0
      Top             =   600
      Width           =   6855
   End
   Begin VB.CommandButton Command2 
      Caption         =   "&Close"
      Height          =   375
      Left            =   5760
      TabIndex        =   4
      Top             =   4920
      Width           =   1215
   End
   Begin VB.Timer Timer1 
      Enabled         =   0   'False
      Interval        =   50
      Left            =   3360
      Top             =   4920
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Animate"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   3840
      TabIndex        =   2
      Top             =   4920
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Add point and scroll"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   120
      TabIndex        =   1
      Top             =   4920
      Width           =   3015
   End
   Begin VB.Label Label1 
      Alignment       =   2  'Center
      Caption         =   "Example of Chart scrolling"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   13.5
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H00C00000&
      Height          =   375
      Left            =   1560
      TabIndex        =   3
      Top             =   120
      Width           =   3975
   End
End
Attribute VB_Name = "Form1"
Attribute VB_Creatable = False
Attribute VB_Exposed = False

Private Sub FillDemoPoints()
Dim t As Integer

  With TChart1.Series(0)
    'fill the LineSeries with some random data
    .Clear   ' <-- this removes all points from Series1

    'let's add 60 minutes from 12:00 to 12:59
    For t = 0 To 59
      .AddXY TimeValue("12:" & t & ":00"), Rnd(100), "", vbRed
    Next t

   'let's add 60 more minutes from 13:00 to 13:59
    For t = 0 To 59
      .AddXY TimeValue("13:" & t & ":00"), Rnd(100), "", vbRed
    Next t
  End With
End Sub

Private Sub ScrollHorizAxis()
  With TChart1.Axis.Bottom  ' <-- with the Horizontal Axis...
      .Automatic = False        ' <-- we dont want automatic scaling

      ' In this example, we will set the Axis Minimum and Maximum values to
      ' show One Hour of data ending at last point Time plus 5 minutes
      
      .Maximum = TChart1.Series(0).XValues.Maximum + TimeValue("0:5:0")
      .Minimum = .Maximum - TimeValue("1:0:0")
  End With
End Sub


Private Sub Check1_Click()
'toggle Timer to auto-add points
 If Check1.Value = 1 Then
   Timer1.Enabled = True
 Else
   Timer1.Enabled = False
 End If
End Sub

Private Sub Command1_Click()
Dim h, m, s As Integer
  m = Minute(TChart1.Series(0).XValues.Last)
  h = Hour(TChart1.Series(0).XValues.Last)
  'add a new random point to the Series (one more minute)
  s = 0
  m = m + 1
  If m = 60 Then
    m = 0
    h = h + 1
  End If
  TChart1.Series(0).AddXY (TimeValue(h & ":" & m & ":" & s)), Rnd(100), "", vbGreen
  'Now scroll the axis to show the last hour of data
  ScrollHorizAxis
End Sub

Private Sub Command2_Click()
 End
End Sub

Private Sub Form_Load()
  FillDemoPoints
End Sub

Private Sub Timer1_Timer()
'Call Sub to add points
  Command1_Click
End Sub


