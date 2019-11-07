VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form RSICalcFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3450
   ClientTop       =   3555
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3975
      Left            =   0
      OleObjectBlob   =   "RSICalcFormForm.frx":0000
      TabIndex        =   0
      Top             =   1710
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1215
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   6
      Text            =   "RSICalcFormForm.frx":04E8
      Top             =   0
      Width           =   7035
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   375
      Left            =   4320
      TabIndex        =   4
      Top             =   1260
      Value           =   10
      Width           =   315
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "RSICalcFormForm.frx":05E3
      Left            =   1200
      List            =   "RSICalcFormForm.frx":05ED
      TabIndex        =   2
      Text            =   "Open and Close"
      Top             =   1260
      Width           =   2055
   End
   Begin VB.Label Label4 
      Caption         =   "0"
      Height          =   255
      Left            =   4740
      TabIndex        =   5
      Top             =   1320
      Width           =   495
   End
   Begin VB.Label Label3 
      Caption         =   "Period:"
      Height          =   255
      Left            =   3480
      TabIndex        =   3
      Top             =   1320
      Width           =   675
   End
   Begin VB.Label Label2 
      Caption         =   "Calc. method:"
      Height          =   255
      Left            =   0
      TabIndex        =   1
      Top             =   1320
      Width           =   1035
   End
End
Attribute VB_Name = "RSICalcFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Combo1_Click()
  TChart1.Series(1).FunctionType.asRSI.Style = Combo1.ListIndex
  TChart1.Series(1).CheckDataSource
End Sub

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 100
    ' .Series(1).DataSource = "Series0"
    .Series(1).CheckDataSource
  End With
  VScroll1_Change
End Sub

Private Sub TChart1_OnDblClick()
  TChart1.ShowEditor
  TChart1.StopMouse
End Sub

Private Sub VScroll1_Change()
  TChart1.Series(1).FunctionType.Period = VScroll1.Value
  Label4.Caption = Str$(VScroll1.Value)
End Sub
