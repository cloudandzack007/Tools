# Microsoft Developer Studio Project File - Name="VCTeeChart5" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=VCTeeChart5 - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "VCTeeChart5.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "VCTeeChart5.mak" CFG="VCTeeChart5 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "VCTeeChart5 - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "VCTeeChart5 - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "VCTeeChart5 - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0xc0a /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0xc0a /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "VCTeeChart5 - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0xc0a /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0xc0a /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "VCTeeChart5 - Win32 Release"
# Name "VCTeeChart5 - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\adxfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\annotationtool.cpp
# End Source File
# Begin Source File

SOURCE=.\areaseries.cpp
# End Source File
# Begin Source File

SOURCE=.\arrowseries.cpp
# End Source File
# Begin Source File

SOURCE=.\aspect.cpp
# End Source File
# Begin Source File

SOURCE=.\averagefunction.cpp
# End Source File
# Begin Source File

SOURCE=.\axes.cpp
# End Source File
# Begin Source File

SOURCE=.\axis.cpp
# End Source File
# Begin Source File

SOURCE=.\axisarrowtool.cpp
# End Source File
# Begin Source File

SOURCE=.\axislabels.cpp
# End Source File
# Begin Source File

SOURCE=.\axistitle.cpp
# End Source File
# Begin Source File

SOURCE=.\bar3dseries.cpp
# End Source File
# Begin Source File

SOURCE=.\barjoinseries.cpp
# End Source File
# Begin Source File

SOURCE=.\barseries.cpp
# End Source File
# Begin Source File

SOURCE=.\bezierseries.cpp
# End Source File
# Begin Source File

SOURCE=.\bmpexport.cpp
# End Source File
# Begin Source File

SOURCE=.\bollingerfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\boxplotseries.cpp
# End Source File
# Begin Source File

SOURCE=.\brush.cpp
# End Source File
# Begin Source File

SOURCE=.\bubbleseries.cpp
# End Source File
# Begin Source File

SOURCE=.\calendarcell.cpp
# End Source File
# Begin Source File

SOURCE=.\calendarcellupper.cpp
# End Source File
# Begin Source File

SOURCE=.\calendarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\candleseries.cpp
# End Source File
# Begin Source File

SOURCE=.\canvas.cpp
# End Source File
# Begin Source File

SOURCE=.\charteditorpanel.cpp
# End Source File
# Begin Source File

SOURCE=.\chartfont.cpp
# End Source File
# Begin Source File

SOURCE=.\chartgrid.cpp
# End Source File
# Begin Source File

SOURCE=.\chartgridnavigator.cpp
# End Source File
# Begin Source File

SOURCE=.\chartimagetool.cpp
# End Source File
# Begin Source File

SOURCE=.\chartpagenavigator.cpp
# End Source File
# Begin Source File

SOURCE=.\circlelabels.cpp
# End Source File
# Begin Source File

SOURCE=.\clockseries.cpp
# End Source File
# Begin Source File

SOURCE=.\colorbandtool.cpp
# End Source File
# Begin Source File

SOURCE=.\colorgridseries.cpp
# End Source File
# Begin Source File

SOURCE=.\colorlinetool.cpp
# End Source File
# Begin Source File

SOURCE=.\contourlevel.cpp
# End Source File
# Begin Source File

SOURCE=.\contourlevels.cpp
# End Source File
# Begin Source File

SOURCE=.\contourseries.cpp
# End Source File
# Begin Source File

SOURCE=.\cursortool.cpp
# End Source File
# Begin Source File

SOURCE=.\curvefittingfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\donutseries.cpp
# End Source File
# Begin Source File

SOURCE=.\dragmarkstool.cpp
# End Source File
# Begin Source File

SOURCE=.\drawline.cpp
# End Source File
# Begin Source File

SOURCE=.\drawlinelist.cpp
# End Source File
# Begin Source File

SOURCE=.\drawlinetool.cpp
# End Source File
# Begin Source File

SOURCE=.\environment.cpp
# End Source File
# Begin Source File

SOURCE=.\errorbarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\errorseries.cpp
# End Source File
# Begin Source File

SOURCE=.\expavgfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\explodedslices.cpp
# End Source File
# Begin Source File

SOURCE=.\export.cpp
# End Source File
# Begin Source File

SOURCE=.\fastlineseries.cpp
# End Source File
# Begin Source File

SOURCE=.\funnelseries.cpp
# End Source File
# Begin Source File

SOURCE=.\ganttseries.cpp
# End Source File
# Begin Source File

SOURCE=.\gifexport.cpp
# End Source File
# Begin Source File

SOURCE=.\gradient.cpp
# End Source File
# Begin Source File

SOURCE=.\highlowseries.cpp
# End Source File
# Begin Source File

SOURCE=.\histogramseries.cpp
# End Source File
# Begin Source File

SOURCE=.\horizbarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\horizboxplotseries.cpp
# End Source File
# Begin Source File

SOURCE=.\horizlineseries.cpp
# End Source File
# Begin Source File

SOURCE=.\htmlexport.cpp
# End Source File
# Begin Source File

SOURCE=.\imagebarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\import.cpp
# End Source File
# Begin Source File

SOURCE=.\jpegexport.cpp
# End Source File
# Begin Source File

SOURCE=.\legend.cpp
# End Source File
# Begin Source File

SOURCE=.\legendsymbol.cpp
# End Source File
# Begin Source File

SOURCE=.\lineseries.cpp
# End Source File
# Begin Source File

SOURCE=.\macdfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\mappolygon.cpp
# End Source File
# Begin Source File

SOURCE=.\mappolygonlist.cpp
# End Source File
# Begin Source File

SOURCE=.\mapseries.cpp
# End Source File
# Begin Source File

SOURCE=.\marks.cpp
# End Source File
# Begin Source File

SOURCE=.\markstiptool.cpp
# End Source File
# Begin Source File

SOURCE=.\metafileexport.cpp
# End Source File
# Begin Source File

SOURCE=.\movingavgfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\nativeexport.cpp
# End Source File
# Begin Source File

SOURCE=.\nearesttool.cpp
# End Source File
# Begin Source File

SOURCE=.\page.cpp
# End Source File
# Begin Source File

SOURCE=.\pagenumtool.cpp
# End Source File
# Begin Source File

SOURCE=.\panel.cpp
# End Source File
# Begin Source File

SOURCE=.\pcxexport.cpp
# End Source File
# Begin Source File

SOURCE=.\pen.cpp
# End Source File
# Begin Source File

SOURCE=.\pieotherslice.cpp
# End Source File
# Begin Source File

SOURCE=.\pieseries.cpp
# End Source File
# Begin Source File

SOURCE=.\pngexport.cpp
# End Source File
# Begin Source File

SOURCE=.\point3dseries.cpp
# End Source File
# Begin Source File

SOURCE=.\pointer.cpp
# End Source File
# Begin Source File

SOURCE=.\pointseries.cpp
# End Source File
# Begin Source File

SOURCE=.\polarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\printer.cpp
# End Source File
# Begin Source File

SOURCE=.\pyramidseries.cpp
# End Source File
# Begin Source File

SOURCE=.\radarseries.cpp
# End Source File
# Begin Source File

SOURCE=.\rmsfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\rotatetool.cpp
# End Source File
# Begin Source File

SOURCE=.\rsifunction.cpp
# End Source File
# Begin Source File

SOURCE=.\scroll.cpp
# End Source File
# Begin Source File

SOURCE=.\series.cpp
# End Source File
# Begin Source File

SOURCE=.\seriesmarkposition.cpp
# End Source File
# Begin Source File

SOURCE=.\seriesmarkspositions.cpp
# End Source File
# Begin Source File

SOURCE=.\shapeseries.cpp
# End Source File
# Begin Source File

SOURCE=.\smithseries.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\stddeviationfunction.cpp
# End Source File
# Begin Source File

SOURCE=.\strings.cpp
# End Source File
# Begin Source File

SOURCE=.\surfaceseries.cpp
# End Source File
# Begin Source File

SOURCE=.\tchart.cpp
# End Source File
# Begin Source File

SOURCE=.\teecommander.cpp
# End Source File
# Begin Source File

SOURCE=.\teeeditor.cpp
# End Source File
# Begin Source File

SOURCE=.\teeeditoroptions.cpp
# End Source File
# Begin Source File

SOURCE=.\teeeditorshowpages.cpp
# End Source File
# Begin Source File

SOURCE=.\teefont.cpp
# End Source File
# Begin Source File

SOURCE=.\teefunction.cpp
# End Source File
# Begin Source File

SOURCE=.\teelistbox.cpp
# End Source File
# Begin Source File

SOURCE=.\teeopengl.cpp
# End Source File
# Begin Source File

SOURCE=.\teepanelslist.cpp
# End Source File
# Begin Source File

SOURCE=.\teepoint2d.cpp
# End Source File
# Begin Source File

SOURCE=.\teepoint3d.cpp
# End Source File
# Begin Source File

SOURCE=.\teepreviewer.cpp
# End Source File
# Begin Source File

SOURCE=.\teeprevieweroptions.cpp
# End Source File
# Begin Source File

SOURCE=.\teepreviewpanel.cpp
# End Source File
# Begin Source File

SOURCE=.\teeshadow.cpp
# End Source File
# Begin Source File

SOURCE=.\teeshapepanel.cpp
# End Source File
# Begin Source File

SOURCE=.\textexport.cpp
# End Source File
# Begin Source File

SOURCE=.\titles.cpp
# End Source File
# Begin Source File

SOURCE=.\toollist.cpp
# End Source File
# Begin Source File

SOURCE=.\tools.cpp
# End Source File
# Begin Source File

SOURCE=.\trisurfaceseries.cpp
# End Source File
# Begin Source File

SOURCE=.\valuelist.cpp
# End Source File
# Begin Source File

SOURCE=.\valuelists.cpp
# End Source File
# Begin Source File

SOURCE=.\VCTeeChart5.cpp
# End Source File
# Begin Source File

SOURCE=.\VCTeeChart5.rc
# End Source File
# Begin Source File

SOURCE=.\VCTeeChart5Dlg.cpp
# End Source File
# Begin Source File

SOURCE=.\volumeseries.cpp
# End Source File
# Begin Source File

SOURCE=.\wall.cpp
# End Source File
# Begin Source File

SOURCE=.\walls.cpp
# End Source File
# Begin Source File

SOURCE=.\waterfallseries.cpp
# End Source File
# Begin Source File

SOURCE=.\windroseseries.cpp
# End Source File
# Begin Source File

SOURCE=.\xlsexport.cpp
# End Source File
# Begin Source File

SOURCE=.\xmlexport.cpp
# End Source File
# Begin Source File

SOURCE=.\zoom.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\adxfunction.h
# End Source File
# Begin Source File

SOURCE=.\annotationtool.h
# End Source File
# Begin Source File

SOURCE=.\areaseries.h
# End Source File
# Begin Source File

SOURCE=.\arrowseries.h
# End Source File
# Begin Source File

SOURCE=.\aspect.h
# End Source File
# Begin Source File

SOURCE=.\averagefunction.h
# End Source File
# Begin Source File

SOURCE=.\axes.h
# End Source File
# Begin Source File

SOURCE=.\axis.h
# End Source File
# Begin Source File

SOURCE=.\axisarrowtool.h
# End Source File
# Begin Source File

SOURCE=.\axislabels.h
# End Source File
# Begin Source File

SOURCE=.\axistitle.h
# End Source File
# Begin Source File

SOURCE=.\bar3dseries.h
# End Source File
# Begin Source File

SOURCE=.\barjoinseries.h
# End Source File
# Begin Source File

SOURCE=.\barseries.h
# End Source File
# Begin Source File

SOURCE=.\bezierseries.h
# End Source File
# Begin Source File

SOURCE=.\bmpexport.h
# End Source File
# Begin Source File

SOURCE=.\bollingerfunction.h
# End Source File
# Begin Source File

SOURCE=.\boxplotseries.h
# End Source File
# Begin Source File

SOURCE=.\brush.h
# End Source File
# Begin Source File

SOURCE=.\bubbleseries.h
# End Source File
# Begin Source File

SOURCE=.\calendarcell.h
# End Source File
# Begin Source File

SOURCE=.\calendarcellupper.h
# End Source File
# Begin Source File

SOURCE=.\calendarseries.h
# End Source File
# Begin Source File

SOURCE=.\candleseries.h
# End Source File
# Begin Source File

SOURCE=.\canvas.h
# End Source File
# Begin Source File

SOURCE=.\charteditorpanel.h
# End Source File
# Begin Source File

SOURCE=.\chartfont.h
# End Source File
# Begin Source File

SOURCE=.\chartgrid.h
# End Source File
# Begin Source File

SOURCE=.\chartgridnavigator.h
# End Source File
# Begin Source File

SOURCE=.\chartimagetool.h
# End Source File
# Begin Source File

SOURCE=.\chartpagenavigator.h
# End Source File
# Begin Source File

SOURCE=.\circlelabels.h
# End Source File
# Begin Source File

SOURCE=.\clockseries.h
# End Source File
# Begin Source File

SOURCE=.\colorbandtool.h
# End Source File
# Begin Source File

SOURCE=.\colorgridseries.h
# End Source File
# Begin Source File

SOURCE=.\colorlinetool.h
# End Source File
# Begin Source File

SOURCE=.\contourlevel.h
# End Source File
# Begin Source File

SOURCE=.\contourlevels.h
# End Source File
# Begin Source File

SOURCE=.\contourseries.h
# End Source File
# Begin Source File

SOURCE=.\cursortool.h
# End Source File
# Begin Source File

SOURCE=.\curvefittingfunction.h
# End Source File
# Begin Source File

SOURCE=.\donutseries.h
# End Source File
# Begin Source File

SOURCE=.\dragmarkstool.h
# End Source File
# Begin Source File

SOURCE=.\drawline.h
# End Source File
# Begin Source File

SOURCE=.\drawlinelist.h
# End Source File
# Begin Source File

SOURCE=.\drawlinetool.h
# End Source File
# Begin Source File

SOURCE=.\environment.h
# End Source File
# Begin Source File

SOURCE=.\errorbarseries.h
# End Source File
# Begin Source File

SOURCE=.\errorseries.h
# End Source File
# Begin Source File

SOURCE=.\expavgfunction.h
# End Source File
# Begin Source File

SOURCE=.\explodedslices.h
# End Source File
# Begin Source File

SOURCE=.\export.h
# End Source File
# Begin Source File

SOURCE=.\fastlineseries.h
# End Source File
# Begin Source File

SOURCE=.\funnelseries.h
# End Source File
# Begin Source File

SOURCE=.\ganttseries.h
# End Source File
# Begin Source File

SOURCE=.\gifexport.h
# End Source File
# Begin Source File

SOURCE=.\gradient.h
# End Source File
# Begin Source File

SOURCE=.\highlowseries.h
# End Source File
# Begin Source File

SOURCE=.\histogramseries.h
# End Source File
# Begin Source File

SOURCE=.\horizbarseries.h
# End Source File
# Begin Source File

SOURCE=.\horizboxplotseries.h
# End Source File
# Begin Source File

SOURCE=.\horizlineseries.h
# End Source File
# Begin Source File

SOURCE=.\htmlexport.h
# End Source File
# Begin Source File

SOURCE=.\imagebarseries.h
# End Source File
# Begin Source File

SOURCE=.\import.h
# End Source File
# Begin Source File

SOURCE=.\jpegexport.h
# End Source File
# Begin Source File

SOURCE=.\legend.h
# End Source File
# Begin Source File

SOURCE=.\legendsymbol.h
# End Source File
# Begin Source File

SOURCE=.\lineseries.h
# End Source File
# Begin Source File

SOURCE=.\macdfunction.h
# End Source File
# Begin Source File

SOURCE=.\mappolygon.h
# End Source File
# Begin Source File

SOURCE=.\mappolygonlist.h
# End Source File
# Begin Source File

SOURCE=.\mapseries.h
# End Source File
# Begin Source File

SOURCE=.\marks.h
# End Source File
# Begin Source File

SOURCE=.\markstiptool.h
# End Source File
# Begin Source File

SOURCE=.\metafileexport.h
# End Source File
# Begin Source File

SOURCE=.\movingavgfunction.h
# End Source File
# Begin Source File

SOURCE=.\nativeexport.h
# End Source File
# Begin Source File

SOURCE=.\nearesttool.h
# End Source File
# Begin Source File

SOURCE=.\page.h
# End Source File
# Begin Source File

SOURCE=.\pagenumtool.h
# End Source File
# Begin Source File

SOURCE=.\panel.h
# End Source File
# Begin Source File

SOURCE=.\pcxexport.h
# End Source File
# Begin Source File

SOURCE=.\pen.h
# End Source File
# Begin Source File

SOURCE=.\pieotherslice.h
# End Source File
# Begin Source File

SOURCE=.\pieseries.h
# End Source File
# Begin Source File

SOURCE=.\pngexport.h
# End Source File
# Begin Source File

SOURCE=.\point3dseries.h
# End Source File
# Begin Source File

SOURCE=.\pointer.h
# End Source File
# Begin Source File

SOURCE=.\pointseries.h
# End Source File
# Begin Source File

SOURCE=.\polarseries.h
# End Source File
# Begin Source File

SOURCE=.\printer.h
# End Source File
# Begin Source File

SOURCE=.\pyramidseries.h
# End Source File
# Begin Source File

SOURCE=.\radarseries.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\rmsfunction.h
# End Source File
# Begin Source File

SOURCE=.\rotatetool.h
# End Source File
# Begin Source File

SOURCE=.\rsifunction.h
# End Source File
# Begin Source File

SOURCE=.\scroll.h
# End Source File
# Begin Source File

SOURCE=.\series.h
# End Source File
# Begin Source File

SOURCE=.\seriesmarkposition.h
# End Source File
# Begin Source File

SOURCE=.\seriesmarkspositions.h
# End Source File
# Begin Source File

SOURCE=.\shapeseries.h
# End Source File
# Begin Source File

SOURCE=.\smithseries.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\stddeviationfunction.h
# End Source File
# Begin Source File

SOURCE=.\strings.h
# End Source File
# Begin Source File

SOURCE=.\surfaceseries.h
# End Source File
# Begin Source File

SOURCE=.\tchart.h
# End Source File
# Begin Source File

SOURCE=.\teecommander.h
# End Source File
# Begin Source File

SOURCE=.\teeeditor.h
# End Source File
# Begin Source File

SOURCE=.\teeeditoroptions.h
# End Source File
# Begin Source File

SOURCE=.\teeeditorshowpages.h
# End Source File
# Begin Source File

SOURCE=.\teefont.h
# End Source File
# Begin Source File

SOURCE=.\teefunction.h
# End Source File
# Begin Source File

SOURCE=.\teelistbox.h
# End Source File
# Begin Source File

SOURCE=.\teeopengl.h
# End Source File
# Begin Source File

SOURCE=.\teepanelslist.h
# End Source File
# Begin Source File

SOURCE=.\teepoint2d.h
# End Source File
# Begin Source File

SOURCE=.\teepoint3d.h
# End Source File
# Begin Source File

SOURCE=.\teepreviewer.h
# End Source File
# Begin Source File

SOURCE=.\teeprevieweroptions.h
# End Source File
# Begin Source File

SOURCE=.\teepreviewpanel.h
# End Source File
# Begin Source File

SOURCE=.\teeshadow.h
# End Source File
# Begin Source File

SOURCE=.\teeshapepanel.h
# End Source File
# Begin Source File

SOURCE=.\textexport.h
# End Source File
# Begin Source File

SOURCE=.\titles.h
# End Source File
# Begin Source File

SOURCE=.\toollist.h
# End Source File
# Begin Source File

SOURCE=.\tools.h
# End Source File
# Begin Source File

SOURCE=.\trisurfaceseries.h
# End Source File
# Begin Source File

SOURCE=.\valuelist.h
# End Source File
# Begin Source File

SOURCE=.\valuelists.h
# End Source File
# Begin Source File

SOURCE=.\VCTeeChart5.h
# End Source File
# Begin Source File

SOURCE=.\VCTeeChart5Dlg.h
# End Source File
# Begin Source File

SOURCE=.\volumeseries.h
# End Source File
# Begin Source File

SOURCE=.\wall.h
# End Source File
# Begin Source File

SOURCE=.\walls.h
# End Source File
# Begin Source File

SOURCE=.\waterfallseries.h
# End Source File
# Begin Source File

SOURCE=.\windroseseries.h
# End Source File
# Begin Source File

SOURCE=.\xlsexport.h
# End Source File
# Begin Source File

SOURCE=.\xmlexport.h
# End Source File
# Begin Source File

SOURCE=.\zoom.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\VCTeeChart5.ico
# End Source File
# Begin Source File

SOURCE=.\res\VCTeeChart5.rc2
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
# Section VCTeeChart5 : {5101D067-AD02-426B-832E-A898AF6E4F5E}
# 	2:5:Class:CTeeShadow
# 	2:10:HeaderFile:teeshadow.h
# 	2:8:ImplFile:teeshadow.cpp
# End Section
# Section VCTeeChart5 : {C4BB55C5-9F2C-4B46-86F3-F3BB52A83B4E}
# 	2:21:DefaultSinkHeaderFile:chartpagenavigator.h
# 	2:16:DefaultSinkClass:CChartPageNavigator
# End Section
# Section VCTeeChart5 : {B6C10494-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CAxisTitle
# 	2:10:HeaderFile:axistitle.h
# 	2:8:ImplFile:axistitle.cpp
# End Section
# Section VCTeeChart5 : {B6C104E0-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CVolumeSeries
# 	2:10:HeaderFile:volumeseries.h
# 	2:8:ImplFile:volumeseries.cpp
# End Section
# Section VCTeeChart5 : {235FB74D-F8ED-11D4-93C8-006008A7EED4}
# 	2:5:Class:CMetafileExport
# 	2:10:HeaderFile:metafileexport.h
# 	2:8:ImplFile:metafileexport.cpp
# End Section
# Section VCTeeChart5 : {B6C104C0-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPointSeries
# 	2:10:HeaderFile:pointseries.h
# 	2:8:ImplFile:pointseries.cpp
# End Section
# Section VCTeeChart5 : {DFBF9393-46FD-11D2-AEC3-00400141862D}
# 	2:5:Class:CContourSeries
# 	2:10:HeaderFile:contourseries.h
# 	2:8:ImplFile:contourseries.cpp
# End Section
# Section VCTeeChart5 : {5B9827E5-3BE4-4DA3-9A6F-611BF900E4E1}
# 	2:5:Class:CTriSurfaceSeries
# 	2:10:HeaderFile:trisurfaceseries.h
# 	2:8:ImplFile:trisurfaceseries.cpp
# End Section
# Section VCTeeChart5 : {B6C10505-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CRadarSeries
# 	2:10:HeaderFile:radarseries.h
# 	2:8:ImplFile:radarseries.cpp
# End Section
# Section VCTeeChart5 : {B6C104C9-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CArrowSeries
# 	2:10:HeaderFile:arrowseries.h
# 	2:8:ImplFile:arrowseries.cpp
# End Section
# Section VCTeeChart5 : {B6C104A9-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CGradient
# 	2:10:HeaderFile:gradient.h
# 	2:8:ImplFile:gradient.cpp
# End Section
# Section VCTeeChart5 : {E517CB29-1C48-11D5-9400-006008A7EED4}
# 	2:5:Class:CAnnotationTool
# 	2:10:HeaderFile:annotationtool.h
# 	2:8:ImplFile:annotationtool.cpp
# End Section
# Section VCTeeChart5 : {B6C1048B-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPen1
# 	2:10:HeaderFile:pen.h
# 	2:8:ImplFile:pen.cpp
# End Section
# Section VCTeeChart5 : {B6C104A4-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CZoom
# 	2:10:HeaderFile:zoom.h
# 	2:8:ImplFile:zoom.cpp
# End Section
# Section VCTeeChart5 : {B6C104AB-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPanel
# 	2:10:HeaderFile:panel.h
# 	2:8:ImplFile:panel.cpp
# End Section
# Section VCTeeChart5 : {B6C10535-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeeEditorShowPages
# 	2:10:HeaderFile:teeeditorshowpages.h
# 	2:8:ImplFile:teeeditorshowpages.cpp
# End Section
# Section VCTeeChart5 : {B6C104C4-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPieSeries
# 	2:10:HeaderFile:pieseries.h
# 	2:8:ImplFile:pieseries.cpp
# End Section
# Section VCTeeChart5 : {B6C1050C-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CCircleLabels
# 	2:10:HeaderFile:circlelabels.h
# 	2:8:ImplFile:circlelabels.cpp
# End Section
# Section VCTeeChart5 : {AC690AD3-0730-11D5-93E3-006008A7EED4}
# 	2:5:Class:CXLSExport
# 	2:10:HeaderFile:xlsexport.h
# 	2:8:ImplFile:xlsexport.cpp
# End Section
# Section VCTeeChart5 : {B6C104E9-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CExpAvgFunction
# 	2:10:HeaderFile:expavgfunction.h
# 	2:8:ImplFile:expavgfunction.cpp
# End Section
# Section VCTeeChart5 : {67D7AA1C-12FA-4F34-8EB2-B3E8646E0E5F}
# 	2:5:Class:CTools
# 	2:10:HeaderFile:tools.h
# 	2:8:ImplFile:tools.cpp
# End Section
# Section VCTeeChart5 : {B6C104CB-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CBarSeries
# 	2:10:HeaderFile:barseries.h
# 	2:8:ImplFile:barseries.cpp
# End Section
# Section VCTeeChart5 : {235FB755-F8ED-11D4-93C8-006008A7EED4}
# 	2:5:Class:CChartImageTool
# 	2:10:HeaderFile:chartimagetool.h
# 	2:8:ImplFile:chartimagetool.cpp
# End Section
# Section VCTeeChart5 : {B6C10530-FB89-11D4-93C9-006008A7EED4}
# 	2:21:DefaultSinkHeaderFile:teeeditor.h
# 	2:16:DefaultSinkClass:CTeeEditor
# End Section
# Section VCTeeChart5 : {B6C104EB-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CChartFont
# 	2:10:HeaderFile:chartfont.h
# 	2:8:ImplFile:chartfont.cpp
# End Section
# Section VCTeeChart5 : {B6C1048F-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CCanvas
# 	2:10:HeaderFile:canvas.h
# 	2:8:ImplFile:canvas.cpp
# End Section
# Section VCTeeChart5 : {3B2B9819-FBBF-11D4-93CA-006008A7EED4}
# 	2:5:Class:CTeeFont
# 	2:10:HeaderFile:teefont.h
# 	2:8:ImplFile:teefont.cpp
# End Section
# Section VCTeeChart5 : {B6C104DB-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CHorizBarSeries
# 	2:10:HeaderFile:horizbarseries.h
# 	2:8:ImplFile:horizbarseries.cpp
# End Section
# Section VCTeeChart5 : {B4B8B973-32BF-40A8-8E07-EFBA557E13F8}
# 	2:5:Class:CHighLowSeries
# 	2:10:HeaderFile:highlowseries.h
# 	2:8:ImplFile:highlowseries.cpp
# End Section
# Section VCTeeChart5 : {B6C10510-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CRSIFunction
# 	2:10:HeaderFile:rsifunction.h
# 	2:8:ImplFile:rsifunction.cpp
# End Section
# Section VCTeeChart5 : {B6C1053C-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CBar3DSeries
# 	2:10:HeaderFile:bar3dseries.h
# 	2:8:ImplFile:bar3dseries.cpp
# End Section
# Section VCTeeChart5 : {69A3C18D-728E-47B5-9144-7C58B59AA42D}
# 	2:5:Class:CSmithSeries
# 	2:10:HeaderFile:smithseries.h
# 	2:8:ImplFile:smithseries.cpp
# End Section
# Section VCTeeChart5 : {C746269F-0A39-4EC5-B52F-7E489835035B}
# 	2:5:Class:CAxisArrowTool
# 	2:10:HeaderFile:axisarrowtool.h
# 	2:8:ImplFile:axisarrowtool.cpp
# End Section
# Section VCTeeChart5 : {B6C10493-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CAxisLabels
# 	2:10:HeaderFile:axislabels.h
# 	2:8:ImplFile:axislabels.cpp
# End Section
# Section VCTeeChart5 : {9CE4E780-4431-4504-948A-797D83C1E310}
# 	2:5:Class:CDragMarksTool
# 	2:10:HeaderFile:dragmarkstool.h
# 	2:8:ImplFile:dragmarkstool.cpp
# End Section
# Section VCTeeChart5 : {B6C104A8-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CLegend
# 	2:10:HeaderFile:legend.h
# 	2:8:ImplFile:legend.cpp
# End Section
# Section VCTeeChart5 : {FD15F1C9-69D8-4FAE-9A96-DD2E0B88DDD4}
# 	2:5:Class:CChartGrid
# 	2:10:HeaderFile:chartgrid.h
# 	2:8:ImplFile:chartgrid.cpp
# End Section
# Section VCTeeChart5 : {B6C10509-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CSeriesMarksPositions
# 	2:10:HeaderFile:seriesmarkspositions.h
# 	2:8:ImplFile:seriesmarkspositions.cpp
# End Section
# Section VCTeeChart5 : {AC690AD7-0730-11D5-93E3-006008A7EED4}
# 	2:5:Class:CTextExport
# 	2:10:HeaderFile:textexport.h
# 	2:8:ImplFile:textexport.cpp
# End Section
# Section VCTeeChart5 : {2E375632-A81D-400A-9369-F609B6B914AC}
# 	2:5:Class:CBoxPlotSeries
# 	2:10:HeaderFile:boxplotseries.h
# 	2:8:ImplFile:boxplotseries.cpp
# End Section
# Section VCTeeChart5 : {B6C10539-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CClockSeries
# 	2:10:HeaderFile:clockseries.h
# 	2:8:ImplFile:clockseries.cpp
# End Section
# Section VCTeeChart5 : {62DD8659-F041-11D4-93B1-006008A7EED4}
# 	2:5:Class:CDrawLine
# 	2:10:HeaderFile:drawline.h
# 	2:8:ImplFile:drawline.cpp
# End Section
# Section VCTeeChart5 : {CDE865C4-6B25-4604-8813-F0A65E51F1C8}
# 	2:5:Class:CColorLineTool
# 	2:10:HeaderFile:colorlinetool.h
# 	2:8:ImplFile:colorlinetool.cpp
# End Section
# Section VCTeeChart5 : {B6C104C8-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CShapeSeries
# 	2:10:HeaderFile:shapeseries.h
# 	2:8:ImplFile:shapeseries.cpp
# End Section
# Section VCTeeChart5 : {750EB847-B333-4A73-8AEE-9087F8B98D1E}
# 	2:5:Class:CToolList
# 	2:10:HeaderFile:toollist.h
# 	2:8:ImplFile:toollist.cpp
# End Section
# Section VCTeeChart5 : {B6C104A3-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CScroll
# 	2:10:HeaderFile:scroll.h
# 	2:8:ImplFile:scroll.cpp
# End Section
# Section VCTeeChart5 : {70C80BD0-D36A-46C9-A9D6-AE8687CA0EA5}
# 	2:5:Class:CHistogramSeries
# 	2:10:HeaderFile:histogramseries.h
# 	2:8:ImplFile:histogramseries.cpp
# End Section
# Section VCTeeChart5 : {449C6526-C2F8-47EE-8386-32D20B488B8B}
# 	2:5:Class:CCursorTool
# 	2:10:HeaderFile:cursortool.h
# 	2:8:ImplFile:cursortool.cpp
# End Section
# Section VCTeeChart5 : {B6C104BF-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CAreaSeries
# 	2:10:HeaderFile:areaseries.h
# 	2:8:ImplFile:areaseries.cpp
# End Section
# Section VCTeeChart5 : {B6C104E8-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CCurveFittingFunction
# 	2:10:HeaderFile:curvefittingfunction.h
# 	2:8:ImplFile:curvefittingfunction.cpp
# End Section
# Section VCTeeChart5 : {B6C104AF-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CValueList
# 	2:10:HeaderFile:valuelist.h
# 	2:8:ImplFile:valuelist.cpp
# End Section
# Section VCTeeChart5 : {B6C10504-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CBezierSeries
# 	2:10:HeaderFile:bezierseries.h
# 	2:8:ImplFile:bezierseries.cpp
# End Section
# Section VCTeeChart5 : {252A62F5-0C94-48E0-90AD-7B64200E53C1}
# 	2:5:Class:CTeePreviewPanel
# 	2:10:HeaderFile:teepreviewpanel.h
# 	2:8:ImplFile:teepreviewpanel.cpp
# End Section
# Section VCTeeChart5 : {B6C10497-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CImport
# 	2:10:HeaderFile:import.h
# 	2:8:ImplFile:import.cpp
# End Section
# Section VCTeeChart5 : {B6C1052B-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeeListBox
# 	2:10:HeaderFile:teelistbox.h
# 	2:8:ImplFile:teelistbox.cpp
# End Section
# Section VCTeeChart5 : {B6C1053B-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CImageBarSeries
# 	2:10:HeaderFile:imagebarseries.h
# 	2:8:ImplFile:imagebarseries.cpp
# End Section
# Section VCTeeChart5 : {B6C104AA-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPage
# 	2:10:HeaderFile:page.h
# 	2:8:ImplFile:page.cpp
# End Section
# Section VCTeeChart5 : {235FB744-F8ED-11D4-93C8-006008A7EED4}
# 	2:5:Class:CPNGExport
# 	2:10:HeaderFile:pngexport.h
# 	2:8:ImplFile:pngexport.cpp
# End Section
# Section VCTeeChart5 : {FDB6AE9B-AE83-4CC3-AC6D-03CF0E133867}
# 	2:5:Class:CPyramidSeries
# 	2:10:HeaderFile:pyramidseries.h
# 	2:8:ImplFile:pyramidseries.cpp
# End Section
# Section VCTeeChart5 : {32268BD8-C0D1-473D-A13C-65AB4A58397B}
# 	2:5:Class:CChartPageNavigator
# 	2:10:HeaderFile:chartpagenavigator.h
# 	2:8:ImplFile:chartpagenavigator.cpp
# End Section
# Section VCTeeChart5 : {B6C10534-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeePoint3D
# 	2:10:HeaderFile:teepoint3d.h
# 	2:8:ImplFile:teepoint3d.cpp
# End Section
# Section VCTeeChart5 : {B6C104DF-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CErrorBarSeries
# 	2:10:HeaderFile:errorbarseries.h
# 	2:8:ImplFile:errorbarseries.cpp
# End Section
# Section VCTeeChart5 : {B6C1050B-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPolarSeries
# 	2:10:HeaderFile:polarseries.h
# 	2:8:ImplFile:polarseries.cpp
# End Section
# Section VCTeeChart5 : {3752717C-15C0-4C15-9532-C9C371388028}
# 	2:5:Class:CADXFunction
# 	2:10:HeaderFile:adxfunction.h
# 	2:8:ImplFile:adxfunction.cpp
# End Section
# Section VCTeeChart5 : {B86AE373-50DC-4AE9-8872-8E3F9FC21A4E}
# 	2:5:Class:CMACDFunction
# 	2:10:HeaderFile:macdfunction.h
# 	2:8:ImplFile:macdfunction.cpp
# End Section
# Section VCTeeChart5 : {235FB74B-F8ED-11D4-93C8-006008A7EED4}
# 	2:5:Class:CPCXExport
# 	2:10:HeaderFile:pcxexport.h
# 	2:8:ImplFile:pcxexport.cpp
# End Section
# Section VCTeeChart5 : {B6C1048E-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CStrings
# 	2:10:HeaderFile:strings.h
# 	2:8:ImplFile:strings.cpp
# End Section
# Section VCTeeChart5 : {B6C104EA-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CMovingAvgFunction
# 	2:10:HeaderFile:movingavgfunction.h
# 	2:8:ImplFile:movingavgfunction.cpp
# End Section
# Section VCTeeChart5 : {662C9054-0898-4F09-881E-5ABB47978FB6}
# 	2:5:Class:CRMSFunction
# 	2:10:HeaderFile:rmsfunction.h
# 	2:8:ImplFile:rmsfunction.cpp
# End Section
# Section VCTeeChart5 : {4CC67466-2A11-45C6-924E-15E8B9F6B780}
# 	2:5:Class:CWaterfallSeries
# 	2:10:HeaderFile:waterfallseries.h
# 	2:8:ImplFile:waterfallseries.cpp
# End Section
# Section VCTeeChart5 : {C9F8E464-0B4B-4427-8678-363CF8E1955D}
# 	2:5:Class:CColorBandTool
# 	2:10:HeaderFile:colorbandtool.h
# 	2:8:ImplFile:colorbandtool.cpp
# End Section
# Section VCTeeChart5 : {2C37B0AD-0FF7-4E18-BF8A-B43469A2C414}
# 	2:21:DefaultSinkHeaderFile:charteditorpanel.h
# 	2:16:DefaultSinkClass:CChartEditorPanel
# End Section
# Section VCTeeChart5 : {3B2B9818-FBBF-11D4-93CA-006008A7EED4}
# 	2:5:Class:CChartBrush
# 	2:10:HeaderFile:chartbrush.h
# 	2:8:ImplFile:chartbrush.cpp
# End Section
# Section VCTeeChart5 : {5970102E-E487-4B12-88A8-A7930EF23E5D}
# 	2:5:Class:CDrawLineTool
# 	2:10:HeaderFile:drawlinetool.h
# 	2:8:ImplFile:drawlinetool.cpp
# End Section
# Section VCTeeChart5 : {B6C104C7-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CGanttSeries
# 	2:10:HeaderFile:ganttseries.h
# 	2:8:ImplFile:ganttseries.cpp
# End Section
# Section VCTeeChart5 : {B6C10538-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeeOpenGL
# 	2:10:HeaderFile:teeopengl.h
# 	2:8:ImplFile:teeopengl.cpp
# End Section
# Section VCTeeChart5 : {B6C104A7-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CWalls
# 	2:10:HeaderFile:walls.h
# 	2:8:ImplFile:walls.cpp
# End Section
# Section VCTeeChart5 : {AC690ACD-0730-11D5-93E3-006008A7EED4}
# 	2:5:Class:CNativeExport
# 	2:10:HeaderFile:nativeexport.h
# 	2:8:ImplFile:nativeexport.cpp
# End Section
# Section VCTeeChart5 : {A77491E3-F825-11D4-93C7-006008A7EED4}
# 	2:5:Class:CJPEGExport
# 	2:10:HeaderFile:jpegexport.h
# 	2:8:ImplFile:jpegexport.cpp
# End Section
# Section VCTeeChart5 : {B6C10508-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CSurfaceSeries
# 	2:10:HeaderFile:surfaceseries.h
# 	2:8:ImplFile:surfaceseries.cpp
# End Section
# Section VCTeeChart5 : {1FDB3FEB-A12B-4A8F-9BA7-CC342949D9AF}
# 	2:21:DefaultSinkHeaderFile:teepreviewpanel.h
# 	2:16:DefaultSinkClass:CTeePreviewPanel
# End Section
# Section VCTeeChart5 : {AC690AD1-0730-11D5-93E3-006008A7EED4}
# 	2:5:Class:CXMLExport
# 	2:10:HeaderFile:xmlexport.h
# 	2:8:ImplFile:xmlexport.cpp
# End Section
# Section VCTeeChart5 : {CB0CE331-76CB-449C-9BE7-FB69C03C3439}
# 	2:5:Class:CHorizBoxPlotSeries
# 	2:10:HeaderFile:horizboxplotseries.h
# 	2:8:ImplFile:horizboxplotseries.cpp
# End Section
# Section VCTeeChart5 : {235FB74F-F8ED-11D4-93C8-006008A7EED4}
# 	2:5:Class:CBMPExport
# 	2:10:HeaderFile:bmpexport.h
# 	2:8:ImplFile:bmpexport.cpp
# End Section
# Section VCTeeChart5 : {B6C104C2-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CFastLineSeries
# 	2:10:HeaderFile:fastlineseries.h
# 	2:8:ImplFile:fastlineseries.cpp
# End Section
# Section VCTeeChart5 : {BA3A0E2D-CCE7-4CF6-82D2-044B2A64EE59}
# 	2:5:Class:CColorGridSeries
# 	2:10:HeaderFile:colorgridseries.h
# 	2:8:ImplFile:colorgridseries.cpp
# End Section
# Section VCTeeChart5 : {A92B03A8-D509-4D2F-A953-B26ED8498AB0}
# 	2:21:DefaultSinkHeaderFile:chartgridnavigator.h
# 	2:16:DefaultSinkClass:CChartGridNavigator
# End Section
# Section VCTeeChart5 : {B6C1050A-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CSeriesMarkPosition
# 	2:10:HeaderFile:seriesmarkposition.h
# 	2:8:ImplFile:seriesmarkposition.cpp
# End Section
# Section VCTeeChart5 : {B6C10533-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeePoint2D
# 	2:10:HeaderFile:teepoint2d.h
# 	2:8:ImplFile:teepoint2d.cpp
# End Section
# Section VCTeeChart5 : {E517CB2E-1C48-11D5-9400-006008A7EED4}
# 	2:5:Class:CPageNumTool
# 	2:10:HeaderFile:pagenumtool.h
# 	2:8:ImplFile:pagenumtool.cpp
# End Section
# Section VCTeeChart5 : {B6C1052F-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeePreviewer
# 	2:10:HeaderFile:teepreviewer.h
# 	2:8:ImplFile:teepreviewer.cpp
# End Section
# Section VCTeeChart5 : {B6C104AE-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CMarks
# 	2:10:HeaderFile:marks.h
# 	2:8:ImplFile:marks.cpp
# End Section
# Section VCTeeChart5 : {A841A3E5-3ED7-11D5-943D-006008A7EED4}
# 	2:5:Class:CValueLists
# 	2:10:HeaderFile:valuelists.h
# 	2:8:ImplFile:valuelists.cpp
# End Section
# Section VCTeeChart5 : {E517CB27-1C48-11D5-9400-006008A7EED4}
# 	2:5:Class:CCalendarCellUpper
# 	2:10:HeaderFile:calendarcellupper.h
# 	2:8:ImplFile:calendarcellupper.cpp
# End Section
# Section VCTeeChart5 : {B6C1053A-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CWindRoseSeries
# 	2:10:HeaderFile:windroseseries.h
# 	2:8:ImplFile:windroseseries.cpp
# End Section
# Section VCTeeChart5 : {B6C10496-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CExport
# 	2:10:HeaderFile:export.h
# 	2:8:ImplFile:export.cpp
# End Section
# Section VCTeeChart5 : {235FB753-F8ED-11D4-93C8-006008A7EED4}
# 	2:5:Class:CMarksTipTool
# 	2:10:HeaderFile:markstiptool.h
# 	2:8:ImplFile:markstiptool.cpp
# End Section
# Section VCTeeChart5 : {B6C1048D-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CBrush1
# 	2:10:HeaderFile:brush.h
# 	2:8:ImplFile:brush.cpp
# End Section
# Section VCTeeChart5 : {3B2B9817-FBBF-11D4-93CA-006008A7EED4}
# 	2:5:Class:CTitles
# 	2:10:HeaderFile:titles.h
# 	2:8:ImplFile:titles.cpp
# End Section
# Section VCTeeChart5 : {B6C1052A-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeeCommander
# 	2:10:HeaderFile:teecommander.h
# 	2:8:ImplFile:teecommander.cpp
# End Section
# Section VCTeeChart5 : {AC690AD5-0730-11D5-93E3-006008A7EED4}
# 	2:5:Class:CHTMLExport
# 	2:10:HeaderFile:htmlexport.h
# 	2:8:ImplFile:htmlexport.cpp
# End Section
# Section VCTeeChart5 : {2DCBF4FF-BEDF-4140-B726-70996BB2B6E6}
# 	2:5:Class:CBollingerFunction
# 	2:10:HeaderFile:bollingerfunction.h
# 	2:8:ImplFile:bollingerfunction.cpp
# End Section
# Section VCTeeChart5 : {B6C10507-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPoint3DSeries
# 	2:10:HeaderFile:point3dseries.h
# 	2:8:ImplFile:point3dseries.cpp
# End Section
# Section VCTeeChart5 : {B6C10491-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CAxes
# 	2:10:HeaderFile:axes.h
# 	2:8:ImplFile:axes.cpp
# End Section
# Section VCTeeChart5 : {B6C10537-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeePreviewerOptions
# 	2:10:HeaderFile:teeprevieweroptions.h
# 	2:8:ImplFile:teeprevieweroptions.cpp
# End Section
# Section VCTeeChart5 : {B6C1050E-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CStdDeviationFunction
# 	2:10:HeaderFile:stddeviationfunction.h
# 	2:8:ImplFile:stddeviationfunction.cpp
# End Section
# Section VCTeeChart5 : {62DD8657-F041-11D4-93B1-006008A7EED4}
# 	2:5:Class:CDrawLineList
# 	2:10:HeaderFile:drawlinelist.h
# 	2:8:ImplFile:drawlinelist.cpp
# End Section
# Section VCTeeChart5 : {B6C104BD-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPointer
# 	2:10:HeaderFile:pointer.h
# 	2:8:ImplFile:pointer.cpp
# End Section
# Section VCTeeChart5 : {B6C10512-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CEnvironment
# 	2:10:HeaderFile:environment.h
# 	2:8:ImplFile:environment.cpp
# End Section
# Section VCTeeChart5 : {B6C1052E-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeeEditor
# 	2:10:HeaderFile:teeeditor.h
# 	2:8:ImplFile:teeeditor.cpp
# End Section
# Section VCTeeChart5 : {B6C104AD-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeeFunction
# 	2:10:HeaderFile:teefunction.h
# 	2:8:ImplFile:teefunction.cpp
# End Section
# Section VCTeeChart5 : {B6C104C6-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CAxis
# 	2:10:HeaderFile:axis.h
# 	2:8:ImplFile:axis.cpp
# End Section
# Section VCTeeChart5 : {01E6D0D8-07EE-11D5-93E4-006008A7EED4}
# 	2:5:Class:CFunnelSeries
# 	2:10:HeaderFile:funnelseries.h
# 	2:8:ImplFile:funnelseries.cpp
# End Section
# Section VCTeeChart5 : {9A52F188-2664-4615-B199-B9AA9AD22861}
# 	2:5:Class:CChartGridNavigator
# 	2:10:HeaderFile:chartgridnavigator.h
# 	2:8:ImplFile:chartgridnavigator.cpp
# End Section
# Section VCTeeChart5 : {B6C104A6-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CWall
# 	2:10:HeaderFile:wall.h
# 	2:8:ImplFile:wall.cpp
# End Section
# Section VCTeeChart5 : {B6C10532-FB89-11D4-93C9-006008A7EED4}
# 	2:21:DefaultSinkHeaderFile:teecommander.h
# 	2:16:DefaultSinkClass:CTeeCommander
# End Section
# Section VCTeeChart5 : {C793DB5D-E235-4248-87AD-E436822E64F2}
# 	2:5:Class:CHorizLineSeries
# 	2:10:HeaderFile:horizlineseries.h
# 	2:8:ImplFile:horizlineseries.cpp
# End Section
# Section VCTeeChart5 : {B6C10485-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTChart
# 	2:10:HeaderFile:tchart.h
# 	2:8:ImplFile:tchart.cpp
# End Section
# Section VCTeeChart5 : {41A5C203-7F36-4E11-840D-D41230760D8E}
# 	2:5:Class:CDonutSeries
# 	2:10:HeaderFile:donutseries.h
# 	2:8:ImplFile:donutseries.cpp
# End Section
# Section VCTeeChart5 : {B6C104C1-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CLineSeries
# 	2:10:HeaderFile:lineseries.h
# 	2:8:ImplFile:lineseries.cpp
# End Section
# Section VCTeeChart5 : {B6C104ED-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPieOtherSlice
# 	2:10:HeaderFile:pieotherslice.h
# 	2:8:ImplFile:pieotherslice.cpp
# End Section
# Section VCTeeChart5 : {8A48BA34-FA69-4168-A477-026F96344C49}
# 	2:5:Class:CChartEditorPanel
# 	2:10:HeaderFile:charteditorpanel.h
# 	2:8:ImplFile:charteditorpanel.cpp
# End Section
# Section VCTeeChart5 : {33A0CF4E-AE1F-43DB-A3CF-B7F9905085C8}
# 	2:5:Class:CMapSeries
# 	2:10:HeaderFile:mapseries.h
# 	2:8:ImplFile:mapseries.cpp
# End Section
# Section VCTeeChart5 : {AC690AD9-0730-11D5-93E3-006008A7EED4}
# 	2:5:Class:CMapPolygonList
# 	2:10:HeaderFile:mappolygonlist.h
# 	2:8:ImplFile:mappolygonlist.cpp
# End Section
# Section VCTeeChart5 : {F66470FB-1309-47FF-A790-26E2E38BEBD0}
# 	2:5:Class:CContourLevels
# 	2:10:HeaderFile:contourlevels.h
# 	2:8:ImplFile:contourlevels.cpp
# End Section
# Section VCTeeChart5 : {DA944291-24C8-4956-BEE4-3129A675A49C}
# 	2:5:Class:CBarJoinSeries
# 	2:10:HeaderFile:barjoinseries.h
# 	2:8:ImplFile:barjoinseries.cpp
# End Section
# Section VCTeeChart5 : {01E6D0DA-07EE-11D5-93E4-006008A7EED4}
# 	2:5:Class:CCalendarSeries
# 	2:10:HeaderFile:calendarseries.h
# 	2:8:ImplFile:calendarseries.cpp
# End Section
# Section VCTeeChart5 : {F069C83A-876F-4C9D-B540-D761428606DB}
# 	2:21:DefaultSinkHeaderFile:chartgrid.h
# 	2:16:DefaultSinkClass:CChartGrid
# End Section
# Section VCTeeChart5 : {CC476B13-71AC-463F-85E4-0AA8DD8B8BDE}
# 	2:5:Class:CLegendSymbol
# 	2:10:HeaderFile:legendsymbol.h
# 	2:8:ImplFile:legendsymbol.cpp
# End Section
# Section VCTeeChart5 : {0B304B42-253F-4221-8C87-8AD1FCA76C94}
# 	2:5:Class:CContourLevel
# 	2:10:HeaderFile:contourlevel.h
# 	2:8:ImplFile:contourlevel.cpp
# End Section
# Section VCTeeChart5 : {B6C10506-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CErrorSeries
# 	2:10:HeaderFile:errorseries.h
# 	2:8:ImplFile:errorseries.cpp
# End Section
# Section VCTeeChart5 : {B6C10536-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTeeEditorOptions
# 	2:10:HeaderFile:teeeditoroptions.h
# 	2:8:ImplFile:teeeditoroptions.cpp
# End Section
# Section VCTeeChart5 : {CF5DFD57-E60D-11D4-93A2-006008A7EED4}
# 	2:5:Class:CTeePanelsList
# 	2:10:HeaderFile:teepanelslist.h
# 	2:8:ImplFile:teepanelslist.cpp
# End Section
# Section VCTeeChart5 : {B6C104A5-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPrinter
# 	2:10:HeaderFile:printer.h
# 	2:8:ImplFile:printer.cpp
# End Section
# Section VCTeeChart5 : {B6C10490-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CAspect
# 	2:10:HeaderFile:aspect.h
# 	2:8:ImplFile:aspect.cpp
# End Section
# Section VCTeeChart5 : {97763CEC-4D57-4612-A799-05C6E19AC789}
# 	2:5:Class:CRotateTool
# 	2:10:HeaderFile:rotatetool.h
# 	2:8:ImplFile:rotatetool.cpp
# End Section
# Section VCTeeChart5 : {B6C1052D-FB89-11D4-93C9-006008A7EED4}
# 	2:21:DefaultSinkHeaderFile:teelistbox.h
# 	2:16:DefaultSinkClass:CTeeListBox
# End Section
# Section VCTeeChart5 : {B6C104AC-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CSeries
# 	2:10:HeaderFile:series.h
# 	2:8:ImplFile:series.cpp
# End Section
# Section VCTeeChart5 : {B6C10501-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CExplodedSlices
# 	2:10:HeaderFile:explodedslices.h
# 	2:8:ImplFile:explodedslices.cpp
# End Section
# Section VCTeeChart5 : {B6C10531-FB89-11D4-93C9-006008A7EED4}
# 	2:21:DefaultSinkHeaderFile:teepreviewer.h
# 	2:16:DefaultSinkClass:CTeePreviewer
# End Section
# Section VCTeeChart5 : {B6C104DC-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CCandleSeries
# 	2:10:HeaderFile:candleseries.h
# 	2:8:ImplFile:candleseries.cpp
# End Section
# Section VCTeeChart5 : {2EB35E28-80CF-4F35-9B6B-427E2AC1BFA6}
# 	2:5:Class:CNearestTool
# 	2:10:HeaderFile:nearesttool.h
# 	2:8:ImplFile:nearesttool.cpp
# End Section
# Section VCTeeChart5 : {B6C10489-FB89-11D4-93C9-006008A7EED4}
# 	2:21:DefaultSinkHeaderFile:tchart.h
# 	2:16:DefaultSinkClass:CTChart
# End Section
# Section VCTeeChart5 : {235FB746-F8ED-11D4-93C8-006008A7EED4}
# 	2:5:Class:CGIFExport
# 	2:10:HeaderFile:gifexport.h
# 	2:8:ImplFile:gifexport.cpp
# End Section
# Section VCTeeChart5 : {B6C104E5-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CAverageFunction
# 	2:10:HeaderFile:averagefunction.h
# 	2:8:ImplFile:averagefunction.cpp
# End Section
# Section VCTeeChart5 : {E517CB2C-1C48-11D5-9400-006008A7EED4}
# 	2:5:Class:CTeeShapePosition
# 	2:10:HeaderFile:teeshapeposition.h
# 	2:8:ImplFile:teeshapeposition.cpp
# End Section
# Section VCTeeChart5 : {B6C104C5-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CBubbleSeries
# 	2:10:HeaderFile:bubbleseries.h
# 	2:8:ImplFile:bubbleseries.cpp
# End Section
# Section VCTeeChart5 : {AC690ADB-0730-11D5-93E3-006008A7EED4}
# 	2:5:Class:CMapPolygon
# 	2:10:HeaderFile:mappolygon.h
# 	2:8:ImplFile:mappolygon.cpp
# End Section
# Section VCTeeChart5 : {E517CB25-1C48-11D5-9400-006008A7EED4}
# 	2:5:Class:CCalendarCell
# 	2:10:HeaderFile:calendarcell.h
# 	2:8:ImplFile:calendarcell.cpp
# End Section
