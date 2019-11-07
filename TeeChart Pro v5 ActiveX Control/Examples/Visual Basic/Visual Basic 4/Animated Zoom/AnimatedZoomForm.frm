VERSION 4.00
Begin VB.Form Form1 
   Caption         =   "Zoom and Scroll"
   ClientHeight    =   5910
   ClientLeft      =   1005
   ClientTop       =   1710
   ClientWidth     =   10605
   Height          =   6270
   Left            =   945
   LinkTopic       =   "Form1"
   ScaleHeight     =   5910
   ScaleWidth      =   10605
   Top             =   1410
   Width           =   10725
   Begin TeeChart.TChart TChart1 
      Height          =   4350
      Left            =   0
      OleObjectBlob   =   "AnimatedZoomForm.frx":0000
      TabIndex        =   0
      Top             =   120
      Width           =   10575
   End
   Begin VB.CommandButton Command2 
      Caption         =   "How to Zoom?"
      Height          =   495
      Left            =   1800
      TabIndex        =   15
      Top             =   4560
      Width           =   1575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "How to Scroll?"
      Height          =   495
      Left            =   4080
      TabIndex        =   13
      Top             =   4560
      Width           =   1455
   End
   Begin VB.CommandButton Command3 
      Caption         =   "How to UnZoom and UnScroll?"
      Height          =   495
      Left            =   6360
      TabIndex        =   3
      Top             =   4560
      Width           =   2775
   End
   Begin VB.PictureBox SSPanel3 
      BackColor       =   &H00C0C0C0&
      Height          =   735
      Left            =   0
      ScaleHeight     =   675
      ScaleWidth      =   6915
      TabIndex        =   1
      Top             =   5160
      Width           =   6975
      Begin VB.CheckBox Check2 
         Caption         =   "Enable Zoom"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   9.75
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Left            =   840
         TabIndex        =   14
         Top             =   240
         Width           =   1815
      End
      Begin VB.HScrollBar HScroll1 
         Height          =   255
         Left            =   5520
         Max             =   25
         Min             =   1
         TabIndex        =   4
         Top             =   120
         Value           =   1
         Width           =   1335
      End
      Begin VB.CheckBox Check1 
         Caption         =   "Animated zoom"
         Height          =   495
         Left            =   3120
         TabIndex        =   2
         Top             =   120
         Width           =   1815
      End
      Begin VB.Label Label3 
         Caption         =   "Zoom steps: "
         Height          =   255
         Left            =   5520
         TabIndex        =   6
         Top             =   435
         Width           =   975
      End
      Begin VB.Label Label4 
         Height          =   255
         Left            =   6600
         TabIndex        =   5
         Top             =   435
         Width           =   255
      End
   End
   Begin VB.PictureBox SSPanel1 
      BackColor       =   &H00C0C0C0&
      Height          =   735
      Left            =   7080
      ScaleHeight     =   675
      ScaleWidth      =   3435
      TabIndex        =   7
      Top             =   5160
      Width           =   3495
      Begin VB.OptionButton Option1 
         Caption         =   "Both"
         Height          =   255
         Index           =   3
         Left            =   2280
         TabIndex        =   11
         Top             =   360
         Width           =   1095
      End
      Begin VB.OptionButton Option1 
         Caption         =   "Vertical"
         Height          =   255
         Index           =   2
         Left            =   2280
         TabIndex        =   10
         Top             =   120
         Width           =   1095
      End
      Begin VB.OptionButton Option1 
         Caption         =   "Horizontal"
         Height          =   255
         Index           =   1
         Left            =   1200
         TabIndex        =   9
         Top             =   360
         Width           =   1095
      End
      Begin VB.OptionButton Option1 
         Caption         =   "None"
         Height          =   255
         Index           =   0
         Left            =   1200
         TabIndex        =   8
         Top             =   120
         Width           =   1095
      End
      Begin VB.Label Label1 
         Caption         =   "Scrollable direction"
         BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
            Name            =   "MS Sans Serif"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   495
         Left            =   240
         TabIndex        =   12
         Top             =   120
         Width           =   975
      End
   End
End
Attribute VB_Name = "Form1"
Attribute VB_Creatable = False
Attribute VB_Exposed = False

Private Sub Fillpoints()
' add some sample values to each Series in TChart1...
  FillRandomValues (0)
  FillRandomValues (1)
  FillRandomValues (2)
  FillRandomValues (3)
  FillRandomValues (4)
  FillRandomValues (5)
End Sub

Private Sub FillRandomValues(ASeries As Integer)
  Dim t, tmp As Integer
  ' add 50 sample values to "ASeries"....
    With TChart1.Series(ASeries)
      tmp = 0
      ' remove previous values...
      .Clear
      For t = 1 To 50
        tmp = tmp + Int((500) * Rnd) - 250
        ' add the point to the Series !
        .Add tmp, "", clTeeColor
      Next t
    End With
End Sub


Private Sub Check1_Click()
  If Check1.Value = 1 Then
    TChart1.Zoom.Animated = True
  Else
    TChart1.Zoom.Animated = False
  End If
End Sub

Private Sub Check2_Click()
  With TChart1.Zoom
    If Check2.Value = 1 Then
      .Enable = True
      Check1.Enabled = True
      HScroll1.Enabled = True
    Else
      .Enable = False
      Check1.Enabled = False
      HScroll1.Enabled = False
    End If
  End With
End Sub

Private Sub Command1_Click()
  MsgBox ("To scroll, drag in a permitted scroll direction (see radio buttons below), with right mouse button pressed.")
End Sub

Private Sub Command2_Click()
  MsgBox ("To zoom drag down and right over desired area, with left mouse button pressed.")
End Sub

Private Sub Command3_Click()
  MsgBox ("To unzoom or unscroll, place mouse over any part of chart and drag up and left with left mouse button pressed.")
End Sub


Private Sub Form_Load()
  With TChart1
    'enable animated zoom...
    .Zoom.Animated = True
    ' set "animated zoom" steps...
    .Zoom.AnimatedSteps = 10
    'populate data series
    Fillpoints
    Option1(1).Value = 1
    'set initial axis restraints
    .Axis.Bottom.Automatic = False
    .Axis.Bottom.Maximum = 15
    .Axis.Bottom.Minimum = 5
  End With
  ' set initial properties...
  Check1.Value = 1
  Check2.Value = 1
  HScroll1.Value = 10
End Sub


Private Sub HScroll1_Change()
  TChart1.Zoom.AnimatedSteps = HScroll1.Value
  Label4.Caption = HScroll1.Value
End Sub


Private Sub Option1_Click(Index As Integer)
  With TChart1.Scroll
    Select Case Index
     Case 0
       .Enable = pmNone
     Case 1
       .Enable = pmHorizontal
     Case 2
       .Enable = pmVertical
     Case 3
       .Enable = pmBoth
    End Select
  End With
End Sub


