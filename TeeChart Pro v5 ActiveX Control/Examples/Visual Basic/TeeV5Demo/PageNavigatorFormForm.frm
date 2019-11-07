VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form PageNavigatorFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   3480
   ClientTop       =   2625
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.ChartPageNavigator ChartPageNavigator1 
      Height          =   315
      Left            =   2040
      OleObjectBlob   =   "PageNavigatorFormForm.frx":0000
      TabIndex        =   2
      Top             =   960
      Width           =   3360
   End
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4335
      Left            =   0
      OleObjectBlob   =   "PageNavigatorFormForm.frx":0053
      TabIndex        =   0
      Top             =   1350
      Width           =   7050
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   855
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "PageNavigatorFormForm.frx":01A3
      Top             =   0
      Width           =   7040
   End
   Begin VB.Label Label1 
      Caption         =   "Page:"
      Height          =   255
      Left            =   60
      TabIndex        =   3
      Top             =   1020
      Width           =   1695
   End
End
Attribute VB_Name = "PageNavigatorFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False


Private Sub Form_Load()
  ChartPageNavigator1.Chart = TChart1
  TChart1.Series(0).FillSampleValues 705
  UpdateLabel
End Sub

Private Sub UpdateLabel()
  With TChart1.Page
    Label1.Caption = "Page " & .Current & " of " & .Count & " pages"
  End With
End Sub

Private Sub TChart1_OnAfterDraw()
  UpdateLabel
End Sub

Private Sub Text1_DblClick()
  TChart1.ShowEditor
End Sub
