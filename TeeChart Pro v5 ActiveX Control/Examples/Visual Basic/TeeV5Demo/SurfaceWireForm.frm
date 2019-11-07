VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form SurfaceWireForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2640
   ClientTop       =   1965
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4035
      Left            =   0
      OleObjectBlob   =   "SurfaceWireForm.frx":0000
      TabIndex        =   0
      Top             =   1650
      Width           =   7050
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "SurfaceWireForm.frx":01FC
      Left            =   2220
      List            =   "SurfaceWireForm.frx":0209
      TabIndex        =   4
      Text            =   "Palette"
      Top             =   1260
      Width           =   1695
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Wireframe"
      Height          =   315
      Left            =   4560
      TabIndex        =   2
      Top             =   1260
      Value           =   1  'Checked
      Width           =   1155
   End
   Begin VB.Label Label2 
      Caption         =   "Wireframe colour style:"
      Height          =   195
      Left            =   360
      TabIndex        =   3
      Top             =   1320
      Width           =   1695
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   1215
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7120
   End
End
Attribute VB_Name = "SurfaceWireForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  TChart1.Series(0).asSurface.WireFrame = Check1.Value
End Sub

Private Sub Combo1_Click()
  With TChart1.Series(0).asSurface
    Select Case Combo1.ListIndex
      Case 0: .UseColorRange = False
        .UsePalette = False
      Case 1: .UseColorRange = True
        .UsePalette = False
      Case 2: .UseColorRange = False
        .UsePalette = True
    End Select
  End With
End Sub

Private Sub Form_Load()
  Label1.Caption = "Surface series can now display in ""Wire-frame"" mode using the color palette and range." _
  & Chr(13) _
  & Chr(13) _
  & "Example: TChart1.Series(0).asSurface.UsePalette=True " & Chr(13) _
  & "Example: TChart1.Series(0).asSurface.Pen.Width=2 " & Chr(13) _
  & "Example: TChart1.Series(0).asSurface.WireFrame=True "
  With TChart1
    .Series(0).FillSampleValues 15
    .Series(0).asSurface.WireFrame = True
    .Series(0).asSurface.UseColorRange = False
    .Series(0).asSurface.UsePalette = True
    .Series(0).asSurface.Pen.Width = 2
  End With
End Sub
