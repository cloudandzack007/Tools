VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form CalendarSeriesFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3480
   ClientTop       =   2085
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart3 
      Height          =   2085
      Left            =   4320
      OleObjectBlob   =   "CalendarSeriesFormForm.frx":0000
      TabIndex        =   3
      Top             =   3600
      Width           =   2715
   End
   Begin TeeChart.TChart TChart2 
      Height          =   1995
      Left            =   4320
      OleObjectBlob   =   "CalendarSeriesFormForm.frx":0391
      TabIndex        =   2
      Top             =   1530
      Width           =   2715
   End
   Begin TeeChart.TChart TChart1 
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "CalendarSeriesFormForm.frx":0745
      TabIndex        =   0
      Top             =   1530
      Width           =   4290
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Month name"
      Height          =   315
      Left            =   1380
      TabIndex        =   6
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1215
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Weekdays"
      Height          =   315
      Left            =   120
      TabIndex        =   5
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1095
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit"
      Height          =   375
      Left            =   2760
      TabIndex        =   4
      Top             =   1080
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "CalendarSeriesFormForm.frx":09C2
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label2 
      Caption         =   "..."
      ForeColor       =   &H0080FFFF&
      Height          =   255
      Left            =   6060
      TabIndex        =   8
      Top             =   1140
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "Clicked on date (left Chart):"
      Height          =   255
      Left            =   4020
      TabIndex        =   7
      Top             =   1140
      Width           =   1995
   End
End
Attribute VB_Name = "CalendarSeriesFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).asCalendar.Weekdays.Visible = Check1.Value
End Sub

Private Sub Check2_Click()
  TChart1.Series(0).asCalendar.Months.Visible = Check2.Value
End Sub

Private Sub Command1_Click()
  TChart1.EditOneSeries 0
End Sub

Private Sub TChart1_OnClickSeries(ByVal SeriesIndex As Long, ByVal ValueIndex As Long, ByVal Button As TeeChart.EMouseButton, ByVal Shift As TeeChart.EShiftState, ByVal X As Long, ByVal Y As Long)
Dim ccc
  If TChart1.Series(0).Clicked(X, Y) = 0 Then
     Label2.Caption = Format(TChart1.Series(0).asCalendar.Date, "dd/mmm/yyyy")
  End If
End Sub
