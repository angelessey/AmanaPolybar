[Variables]
Uptime_X=1262

[Metadata]
Name=Amana\\Uptime
Author=angelessey @ deviantart
Description=Display up time.

[UptimeShape]
Meter=Shape
X=(#Bar_OffsetX#+#Uptime_X#)
Y=(#Bar_OffsetY#+(#Bar_Height#/4))
Shape =Rectangle -#Section_Padding#,0,150,(#Bar_Height#/2),(#Bar_Height#/4) | StrokeWidth 0 | Fill Color #Color_Scheme4#
DynamicVariables=1

[MeasureUptime]
Measure=upTime
Format="%3!i!h, %2!i!m, %1!i!s"

[UptimeIcon]
Meter=String
Text=[\xE8B3]
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#Color_Scheme3#
AntiAlias=1
StringAlign=LeftCenter
Y=(#Bar_Height#/2)
Container = UptimeContainer

[Uptime]
Meter=String
MeasureName=MeasureUptime
FontFace=#Font_Face#
FontSize=#Font_Size#
FontColor=#Color_Scheme2#
FontWeight=#Font_Weight#
AntiAlias=1
StringAlign=LeftCenter
X=5R
Y=r
Container = UptimeContainer

[UptimeContainer]
Meter = Shape
X = (#Bar_OffsetX#+#Uptime_X#)
Y = #Bar_OffsetY#
Shape = Rectangle 0,0,([UptimeIcon:W] + [Uptime:W] + 5),#Bar_Height# | StrokeWidth 0
DynamicVariables = 1
