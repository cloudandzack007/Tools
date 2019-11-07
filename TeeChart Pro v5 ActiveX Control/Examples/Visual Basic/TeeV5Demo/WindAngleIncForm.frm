VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form WindAngleIncForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2985
   ClientTop       =   3255
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4455
      Left            =   0
      OleObjectBlob   =   "WindAngleIncForm.frx":0000
      TabIndex        =   0
      Top             =   1230
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   735
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   3
      Text            =   "WindAngleIncForm.frx":0383
      Top             =   0
      Width           =   7035
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "WindAngleIncForm.frx":040E
      Left            =   2400
      List            =   "WindAngleIncForm.frx":0422
      TabIndex        =   1
      Text            =   "30"
      Top             =   840
      Width           =   2055
   End
   Begin VB.Label Label2 
      Caption         =   "Angle increment:"
      Height          =   255
      Left            =   1080
      TabIndex        =   2
      Top             =   900
      Width           =   1215
   End
End
Attribute VB_Name = "WindAngleIncForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Combo1_Click()
  TChart1.Series(0).asWindRose.AngleIncrement = Combo1.ItemData(Combo1.ListIndex)
End Sub

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 7
    .Series(0).asWindRose.CircleLabels.Visible = True
    .Series(0).asWindRose.AngleIncrement = 30
  End With
End Sub
