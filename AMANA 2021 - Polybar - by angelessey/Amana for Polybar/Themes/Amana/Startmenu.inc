[Variables]
Startmenu_X=35

[Metadata]
Name=Amana\\StartMenu
Author=angelessey @ deviantart
Description=Click to show Windows's Start Menu

[StartmenuButton]
Meter=Image
ImageName=#ROOTCONFIGPATH#Themes\#Theme#\Assets\startmenu.png
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#Color_Scheme3#
AntiAlias=1
StringAlign=CenterCenter
X=(#Bar_OffsetX#)
Y=(#Bar_OffsetY#)
H=#Bar_Height#
LeftMouseUpAction=["#@#nircmd.exe" sendkeypress lwin]
DynamicVariables=1
