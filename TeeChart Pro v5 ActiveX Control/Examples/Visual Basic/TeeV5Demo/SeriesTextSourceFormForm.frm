VERSION 5.00
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "teechart5.ocx"
Begin VB.Form SeriesTextSourceFormForm 
   BorderStyle     =   0  'None
   Caption         =   "Form2"
   ClientHeight    =   5685
   ClientLeft      =   2895
   ClientTop       =   2325
   ClientWidth     =   7050
   LinkTopic       =   "Form2"
   ScaleHeight     =   5685
   ScaleWidth      =   7050
   ShowInTaskbar   =   0   'False
   Begin TeeChart.TChart TChart1 
      Align           =   2  'Align Bottom
      Height          =   4275
      Left            =   0
      OleObjectBlob   =   "SeriesTextSourceFormForm.frx":0000
      TabIndex        =   0
      Top             =   1410
      Width           =   7050
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Show Editor"
      Height          =   375
      Left            =   5760
      TabIndex        =   3
      Top             =   960
      Width           =   1275
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Import data to Chart"
      Height          =   375
      Left            =   0
      TabIndex        =   2
      Top             =   960
      Width           =   1755
   End
   Begin TeeChart.SeriesTextSource SeriesTextSource1 
      Left            =   4080
      OleObjectBlob   =   "SeriesTextSourceFormForm.frx":01E5
      Top             =   960
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H00C0FFFF&
      Height          =   915
      Left            =   0
      MultiLine       =   -1  'True
      TabIndex        =   1
      Text            =   "SeriesTextSourceFormForm.frx":0231
      Top             =   0
      Width           =   7035
   End
End
Attribute VB_Name = "SeriesTextSourceFormForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Command1_Click()
  TChart1.Series(0).asSurface.IrregularGrid = True
  TChart1.Axis.Left.Increment = 0.01
  With SeriesTextSource1
  
    ' AddField AName refers to the Series ValueList name
    ' The AIndex refers to the Column index of the text file
    ' beginning with Column 1
    With TChart1.Series(0)
      For i = 0 To .ValueLists.Count - 1
        SeriesTextSource1.AddField .ValueLists.Items(i).Name, i + 1
      Next i
    End With
    
    If InStr(CStr(5.3), ",") > 0 Then
      .FileName = App.Path & "\SampleData.txt"
    Else
      .FileName = App.Path & "\SampleDataPoint.txt"
    End If
    
    .Series = TChart1.Series(0)
    
    ' or Series may be passed as Index but you would then
    ' have to set the Chart for the source
    'eg.
    ' .Chart = TChart1
    ' .Series = 0
    
    .Active = True
  End With
End Sub

Private Sub Command2_Click()
  TChart1.ShowEditor
End Sub
