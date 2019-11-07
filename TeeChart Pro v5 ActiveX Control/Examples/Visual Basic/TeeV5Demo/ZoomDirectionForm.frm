VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ZoomDirectionForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5688
   ClientLeft      =   3480
   ClientTop       =   3588
   ClientWidth     =   7056
   LinkTopic       =   "Form2"
   ScaleHeight     =   5688
   ScaleWidth      =   7056
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4092
      Left            =   0
      TabIndex        =   0
      Top             =   1596
      Width           =   7056
      Base64          =   $"ZoomDirectionForm.frx":0000
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   795
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   3
      Text            =   "ZoomDirectionForm.frx":0092
      Top             =   0
      Width           =   7035
   End
   Begin VB.ComboBox Combo1 
      Height          =   288
      ItemData        =   "ZoomDirectionForm.frx":0111
      Left            =   2220
      List            =   "ZoomDirectionForm.frx":011E
      TabIndex        =   1
      Text            =   "Both"
      Top             =   960
      Width           =   2415
   End
   Begin VB.Label Label2 
      Caption         =   "Zoom direction:"
      Height          =   255
      Left            =   900
      TabIndex        =   2
      Top             =   1020
      Width           =   1275
   End
End
Attribute VB_Name = "ZoomDirectionForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Combo1_Click()
  TChart1.Zoom.Direction = Combo1.ItemData(Combo1.ListIndex)
End Sub

Private Sub Form_Load()
  With TChart1
    .AddSeries scPoint
    With .Series(0)
      .FillSampleValues 20
      .asPoint.Pointer.HorizontalSize = 10
      .asPoint.Pointer.VerticalSize = 8
      .asPoint.Pointer.Pen.Color = vbWhite
      With .Marks
        .Visible = True
        .ArrowLength = -8
        .Arrow.Visible = False
        .Transparent = True
        .Font.Color = vbYellow
        .Font.Bold = True
        .Font.Size = 8
        .Font.Shadow.Color = vbBlack
        .Font.Shadow.HorizSize = 1
        .Font.Shadow.VertSize = 1
        .Frame.Visible = False
        .Clip = True
      End With
    End With
  End With
End Sub
