<%
//===============================
// VbScript constants for use
// with TeeChart Pro AX v5
//===============================

//== EConstants
var clTeeColor = 536870912;
var clNone = 536870911;

//== EAxisLabelStyle
var talAuto = 0;
var talNone = 1;
var talValue = 2;
var talMark = 3;
var talText = 4;

//== EAxisType
var atLeft = 0;
var atTop = 1;
var atRight = 2;
var atBottom = 3;
var atDepth = 4;
var atCustom = 5;

//== EBarStyles
var bsRectangle = 0;
var bsPyramid = 1;
var bsInvPyramid = 2;
var bsCilinder = 3;
var bsEllipse = 4;
var bsArrow = 5;
var bsRectGradient = 6;

//== EBorderStyle
var bsNone = 0;
var bsSingle = 1;

//== EBrushStyle
var bsSolid = 0;
var bsClear = 1;
var bsHorizontal = 2;
var bsVertical = 3;
var bsFDiagonal = 4;
var bsBDiagonal = 5;
var bsCross = 6;
var bsDiagCross = 7;
var bsFill80 = 8;
var bsFill60 = 9; 
var bsFill40 = 10;
var bsFill20 = 11,
var bsFill10 = 12;
var bsZigZag = 13;
var bsVertSmall = 14; 
var bsHorizSmall = 15;
var bsDiagSmall = 16;
var bsBackDiagSmall = 17;
var bsCrossSmall = 18;
var bsBackCrossSmall = 19;

//== ECandleStyle 
var csCandleBar = 0;
var csCandleStick = 1;

//== ECanvasBackMode
var cbmNone = 0;
var cbmTransparent = 1;
var cbmOpaque = 2;

//== EChartPenStyle
var psSolid = 0;
var psDash = 1;
var psDot = 2;
var psDashDot = 3;
var psDashDotDot = 4;
var psClear = 5;
var psInsideFrame = 6;
var psSmallDots = 7;

//== EChartScroll
var pmNone = 0;	
var pmHorizontal = 1;
var pmVertical = 2;
var pmBoth = 3;

//== EDateTimeStep
var dtOneMilliSecond = 0;
var dtOneSecond = 1;
var dtFiveSeconds = 2;
var dtTenSeconds = 3;
var dtFifteenSeconds = 4;
var dtThirtySeconds = 5;
var dtOneMinute = 6;
var dtFiveMinutes = 7;
var dtTenMinutes = 8;
var dtFifteenMinutes = 9;
var dtThirtyMinutes = 10;
var dtOneHour = 11;
var dtTwoHours = 12;
var dtSixHours = 13;
var dtTwelveHours = 14;
var dtOneDay = 15;
var dtTwoDays = 16;
var dtThreeDays = 17;
var dtOneWeek = 18;
var dtHalfMonth = 19;
var dtOneMonth = 20;
var dtTwoMonths = 21;
var dtSixMonths = 22;
var dtOneYear = 23;

//== EDragMode
var dmManual = 0;;
var dmAutomatic = 1;;

//== EDragState 
vardsDragEnter = 0;
vardsDragLeave = 1;
vardsDragMove = 2;

//== EErrorWidthUnits 
const unsigned ewuPercent = 0;
const unsigned ewuPixels= 1;

//== EFunctionType
var tfCopy = 0;
var tfAdd = 1;
var tfSubtract = 2;
var tfMultiply = 3;
var tfDivide = 4;
var tfAverage = 5;
var tfHigh = 6;
var tfLow = 7;
var tfMovavg = 8;
var tfExpavg = 9;
var tfMomentum = 10;
var tfCurveFit = 11;
var tfRSI = 12;
var tfTrend = 13;
var tfStdDeviation = 14;
var tfCumulative = 15;
var tfCount = 16;
var tfExpTrend = 17;
var tfExpMovAvg = 18;
var tfMomentumDiv = 19;
var tfRMS = 20;
var tfMACD = 21;
var tfStochastic = 22;
var tfBollinger = 23;
var tfADX = 24;

//== EGradientDirection 
var gdTopBottom = 0;
var gdBottomTop = 1;
var gdLeftRight = 2;
var gdRightLeft = 3;
var gdFromCenter = 4;
var gdFromTopLeft = 5;
var gdFromBottomLeft = 6;

//== EHorizontalAxis
var aTopAxis = 0;
var aBottomAxis = 1;
var aBothHorizAxis = 2;
var aCustomHorizAxis = 3;

//== EJPEGPerformance
var jpegBestQuality = 0;
var jpegBestSpeed = 1;

//== ELegendAlignment
var laLeft = 0;
var laRight = 1;
var laTop = 2;
var laBottom = 3;

//== ELegendStyle
var lsAuto = 0;
var lsSeries = 1;
var lsValues = 2;
var lsLastValues = 3;

//== ELegendTextStyle
var ltsPlain = 0;
var ltsLeftValue =1;
var ltsRightValue =2;
var ltsLeftPercent = 3;
var ltsRightPercent = 4;
var ltsXValue = 5;

//== EMarkStyle
var smsValue = 0;
var smsPercent = 1;
var smsLabel = 2;
var smsLabelPercent = 3;
var smsLabelValue = 4;
var smsLegend = 5;
var smsPercentTotal = 6;
var smsLabelPercentTotal = 7;
var smsXValue = 8;
var smsXY = 9;

//== EMouseButton
var mbLeft = 1;
var mbRight	= 2;
var mbMiddle = 4;

//== EMultiArea
var maNone = 0;
var maStacked = 1;
var maStacked100 = 2;

//== EMultiBar
var mbNone = 0;
var mbSide = 1;
var mbStacked = 2;
var mbStacked100 = 3;

//== EPanelBevel
var bvNone = 0;
var bvLowered = 1;
var bvRaised = 2;

//== EPointerStyle
var psRectangle = 0;
var psCircle = 1;
var psTriangle = 2;
var psDownTriangle = 3;
var psCross = 4;
var psDiagCross = 5;
var psStar = 6;
var psDiamond = 7;
var psSmallDot = 8;

//== EPrinterOrientation
var poPortrait = 0;
var poLandscape = 1;

//== ESeriesClass
var scLine = 0;
var scBar = 1;
var scHorizBar = 2;
var scArea = 3;
var scPoint = 4;
var scPie = 5;
var scFastLine = 6;
var scShape = 7;
var scGantt = 8;
var scBubble = 9;
var scArrow = 10;
var scCandle = 11;
var scPolar = 12;
var scSurface = 13;
var scVolume = 14;
var scErrorBar = 15;
var scBezier = 16;
var scContour = 17;
var scError = 18;
var scPoint3D = 19;
var scRadar = 20;
var scClock = 21; 
var scWindRose= 22;  
var scBar3D = 23;  
var scImageBar = 24;  
var scDonut = 25; 
var scTriSurface = 26; 
var scBox = 27; 
var scHorizBox = 28; 
var scHistogram = 29; 
var scColorGrid = 30; 
var scBarJoin = 31; 
var scHighLow = 32; 
var scWaterfall = 33; 
var scSmith = 34; 
var scPyramid = 35; 
var scMap = 36;
var scHorizLine = 37;

//== EShapeStyle
var chasRectangle = 0;
var chasCircle = 1;
var chasVertLine = 2	;
var chasHorizLine = 3	;
var chasTriangle = 4;
var chasInvertTriangle = 5;
var chasLine = 6;
var chasDiamond = 7;
var chasCube = 8;
var chasCross = 9;
var chasDiagCross = 10;
var chasStar = 11;
var chasPyramid = 12;
var chasInvertPyramid = 13;

//== EShapeXYStyle
var xysPixels = 0;
var xysAxis = 1;
var xysAxisOrigin = 2;

//== EShiftState
var ssShift = 1;
var ssAlt = 2;
var ssCtrl = 4;
var ssLeft = 8;
var ssRight = 16;
var ssMiddle = 5;
var ssDouble = 6;

//== ETeeBackImageMode 
var pbmStretch = 0;
var pbmTile = 1;
var pbmCenter = 2;

//== ETextAlignment
var aLeft = 0;
var aRight = 1;
var aCenter = 2;

//== ETitleAlignment
var taLeftJustify = 0;
var taRightJustify = 1;
var taCenter = 2;

//== ETypeFitting
var cfPolynomial = 0;
var cfLogarithmic = 1;
var cfExponential = 2;

//==EValueListOrder
var loNone = 0;
var loAscending = 1;
var loDescending = 2;

//==EVerticalAxis
var aLeftAxis = 0;
var aRightAxis = 1;
var aBothVertAxis = 2;
var aCustomVertAxis = 3;

//==EErrorSeriesStyle
var essLeft = 0;
var essRight = 1;
var essLeftRight = 2;
var essTop = 3;
var essBottom = 4;
var essTopBottom = 5;

//==EFunctionPeriodAlign
var paFirst = 0;
var paCenter = 1;
var paLast = 2;

//==EFunctionPeriodStyle
var psNumPoints = 0;
var psRange = 1;

//==ETeeEditorPage
var epMain = 0;
var epGeneral = 1;
var epAxis = 2;
var epTitles = 3;
var epLegend = 4;
var epPanel = 5;
var epPaging = 6;
var epWalls = 7;
var epAspect = 8;
var epSeriesGeneral = 9;
var epSeriesMarks = 10; 
var epAllSeries = 11; 
var epSeriesData = 12; 
var epExport = 13; 
var epTools = 14; 
var epPrintPreview = 15;
var epOpenGL = 16;

//== EStreamType
var stJpeg = 0;
var stTeeTemplate = 1;

//== ECursorToolStyle
var cssHorizontal = 0;
var cssVertical = 1;
var cssBoth = 2;

//== EAxisArrowToolPosition
var aaStart = 0; 
var aaEnd = 1; 
var aaBoth = 2;
  
//== ENearestToolStyle
var hsNone = 0; 
var hsCircle = 1;
var hsRectangle = 2;
var hsDiamond = 3;

//== EChartObjectShapeStyle
var fosRectangle = 0;
var fosRoundRectangle = 1;

//== EToolClass
var tcCursor = 0; 
var tcDragMarks = 1; 
var tcAxisArrow = 2; 
var tcDraw = 3; 
var tcHints = 4; 
var tcColorband = 5; 
var tcColorLine = 6; 
var tcRotate = 7;

//== ELegendSymbolPosition
var spLeft = 0; 
var spRight = 1;
  
//== ELegendSymbolSize
var lcsPercent = 0; 
var lcsPixels = 1;

//== ETeeZoomDirection
var tzdHorizontal = 0;
var tzdVertical = 1;
var tzdBoth = 2;

//== ETeePreviewPanelOrientation
var ppoDefault = 0;
var ppoPortrait = 1;
var ppoLandscape = 2;

//== ERSIStyle
var rsiOpenClose = 0; 
var rsiClose = 1;
  
//== ECustomSeriesStack
var cssNone = 0; 
var cssOverlap = 1; 
var cssStack = 2; 
var cssStack100 = 3;
  
//== ETeeVertAlign
var vaTop = 0; 
var vaCenter = 1; 
var vaBottom = 2;
  
//== EAxisLabelAlign
var alDefault = 0; 
var alOpposite = 1;

//== EBezierStyle
var bsWindows = 0;
var bsBezier3 = 1;
var bsBezier4 = 2;

//== EPaletteStyle
var psPale = 0;
var psStrong = 1;

//== EGIFCompression
var gcLZW = 0; 
var gcRLE = 1;
  
//== EGIFDitherMode
var dmNearest = 0; 
var dmFloydSteinberg = 1; 
var dmStucki = 2; 
var dmSierra = 3; 
var dmJaJuNI = 4; 
var dmSteveArche = 5; 
var dmBurkes = 6;
  
//== EGIFColorReduction
var rmNone = 0; 
var rmWindows20 = 1; 
var rmWindows256 = 2; 
var rmWindowsGray = 3; 
var rmMonochrome = 4; 
var rmGrayScale = 5; 
var rmNetscape = 6; 
var rmQuantize = 7; 
var rmQuantize256 = 8;

//== EPixelFormat
var pfDevice = 0;
var pf1bit = 1;
var pf4bit = 2;
var pf8bit = 3;
var pf15bit = 4;
var pf16bit = 5;
var pf24bit = 6;
var pf32bit = 7;

//== EMarkToolMouseAction
var mtmMove = 0;
var mtmClick = 1;

//== ETeeCommanderControls
var tcbNormal = 0; 
var tcbSeparator = 1;
var tcbRotate = 2; 
var tcbMove = 3; 
var tcbZoom = 4;
var tcbDepth = 5; 
var tcbEdit = 6; 
var tcbPrintPreview = 7;
var tcbCopy = 8; 
var tcbSave = 9; 
var tcbLabel = 10;
var tcb3D = 11;

//== EAnnotationPosition
var ppLeftTop = 0;
var ppLeftBottom = 1;
var ppRightTop = 2;
var ppRightBottom = 3;

//== EDatasourceType
var dstAllRecords = 0; 
var dstSingleRecord = 1;

%>
