VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ContourPaletteFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2355
   ClientTop       =   3780
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4635
      Left            =   0
      OleObjectBlob   =   "ContourPaletteFormForm.frx":0000
      TabIndex        =   0
      Top             =   1050
      Width           =   7050
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "ContourPaletteFormForm.frx":018C
      Left            =   1140
      List            =   "ContourPaletteFormForm.frx":019F
      TabIndex        =   2
      Text            =   "Gradient 3 colors"
      Top             =   660
      Width           =   1755
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   615
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ContourPaletteFormForm.frx":01F5
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "Colors:"
      Height          =   255
      Left            =   480
      TabIndex        =   3
      Top             =   720
      Width           =   495
   End
End
Attribute VB_Name = "ContourPaletteFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Combo1_Change()
  Combo1_Click
End Sub

Private Sub Combo1_Click()
  SetSeriesColors
End Sub

Private Sub SetSeriesColors()
  With TChart1.Series(0)
    Select Case Combo1.ListIndex
      Case 0 ' single color
        .asContour.UseColorRange = False
        .asContour.UsePalette = False
        .Color = vbYellow
      Case 1 ' gradient 2 colors
        .asContour.UseColorRange = True
        .asContour.UsePalette = False
        .asContour.StartColor = vbBlue
        .asContour.EndColor = vbRed
        .asContour.MidColor = clNone
      Case 2 ' gradient 3 colors
        .asContour.UseColorRange = True
        .asContour.UsePalette = False
        .asContour.StartColor = vbBlue
        .asContour.EndColor = vbRed
        .asContour.MidColor = vbYellow
      Case 3 ' palette "pale"
        .asContour.UseColorRange = False
        .asContour.UsePalette = True
        .asContour.PaletteStyle = psPale
      Case 4 ' palette "strong"
        .asContour.UseColorRange = False
        .asContour.UsePalette = True
        .asContour.PaletteStyle = psStrong
    End Select
  End With
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues (25)
  Combo1.ListIndex = 2
  Combo1_Click
End Sub

Private Sub Text1_Click()
  TChart1.ShowEditor
End Sub
