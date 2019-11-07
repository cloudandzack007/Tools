VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form Calendar_Buttons 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3765
   ClientTop       =   2325
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "Calendar_Buttons.frx":0000
      TabIndex        =   1
      Top             =   1410
      Width           =   7050
   End
   Begin VB.CheckBox Check2 
      Caption         =   "Transparency"
      Height          =   375
      Left            =   4440
      TabIndex        =   3
      Top             =   960
      Width           =   1635
   End
   Begin VB.CheckBox Check1 
      Caption         =   "Show Buttons"
      Height          =   375
      Left            =   120
      TabIndex        =   2
      Top             =   960
      Value           =   1  'Checked
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   0
      Text            =   "Calendar_Buttons.frx":02AC
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "Calendar_Buttons"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Check1_Click()
  With TChart1.Series(0).asCalendar
    .NextButtonVisible = Check1.Value
    .PreviousButtonVisible = Check1.Value
  End With
End Sub

Private Sub Check2_Click()
 Dim tmp
  If Check2.Value = 1 Then
   tmp = 50
  Else
   tmp = 0
  End If
  With TChart1.Series(0).asCalendar
    .Days.Transparency = tmp
    .Sunday.Transparency = tmp
    .Today.Transparency = tmp
  End With
End Sub
