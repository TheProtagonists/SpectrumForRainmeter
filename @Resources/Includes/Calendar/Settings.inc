; Please visit http://smurfier.github.io/LuaCalendar for detailed descriptions of the features listed below.

[Variables]
;Name of the Style Sheet
Style=Default

;Custom text for Weekday labels. Uses the following format: Sun|Mon|Tue|Wed|Thu|Fri|Sat
DayLabels=Sun|Mon|Tue|Wed|Thu|Fri|Sat

;Set to 1 to hide week 6 if not included in the current month
HideLastWeek=0

;Holidays File names
;Note: For Holiday file names, multiple sources can be used by uisng the pipe delimiter (|).
EventFile=#@#Calendars\Holidays.xml

;Custom Text formatting for Month Labels. See Readme for details.
LabelText=

;Set to 1 to add a leading zero to any number below 10.
LeadingZeroes=1

;Custom text for Month labels. Uses the following format: Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec
MonthLabels=

;Set to 1 to have the week start on Monday
StartOnMonday=0

;Set to 1 to pull month names from the Localization Settings of your computer. Overrides Custom Month Labels.
UseLocalMonths=1

;The format for the list of upcomming events. {day} and {desc} are valid variables.
NextFormat=

;Show the Moon Phases as events
ShowMoonPhases=0

;Color to use for the Moon Phases Events
MoonColor=

;Set to 0 to hide all calendar events including the Moon Phases
ShowEvents=0

