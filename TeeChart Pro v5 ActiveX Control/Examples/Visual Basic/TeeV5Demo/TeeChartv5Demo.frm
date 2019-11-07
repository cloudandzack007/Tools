VERSION 5.00
Object = "{BE4F3AC8-AEC9-101A-947B-00DD010F7B46}#1.0#0"; "Msoutl32.ocx"
Object = "{B6C10482-FB89-11D4-93C9-006008A7EED4}#1.0#0"; "TeeChart5.ocx"
Begin VB.Form Form1 
   BorderStyle     =   1  'Fixed Single
   Caption         =   "TeeChart Pro 5"
   ClientHeight    =   7380
   ClientLeft      =   2268
   ClientTop       =   2148
   ClientWidth     =   10944
   Icon            =   "TeeChartv5Demo.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   ScaleHeight     =   7380
   ScaleWidth      =   10944
   Begin VB.Frame Frame2 
      BorderStyle     =   0  'None
      Height          =   435
      Left            =   3720
      TabIndex        =   4
      Top             =   6900
      Width           =   7035
      Begin VB.CommandButton Command1 
         Caption         =   "View Form code"
         Height          =   375
         Left            =   60
         TabIndex        =   5
         Top             =   60
         Visible         =   0   'False
         Width           =   1455
      End
   End
   Begin VB.Frame Frame3 
      BorderStyle     =   0  'None
      Height          =   5655
      Left            =   3780
      TabIndex        =   1
      Top             =   1020
      Width           =   6915
   End
   Begin VB.Frame Frame1 
      BackColor       =   &H00C0C0C0&
      Height          =   1035
      Left            =   0
      TabIndex        =   0
      Top             =   -60
      Width           =   10935
      Begin TeeChart.TChart TChart1 
         Height          =   855
         Left            =   60
         TabIndex        =   3
         Top             =   120
         Width           =   10815
         Base64          =   $"TeeChartv5Demo.frx":0442
         Begin VB.PictureBox Picture2 
            Appearance      =   0  'Flat
            AutoSize        =   -1  'True
            BackColor       =   &H80000005&
            ForeColor       =   &H80000008&
            Height          =   540
            Left            =   9060
            Picture         =   "TeeChartv5Demo.frx":0836
            ScaleHeight     =   516
            ScaleWidth      =   1308
            TabIndex        =   10
            Top             =   60
            Width           =   1332
         End
         Begin VB.CommandButton Command2 
            Caption         =   "Check tree"
            Height          =   495
            Left            =   6840
            TabIndex        =   8
            Top             =   180
            Visible         =   0   'False
            Width           =   615
         End
         Begin VB.CommandButton CmdPrev 
            Caption         =   "Previous"
            Height          =   375
            Left            =   240
            MaskColor       =   &H00FFFFFF&
            Picture         =   "TeeChartv5Demo.frx":3F90
            TabIndex        =   7
            Top             =   300
            Width           =   1095
         End
         Begin VB.CommandButton CmdNext 
            Caption         =   "Next"
            Height          =   375
            Left            =   1440
            TabIndex        =   6
            Top             =   300
            Width           =   1095
         End
         Begin VB.Label Label1 
            BackStyle       =   0  'Transparent
            Caption         =   "About..."
            BeginProperty Font 
               Name            =   "MS Sans Serif"
               Size            =   9.6
               Charset         =   0
               Weight          =   400
               Underline       =   -1  'True
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   255
            Left            =   7620
            TabIndex        =   9
            Top             =   300
            Width           =   675
         End
      End
      Begin VB.Timer Timer1 
         Left            =   8520
         Top             =   240
      End
   End
   Begin MSOutl.Outline Outline1 
      Height          =   6315
      Left            =   120
      TabIndex        =   2
      Top             =   1020
      Width           =   3555
      _Version        =   65536
      _ExtentX        =   6271
      _ExtentY        =   11139
      _StockProps     =   77
      BackColor       =   16777215
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   7.8
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      BorderStyle     =   0
      PicturePlus     =   "TeeChartv5Demo.frx":A45E
      PictureMinus    =   "TeeChartv5Demo.frx":A558
      PictureLeaf     =   "TeeChartv5Demo.frx":A652
      PictureOpen     =   "TeeChartv5Demo.frx":A74C
      PictureClosed   =   "TeeChartv5Demo.frx":A846
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim SelectedIndex
Dim FormArray(250)
Dim OpenFile
Private Sub CmdNext_Click()
 With Outline1
  If .ListIndex < .ListCount - 1 Then
   .ListIndex = .ListIndex + 1
   If .Expand(.ListIndex - 1) = False Then
    .Expand(.ListIndex - 1) = True
   End If
   .Expand(.ListIndex) = True
   LoadForm (.ListIndex)
   CheckButtons
  End If
 End With
End Sub
Private Sub CmdPrev_Click()
 With Outline1
  If .ListIndex > 0 Then
   .ListIndex = .ListIndex - 1
   If .ListIndex > 1 Then
    If (.Expand(.ListIndex - 1) = False) Then
     For i = 0 To .ListIndex - 1
      .Expand(i) = True
     Next i
    End If
   End If
   .Expand(.ListIndex) = True
   LoadForm (.ListIndex)
   .ListIndex = .ListIndex
   CheckButtons
  End If
 End With
End Sub

Private Sub Command1_Click()
Dim codestring
 If OpenFile <> "" Then
  Close #1
  Open App.Path & "\" & OpenFile & ".frm" For Input As #1
  Do While Not EOF(1)
    Line Input #1, codestring
    CodeForm.Text1.Text = CodeForm.Text1.Text + codestring + Chr$(13) + Chr$(10)
  Loop
  Close #1
  CodeForm.Caption = OpenFile & ".frm"
  CodeForm.Show vbModal
 End If
End Sub

Private Sub Command2_Click()
 ' Enables test routine to step through and check tree
 Timer1.Interval = 600
 Timer1.Enabled = Not Timer1.Enabled
End Sub

Private Sub Form_Load()
 Me.Left = (Screen.Width / 2) - (Me.Width / 2)
 Me.Top = (Screen.Height / 2) - (Me.Height / 2)
 If TChart1.Canvas.IsScreenHighColor = False Then
   TChart1.Panel.Gradient.Visible = False
   LogoForm.TChart2.Panel.Gradient.Visible = False
 End If
 Timer1.Enabled = False
 LoadTree
 Outline1.Expand(0) = True
 Outline1.ListIndex = 0
 CheckButtons
 LogoForm.Show vbModeless, Me
 Forms(1).Tag = "L"
 PositionForm
End Sub
Private Sub Form_Paint()
 If Forms(1).Tag = "L" Then
  Forms(1).Top = Form1.Top + (Form1.Height / 5)
  Forms(1).Left = Form1.Left + Frame3.Left + 30
 End If
End Sub

Private Sub Label1_Click()
  TChart1.AboutBox
End Sub

Private Sub Outline1_Click()
  If Command1.Visible = False Then
    If Outline1.ListIndex > 3 Then
      Command1.Visible = True
    End If
  End If
  LoadForm (Outline1.ListIndex)
  CheckButtons
End Sub
Private Sub CheckButtons()
 With Outline1
  Select Case .ListIndex
    Case 0:                CmdPrev.Enabled = False
                           CmdNext.Enabled = True
    Case .ListCount - 1:   CmdPrev.Enabled = True
                           CmdNext.Enabled = False
    Case Else:             CmdPrev.Enabled = True
                           CmdNext.Enabled = True
  End Select
 End With
End Sub
Private Sub PositionForm()
  Forms(1).Left = Form1.Left + Frame3.Left + 30
  Frame3.Top = Form1.Top + (Form1.Height / 5)
  Forms(1).Top = Form1.Top + (Form1.Height / 6)
End Sub
Private Sub LoadTree()
Dim Indent, LastIndent, retstring, CommaLoc
Dim HasForm As Boolean
Dim FormArrayString
Dim tmpFormArrayString
Dim PIndex As Variant
  Open App.Path & "\tree.txt" For Input As #1
  PIndex = Array(0, 0, 0, 0, 0, 0)
  LastIndent = 0
  Do While Not EOF(1)
    HasForm = False
    FormArrayString = ""
    Indent = 0
    Line Input #1, retstring
    Do While InStr(1, retstring, " ") = 1
      retstring = Right(retstring, Len(retstring) - 1)
      Indent = Indent + 1
    Loop
    CommaLoc = InStr(1, retstring, ",")
    If CommaLoc <> 0 Then
      Labelstring = Left(retstring, CommaLoc - 1)
      tmpFormArrayString = Right(retstring, Len(retstring) - CommaLoc)
      If InStr(1, tmpFormArrayString, ",") > 0 Then
        FormArrayString = Left(tmpFormArrayString, InStr(1, tmpFormArrayString, ",") - 1)
      End If
      'FormArrayString = Right(retstring, Len(retstring) - CommaLoc)
      HasForm = True
    Else
      Labelstring = retstring
      FormArrayString = "LogoForm"
    End If
    If Indent > LastIndent Then
      PIndex(LastIndent) = Outline1.ListCount - 1
      Outline1.ListIndex = PIndex(LastIndent)
      Outline1.AddItem Labelstring
    ElseIf Indent = LastIndent Then
      Outline1.AddItem Labelstring
    ElseIf Indent < LastIndent Then
      Outline1.ListIndex = PIndex(Indent - 1)
      Outline1.AddItem Labelstring
    End If
    LastIndent = Indent
    If HasForm = True Then
      Outline1.PictureType(Outline1.ListCount - 1) = 2
    End If
    FormArray(Outline1.ListCount - 1) = FormArrayString
  Loop
End Sub
Private Sub LoadForm(Index As Integer)
 If (SelectedIndex <> Index) And (FormArray(Index) <> "LogoForm") Then
    SelectedIndex = Index
  If Forms.Count > 1 Then
    Unload Forms(1)
  End If
  Select Case FormArray(Index)
    Case "TADXFunctionForm": ADXFunctionFormForm.Show vbModeless, Me
    Case "TAnnotationToolForm": Tool_AnnotationForm.Show vbModeless, Me
    Case "TAreaOriginForm": AreaOriginFormForm.Show vbModeless, Me
    Case "TAreaSeriesForm": AreaSeriesFormForm.Show vbModeless, Me
    Case "TAverageFunctionNulls": AverageFunctionNullsForm.Show vbModeless, Me
    Case "TAxisArrowToolDemo": AxisArrowToolDemoForm.Show vbModeless, Me
    Case "TAxisArrowScrollInvertedForm": AxisArrowScrollInvertedForm.Show vbModeless, Me
    Case "TAxisBehind": AxisBehindForm.Show vbModeless, Me
    Case "TAxisCustom": AxisCustomForm.Show vbModeless, Me
    Case "TAxisLabelAlignForm": AxisLabelAlignFormForm.Show vbModeless, Me
    Case "TAxisLabelExp": AxisLabelExpForm.Show vbModeless, Me
    Case "TAxisMillisec": AxisMillisecForm.Show vbModeless, Me
    Case "TAxisMinorGrid": AxisMinorGridForm.Show vbModeless, Me
    Case "TAxisMultiRuntime": AxisMultiRuntimeForm.Show vbModeless, Me
    Case "TAxisOpaqueZone": AxisOpaqueZoneForm.Show vbModeless, Me
    Case "TAxisTitleVisible": AxisTitleVisibleForm.Show vbModeless, Me
    Case "TBackWallGradient": BackWallGradientForm.Show vbModeless, Me
    Case "TBackWallImage": BackWallImageForm.Show vbModeless, Me
    Case "TBarGradient": BarGradientForm.Show vbModeless, Me
    Case "TBarImage": BarImageForm.Show vbModeless, Me
    Case "TBarJoinForm": BarJoinFormForm.Show vbModeless, Me
    Case "TBarSideAll": BarSideAllForm.Show vbModeless, Me
    Case "TBarStackGroup": BarStackGroupForm.Show vbModeless, Me
    Case "TBarStackNegative": BarStackNegativeForm.Show vbModeless, Me
    Case "TBezierSeriesForm": BezierSeriesFormForm.Show vbModeless, Me
    Case "TBollingerForm": BollingerFormForm.Show vbModeless, Me
    Case "TBoxPlotForm": BoxPlotFormForm.Show vbModeless, Me
    Case "TBrushStyleForm": BrushStyleFormForm.Show vbModeless, Me
    Case "TCalcIncrementForm": CalcIncrementForm.Show vbModeless, Me
    Case "TCalendarSeriesForm": CalendarSeriesFormForm.Show vbModeless, Me
    Case "TCandleAxisLabels": CandleAxisLabelsForm.Show vbModeless, Me
    Case "TCandleCustomColors": CandleCustomColorsForm.Show vbModeless, Me
    Case "TCandleOpenClose": CandleOpenCloseForm.Show vbModeless, Me
    Case "TCanvasDotPen": CanvasDotPenForm.Show vbModeless, Me
    Case "TChartBeforeDraw": ChartBeforeDrawForm.Show vbModeless, Me
    Case "TChartEditorForm": ChartEditorFormForm.Show vbModeless, Me
    Case "TChartEditorPanelForm": ChartEditorPanelFormForm.Show vbModeless, Me
    Case "TChartGridForm": ChartGridFormForm.Show vbModeless, Me
    Case "TChartGridRows": ChartGridRowsForm.Show vbModeless, Me
    Case "TChartTransparent": ChartTransparentForm.Show vbModeless, Me
    Case "TChartWebSourceForm": ChartWebSourceFormForm.Show vbModeless, Me
    Case "TClockEdi": ClockEdiForm.Show vbModeless, Me
    Case "TColorBandToolForm": ColorBandToolFormForm.Show vbModeless, Me
    Case "TColorBandTransp": ColorBandTranspForm.Show vbModeless, Me
    Case "TColorGrid": ColorGridForm.Show vbModeless, Me
    Case "TColorGridClicked": ColorGrid_ClickedForm.Show vbModeless, Me
    Case "TColorLineForm": ColorLineFormForm.Show vbModeless, Me
    Case "TCommanderCustom": CommanderCustomForm.Show vbModeless, Me
    Case "TConesForm": ConesFormForm.Show vbModeless, Me
    Case "TConesForm": ConesFormForm.Show vbModeless, Me
    Case "TContourLevels": ContourLevelsForm.Show vbModeless, Me
    Case "TContourPaletteForm": ContourPaletteFormForm.Show vbModeless, Me
    Case "TContourSeriesForm": ContourSeriesFormForm.Show vbModeless, Me
    Case "TContourView2D": ContourView2DForm.Show vbModeless, Me
    Case "TCursorToolDemo": CursorToolDemoForm.Show vbModeless, Me
    Case "TCustomAxisEventForm": CustomAxisEventForm.Show vbModeless, Me
    Case "TDBChartOrder": DBChartOrderForm.Show vbModeless, Me
    Case "TDBChartSingleRecord": DBChartSingleRowForm.Show vbModeless, Me
    Case "TDBChartSingleRecordByCode": DBChartSingleRecordByCode.Show vbModeless, Me
    Case "TDBChartSpeed": DBChartSpeedForm.Show vbModeless, Me
    Case "TDBChartSummary": DBChartSummaryForm.Show vbModeless, Me
    Case "TDonutSeriesForm": DonutSeriesFormForm.Show vbModeless, Me
    Case "TDeleteRange": DeleteRangeForm.Show vbModeless, Me
    Case "TDragMarksToolDemo": DragMarksToolDemoForm.Show vbModeless, Me
    Case "TDrawLineOnDragged": Tools_DrawLineDraggedForm.Show vbModeless, Me
    Case "TDrawLineToolDemo": DrawLineToolDemoForm.Show vbModeless, Me
    Case "TDynArrays": DynArraysForm.Show vbModeless, Me
    Case "TDynArrayXYZ": DynArraysXYZForm.Show vbModeless, Me
    Case "TErrorBarNegativeForm": ErrorBarNegativeFormForm.Show vbModeless, Me
    Case "TExpMovAveForm": ExpMovAveFormForm.Show vbModeless, Me
    Case "TExponentialTrendForm": ExponentialTrendFormForm.Show vbModeless, Me
    Case "TExportEmailForm": ExportEmailFormForm.Show vbModeless, Me
    Case "TExportExcelForm": ExportExcelFormForm.Show vbModeless, Me
    Case "TExportHTMLForm": ExportHTMLFormForm.Show vbModeless, Me
    Case "TExportTextForm": ExportTextFormForm.Show vbModeless, Me
    Case "TExportXMLForm": ExportXMLFormForm.Show vbModeless, Me
    Case "TFunnelSeriesForm": FunnelSeriesFormForm.Show vbModeless, Me
    Case "TGIFExportForm": GIFExportFormForm.Show vbModeless, Me
    Case "TGradientMiddle": GradientMiddleForm.Show vbModeless, Me
    Case "TGrayScaleForm": GrayScaleFormForm.Show vbModeless, Me
    Case "THighLowForm": HighLowFormForm.Show vbModeless, Me
    Case "THistogramForm": HistogramFormForm.Show vbModeless, Me
    Case "THorizLineForm": HorizLineFormForm.Show vbModeless, Me
    Case "TImageToolForm": ImageToolFormForm.Show vbModeless, Me
    Case "TJPEGExportForm": JPEGExportFormForm.Show vbModeless, Me
    Case "TLegendAddText": LegendAddTextForm.Show vbModeless, Me
    Case "TLegendCheckBox": LegendCheckBoxForm.Show vbModeless, Me
    Case "TLegendCurrentPage": LegendCurrentPageForm.Show vbModeless, Me
    Case "TLegendCustomPos": LegendCustomPosForm.Show vbModeless, Me
    Case "TLegendFontColor": LegendFontColorForm.Show vbModeless, Me
    Case "TLegendImage": LegendImageForm.Show vbModeless, Me
    Case "TLegendSeriesForm": LegendSeriesFormForm.Show vbModeless, Me
    Case "TLegendStyle": LegendStyleForm.Show vbModeless, Me
    Case "TLegendSymbol": LegendSymbolForm.Show vbModeless, Me
    Case "TLegendVertSpa": LegendVertSpaForm.Show vbModeless, Me
    Case "TLegendWidths": LegendWidthsForm.Show vbModeless, Me
    Case "TLineClickableForm": LineClickableFormForm.Show vbModeless, Me
    Case "TLineColorEachLine": LineColorEachLineForm.Show vbModeless, Me
    Case "TLinePatternForm": LinePatternFormForm.Show vbModeless, Me
    Case "TLineStack": LineStackForm.Show vbModeless, Me
    Case "TMACDForm": MACDFormForm.Show vbModeless, Me
    Case "TMapSeriesForm": MapSeriesFormForm.Show vbModeless, Me
    Case "TMarksAngle": MarksAngleForm.Show vbModeless, Me
    Case "TMarksEvery": MarksEveryForm.Show vbModeless, Me
    Case "TMarksMulti": MarksMultiForm.Show vbModeless, Me
    Case "TMarksPositions": MarksPositionsForm.Show vbModeless, Me
    Case "TMarksShadow": MarksShadowForm.Show vbModeless, Me
    Case "TMarksXYStyle": MarksXYStyleForm.Show vbModeless, Me
    Case "TMarkTipsToolDemo": MarkTipsToolDemoForm.Show vbModeless, Me
    Case "TMaxMinVisibleForm": MaxMinVisibleForm.Show vbModeless, Me
    Case "TMomentumDivForm": MomentumDivFormForm.Show vbModeless, Me
    Case "TMovAveWeightedForm": MovAveWeightedFormForm.Show vbModeless, Me
    Case "TCursorToolProg": Tool_CursorProgForm.Show vbModeless, Me
    Case "TMultiAxisScroll": MultiAxisScrollForm.Show vbModeless, Me
    Case "TMultiLegendForm": MultiLegendFormForm.Show vbModeless, Me
    Case "TNearestToolDemo": NearestToolDemoForm.Show vbModeless, Me
    Case "TOpenGLEditorForm": OpenGLEditorFormForm.Show vbModeless, Me
    Case "TOpenGLTeeEditorForm": OpenGLTeeEditorForm.Show vbModeless, Me
    Case "TOrthoAngle": OrthoAngleForm.Show vbModeless, Me
    Case "TPageNavigatorForm": PageNavigatorFormForm.Show vbModeless, Me
    Case "TPageNumToolDemo": PageNumToolDemoForm.Show vbModeless, Me
    Case "TPenEndStyle": PenEndStyleForm.Show vbModeless, Me
    Case "TPCXExportForm": PCXExportFormForm.Show vbModeless, Me
    Case "TPieMultiple": PieMultipleForm.Show vbModeless, Me
    Case "TPieSemi": PieSemiForm.Show vbModeless, Me
    Case "TPieShadow": PieShadowForm.Show vbModeless, Me
    Case "TPNGExportForm": PNGExportFormForm.Show vbModeless, Me
    Case "TPoint3DEvent": Point3DEventForm.Show vbModeless, Me
    Case "TPointerDrawCanvas": PointerDrawCanvasForm.Show vbModeless, Me
    Case "TPolarClockWise": PolarClockWiseForm.Show vbModeless, Me
    Case "TPolarLabelsInside": PolarLabelsInsideForm.Show vbModeless, Me
    Case "TPrintPagesForm": PrintPagesFormForm.Show vbModeless, Me
    Case "TPrintPreviewForm": PrintPreviewFormForm.Show vbModeless, Me
    Case "TPrintPreviewForm": PrintPreviewFormForm.Show vbModeless, Me
    Case "TPrintPreviewMulti": PrintPreviewMultiForm.Show vbModeless, Me
    Case "TPrintPreviewMulti": PrintPreviewMultiForm.Show vbModeless, Me
    Case "TPrintPreviewMulti": PrintPreviewMultiForm.Show vbModeless, Me
    Case "TPrintPreviewNavigate": PrintPreviewNavigateForm.Show vbModeless, Me
    Case "TPrintPreviewNavigate": PrintPreviewNavigateForm.Show vbModeless, Me
    Case "TPyramidForm": PyramidFormForm.Show vbModeless, Me
    Case "TRemovedProperties": RemovedPropertiesForm.Show vbModeless, Me
    Case "TRightWallForm": RightWallFormForm.Show vbModeless, Me
    Case "TRootMeanSqForm": RootMeanSqFormForm.Show vbModeless, Me
    Case "TRotateToolForm": RotateToolFormForm.Show vbModeless, Me
    Case "TRotationCenter": RotationCenterForm.Show vbModeless, Me
    Case "TRSICalcForm": RSICalcFormForm.Show vbModeless, Me
    Case "TScrollButtonForm": ScrollButtonForm.Show vbModeless, Me
    Case "TSeries3DRangePalette": Series3DRangePaletteForm.Show vbModeless, Me
    Case "TSeries3DRangePalette": Series3DRangePaletteForm.Show vbModeless, Me
    Case "TSeriesBeforeAdd": OnBeforeAddForm.Show vbModeless, Me
    Case "TSeriesChartDatasource": SeriesFunctionFormForm.Show vbModeless, Me
    Case "TSeriesDepth": SeriesDepthForm.Show vbModeless, Me
    Case "TSeriesTextSourceForm": SeriesTextSourceFormForm.Show vbModeless, Me
    Case "TShapeImage": ShapeImageForm.Show vbModeless, Me
    Case "TShapeVertAlign": ShapeVertAlignForm.Show vbModeless, Me
    Case "TSmithForm": SmithFormForm.Show vbModeless, Me
    Case "TStochasticForm": StochasticFormForm.Show vbModeless, Me
    Case "TSubTitles": SubTitlesForm.Show vbModeless, Me
    Case "TSurfaceFloat": SurfaceFloatForm.Show vbModeless, Me
    Case "TSurfacePaletteForm": SurfacePaletteFormForm.Show vbModeless, Me
    Case "TSurfaceSeriesForm": SurfaceSeriesFormForm.Show vbModeless, Me
    Case "TSurfaceSides": SurfaceSidesForm.Show vbModeless, Me
    Case "TSurfaceSmooth": SurfaceSmoothForm.Show vbModeless, Me
    Case "TSurfaceWire": SurfaceWireForm.Show vbModeless, Me
    Case "TTeeCommanderForm": TeeCommanderFormForm.Show vbModeless, Me
    Case "TTemplateChart": TemplateChartForm.Show vbModeless, Me
    Case "TTitleClickEvent": TitleClickEventForm.Show vbModeless, Me
    Case "TTitleCustomPos": TitleCustomPosForm.Show vbModeless, Me
    Case "TTransparencyForm": TransparencyForm.Show vbModeless, Me
    Case "TTriSurfaceForm": TriSurfaceFormForm.Show vbModeless, Me
    Case "TTruncPyramidForm": TruncPyramidFormForm.Show vbModeless, Me
    Case "TWaterFallForm": WaterFallFormForm.Show vbModeless, Me
    Case "TWindAngleInc": WindAngleIncForm.Show vbModeless, Me
    Case "TZoomDirection": ZoomDirectionForm.Show vbModeless, Me
    Case "TZoomMinPixel": ZoomMinPixelForm.Show vbModeless, Me
    Case "TZoomPen": ZoomPenForm.Show vbModeless, Me
    Case "TWelcomeForm": LogoForm.Show vbModeless, Me
    Case "TCandleOnGetPointer": Candle_OnGetPointer.Show vbModeless, Me
    Case "TVolumeOrigin": Volume_Origin.Show vbModeless, Me
    Case "TLineOutline": Line_Outline.Show vbModeless, Me
    Case "TAreaTransparency": Area_Transparency.Show vbModeless, Me
    Case "TFastLineDrawAll": FastLine_DrawAll.Show vbModeless, Me
    Case "THistogramTransp": Histogram_Transparency.Show vbModeless, Me
    Case "TCalendarButtons": Calendar_Buttons.Show vbModeless, Me
    Case "TChartGridColors": ChartGrid_Colors.Show vbModeless, Me
    Case "TChartEditorPageNum": ChartEditor_PageNum.Show vbModeless, Me
    Case "TPolarRadarTransp": PolarRadar_Transparency.Show vbModeless, Me
    Case "TTriSurfaceHiding": TriSurface_Hiding.Show vbModeless, Me
    Case "TColorLineDragRepaint": ColorLine_DragRepaint.Show vbModeless, Me
    Case "TDrawLineByCode": DrawlineByCode.Show vbModeless, Me
    Case Else: LogoForm.Show vbModeless, Me
  End Select
 End If
 OpenFile = Forms(1).Name
 Forms(1).Tag = "L"
 PositionForm
End Sub

Private Sub TChart1_OnDblClick()
  TChart1.ShowEditor
  TChart1.StopMouse
End Sub

Private Sub Timer1_Timer()
 ' Test routine to step through tree
 With Outline1
  If .ListIndex < .ListCount - 1 Then
   Timer1.Enabled = False
   .ListIndex = .ListIndex + 1
   If .Expand(.ListIndex - 1) = False Then
    .Expand(.ListIndex - 1) = True
   End If
   .Expand(.ListIndex) = True
   LoadForm (.ListIndex)
   CheckButtons
   Timer1.Enabled = True
  Else
   Timer1.Enabled = False
  End If
 End With
End Sub
