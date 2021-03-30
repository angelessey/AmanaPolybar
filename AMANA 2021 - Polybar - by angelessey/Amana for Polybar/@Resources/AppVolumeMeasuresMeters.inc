[AppVol1]
Measure = Plugin
Plugin = AppVolume
Parent = AppVolumeParent
Index = 1
Substitute = ".exe":""
IfCondition=AppVol1 < 0
IfTrueAction=[!SetOption MeterIcon1 Text "[\xE04F]"][!UpdateMeter MeterIcon1][!Redraw]
IfCondition2=AppVol1 = 0
IfTrueAction2=[!SetOption MeterIcon1 Text "[\xE04E]"][!UpdateMeter MeterIcon1][!Redraw]
IfCondition3=(AppVol1 <= 0.5) && (AppVol1 > 0)
IfTrueAction3=[!SetOption MeterIcon1 Text "[\xE04D]"][!UpdateMeter MeterIcon1][!Redraw]
IfCondition4=AppVol1 > 0.5
IfTrueAction4=[!SetOption MeterIcon1 Text "[\xE050]"][!UpdateMeter MeterIcon1][!Redraw]
[AppPeak1]
Measure = Plugin
Plugin = AppVolume
Parent = AppVolumeParent
Index = 1
NumberType = Peak
[MeterIcon1]
Meter = String
MeterStyle = IconStyle
Y = 100
LeftMouseUpAction = !CommandMeasure AppVol1 "ToggleMute"
Group = App1
[MeterShape1]
Meter = Shape
MeterStyle = ShapeStyle
Shape3 = Rectangle 0,(-3 / 2),(((250 - 20 * 2) - 30)*([AppVol1:] > 0 ? [AppVol1:] : 0)),3,(3/2) | Extend LevelTrait
Shape4 = Rectangle 0,(-3 / 2),(((250 - 20 * 2) - 30)*([AppPeak1:] > 0 ? [AppPeak1:] : 0)),3,(3/2) | Extend PeakTrait
Shape5 = Ellipse (5 + (((250 - 20 * 2) - 30) - 5 * 2)*([AppVol1:] > 0 ? [AppVol1:] : 0)), 0, 5 | Extend KnobTrait
MouseScrollUpAction = !CommandMeasure AppVol1 "SetVolume +5"
MouseScrollDownAction = !CommandMeasure AppVol1 "SetVolume -5"
MouseOverAction = !SetVariable SlidingAppIndex 1
[MeterText1]
Meter = String
MeterStyle = AppStyle
MeasureName = AppVol1
Y = 150
[AppVol2]
Measure = Plugin
Plugin = AppVolume
Parent = AppVolumeParent
Index = 2
Substitute = ".exe":""
IfCondition=AppVol2 < 0
IfTrueAction=[!SetOption MeterIcon2 Text "[\xE04F]"][!UpdateMeter MeterIcon2][!Redraw]
IfCondition2=AppVol2 = 0
IfTrueAction2=[!SetOption MeterIcon2 Text "[\xE04E]"][!UpdateMeter MeterIcon2][!Redraw]
IfCondition3=(AppVol2 <= 0.5) && (AppVol2 > 0)
IfTrueAction3=[!SetOption MeterIcon2 Text "[\xE04D]"][!UpdateMeter MeterIcon2][!Redraw]
IfCondition4=AppVol2 > 0.5
IfTrueAction4=[!SetOption MeterIcon2 Text "[\xE050]"][!UpdateMeter MeterIcon2][!Redraw]
[AppPeak2]
Measure = Plugin
Plugin = AppVolume
Parent = AppVolumeParent
Index = 2
NumberType = Peak
[MeterIcon2]
Meter = String
MeterStyle = IconStyle
Y = 190
LeftMouseUpAction = !CommandMeasure AppVol2 "ToggleMute"
Group = App2
[MeterShape2]
Meter = Shape
MeterStyle = ShapeStyle
Shape3 = Rectangle 0,(-3 / 2),(((250 - 20 * 2) - 30)*([AppVol2:] > 0 ? [AppVol2:] : 0)),3,(3/2) | Extend LevelTrait
Shape4 = Rectangle 0,(-3 / 2),(((250 - 20 * 2) - 30)*([AppPeak2:] > 0 ? [AppPeak2:] : 0)),3,(3/2) | Extend PeakTrait
Shape5 = Ellipse (5 + (((250 - 20 * 2) - 30) - 5 * 2)*([AppVol2:] > 0 ? [AppVol2:] : 0)), 0, 5 | Extend KnobTrait
MouseScrollUpAction = !CommandMeasure AppVol2 "SetVolume +5"
MouseScrollDownAction = !CommandMeasure AppVol2 "SetVolume -5"
MouseOverAction = !SetVariable SlidingAppIndex 2
[MeterText2]
Meter = String
MeterStyle = AppStyle
MeasureName = AppVol2
Y = 240
[AppVol3]
Measure = Plugin
Plugin = AppVolume
Parent = AppVolumeParent
Index = 3
Substitute = ".exe":""
IfCondition=AppVol3 < 0
IfTrueAction=[!SetOption MeterIcon3 Text "[\xE04F]"][!UpdateMeter MeterIcon3][!Redraw]
IfCondition2=AppVol3 = 0
IfTrueAction2=[!SetOption MeterIcon3 Text "[\xE04E]"][!UpdateMeter MeterIcon3][!Redraw]
IfCondition3=(AppVol3 <= 0.5) && (AppVol3 > 0)
IfTrueAction3=[!SetOption MeterIcon3 Text "[\xE04D]"][!UpdateMeter MeterIcon3][!Redraw]
IfCondition4=AppVol3 > 0.5
IfTrueAction4=[!SetOption MeterIcon3 Text "[\xE050]"][!UpdateMeter MeterIcon3][!Redraw]
[AppPeak3]
Measure = Plugin
Plugin = AppVolume
Parent = AppVolumeParent
Index = 3
NumberType = Peak
[MeterIcon3]
Meter = String
MeterStyle = IconStyle
Y = 280
LeftMouseUpAction = !CommandMeasure AppVol3 "ToggleMute"
Group = App3
[MeterShape3]
Meter = Shape
MeterStyle = ShapeStyle
Shape3 = Rectangle 0,(-3 / 2),(((250 - 20 * 2) - 30)*([AppVol3:] > 0 ? [AppVol3:] : 0)),3,(3/2) | Extend LevelTrait
Shape4 = Rectangle 0,(-3 / 2),(((250 - 20 * 2) - 30)*([AppPeak3:] > 0 ? [AppPeak3:] : 0)),3,(3/2) | Extend PeakTrait
Shape5 = Ellipse (5 + (((250 - 20 * 2) - 30) - 5 * 2)*([AppVol3:] > 0 ? [AppVol3:] : 0)), 0, 5 | Extend KnobTrait
MouseScrollUpAction = !CommandMeasure AppVol3 "SetVolume +5"
MouseScrollDownAction = !CommandMeasure AppVol3 "SetVolume -5"
MouseOverAction = !SetVariable SlidingAppIndex 3
[MeterText3]
Meter = String
MeterStyle = AppStyle
MeasureName = AppVol3
Y = 330
