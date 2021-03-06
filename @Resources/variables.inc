[Variables]
UnloadSkin=[!ActivateConfig "Spectrum V3"][!DeactivateConfig "Spectrum V3\Modules"][!DeactivateConfig "Spectrum V3\MainFrame"]

Indicator1On=[!SetOption IndicatorBar1 SolidColor 255,255,255,255 "Spectrum V3\MainFrame"]
Indicator1Off=[!SetOption IndicatorBar1 SolidColor 255,255,255,64 "Spectrum V3\MainFrame"]
Indicator2On=[!SetOption IndicatorBar2 SolidColor 255,255,255,255 "Spectrum V3\MainFrame"]
Indicator2Off=[!SetOption IndicatorBar2 SolidColor 255,255,255,64 "Spectrum V3\MainFrame"]
Indicator3On=[!SetOption IndicatorBar3 SolidColor 255,255,255,255 "Spectrum V3\MainFrame"]
Indicator3Off=[!SetOption IndicatorBar3 SolidColor 255,255,255,64 "Spectrum V3\MainFrame"]
Indicator4On=[!SetOption IndicatorBar4 SolidColor 255,255,255,255 "Spectrum V3\MainFrame"]
Indicator4Off=[!SetOption IndicatorBar4 SolidColor 255,255,255,64 "Spectrum V3\MainFrame"]
Indicator5On=[!SetOption IndicatorBar5 SolidColor 255,255,255,255 "Spectrum V3\MainFrame"]
Indicator5Off=[!SetOption IndicatorBar5 SolidColor 255,255,255,64 "Spectrum V3\MainFrame"]
Indicator6On=[!SetOption IndicatorBar6 SolidColor 255,255,255,255 "Spectrum V3\MainFrame"]
Indicator6Off=[!SetOption IndicatorBar6 SolidColor 255,255,255,64 "Spectrum V3\MainFrame"]

BarFontSize=((#SCREENAREAHEIGHT#)*0.025)
LauncherFontSize=((#SCREENAREAHEIGHT#)*0.02)
LauncherIconSize=(((#SCREENAREAWIDTH#)*0.9)/12)

LauncherWidth=(((#SCREENAREAWIDTH#)*0.9)/6)
NavButtonWidth=((#LauncherWidth#-4)/2)

BarHeight=((#SCREENAREAHEIGHT#)*0.05)
LauncherHeight=#LauncherWidth#*1.5

TopBarYPos=(((#SCREENAREAHEIGHT#)*0.2)+16)
NavFontYPos=(#TopBarYPos#+(#BarHeight#/5))
IndicatorYPos=((#SCREENAREAHEIGHT#)*0.3)
LauncherYPos=#IndicatorYPos#+8
BottomBarYPos=((#SCREENAREAHEIGHT#)*0.75)

XPos10=((#SCREENAREAWIDTH#)*0.05)-10
Xpos15=#XPos10#+#NavButtonWidth#+4
XPos20=#XPos10#+#LauncherWidth#+4
XPos25=#XPos20#+#NavButtonWidth#+4
Xpos30=#XPos10#+(#LauncherWidth#*2)+8
Xpos40=#XPos10#+(#LauncherWidth#*3)+12
Xpos50=#XPos10#+(#LauncherWidth#*4)+16
Xpos60=#XPos10#+(#LauncherWidth#*5)+20

LauncherIconAndNameXpos=((#SCREENAREAWIDTH#)*0.9)/24
LauncherIconYpos=(((#SCREENAREAHEIGHT#)-#LauncherHeight#)/2)+#LauncherIconSize#
LauncherNameYpos=((#SCREENAREAWIDTH#)*0.9)/7.5