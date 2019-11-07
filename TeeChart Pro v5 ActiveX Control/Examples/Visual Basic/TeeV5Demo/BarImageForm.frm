VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form BarImageForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2940
   ClientTop       =   2295
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "BarImageForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1035
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   2
      Text            =   "BarImageForm.frx":01E7
      Top             =   0
      Width           =   7035
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Use patterns"
      Height          =   375
      Left            =   0
      TabIndex        =   1
      Top             =   1140
      Value           =   1  'Checked
      Width           =   2055
   End
End
Attribute VB_Name = "BarImageForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Check1_Click()
  With TChart1
    If Check1.Value = 0 Then
      .Series(0).asBar.BarBrush.ClearImage
      .Series(1).asBar.BarBrush.ClearImage
    Else
      .Series(0).asBar.BarBrush.LoadImage App.Path & "\Pattern1.bmp"
      .Series(1).asBar.BarBrush.LoadImage App.Path & "\Pattern2.bmp"
    End If
  End With
End Sub

Private Sub Form_Load()
  With TChart1
    .Series(0).FillSampleValues 3
    .Series(1).FillSampleValues 3
    .Series(0).asBar.BarBrush.LoadImage App.Path & "\Pattern1.bmp"
    .Series(1).asBar.BarBrush.LoadImage App.Path & "\Pattern2.bmp"
  End With
End Sub
