VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ChartEditorPanelFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2340
   ClientTop       =   2295
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   8007.042
   ScaleMode       =   0  'User
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.ChartEditorPanel ChartEditorPanel1 
      Height          =   4515
      Left            =   0
      OleObjectBlob   =   "ChartEditorPanelFormForm.frx":0000
      TabIndex        =   2
      Top             =   1140
      Width           =   4935
   End
   Begin TeeChart.TChart TChart1 
      Height          =   4515
      Left            =   4980
      OleObjectBlob   =   "ChartEditorPanelFormForm.frx":0051
      TabIndex        =   0
      Top             =   1140
      Width           =   2070
   End
   Begin VB.ComboBox Combo2 
      Height          =   315
      ItemData        =   "ChartEditorPanelFormForm.frx":0318
      Left            =   4440
      List            =   "ChartEditorPanelFormForm.frx":0325
      TabIndex        =   4
      Text            =   "Tabs"
      Top             =   600
      Width           =   1455
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "ChartEditorPanelFormForm.frx":0346
      Left            =   2100
      List            =   "ChartEditorPanelFormForm.frx":0356
      TabIndex        =   3
      Text            =   "Top"
      Top             =   600
      Width           =   1155
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   555
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ChartEditorPanelFormForm.frx":0374
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label2 
      Caption         =   "Tabs style:"
      Height          =   195
      Left            =   3540
      TabIndex        =   6
      Top             =   660
      Width           =   795
   End
   Begin VB.Label Label1 
      Caption         =   "Tabs position:"
      Height          =   195
      Left            =   1020
      TabIndex        =   5
      Top             =   660
      Width           =   1035
   End
End
Attribute VB_Name = "ChartEditorPanelFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  ChartEditorPanel1.Chart = TChart1
  ChartEditorPanel1.BevelOuter = bvNone
  TChart1.Series(0).FillSampleValues 15
End Sub
