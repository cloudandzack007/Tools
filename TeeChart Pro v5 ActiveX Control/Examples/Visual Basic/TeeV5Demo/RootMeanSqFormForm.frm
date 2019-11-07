VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form RootMeanSqFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   1650
   ClientTop       =   1545
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4515
      Left            =   0
      OleObjectBlob   =   "RootMeanSqFormForm.frx":0000
      TabIndex        =   0
      Top             =   1170
      Width           =   7050
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Complete"
      Height          =   315
      Left            =   4560
      TabIndex        =   2
      Top             =   840
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "RootMeanSqFormForm.frx":029D
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label2 
      Caption         =   "Root Mean Square value:"
      Height          =   195
      Left            =   120
      TabIndex        =   4
      Top             =   900
      Width           =   1875
   End
   Begin VB.Label Label1 
      Caption         =   "Label1"
      Height          =   195
      Left            =   2040
      TabIndex        =   3
      Top             =   900
      Width           =   1335
   End
End
Attribute VB_Name = "RootMeanSqFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(1).FunctionType.asRMS.Complete = Check1.Value
  DisplayCalc
End Sub

Private Sub DisplayCalc()
  Label1.Caption = Format(TChart1.Series(1).YValues.Value(0), "#.##")
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 20
  DisplayCalc
End Sub
