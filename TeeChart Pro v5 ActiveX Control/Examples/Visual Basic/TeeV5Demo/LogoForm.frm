VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form LogoForm 
   BorderStyle     =   0  'None
   Caption         =   "Form4"
   ClientHeight    =   5688
   ClientLeft      =   3588
   ClientTop       =   2052
   ClientWidth     =   7044
   Icon            =   "LogoForm.frx":0000
   LinkTopic       =   "Form4"
   ScaleHeight     =   5688
   ScaleWidth      =   7044
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart2 
      Align           =   1  'Align Top
      Height          =   5652
      Left            =   0
      TabIndex        =   0
      Top             =   0
      Width           =   7044
      Base64          =   $"LogoForm.frx":0442
      Begin VB.Timer Timer1 
         Interval        =   50
         Left            =   5760
         Top             =   5160
      End
   End
End
Attribute VB_Name = "LogoForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim Delta, DeltaE, ctr As Integer
Dim setOff As Boolean

Private Sub Form_Load()
  Delta = 1
  DeltaE = 1
  ctr = 0
  setOff = False
  With TChart2
    .Series(0).FillSampleValues 30
'    With .Header
'      .CustomPosition = True
'      .Top = 75
'      .Left = 51
'    End With
'    With .SubHeader
'      .CustomPosition = True
'      .Top = 280
'      .Left = 118
'    End With
  End With
End Sub

Private Sub TChart2_OnBeforeDrawSeries()
  With TChart2.Canvas
    .Pen.Visible = False
    .Brush.Color = RGB(0, 0, 160)
    .Rectangle 0, .Height / 4, .Width, 3 * .Height / 4
  End With
End Sub

Private Sub Timer1_Timer()
ctr = ctr + 1
If ctr = 150 Then setOff = True
With TChart2.Aspect
    .Rotation = .Rotation + Delta
    If .Rotation = 316 And setOff = True Then Timer1.Enabled = False
    If .Rotation = 360 Then
      Delta = -1
    ElseIf .Rotation = 270 Then
      Delta = 1
    End If
      .Elevation = .Elevation + DeltaE
    If .Elevation = 360 Then
      DeltaE = -1
    ElseIf .Elevation = 300 Then
      DeltaE = 1
    End If
End With
End Sub
