;===== Meter Styles=====
;All of these meter styles are required.

;Day Label Styles
[LblTxtSty]
H=#C.h#
W=#C.w#
X=#Space.X#R
Y=r
FontFace=#CalendarHeaderFont#
FontColor=255,255,255,(Clamp(((#AValue#)-300),0,255))
FontSize=24
stringAlign=Center
AntiAlias=1
Hidden=1
Group=Time
DynamicVariables=1

[LblTxtStart]
X=(#Bumper.x#+#C.w#/2)
Y=(#Bumper.top#+#C.h#*1.5+#Space.y#)
DynamicVariables=1

[LblCurrSty]

;Main Calendar Styles
[TextStyle]
H=#C.h#
W=#C.w#
X=(#Space.X#+#C.w#)r
Y=r
FontColor=255,255,255,(Clamp(((#AValue#)-300),0,255))
FontFace=#CalendarFont#
FontSize=24
FontSize=24
stringAlign=center
AntiAlias=1
Hidden=1
Group=Time
DynamicVariables=1

[FirstDay]
Y=(#C.h#/2+#Space.y#)r
X=(#Bumper.x#+#C.w#/2)

[NewWk]
Y=#Space.y#R
X=(#Bumper.x#+#C.w#/2)

[CurrentDay]
FontColor=255,255,255,(Clamp(((#AValue#)-300),0,255))
FontFace=#CalendarFont#
SolidColor=255,255,255,(Clamp(((#AValue#)-300),0,64))

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=255,255,255,(Clamp(((#AValue#)-300),0,64))

[NextMonth]
FontColor=255,255,255,(Clamp(((#AValue#)-300),0,64))

[HolidayStyle]
FontColor=255,255,255,(Clamp(((#AValue#)-300),0,64))

[WeekendStyle]

;========== METERS ==========
;These are not required.

[Ghost]
Meter=Image
SolidColor=0,0,0,1
H=1
W=1
X=(#C.w#*7+#Space.x#*6+#Bumper.x#*2-1)
Y=(#Bumper.top#+#Bumper.bottom#+(#C.h#+#Space.y#)*7+#C.h#+1)
DynamicVariables=1