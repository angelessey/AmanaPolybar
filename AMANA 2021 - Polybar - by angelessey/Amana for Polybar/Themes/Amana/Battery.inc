[Variables]
Battery_X =828
Battery_Outer = (#Font_Size# * 18 / 11)
Battery_InnerWidth = (#Font_Size# * 24 / 11)
Battery_InnerHeight = (#Font_Size# * 9 / 11)

[Metadata]
Name=Amana/Battery
Author=angelessey @ deviantart
Description=Display battery level.

[BatteryLevel]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent

[BatteryCharging]
Measure=Plugin
Plugin=PowerPlugin
PowerState=ACLine

[BatteryIcon]
Meter=Shape
SHape=Rectangle (#Battery_InnerHeight#/2),(#Battery_InnerHeight#/2),(#Battery_InnerWidth#*[BatteryLevel]/100),#Battery_InnerHeight#,1 | StrokeWidth 0 | Fill Color #Color_Scheme3#
X = (#Bar_OffsetX#+#Battery_X#)
Y = (#Bar_OffsetY#+#Bar_Height#/2-[BatterCap:H]/2)
Group=Battery
DynamicVariables=1

[BatterCap]
Meter = Image
ImageName = #ROOTCONFIGPATH#\Themes\#Theme#\Assets\battery[BatteryCharging].png
X = (#Bar_OffsetX#+#Battery_X#)
Y = r
H = (#Font_Size# * 18 / 11)
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables Curr_X "([BatterCap:X]+[BatterCap:W]/2+#CURRENTCONFIGX#)" "#ROOTCONFIGPATH#Themes\#Theme#\Assets\PowerPlanSwitcher.ini"][!WriteKeyValue Variables Curr_Y "[SubSkinYPositionCalc]" "#ROOTCONFIGPATH#Themes\#Theme#\Assets\PowerPlanSwitcher.ini"][!WriteKeyValue Variables Dir "[SubSkinDirectionCalc]" "#ROOTCONFIGPATH#Themes\#Theme#\Assets\PowerPlanSwitcher.ini"][!ToggleConfig "#ROOTCONFIG#\Themes\#Theme#\Assets" "PowerPlanSwitcher.ini"]
MouseLeaveAction=!CommandMeasure AdditionalSkinActionTimer "Execute 1"
MouseOverAction=!CommandMeasure AdditionalSkinActionTimer "Stop 1"



