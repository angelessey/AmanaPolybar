[Variables]
datetime_x=1803

[Metadata]
Name=Amana\\Date&Time
Author=angelessey @ deviantart
Description=Display date & time.

[MeasureDate]
Measure=Time
Format=%a, %b %#d, %Y

[Date]
Meter=String
MeasureName=MeasureDate
FontFace=#Font_Face#
FontSize=(#Font_Size#/1.1)
FontColor=#Color_Scheme2#
FontWeight=#Font_Weight#
AntiAlias=1
StringAlign=LeftCenter
X=5R
Y=(#Bar_OffsetY#+#Bar_Height#/1.5)
Container = DateContainer

[MeasureTime]
Measure=Time
Format=%I:%M

[Time]
Meter=String
MeasureName=MeasureTime
FontFace=Eurostile Caps
FontSize=(#Font_Size#*1.8)
FontWeight=#Font_Weight#
FontColor=#Color_Scheme2#
AntiAlias=1
StringAlign=RightCenter
X=2R
Y=(#Bar_OffsetY#+#Bar_Height#/2.5)
DynamicVariables=1
Container = DateContainer

[DateContainer]
Meter=Shape
X=(#Bar_OffsetX#+#Datetime_X#)
Y=#Bar_OffsetY#
Shape = Rectangle 0,0,([Date:W] + [Time:X] + 5),(#Bar_Height#) | StrokeWidth 0
DynamicVariables = 1
