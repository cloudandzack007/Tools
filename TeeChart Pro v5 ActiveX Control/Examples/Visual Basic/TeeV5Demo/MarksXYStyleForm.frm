VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form MarksXYStyleForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2580
   ClientTop       =   2280
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4515
      Left            =   0
      OleObjectBlob   =   "MarksXYStyleForm.frx":0000
      TabIndex        =   0
      Top             =   1170
      Width           =   7050
   End
   Begin VB.Label Label1 
      BackColor       =   &H00C0FFFF&
      BorderStyle     =   1  'Fixed Single
      Caption         =   "Label1"
      Height          =   1095
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "MarksXYStyleForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Form_Load()
  Label1.Caption = "Series Marks can now display the X and Y values for the point." & Chr(13) _
  & Chr(13) _
  & "Example: TChart1.Series(0).Marks.Style=smsXY"
  With TChart1
    .Series(0).FillSampleValues 15
    .Series(0).Marks.Visible = True
    .Series(0).Marks.Style = smsXY
  End With
End Sub
