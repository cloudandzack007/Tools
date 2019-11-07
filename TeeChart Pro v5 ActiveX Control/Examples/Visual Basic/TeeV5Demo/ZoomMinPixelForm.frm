VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form ZoomMinPixelForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5550
   ClientLeft      =   3405
   ClientTop       =   2820
   ClientWidth     =   6975
   LinkTopic       =   "Form2"
   ScaleHeight     =   5550
   ScaleWidth      =   6975
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3795
      Left            =   0
      OleObjectBlob   =   "ZoomMinPixelForm.frx":0000
      TabIndex        =   0
      Top             =   1755
      Width           =   6975
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      ItemData        =   "ZoomMinPixelForm.frx":0077
      Left            =   5580
      List            =   "ZoomMinPixelForm.frx":0084
      TabIndex        =   6
      Text            =   "Left"
      Top             =   1320
      Width           =   1395
   End
   Begin VB.TextBox Text1 
      Height          =   315
      Left            =   3240
      TabIndex        =   3
      Text            =   "16"
      Top             =   1320
      Width           =   675
   End
   Begin VB.Label Label4 
      Caption         =   "Mouse button:"
      Height          =   255
      Left            =   4320
      TabIndex        =   5
      Top             =   1380
      Width           =   1155
   End
   Begin VB.Label Label3 
      Caption         =   "Min pixels:"
      Height          =   255
      Left            =   2340
      TabIndex        =   4
      Top             =   1380
      Width           =   855
   End
   Begin VB.Label Label2 
      Caption         =   "Drag to zoom.."
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   9.75
         Charset         =   0
         Weight          =   700
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   315
      Left            =   120
      TabIndex        =   2
      Top             =   1320
      Width           =   1755
   End
   Begin VB.Label Label1 
      Caption         =   "Label1"
      Height          =   1155
      Left            =   0
      TabIndex        =   1
      Top             =   0
      Width           =   6975
   End
End
Attribute VB_Name = "ZoomMinPixelForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Combo1_Click()
  TChart1.Zoom.MouseButton = Combo1.ItemData(Combo1.ListIndex)
End Sub

Private Sub Form_Load()
  Label1.Caption = "By default, a Chart is zoomed when the user drags a rectangle of minimum 15 pixels size." & Chr(13) _
  & Chr(13) _
  & "Now the number of minimum pixels can be customized." & Chr(13) _
  & "Example: TChart1.Zoom.MinimumPixels = 16"
  With TChart1
    .AddSeries scArea
    .Series(0).FillSampleValues 100
    .Zoom.MinimumPixels = CInt(Text1.Text)
  End With
End Sub

Private Sub Text1_Change()
Dim Instring, i
Dim Accept As Boolean
  Accept = True
  Instring = Text1.Text
  i = 1
  Do While Len(Mid(Instring, i, 1)) > 0
    If Mid(Instring, i, 1) < 0 Or Mid(Instring, i, 1) > 9 Then
      Accept = False
      MsgBox ("Numeric characters please")
    End If
    i = i + 1
  Loop
  If Accept = True Then
    TChart1.Zoom.MinimumPixels = CInt(Text1.Text)
  End If
End Sub
