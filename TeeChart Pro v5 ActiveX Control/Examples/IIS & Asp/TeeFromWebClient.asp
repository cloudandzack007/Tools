<%
if Request.Servervariables("LOCAL_ADDR")="127.0.0.1" then
      ServerPath="localhost"
else
      ServerPath=Request.Servervariables("LOCAL_ADDR")
end if
%>

<html>

<META HTTP-EQUIV="Expires" CONTENT="0">

<script LANGUAGE="VBScript">

sub window_onload()
 
 TChart1.Import.LoadFromURL("http://<%=ServerPath%>/TeeChart5/TeeFromWeb.asp")
 TeeCommander1.ChartLink = TChart1.ChartLink
end sub

Sub TChart1_OnDblClick()
 TChart1.ShowEditor
 TChart1.StopMouse
end sub

Sub TChart1_OnMouseMove(Shift, X,Y)
' Example use of Chart event
' Uncomment code to see Mouseover message
' dim tmp
'  tmp = TChart1.Series(0).Clicked(X,Y)
'  if tmp <> -1 then
'    if TChart1.Series(0).YValues.Value(tmp)=TChart1.Series(0).YValues.Maximum then
'      msgbox("Max Y Value =" & TChart1.Series(0).YValues.Value(tmp) )
'    end if
'  end if
end sub

</script>
<head>
<title>TeeChart v5 Stream to browser example</title>
<LINK REL=STYLESHEET TYPE="text/css" HREF="Style.css"></HEAD><BODY>
<img src="TeeChart5.png">
<br><br>
<a href="ASPHome.htm">Back to Contents page</a>
<hr>
<p>This example page calls a serverside script to create a Chart and return the 
result to the browser Chart as a native TeeChart template. The browser Chart imports
the template (inclusion of data is optional). No temporary files are used, output is
streamed directly to the browser. In this way TeeChart could alternatively stream all 
supported output image formats (eg. JPEG, PNG, GIF, Metafile) to the browser.</p>

<hr>
<p>
<object ID="TeeCommander1" WIDTH="600" HEIGHT="32" align="center"
CLASSID="clsid:B6C10532-FB89-11D4-93C9-006008A7EED4">
</object>
</p>
<p>
<object ID="TChart1" WIDTH="600" HEIGHT="400" align="center"
CLASSID="clsid:B6C10489-FB89-11D4-93C9-006008A7EED4">
</object>
</p>


<HR>Copyright &copy; 2002 Steema Software SL</BODY>
</html>