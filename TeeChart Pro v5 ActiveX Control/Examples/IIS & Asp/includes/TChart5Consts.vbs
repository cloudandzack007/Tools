<%
'=============================
' VbScript constants for use
' with TeeChart Pro AX v5
'=============================

'==EConstants
const clTeeColor = 536870912
const clNone = 536870911

'== EAxisLabelStyle
const talAuto = 0
const talNone = 1
const talValue = 2
const talMark = 3
const talText = 4

'== EAxisType
const atLeft = 0
const atTop = 1
const atRight = 2
const atBottom = 3
const atDepth = 4
const atCustom = 5

'== EBarStyles
const bsRectangle = 0
const bsPyramid = 1
const bsInvPyramid = 2
const bsCilinder = 3
const bsEllipse = 4
const bsArrow = 5
const bsRectGradient = 6

'== EBorderStyle
const bsNone = 0
const bsSingle = 1

'== EBrushStyle
const bsSolid = 0
const bsClear = 1
const bsHorizontal = 2
const bsVertical = 3
const bsFDiagonal = 4
const bsBDiagonal = 5
const bsCross = 6
const bsDiagCross = 7
const bsFill80 = 8
const bsFill60 = 9 
const bsFill40 = 10
const bsFill20 = 11
const bsFill10 = 12
const bsZigZag = 13
const bsVertSmall = 14 
const bsHorizSmall = 15
const bsDiagSmall = 16
const bsBackDiagSmall = 17
const bsCrossSmall = 18
const bsBackCrossSmall = 19

'== ECandleStyle 
const csCandleBar = 0
const csCandleStick = 1

'== ECanvasBackMode
const cbmNone = 0
const cbmTransparent = 1
const cbmOpaque = 2

'== EChartPenStyle
const psSolid = 0
const psDash = 1
const psDot = 2
const psDashDot = 3
const psDashDotDot = 4
const psClear = 5
const psInsideFrame = 6
const psSmallDots = 7

'== EChartScroll
const pmNone = 0	
const pmHorizontal = 1
const pmVertical = 2
const pmBoth = 3

'== EDateTimeStep
const dtOneMilliSecond = 0
const dtOneSecond = 1
const dtFiveSeconds = 2
const dtTenSeconds = 3
const dtFifteenSeconds = 4
const dtThirtySeconds = 5
const dtOneMinute = 6
const dtFiveMinutes = 7
const dtTenMinutes = 8
const dtFifteenMinutes = 9
const dtThirtyMinutes = 10
const dtOneHour = 11
const dtTwoHours = 12
const dtSixHours = 13
const dtTwelveHours = 14
const dtOneDay = 15
const dtTwoDays = 16
const dtThreeDays = 17
const dtOneWeek = 18
const dtHalfMonth = 19
const dtOneMonth = 20
const dtTwoMonths = 21
const dtSixMonths = 22
const dtOneYear = 23

'== EDragMode
const dmManual = 0
const dmAutomatic = 1

'== EDragState 
const unsigned longdsDragEnter = 0
const unsigned longdsDragLeave = 1
const unsigned longdsDragMove = 2

'== EErrorWidthUnits 
const unsigned ewuPercent = 0
const unsigned ewuPixels= 1

'== EFunctionType
const tfCopy = 0
const tfAdd = 1
const tfSubtract = 2
const tfMultiply = 3
const tfDivide = 4
const tfAverage = 5
const tfHigh = 6
const tfLow = 7
const tfMovavg = 8
const tfExpavg = 9
const tfMomentum = 10
const tfCurveFit = 11
const tfRSI = 12
const tfTrend = 13
const tfStdDeviation = 14
const tfCumulative = 15
const tfCount = 16
const tfExpTrend = 17
const tfExpMovAvg = 18
const tfMomentumDiv = 19
const tfRMS = 20
const tfMACD = 21
const tfStochastic = 22
const tfBollinger = 23
const tfADX = 24

'== EGradientDirection 
const gdTopBottom = 0
const gdBottomTop = 1
const gdLeftRight = 2
const gdRightLeft = 3
const gdFromCenter = 4
const gdFromTopLeft = 5
const gdFromBottomLeft = 6


'== EHorizontalAxis
const aTopAxis = 0
const aBottomAxis = 1
const aBothHorizAxis = 2
const aCustomHorizAxis = 3

'== EJPEGPerformance
const jpegBestQuality = 0
const jpegBestSpeed = 1

'== ELegendAlignment
const laLeft = 0
const laRight = 1
const laTop = 2
const laBottom = 3

'== ELegendStyle
const lsAuto = 0
const lsSeries = 1
const lsValues = 2
const lsLastValues = 3

'== ELegendTextStyle
const ltsPlain = 0
const ltsLeftValue =1
const ltsRightValue =2
const ltsLeftPercent = 3
const ltsRightPercent = 4
const ltsXValue = 5

'== EMarkStyle
const smsValue = 0
const smsPercent = 1
const smsLabel = 2
const smsLabelPercent = 3
const smsLabelValue = 4
const smsLegend = 5
const smsPercentTotal = 6
const smsLabelPercentTotal = 7
const smsXValue = 8
const smsXY = 9

'== EMouseButton
const mbLeft = 1
const mbRight	= 2
const mbMiddle = 4

'== EMultiArea
const maNone = 0
const maStacked = 1
const maStacked100 = 2

'== EMultiBar
const mbNone = 0
const mbSide = 1
const mbStacked = 2
const mbStacked100 = 3

'== EPanelBevel
const bvNone = 0
const bvLowered = 1
const bvRaised = 2

'== EPointerStyle
const psRectangle = 0
const psCircle = 1
const psTriangle = 2
const psDownTriangle = 3
const psCross = 4
const psDiagCross = 5
const psStar = 6
const psDiamond = 7
const psSmallDot = 8

'== EPrinterOrientation
const poPortrait = 0
const poLandscape = 1

'== ESeriesClass
const scLine = 0
const scBar = 1
const scHorizBar = 2
const scArea = 3
const scPoint = 4
const scPie = 5
const scFastLine = 6
const scShape = 7
const scGantt = 8
const scBubble = 9
const scArrow = 10
const scCandle = 11
const scPolar = 12
const scSurface = 13
const scVolume = 14
const scErrorBar = 15
const scBezier = 16
const scContour = 17
const scError = 18
const scPoint3D = 19
const scRadar = 20
const scClock = 21 
const scWindRose= 22  
const scBar3D = 23  
const scImageBar = 24  
const scDonut = 25 
const scTriSurface = 26 
const scBox = 27 
const scHorizBox = 28 
const scHistogram = 29 
const scColorGrid = 30 
const scBarJoin = 31 
const scHighLow = 32 
const scWaterfall = 33 
const scSmith = 34 
const scPyramid = 35 
const scMap = 36
const scHorizLine = 37

'== EShapeStyle
const chasRectangle = 0
const chasCircle = 1
const chasVertLine = 2	
const chasHorizLine = 3	
const chasTriangle = 4
const chasInvertTriangle = 5
const chasLine = 6
const chasDiamond = 7
const chasCube = 8
const chasCross = 9
const chasDiagCross = 10
const chasStar = 11
const chasPyramid = 12
const chasInvertPyramid = 13

'== EShapeXYStyle
const xysPixels = 0
const xysAxis = 1
const xysAxisOrigin = 2

'== EShiftState
const ssShift = 1
const ssAlt = 2
const ssCtrl = 4
const ssLeft = 8
const ssRight = 16
const ssMiddle = 5
const ssDouble = 6

'== ETeeBackImageMode 
const pbmStretch = 0
const pbmTile = 1
const pbmCenter = 2

'== ETextAlignment
const aLeft = 0
const aRight = 1
const aCenter = 2

'== ETitleAlignment
const taLeftJustify = 0
const taRightJustify = 1
const taCenter = 2

'== ETypeFitting
const cfPolynomial = 0
const cfLogarithmic = 1
const cfExponential = 2

'==EValueListOrder
const loNone = 0
const loAscending = 1
const loDescending = 2

'==EVerticalAxis
const aLeftAxis = 0
const aRightAxis = 1
const aBothVertAxis = 2
const aCustomVertAxis = 3

'==EErrorSeriesStyle
const essLeft = 0
const essRight = 1
const essLeftRight = 2
const essTop = 3
const essBottom = 4
const essTopBottom = 5

'==EFunctionPeriodAlign
const paFirst = 0
const paCenter = 1
const paLast = 2

'==EFunctionPeriodStyle
const psNumPoints = 0
const psRange = 1

'==ETeeEditorPage
const epMain = 0
const epGeneral = 1
const epAxis = 2
const epTitles = 3
const epLegend = 4
const epPanel = 5
const epPaging = 6
const epWalls = 7
const epAspect = 8
const epSeriesGeneral = 9
const epSeriesMarks = 10
const epAllSeries = 11
const epSeriesData = 12
const epExport = 13
const epTools = 14
const epPrintPreview = 15
const epOpenGL = 16

'== EStreamType
const stJpeg = 0
const stTeeTemplate = 1

'== ECursorToolStyle
const cssHorizontal = 0
const cssVertical = 1
const cssBoth = 2

'== EAxisArrowToolPosition
const aaStart = 0 
const aaEnd = 1 
const aaBoth = 2
  
'== ENearestToolStyle
const hsNone = 0
const hsCircle = 1
const hsRectangle = 2
const hsDiamond = 3

'== EChartObjectShapeStyle
const fosRectangle = 0
const fosRoundRectangle = 1

'== EToolClass
const tcCursor = 0 
const tcDragMarks = 1 
const tcAxisArrow = 2 
const tcDraw = 3 
const tcHints = 4 
const tcColorband = 5 
const tcColorLine = 6 
const tcRotate = 7

'== ELegendSymbolPosition
const spLeft = 0 
const spRight = 1
  
'== ELegendSymbolSize
const lcsPercent = 0 
const lcsPixels = 1

'== ETeeZoomDirection
const tzdHorizontal = 0
const tzdVertical = 1
const tzdBoth = 2

'== ETeePreviewPanelOrientation
const ppoDefault = 0
const ppoPortrait = 1
const ppoLandscape = 2

'== ERSIStyle
const rsiOpenClose = 0 
const rsiClose = 1
  
'== ECustomSeriesStack
const cssNone = 0 
const cssOverlap = 1 
const cssStack = 2 
const cssStack100 = 3
  
'== ETeeVertAlign
const vaTop = 0 
const vaCenter = 1 
const vaBottom = 2
  
'== EAxisLabelAlign
const alDefault = 0 
const alOpposite = 1

'== EBezierStyle
const bsWindows = 0
const bsBezier3 = 1
const bsBezier4 = 2

'== EPaletteStyle
const psPale = 0
const psStrong = 1

'== EGIFCompression
const gcLZW = 0 
const gcRLE = 1
  
'== EGIFDitherMode
const dmNearest = 0 
const dmFloydSteinberg = 1 
const dmStucki = 2 
const dmSierra = 3 
const dmJaJuNI = 4 
const dmSteveArche = 5 
const dmBurkes = 6
  
'== EGIFColorReduction
const rmNone = 0 
const rmWindows20 = 1 
const rmWindows256 = 2 
const rmWindowsGray = 3 
const rmMonochrome = 4 
const rmGrayScale = 5 
const rmNetscape = 6 
const rmQuantize = 7 
const rmQuantize256 = 8

'== EPixelFormat
const pfDevice = 0
const pf1bit = 1
const pf4bit = 2
const pf8bit = 3
const pf15bit = 4
const pf16bit = 5
const pf24bit = 6
const pf32bit = 7

'== EMarkToolMouseAction
const mtmMove = 0
const mtmClick = 1

'== ETeeCommanderControls
const tcbNormal = 0 
const tcbSeparator = 1
const tcbRotate = 2 
const tcbMove = 3 
const tcbZoom = 4 
const tcbDepth = 5 
const tcbEdit = 6 
const tcbPrintPreview = 7
const tcbCopy = 8 
const tcbSave = 9 
const tcbLabel = 10
const tcb3D = 11

'== EAnnotationPosition
const ppLeftTop = 0 
const ppLeftBottom = 1
const ppRightTop = 2
const ppRightBottom = 3

'== EDatasourceType
const dstAllRecords = 0 
const dstSingleRecord = 1
%>
