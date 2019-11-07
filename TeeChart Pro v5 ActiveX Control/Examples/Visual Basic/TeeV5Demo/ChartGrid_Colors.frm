VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ChartGrid_Colors 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3885
   ClientTop       =   2175
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.ChartGridNavigator ChartGridNavigator1 
      Height          =   495
      Left            =   0
      OleObjectBlob   =   "ChartGrid_Colors.frx":0000
      TabIndex        =   2
      Top             =   5220
      Width           =   3240
   End
   Begin TeeChart.ChartGrid ChartGrid1 
      Height          =   3675
      Left            =   0
      OleObjectBlob   =   "ChartGrid_Colors.frx":0053
      TabIndex        =   3
      Top             =   1500
      Width           =   3240
   End
   Begin TeeChart.TChart TChart1 
      Height          =   4180
      Left            =   3240
      OleObjectBlob   =   "ChartGrid_Colors.frx":0118
      TabIndex        =   4
      Top             =   1500
      Width           =   3810
   End
   Begin VB.CheckBox Check3 
      Caption         =   "Edit mode"
      Height          =   315
      Left            =   4320
      TabIndex        =   6
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1455
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show Fields"
      Height          =   195
      Left            =   360
      TabIndex        =   5
      Top             =   1140
      Value           =   1  'Checked
      Width           =   1575
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Show Colours"
      Height          =   315
      Left            =   2160
      TabIndex        =   1
      Top             =   1080
      Value           =   1  'Checked
      Width           =   1515
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "ChartGrid_Colors.frx":0292
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ChartGrid_Colors"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
  ChartGrid1.ShowFields = Check1.Value
End Sub

Private Sub Check2_Click()
  ChartGrid1.ShowColors = Check2.Value
End Sub

Private Sub Check3_Click()
  ChartGrid1.EditorMode = Check3.Value
  ChartGridNavigator1.EnableButtons
End Sub

Private Sub Form_Load()
  ChartGrid1.Chart = TChart1
  ChartGridNavigator1.Grid = ChartGrid1
  ChartGrid1.ShowColors = True
  ChartGrid1.ShowFields = True
  With TChart1.Series(0)
    .Add 32, "John", clTeeColor
    .Add 417, "Anne", clTeeColor
    .Add 65, "Louise", clTeeColor
    .Add 87, "Jeff", clTeeColor
  End With
  ChartGrid1.RecalcDimensions
End Sub

