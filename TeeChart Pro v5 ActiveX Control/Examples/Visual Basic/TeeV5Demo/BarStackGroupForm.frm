VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BarStackGroupForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2490
   ClientTop       =   3945
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
      Base64          =   $"BarStackGroupForm.frx":0000
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1035
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   4
      Text            =   "BarStackGroupForm.frx":075C
      Top             =   0
      Width           =   7035
   End
   Begin VB.VScrollBar VScroll1 
      Height          =   375
      Left            =   2340
      Max             =   1
      TabIndex        =   1
      Top             =   1080
      Width           =   255
   End
   Begin VB.Label Label3 
      Caption         =   "..."
      Height          =   255
      Left            =   2700
      TabIndex        =   3
      Top             =   1140
      Width           =   735
   End
   Begin VB.Label Label2 
      Caption         =   "Number of Series in first group:"
      Height          =   255
      Left            =   60
      TabIndex        =   2
      Top             =   1140
      Width           =   2175
   End
End
Attribute VB_Name = "BarStackGroupForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
Dim i
  With TChart1
    For i = 0 To .SeriesCount - 1
      .Series(i).FillSampleValues 6
      .Series(i).asBar.MultiBar = mbStacked
      .Series(i).Marks.Visible = False
      If i < 3 Then
        .Series(i).asBar.StackGroup = 0
      Else
        .Series(i).asBar.StackGroup = 1
      End If
    Next i
    VScroll1.Min = .SeriesCount
  End With
  VScroll1.Value = 3
  VScroll1_Scroll
End Sub

Private Sub VScroll1_Change()
  VScroll1_Scroll
End Sub

Private Sub VScroll1_Scroll()
Dim i
  Label3.Caption = VScroll1.Value
  With TChart1
    For i = 0 To VScroll1.Value - 1
      .Series(i).asBar.StackGroup = 0
    Next i
    For i = VScroll1.Value To .SeriesCount - 1
      .Series(i).asBar.StackGroup = 1
    Next i
  End With
End Sub
