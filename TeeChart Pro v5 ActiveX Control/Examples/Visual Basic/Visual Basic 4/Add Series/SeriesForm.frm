VERSION 4.00
Begin VB.Form Form1 
   Caption         =   "Operations with Series and Functions"
   ClientHeight    =   6465
   ClientLeft      =   2445
   ClientTop       =   1590
   ClientWidth     =   6030
   Height          =   6825
   Left            =   2385
   LinkTopic       =   "Form1"
   ScaleHeight     =   6465
   ScaleWidth      =   6030
   Top             =   1290
   Width           =   6150
   Begin TeeChart.TChart TChart1 
      Height          =   4110
      Left            =   0
      OleObjectBlob   =   "SeriesForm.frx":0000
      TabIndex        =   0
      Top             =   480
      Width           =   6000
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Click here to show the Chart Editor"
      Height          =   345
      Left            =   150
      TabIndex        =   5
      Top             =   6090
      Width           =   5730
   End
   Begin VB.PictureBox SSPanel1 
      BackColor       =   &H00C0C0C0&
      Height          =   1425
      Left            =   150
      ScaleHeight     =   1365
      ScaleWidth      =   2820
      TabIndex        =   1
      Top             =   4620
      Width           =   2880
      Begin VB.CommandButton Command3 
         Caption         =   "ShowSeries"
         Height          =   315
         Left            =   1515
         TabIndex        =   3
         Top             =   375
         Width           =   1155
      End
      Begin VB.ComboBox Combo1 
         Height          =   315
         ItemData        =   "SeriesForm.frx":009E
         Left            =   90
         List            =   "SeriesForm.frx":00D2
         TabIndex        =   2
         Top             =   375
         Width           =   1335
      End
      Begin VB.Label Label1 
         Caption         =   "Pick a Series type to Chart"
         Height          =   300
         Left            =   120
         TabIndex        =   4
         Top             =   90
         Width           =   1875
      End
   End
   Begin VB.PictureBox SSPanel2 
      BackColor       =   &H00C0C0C0&
      Height          =   1425
      Left            =   3105
      ScaleHeight     =   1365
      ScaleWidth      =   2715
      TabIndex        =   6
      Top             =   4620
      Width           =   2775
      Begin VB.HScrollBar HScroll1 
         Height          =   285
         Left            =   120
         Max             =   10
         TabIndex        =   11
         Top             =   765
         Value           =   1
         Width           =   2550
      End
      Begin VB.CommandButton Command2 
         Caption         =   "ShowFunction"
         Height          =   300
         Left            =   1500
         TabIndex        =   9
         Top             =   375
         Width           =   1170
      End
      Begin VB.ComboBox Combo2 
         Height          =   315
         ItemData        =   "SeriesForm.frx":014E
         Left            =   135
         List            =   "SeriesForm.frx":0167
         TabIndex        =   8
         Top             =   375
         Width           =   1275
      End
      Begin VB.Label Label5 
         Height          =   255
         Left            =   1440
         TabIndex        =   13
         Top             =   1140
         Width           =   735
      End
      Begin VB.Label Label4 
         Caption         =   "Function Period:"
         Height          =   240
         Left            =   135
         TabIndex        =   12
         Top             =   1140
         Width           =   1230
      End
      Begin VB.Label Label2 
         Caption         =   "Add a function"
         Height          =   300
         Left            =   105
         TabIndex        =   7
         Top             =   75
         Width           =   1815
      End
   End
   Begin VB.Label Label3 
      Alignment       =   2  'Center
      Caption         =   "Add / Remove Series and Functions"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   12
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   360
      Left            =   120
      TabIndex        =   10
      Top             =   30
      Width           =   5760
   End
End
Attribute VB_Name = "Form1"
Attribute VB_Creatable = False
Attribute VB_Exposed = False

Private Sub Command2_Click()
  With TChart1
    If .SeriesCount > 1 Then
      .RemoveSeries (1)
    End If
    .AddSeries (scLine)
    .Series(1).SetFunction (Combo2.ListIndex + 1)
    .Series(1).DataSource = .Series(0).Name
    .Series(1).Title = Combo2.List(Combo2.ListIndex) & "Function"
  End With
  HScroll1.Value = 0
End Sub


Private Sub Command1_Click()
  TChart1.ShowEditor
End Sub

Private Sub Command3_Click()
  With TChart1
    'Look to see if there's already a Series in the Chart and
    'remove the existing Series
    .RemoveAllSeries
    'Add and randomly populate the new Series
    'eg. .AddSeries(scHorizBar) is the same as .AddSeries(2)
    .AddSeries (Combo1.ListIndex)
    .Series(0).FillSampleValues 10
    'Name the Series to visualise in the Chart Editor.
    .Series(0).Title = Combo1.List(Combo1.ListIndex) & "Series"
    'Name the Series for the Datasource of the function definition
    .Series(0).Name = .Series(0).Title
    'Modify the Chart Title
    .Header.Text(0) = Combo1.List(Combo1.ListIndex) & " Series"
  End With
End Sub


Private Sub Form_Load()
  Combo1.ListIndex = 0
  Combo2.ListIndex = 0
  HScroll1.Value = 0
End Sub


Private Sub HScroll1_Change()
  If TChart1.SeriesCount > 1 Then
    TChart1.Series(1).FunctionType.Period = HScroll1.Value
    Label5.Caption = HScroll1.Value
  End If
End Sub


