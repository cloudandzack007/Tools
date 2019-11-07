VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ChartTransparentForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3465
   ClientTop       =   3750
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4155
      Left            =   0
      OleObjectBlob   =   "ChartTransparentForm.frx":0000
      TabIndex        =   0
      Top             =   1530
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Copy Chart"
      Height          =   375
      Left            =   360
      TabIndex        =   2
      Top             =   1080
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   1035
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "ChartTransparentForm.frx":02B1
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "ChartTransparentForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()

Dim tmpcolor
Dim tmpbevel

 With TChart1
  tmpbevel = .Panel.BevelOuter
  tmpcolor = .Panel.Color
 
  ' no border
  .Panel.BevelOuter = bvNone

  ' set transparent
  .Panel.Color = clNone

  ' copy to clipboard in metafile mode
  .Export.CopyToClipboardMetafile True

  ' restore previous color
  .Panel.Color = tmpcolor

  ' previous border
  .Panel.BevelOuter = tmpbevel
 End With
End Sub

Private Sub Form_Load()
  TChart1.Series(0).FillSampleValues 10
End Sub


