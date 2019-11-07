VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form LineStackForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2355
   ClientTop       =   2430
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4035
      Left            =   0
      OleObjectBlob   =   "LineStackForm.frx":0000
      TabIndex        =   0
      Top             =   1650
      Width           =   7050
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "LineStackForm.frx":03E5
      Left            =   1560
      List            =   "LineStackForm.frx":03F5
      TabIndex        =   2
      Text            =   "Normal"
      Top             =   1260
      Width           =   1635
   End
   Begin VB.Label Label2 
      Caption         =   "Mode:"
      Height          =   195
      Left            =   1020
      TabIndex        =   3
      Top             =   1320
      Width           =   495
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   1215
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "LineStackForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Combo1_Click()
  TChart1.Series(0).asLine.Stacked = Combo1.ListIndex
End Sub

Private Sub Form_Load()
  Label1.Caption = "Line Series can now be Stacked and Overlapped." & Chr(13) _
    & Chr(13) _
    & "Example: TChart1.Series(0).asLine.Stacked = cssOverlap"
  With TChart1
    .Series(0).FillSampleValues 15
    .Series(1).FillSampleValues 15
    .Series(2).FillSampleValues 15
    .Series(3).FillSampleValues 15
  End With
End Sub
