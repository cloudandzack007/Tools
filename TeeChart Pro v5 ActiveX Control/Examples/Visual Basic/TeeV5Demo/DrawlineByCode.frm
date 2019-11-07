VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form DrawlineByCode 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3315
   ClientTop       =   2790
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   3945
      Left            =   0
      OleObjectBlob   =   "DrawlineByCode.frx":0000
      TabIndex        =   0
      Top             =   1740
      Width           =   7050
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Add Line"
      Height          =   375
      Left            =   3240
      TabIndex        =   10
      Top             =   1140
      Width           =   1155
   End
   Begin VB.TextBox Text5 
      Enabled         =   0   'False
      Height          =   315
      Left            =   2160
      TabIndex        =   7
      Text            =   "Text3"
      Top             =   1320
      Width           =   555
   End
   Begin VB.TextBox Text4 
      BeginProperty DataFormat 
         Type            =   1
         Format          =   "0"
         HaveTrueFalseNull=   0
         FirstDayOfWeek  =   0
         FirstWeekOfYear =   0
         LCID            =   3082
         SubFormatType   =   1
      EndProperty
      Enabled         =   0   'False
      Height          =   315
      Left            =   2160
      TabIndex        =   6
      Text            =   "Text2"
      Top             =   960
      Width           =   555
   End
   Begin VB.TextBox Text3 
      Enabled         =   0   'False
      Height          =   315
      Left            =   660
      TabIndex        =   3
      Text            =   "Text3"
      Top             =   1320
      Width           =   555
   End
   Begin VB.TextBox Text2 
      BeginProperty DataFormat 
         Type            =   1
         Format          =   "0"
         HaveTrueFalseNull=   0
         FirstDayOfWeek  =   0
         FirstWeekOfYear =   0
         LCID            =   3082
         SubFormatType   =   1
      EndProperty
      Enabled         =   0   'False
      Height          =   315
      Left            =   660
      TabIndex        =   2
      Text            =   "Text2"
      Top             =   960
      Width           =   555
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      Locked          =   -1  'True
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "DrawlineByCode.frx":0172
      Top             =   0
      Width           =   7035
   End
   Begin VB.Label Label6 
      Caption         =   "0"
      Height          =   195
      Left            =   5880
      TabIndex        =   12
      Top             =   1200
      Width           =   615
   End
   Begin VB.Label Label5 
      Caption         =   "Line count:"
      Height          =   195
      Left            =   4860
      TabIndex        =   11
      Top             =   1200
      Width           =   855
   End
   Begin VB.Label Label4 
      Caption         =   "EndY:"
      Height          =   255
      Left            =   1560
      TabIndex        =   9
      Top             =   1380
      Width           =   555
   End
   Begin VB.Label Label3 
      Caption         =   "EndX:"
      Height          =   195
      Left            =   1560
      TabIndex        =   8
      Top             =   1020
      Width           =   555
   End
   Begin VB.Label Label2 
      Caption         =   "StartY:"
      Height          =   255
      Left            =   60
      TabIndex        =   5
      Top             =   1380
      Width           =   555
   End
   Begin VB.Label Label1 
      Caption         =   "StartX:"
      Height          =   195
      Left            =   60
      TabIndex        =   4
      Top             =   1020
      Width           =   555
   End
End
Attribute VB_Name = "DrawlineByCode"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()

On Error GoTo Errormsg
  With TChart1.Tools.Items(0).asDrawLine
    .AddLine (Text2.Text), _
             (Text3.Text), _
             (Text4.Text), _
             (Text5.Text)
    Label6.Caption = .Lines.Count
    Text2.Enabled = True
    Text3.Enabled = True
    Text4.Enabled = True
    Text5.Enabled = True
  End With
  Exit Sub
Errormsg:
  MsgBox ("Please check that you have entered numeric values")
End Sub

Private Sub Form_Load()
Dim Xmin, Xmax, Ymin, Ymax
  With TChart1
    .Series(0).FillSampleValues 20
    .Environment.InternalRepaint
    Xmin = .Axis.Bottom.Minimum
    Xmax = .Axis.Bottom.Maximum
    Ymin = .Axis.Left.Minimum
    Ymax = .Axis.Left.Maximum
    Text2.Text = Format(Xmin + ((Xmax - Xmin) / 3), "#.00")
    Text3.Text = Format(Ymin + ((Ymax - Ymin) / 3), "#.00")
    Text4.Text = Format(Xmin + ((Xmax - Xmin) / 3 * 2), "#.00")
    Text5.Text = Format(Ymin + ((Ymax - Ymin) / 3 * 2), "#.00")
  End With
End Sub
