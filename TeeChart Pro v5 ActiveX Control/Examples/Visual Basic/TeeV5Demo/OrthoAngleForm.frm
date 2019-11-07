VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form OrthoAngleForm 
   BorderStyle     =   0  'None
   Caption         =   "Form3"
   ClientHeight    =   5685
   ClientLeft      =   3495
   ClientTop       =   3045
   ClientWidth     =   7050
   LinkTopic       =   "Form3"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4215
      Left            =   0
      OleObjectBlob   =   "OrthoAngleForm.frx":0000
      TabIndex        =   0
      Top             =   1470
      Width           =   7050
   End
   Begin VB.HScrollBar HScroll1 
      Height          =   255
      LargeChange     =   10
      Left            =   3360
      Max             =   90
      SmallChange     =   5
      TabIndex        =   1
      Top             =   1080
      Width           =   3615
   End
   Begin VB.Label Label2 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Use TChart1.Aspect.OrthoAngle to change the viewpoint for the Chart when in orthogonal mode."
      Height          =   975
      Left            =   0
      TabIndex        =   3
      Top             =   0
      Width           =   6975
      WordWrap        =   -1  'True
   End
   Begin VB.Label Label1 
      Caption         =   "Orthogonal angle:"
      Height          =   255
      Left            =   1680
      TabIndex        =   2
      Top             =   1080
      Width           =   1575
   End
End
Attribute VB_Name = "OrthoAngleForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  HScroll1.Value = 45
  TChart1.AddSeries scBar
  TChart1.Series(0).FillSampleValues 6
  TChart1.Aspect.Chart3DPercent = 90
End Sub

Private Sub HScroll1_Change()
  HScroll1_Scroll
End Sub

Private Sub HScroll1_Scroll()
  TChart1.Aspect.OrthoAngle = HScroll1.Value
End Sub
