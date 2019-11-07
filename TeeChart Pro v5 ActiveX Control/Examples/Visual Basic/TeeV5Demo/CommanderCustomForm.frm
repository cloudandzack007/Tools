VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form CommanderCustomForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3255
   ClientTop       =   2100
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TeeCommander TeeCommander1 
      Height          =   495
      Left            =   0
      OleObjectBlob   =   "CommanderCustomForm.frx":0000
      TabIndex        =   2
      Top             =   960
      Width           =   7035
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4215
      Left            =   0
      OleObjectBlob   =   "CommanderCustomForm.frx":004C
      TabIndex        =   0
      Top             =   1470
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   975
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "CommanderCustomForm.frx":00C3
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "CommanderCustomForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  TeeCommander1.Chart = TChart1
  TeeCommander1.Controls = Array(tcbRotate, _
                                 tcbSeparator, _
                                 tcbZoom, _
                                 tcbSeparator, _
                                 tcbEdit)
End Sub
