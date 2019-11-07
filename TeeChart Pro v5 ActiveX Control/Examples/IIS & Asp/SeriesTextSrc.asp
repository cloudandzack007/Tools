<!--METADATA NAME="TeeChart Pro v5 ActiveX Control" TYPE="TypeLib" UUID="{B6C10482-FB89-11D4-93C9-006008A7EED4}"-->
<%
 ' Metadata section above to permit use of TeeChart constants in script

 Function RunChart()

   Dim AppPath

   Set Chart1 = CreateObject("TeeChart.TChart")
   Set SeriesTextSource1 = CreateObject("TeeChart.SeriesTextSource")

   Chart1.Width=500
   Chart1.Height=350
   Chart1.Panel.Gradient.Visible=True
   Chart1.AddSeries(scSurface)
   Chart1.Series(0).asSurface.IrregularGrid = True
   Chart1.Axis.Depth.Visible=True
   Chart1.Axis.Left.Increment = 0.4

   'Set some Chart display characteristics
   Chart1.Aspect.Orthogonal=False
   Chart1.Aspect.Rotation=345
   Chart1.Aspect.Elevation=345
   Chart1.Aspect.Perspective=37
   Chart1.Aspect.Zoom=80
   Chart1.Aspect.Chart3DPercent=60
   Chart1.Legend.Visible=False

   ' AddField AName refers to the Series ValueList name
   ' The AIndex refers to the Column index of the text file
   ' beginning with Column 1
   SeriesTextSource1.AddField "X", 1
   SeriesTextSource1.AddField "Y", 2
   SeriesTextSource1.AddField "Z", 3

   ' We found that APPL_PHYSICAL_PATH returned different paths on 
   ' different operating platforms! So, just in case .....
   If InStr(Request.Servervariables("APPL_PHYSICAL_PATH"),"TeeChart5") then
     AppPath = Request.Servervariables("APPL_PHYSICAL_PATH")
   else
     AppPath = Request.Servervariables("APPL_PHYSICAL_PATH") & "\TeeChart5\"
   end if
    
   ' This just checks to see how the decimal separator is setup on your server
   ' then selects the appropriate format file.
   If Chart1.Environment.DecimalSeparator="," Then
     SeriesTextSource1.FileName = AppPath & "SampleData.txt"
   Else
     SeriesTextSource1.FileName = AppPath & "SampleDataPoint.txt"
   End If

   SeriesTextSource1.FieldSeparator=";"
    
   SeriesTextSource1.Series = Chart1.Series(0)
    
   SeriesTextSource1.Active = True

   RunChart=(Chart1.Export.asPNG.SaveToStream)
   Set Chart1=Nothing
 End Function

 Function CreatePage
   Response.Expires = 0
   Response.Write("<html>")
   Response.Write("<HEAD><title>TeeChart Pro AX Control- importing serverside text files</title>")
   Response.Write("<LINK REL=STYLESHEET TYPE=""text/css"" HREF=""Style.css""></HEAD><BODY>")
   Response.Write("<img src=""TeeChart5.png"">")
   Response.Write("<br><br>")
   Response.Write("<a href=""ASPHome.htm"">Back to Contents page</a>")
   Response.Write("<hr>")
   Response.Write("<img id=Img1 src=""SeriesTextSrc.asp?CreateChart=1"">")
   Response.Write("<HR>Copyright (c) 2002 Steema Software SL</BODY></HTML>")
   Response.Write("</body>")
   Response.Write("</html>")
 End Function

 if Request.QueryString("CreateChart")=1 Then
   Response.BinaryWrite(RunChart)
 else 
   CreatePage
 end if 
%>
