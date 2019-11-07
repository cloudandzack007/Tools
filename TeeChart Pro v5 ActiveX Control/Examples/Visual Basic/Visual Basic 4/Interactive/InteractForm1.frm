VERSION 4.00
Begin VB.Form Form1 
   Caption         =   "TeeChart Pro ActiveX Charting Control"
   ClientHeight    =   5205
   ClientLeft      =   1710
   ClientTop       =   1455
   ClientWidth     =   7860
   BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
      Name            =   "MS Sans Serif"
      Size            =   8.25
      Charset         =   0
      Weight          =   700
      Underline       =   0   'False
      Italic          =   0   'False
      Strikethrough   =   0   'False
   EndProperty
   ForeColor       =   &H00FFFFFF&
   Height          =   5565
   Left            =   1650
   LinkTopic       =   "Form1"
   ScaleHeight     =   5205
   ScaleWidth      =   7860
   Top             =   1155
   Width           =   7980
   Begin TeeChart.TChart TChart1 
      Height          =   5070
      Left            =   120
      OleObjectBlob   =   "InteractForm1.frx":0000
      TabIndex        =   0
      Top             =   120
      Width           =   6000
   End
   Begin VB.CommandButton Command2 
      Caption         =   "&Close"
      Height          =   375
      Left            =   6360
      TabIndex        =   12
      Top             =   4800
      Width           =   1335
   End
   Begin VB.ListBox List2 
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1230
      ItemData        =   "InteractForm1.frx":042C
      Left            =   6240
      List            =   "InteractForm1.frx":0442
      TabIndex        =   7
      Top             =   600
      Width           =   975
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Draw data"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   375
      Left            =   6240
      TabIndex        =   2
      Top             =   1920
      Width           =   1455
   End
   Begin VB.ListBox List1 
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1230
      ItemData        =   "InteractForm1.frx":0470
      Left            =   7200
      List            =   "InteractForm1.frx":0486
      TabIndex        =   1
      Top             =   600
      Width           =   495
   End
   Begin VB.Label Label8 
      Caption         =   "To update the data table, select the Chart bar and do a mouseclick on the new value (higher or lower) to modify the value"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1455
      Left            =   6240
      TabIndex        =   11
      Top             =   3120
      Width           =   1455
   End
   Begin VB.Label Label7 
      Alignment       =   2  'Center
      Caption         =   "Production"
      Height          =   255
      Left            =   6360
      TabIndex        =   10
      Top             =   120
      Width           =   1335
   End
   Begin VB.Label Label6 
      Alignment       =   1  'Right Justify
      Caption         =   "Cantidad"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   255
      Left            =   6960
      TabIndex        =   9
      Top             =   360
      Width           =   735
   End
   Begin VB.Label Label5 
      Caption         =   "Item"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   255
      Left            =   6240
      TabIndex        =   8
      Top             =   360
      Width           =   495
   End
   Begin VB.Label Label4 
      ForeColor       =   &H0000FFFF&
      Height          =   255
      Left            =   6840
      TabIndex        =   6
      Top             =   2760
      Width           =   735
   End
   Begin VB.Label Label3 
      Caption         =   "Value:"
      Height          =   255
      Left            =   6240
      TabIndex        =   5
      Top             =   2760
      Width           =   975
   End
   Begin VB.Label Label2 
      ForeColor       =   &H0080FF80&
      Height          =   255
      Left            =   6840
      TabIndex        =   4
      Top             =   2400
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "Bar: "
      Height          =   255
      Left            =   6240
      TabIndex        =   3
      Top             =   2400
      Width           =   975
   End
End
Attribute VB_Name = "Form1"
Attribute VB_Creatable = False
Attribute VB_Exposed = False

Private Sub Command1_Click()
Dim i As Integer
  TChart1.Scroll.Enable = pmHorizontal
  TChart1.Zoom.Enable = False
  With TChart1.Series(0)
    For i = 0 To List1.ListCount - 1
      .Add List1.List(i), List2.List(i), clTeeColor
    Next i
  End With
  Command1.Enabled = False
End Sub


Private Sub Command2_Click()
 End
End Sub


Private Sub TChart1_OnClickBackground(ByVal Button As Long, ByVal Shift As Long, ByVal X As Long, ByVal Y As Long)
If CInt(TChart1.Axis.Bottom.CalcPosPoint(X)) > -1 Then
  Select Case Button
  Case 1
    UpdatePoint CInt(TChart1.Axis.Bottom.CalcPosPoint(X)), CInt(TChart1.Axis.Left.CalcPosPoint(Y))
  End Select
End If
End Sub


Private Sub TChart1_OnClickSeries(ByVal SeriesIndex As Long, ByVal ValueIndex As Long, ByVal Button As Long, ByVal Shift As Long, ByVal X As Long, ByVal Y As Long)
'Select Case Button
'Case 1
  UpdatePoint ValueIndex, CInt(TChart1.Axis.Left.CalcPosPoint(Y))
'End Select
End Sub

Private Sub UpdatePoint(Bar, Y As Double)
  If Bar < TChart1.Series(0).Count Then
    List1.List(Bar) = Trim(Str$(Int(Y)))
    TChart1.Series(0).YValues.Value(Bar) = Int(Y)
  End If
End Sub

Private Sub TChart1_OnMouseDown(ByVal Button As Long, ByVal Shift As Long, ByVal X As Long, ByVal Y As Long)
If CInt(TChart1.Axis.Bottom.CalcPosPoint(X)) > -1 Then
  Select Case Button
  Case 1
   UpdatePoint CInt(TChart1.Axis.Bottom.CalcPosPoint(X)), CInt(TChart1.Axis.Left.CalcPosPoint(Y))
  End Select
End If
End Sub


Private Sub TChart1_OnMouseMove(ByVal Shift As Long, ByVal X As Long, ByVal Y As Long)
  Label2.Caption = List2.List(CInt(TChart1.Axis.Bottom.CalcPosPoint(X)))
  'Label2.Caption = CInt(TChart1.Axis.Bottom.CalcPosPoint(X))
  Label4.Caption = CInt(TChart1.Axis.Left.CalcPosPoint(Y))
End Sub


