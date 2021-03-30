[Variables]
Music_X =124
Music_Width = 400
Music_Current_Player=WebNowPlaying
Music_NowPlaying_Player=AIMP

[Metadata]
Name=Amana\\Music
Author=angelessey @ deviantart
Description=Display song name and artist. Click at music note icon to next. Click at text to play/pause. Right click at text to activate Music Control to show track progress, player changer.

[MusicShape]
Meter=Shape
X=(#Bar_OffsetX#+#Music_X#)
Y=(#Bar_OffsetY#+(#Bar_Height#/4))
Shape =Rectangle -#Section_Padding#,0,350,(#Bar_Height#/2),(#Bar_Height#/4) | StrokeWidth 0 | Fill Color #Color_Scheme4#
DynamicVariables=1

[MusicTrack]
Measure=Plugin
Plugin=#Music_Current_Player#
PlayerName=#music_NowPlaying_Player#
PlayerType=Title
Substitute="":"N/A"
OnChangeAction=[!UpdateMeter MusicTrackTitle][!UpdateMeter MusicIcon][!UpdateMeter MusicContainer][!Redraw]

[MusicArtist]
Measure=Plugin
Plugin=#Music_Current_Player#
PlayerName=#music_NowPlaying_Player#
PlayerType=Artist
Substitute="":"N/A"

[MusicControl]
Measure=Plugin
Plugin=#Music_Current_Player#
PlayerName=#music_NowPlaying_Player#
PlayerType=State

[MusicIcon]
Meter=String
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#Color_Scheme3#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=LeftCenter
Text=[\xE405]
Y=(#Bar_Height#/2)
H=#Bar_Height#
StringAlign=LeftCenter
MouseOverAction=[!SetOption #CURRENTSECTION# Text "[\xE044]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Text "[\xE405]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=!CommandMeasure MusicControl Next
Container = MusicContainer

[MusicTrackTitle]
Meter=String
MeasureName=MusicTrack
MeasureName2=MusicArtist
Text=%1 - %2
FontFace=#Font_Face#
FontSize=#Font_Size#
FontWeight=#Font_Weight#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=LeftCenter
FontColor=#Color_Scheme2#
X=5R
Y=(#Bar_OffsetY#+#Bar_Height#/2)
DynamicVariables=1
ClipString=2
ClipStringW=(#Music_Width#-100)
ClipStringH=(#Font_Size#*2)
LeftMouseUpAction=!CommandMeasure MusicControl "PlayPause"
RightMouseUpAction=[!WriteKeyValue Variables MusicControl_Current_Player #music_Current_Player# "#ROOTCONFIGPATH#Themes\#Theme#\Assets\MusicControl.ini"][!WriteKeyValue Variables MusicControl_NowPlaying_Player #music_NowPlaying_Player# "#ROOTCONFIGPATH#Themes\#Theme#\Assets\MusicControl.ini"][!WriteKeyValue Variables Curr_X ([MusicShape:X]+[MusicShape:W]/2-[MusicIcon:W]/2+#CURRENTCONFIGX#) "#ROOTCONFIGPATH#Themes\#Theme#\Assets\MusicControl.ini"][!WriteKeyValue Variables Curr_Y ([SubSkinYPositionCalc]) "#ROOTCONFIGPATH#Themes\#Theme#\Assets\MusicControl.ini"][!WriteKeyValue Variables Dir [SubSkinDirectionCalc] "#ROOTCONFIGPATH#\Themes\#Theme#\Assets\MusicControl.ini"][!ActivateConfig "#ROOTCONFIG#\Themes\#Theme#\Assets" "MusicControl.ini"]
MouseLeaveAction=!CommandMeasure AdditionalSkinActionTimer "Execute 1"
MouseOverAction=!CommandMeasure AdditionalSkinActionTimer "Stop 1"
Container = MusicContainer

[MusicContainer]
Meter=Shape
X=(#Bar_OffsetX#+#Music_X#)
Y=#Bar_OffsetY#
Shape = Rectangle 0,0,([MusicIcon:W] + [MusicTrackTitle:W] + 5),(#Bar_Height#),15 | StrokeWidth 0 | Fill Color #Color_Scheme4#
DynamicVariables = 1
