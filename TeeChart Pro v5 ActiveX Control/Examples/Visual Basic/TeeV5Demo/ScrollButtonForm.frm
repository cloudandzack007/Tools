VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ScrollButtonForm 
   BorderStyle     =   0  'None
   Caption         =   "ScrollButtonForm"
   ClientHeight    =   5688
   ClientLeft      =   0
   ClientTop       =   0
   ClientWidth     =   7044
   LinkTopic       =   "Form2"
   ScaleHeight     =   5688
   ScaleWidth      =   7044
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  'Windows Default
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4272
      Left            =   0
      TabIndex        =   0
      Top             =   1416
      Width           =   7044
      Base64          =   $"ScrollButtonForm.frx":0000
   End
   Begin VB.ComboBox Combo1 
      Height          =   288
      ItemData        =   "ScrollButtonForm.frx":02F6
      Left            =   1920
      List            =   "ScrollButtonForm.frx":0300
      TabIndex        =   2
      Text            =   "Right"
      Top             =   960
      Width           =   2415
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   792
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ScrollButtonForm.frx":0311
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "(Zoom is Left Mousebutton)"
      Height          =   252
      Left            =   4560
      TabIndex        =   4
      Top             =   1020
      Width           =   2052
   End
   Begin VB.Label Label2 
      Caption         =   "Scroll Mousebutton:"
      Height          =   252
      Left            =   360
      TabIndex        =   3
      Top             =   1020
      Width           =   1512
   End
End
Attribute VB_Name = "ScrollButtonForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Combo1_Change()
  With TChart1
    .Scroll.MouseButton = Combo1.ListIndex
    If .Scroll.MouseButton = mbLeft Then
      .Zoom.MouseButton = mbRight
      Label1.Caption = "(Zoom is Right Mousebutton)"
    Else
      .Zoom.MouseButton = mbLeft
      Label1.Caption = "(Zoom is Left Mousebutton)"
    End If
  End With
End Sub

Private Sub Combo1_Click()
  Combo1_Change
End Sub

Private Sub Form_Load()
  With TChart1
    .Scroll.Enable = pmHorizontal
    .Series(0).FillSampleValues 60
  End With
End Sub

