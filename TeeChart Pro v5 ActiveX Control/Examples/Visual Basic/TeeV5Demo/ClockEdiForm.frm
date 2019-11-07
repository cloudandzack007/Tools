VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ClockEdiForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3000
   ClientTop       =   2325
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Height          =   4815
      Left            =   0
      OleObjectBlob   =   "ClockEdiForm.frx":0000
      TabIndex        =   0
      Top             =   870
      Width           =   3450
   End
   Begin TeeChart.TChart TChart2 
      Height          =   4815
      Left            =   3480
      OleObjectBlob   =   "ClockEdiForm.frx":01DA
      TabIndex        =   2
      Top             =   870
      Width           =   3570
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Edit LinePoint"
      Height          =   315
      Left            =   4500
      TabIndex        =   4
      Top             =   480
      Width           =   1575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Edit Clock Series"
      Height          =   315
      Left            =   960
      TabIndex        =   3
      Top             =   480
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   375
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ClockEdiForm.frx":0372
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ClockEdiForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
  TChart1.EditOneSeries 0
End Sub

Private Sub Command2_Click()
  TChart2.EditOneSeries 0
End Sub

Private Sub Form_Load()
  TChart2.Series(0).FillSampleValues 6
End Sub
