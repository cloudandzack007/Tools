VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form PrintPreviewMultiForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3060
   ClientTop       =   3270
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart2 
      Height          =   2175
      Left            =   0
      OleObjectBlob   =   "PrintPreviewMultiForm.frx":0000
      TabIndex        =   3
      Top             =   3480
      Width           =   3495
   End
   Begin TeeChart.TeePreviewPanel TeePreviewPanel1 
      Height          =   4275
      Left            =   3540
      OleObjectBlob   =   "PrintPreviewMultiForm.frx":0131
      TabIndex        =   2
      Top             =   1380
      Width           =   3495
   End
   Begin TeeChart.TChart TChart1 
      Height          =   2055
      Left            =   0
      OleObjectBlob   =   "PrintPreviewMultiForm.frx":0182
      TabIndex        =   1
      Top             =   1380
      Width           =   3495
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Print page"
      Height          =   375
      Left            =   5820
      TabIndex        =   8
      Top             =   720
      Width           =   1215
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "PrintPreviewMultiForm.frx":02D5
      Left            =   1320
      List            =   "PrintPreviewMultiForm.frx":02E2
      TabIndex        =   4
      Text            =   "Both"
      Top             =   720
      Width           =   1635
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   675
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "PrintPreviewMultiForm.frx":0304
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label3 
      Caption         =   "Label3"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      ForeColor       =   &H000000FF&
      Height          =   195
      Left            =   120
      TabIndex        =   7
      Top             =   1140
      Width           =   2955
   End
   Begin VB.Label Label2 
      Caption         =   "When both Charts previewed, click on Chart to make active for resizing."
      Height          =   615
      Left            =   3180
      TabIndex        =   6
      Top             =   720
      Width           =   2415
   End
   Begin VB.Label Label1 
      Caption         =   "Show Chart[s]:"
      Height          =   195
      Left            =   120
      TabIndex        =   5
      Top             =   780
      Width           =   1095
   End
End
Attribute VB_Name = "PrintPreviewMultiForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim NumCharts As Integer

Private Sub Combo1_Change()
  Combo1_Click
End Sub

Private Sub Combo1_Click()
  Select Case Combo1.ListIndex
    Case 0: AddCharts 0, 1
    Case 1: AddCharts 1, 1
    Case 2: AddCharts 2, 2
  End Select
End Sub

Private Sub Command1_Click()
  TeePreviewPanel1.PrintPage
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 10
  TChart2.Series(0).FillSampleValues 10
  With TChart1.Printer
    .PrintProportional = False
    .MarginLeft = 2
    .MarginTop = 2
    .MarginRight = 60
    .MarginBottom = 60
  End With
  With TChart2.Printer
    .PrintProportional = False
    .MarginLeft = 60
    .MarginTop = 60
    .MarginRight = 2
    .MarginBottom = 2
  End With
  Combo1.ListIndex = 0
  'AddCharts 0, 1
End Sub

Private Function AddCharts(Choice, Active As Integer)
  TeePreviewPanel1.Panels.Clear
  Select Case Combo1.ListIndex
    Case 0:
      If Active = 1 Then
        TeePreviewPanel1.AddChart TChart1
        TeePreviewPanel1.AddChart TChart2
      Else
        TeePreviewPanel1.AddChart TChart2
        TeePreviewPanel1.AddChart TChart1
      End If
      NumCharts = 2
    Case 1: TeePreviewPanel1.AddChart TChart1
            NumCharts = 1
    Case 2: TeePreviewPanel1.AddChart TChart2
            NumCharts = 1
  End Select
  TeePreviewPanel1.Repaint
  Label3.Caption = "Active Chart: TeeChart " & Active
  If Active = 1 Then
    TChart1.Panel.BevelInner = bvLowered
    TChart2.Panel.BevelInner = bvNone
  Else
    TChart1.Panel.BevelInner = bvNone
    TChart2.Panel.BevelInner = bvLowered
  End If
End Function

Private Sub TChart1_OnClick()
  If NumCharts = 2 Then
    AddCharts 0, 1
    TChart1.Panel.BevelInner = bvLowered
    TChart2.Panel.BevelInner = bvNone
  End If
End Sub

Private Sub TChart2_OnClick()
  If NumCharts = 2 Then
    AddCharts 0, 2
    TChart1.Panel.BevelInner = bvNone
    TChart2.Panel.BevelInner = bvLowered
  End If
End Sub
