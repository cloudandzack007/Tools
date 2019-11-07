VERSION 5.00
Object = "{F9043C88-F6F2-101A-A3C9-08002B2F49FB}#1.2#0"; "COMDLG32.OCX"
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BackWallImageForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2205
   ClientTop       =   2595
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4455
      Left            =   0
      OleObjectBlob   =   "BackWallImageForm.frx":0000
      TabIndex        =   0
      Top             =   1230
      Width           =   7050
   End
   Begin MSComDlg.CommonDialog CommonDialog1 
      Left            =   4980
      Top             =   720
      _ExtentX        =   847
      _ExtentY        =   847
      _Version        =   393216
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Select new image"
      Height          =   375
      Left            =   2640
      TabIndex        =   3
      Top             =   780
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   675
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "BackWallImageForm.frx":008D
      Top             =   0
      Width           =   7095
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Use Backwall image"
      Height          =   315
      Left            =   0
      TabIndex        =   1
      Top             =   840
      Value           =   1  'Checked
      Width           =   1935
   End
End
Attribute VB_Name = "BackWallImageForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim ImageFile As String

Private Sub Check1_Click()
  If Check1.Value = 1 Then
    TChart1.Walls.Back.Brush.LoadImage ImageFile
  Else
    TChart1.Walls.Back.Brush.ClearImage
  End If
End Sub

Private Sub Command1_Click()
  ' load an image to fill Chart background...
  CommonDialog1.Filter = "Pictures(*.bmp)|*.bmp"
  CommonDialog1.ShowOpen
  If CommonDialog1.FileName <> "" Then
    ImageFile = CommonDialog1.FileName
  End If
  Check1.Value = 1
  Check1_Click
End Sub

Private Sub Form_Load()
  TChart1.Walls.Back.Transparent = False
  ImageFile = App.Path & "\backimage.bmp"
  TChart1.Walls.Back.Brush.LoadImage ImageFile
End Sub
