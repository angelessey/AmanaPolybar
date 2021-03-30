[Variables]
Power_X=32

[Metadata]
Name=Notch\\Power
Author=reddit.com/u/khanhas
Description=Click to activate Power menu to Turn Off, Restart, Sleep or Log off.

[PowerCurrYCalc]
Measure=Calc
Formula=SubSkinDirectionCalc = 1 ? (#CURRENTCONFIGY# + #Bar_OffsetY#) : (#CURRENTCONFIGY# + #Bar_OffsetY# + #Bar_Height#)
IfCondition=SubSkinDirectionCalc = 1
IfTrueAction=[!SetVariable PowerReplaceChar [\xE5CE]][!WriteKeyValue Variables Dir 1 "#ROOTCONFIGPATH#\Themes\#Theme#\Assets\PowerMenu.ini"]
IfFalseAction=[!SetVariable PowerReplaceChar [\xE5CF]][!WriteKeyValue Variables Dir 0 "#ROOTCONFIGPATH#\Themes\#Theme#\Assets\PowerMenu.ini"]
DynamicVariables=1

[PowerButton]
Meter=String
Text=[\xE8AC]
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#Color_Scheme3#
AntiAlias=1
StringAlign=CenterCenter
X=(#Bar_OffsetX#+#Power_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2)
H=#Bar_Height#
DynamicVariables=1
MouseLeaveAction=!CommandMeasure AdditionalSkinActionTimer "Execute 1"
MouseOverAction=!CommandMeasure AdditionalSkinActionTimer "Stop 1"
LeftMouseUpAction=[!SetOption #CURRENTSECTION# Text #PowerReplaceChar#][!UpdateMeter PowerButton][!Redraw][!WriteKeyValue Variables Curr_X (#Bar_OffsetX#+#Power_X#+#CURRENTCONFIGX#) "#ROOTCONFIGPATH#\Themes\#Theme#\Assets\PowerMenu.ini"][!WriteKeyValue Variables Curr_Y [PowerCurrYCalc] "#ROOTCONFIGPATH#\Themes\#Theme#\Assets\PowerMenu.ini"][!ToggleConfig "#ROOTCONFIG#\Themes\#Theme#\Assets" "PowerMenu.ini"]
