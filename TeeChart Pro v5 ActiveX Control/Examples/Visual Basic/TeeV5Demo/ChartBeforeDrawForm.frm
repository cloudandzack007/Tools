VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ChartBeforeDrawForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3150
   ClientTop       =   3120
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4335
      Left            =   0
      OleObjectBlob   =   "ChartBeforeDrawForm.frx":0000
      TabIndex        =   0
      Top             =   1350
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   675
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   5
      Text            =   "ChartBeforeDrawForm.frx":0088
      Top             =   0
      Width           =   7035
   End
   Begin VB.OptionButton Option1 
      Caption         =   "After Chart"
      Height          =   315
      Index           =   3
      Left            =   4680
      TabIndex        =   4
      Top             =   840
      Width           =   1275
   End
   Begin VB.OptionButton Option1 
      Caption         =   "Before Series"
      Height          =   315
      Index           =   2
      Left            =   3300
      TabIndex        =   3
      Top             =   840
      Width           =   1275
   End
   Begin VB.OptionButton Option1 
      Caption         =   "Before Axes"
      Height          =   315
      Index           =   1
      Left            =   1920
      TabIndex        =   2
      Top             =   840
      Width           =   1275
   End
   Begin VB.OptionButton Option1 
      Caption         =   "Before Chart"
      Height          =   315
      Index           =   0
      Left            =   540
      TabIndex        =   1
      Top             =   840
      Value           =   -1  'True
      Width           =   1275
   End
End
Attribute VB_Name = "ChartBeforeDrawForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim BeforeChart, BeforeAxes, BeforeSeries, AfterDraw

Private Sub Form_Load()
  With TChart1
    .AddSeries scBar
    .Series(0).FillSampleValues 6
  End With
  BeforeChart = True
  BeforeAxes = False
  BeforeSeries = False
  AfterDraw = False
End Sub

Private Sub Option1_Click(Index As Integer)
  Select Case Index
    Case 0: BeforeChart = True
    Case 1: BeforeAxes = True
    Case 2: BeforeSeries = True
    Case 3: AfterDraw = True
  End Select
  TChart1.Repaint
End Sub

Private Sub TChart1_OnAfterDraw()
  If AfterDraw = True Then
    DrawShape
  End If
  BeforeChart = False
  BeforeAxes = False
  BeforeSeries = False
  AfterDraw = False
End Sub

Sub DrawShape()
  With TChart1
    .Canvas.Pen.Style = psDot
    .Canvas.Brush.Color = vbYellow
    .Canvas.Ellipse 1, 1, .Canvas.Width - 1, .Canvas.Height - 1
  End With
End Sub

Private Sub TChart1_OnBeforeDrawAxes()
  If BeforeAxes = True Then
    DrawShape
  End If
End Sub

Private Sub TChart1_OnBeforeDrawChart()
  If BeforeChart = True Then
    DrawShape
  End If
End Sub

Private Sub TChart1_OnBeforeDrawSeries()
  If BeforeSeries = True Then
    DrawShape
  End If
End Sub
