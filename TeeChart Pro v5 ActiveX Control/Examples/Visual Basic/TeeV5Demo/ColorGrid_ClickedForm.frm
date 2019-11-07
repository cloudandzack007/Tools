VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ColorGrid_ClickedForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2760
   ClientTop       =   3090
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "ColorGrid_ClickedForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1095
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ColorGrid_ClickedForm.frx":0191
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label1 
      Caption         =   "The selected cell is:"
      Height          =   255
      Left            =   60
      TabIndex        =   3
      Top             =   1200
      Width           =   1455
   End
   Begin VB.Label LabelCell 
      Caption         =   "..."
      Height          =   255
      Left            =   1620
      TabIndex        =   2
      Top             =   1200
      Width           =   4995
   End
End
Attribute VB_Name = "ColorGrid_ClickedForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 100
End Sub

Private Sub TChart1_OnMouseMove(ByVal Shift As TeeChart.EShiftState, ByVal X As Long, ByVal Y As Long)
Dim tmp As Integer
 With TChart1
  tmp = .Series(0).Clicked(X, Y)
  If tmp = -1 Then
     LabelCell.Caption = ""
  Else
     LabelCell.Caption = "x:" & (Round(.Series(0).XValues.Value(tmp))) & " " & _
                        "z:" & (Round(.Series(0).asColorGrid.ZValues.Value(tmp))) & _
                        " Value is: " & (.Series(0).YValues.Value(tmp))
  End If
 End With
End Sub
