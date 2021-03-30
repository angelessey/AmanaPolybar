[Variables]
NetSpeed_X=1052

[Metadata]
Name=Amana\\NetSpeed
Author=angelessey @ deviantart
Description=Display download and upload speed.

[NetSpeedShape]
Meter=Shape
X=(#Bar_OffsetX#+#NetSpeed_X#)
Y=(#Bar_OffsetY#+(#Bar_Height#/4))
Shape =Rectangle -#Section_Padding#,0,200,(#Bar_Height#/2),(#Bar_Height#/4) | StrokeWidth 0 | Fill Color #Color_Scheme4#
DynamicVariables=1

[NetSpeedInMeasure]
Measure=NetIn
Interface=Best
AverageSize=5
UpdateDivider=5

[NetSpeedOutMeasure]
Measure=NetOut
Interface=Best
AverageSize=5
UpdateDivider=5

[NetSpeedInScale]
Measure=Script
;Desc: To maintain constant meter width, NetSpeedScaling_Common_Script scales
;      InputMeasure value by chosen unit's factor (1000 or 1024) but it always
;      start to scale at 1000. It also appends unit to the result.
;Opts:
;      InputMeasure : NetIn or NetOut measure name.
;      NumOfNum: number of characters of output, has to be equal or larger
;                 than 3 (not including dot character).
;      Unit: Valid options:
;            db: Decimal multiples of bits (kb, Mb, Gb)
;            bb: Binary multiples of bits (Kibit, Mibit, Gibit)
;            dB: Decimal multiples of bytes (kB, MB, GB)
;            bB: Binary multiples of bytes (KiB, MiB, GiB)
;      More info about unit: https://en.wikipedia.org/wiki/Data_rate_units
ScriptFile=#@#Scripts\NetSpeedScaling_Common_Script.lua
InputMeasure=NetSpeedInMeasure
NumOfNum=3
Unit = dB
;Uncomment 2 lines below to have a space between value and unit.
;RegExpSubstitute=1
;Substitute="([^0-9\.]+)":" \1"

[NetSpeedOutScale]
Measure=Script
ScriptFile=#@#Scripts\NetSpeedScaling_Common_Script.lua
InputMeasure=NetSpeedOutMeasure
NumOfNum=3
Unit = dB
;RegExpSubstitute=1
;Substitute="([^0-9\.]+)":" \1"

[NetSpeedInIcon]
Meter=String
Text=[\xE2C4]
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#Color_Scheme3#
AntiAlias=1
StringAlign=LeftCenter
X=(#Bar_OffsetX#+#NetSpeed_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2)
DynamicVariables=1

[NetSpeedIn]
Meter=String
MeasureName=NetSpeedInScale
Text=%1/s
FontFace=#Font_Face#
FontSize=#Font_Size#
FontColor=#Color_Scheme2#
FontWeight=#Font_Weight#
AntiAlias=1
StringAlign=LeftCenter
X=5R
W=(#Font_Size#*90/12)
Y=r

[NetSpeedOutIcon]
Meter=String
MeterStyle=NetSpeedInIcon
Text=[\xE2C6]
X=8R

[NetSpeedOut]
Meter=String
MeterStyle=NetSpeedIn
MeasureName=NetSpeedOutScale
