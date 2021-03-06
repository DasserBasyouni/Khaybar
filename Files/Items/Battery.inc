[mBatteryPercentage]
Measure=Plugin
Plugin=PowerPlugin

PowerState=Percent

OnChangeAction=#Update#

[mBatteryChargingStatus]
Measure=Plugin
Plugin=PowerPlugin

PowerState=ACLine

RegExpSubstitute=1
Substitute="^1$":"charging_", "^0$":""

OnChangeAction=#Update#

[BatteryContainer]
Meter=Image
MeterStyle=MeterStyleItem

W=(#Scale#*#IconSize#*1.5+[BatteryPercentage:W])

[BatteryIconContainer]
Meter=String

Text=battery_[mBatteryChargingStatus]full

FontFace=Material Icons Outlined
FontSize=(#Scale#*#IconSize#*0.75)
FontColor=#Color#
AntiAlias=1

X=r
Y=r

UpdateDivider=-1
DynamicVariables=1

[BatteryIconBackground]
Meter=Image

W=(#Scale#*#IconSize#)
H=(#Scale#*#IconSize#)
SolidColor=#Color#, (255*0.5)

UpdateDivider=-1
DynamicVariables=1
Container=BatteryIconContainer

[BatteryIconFiller]
Meter=Shape

Shape=Rectangle 0, 0, (#Scale#*#IconSize#), (Round(Neg(#Scale#*(([mBatteryPercentage:%]=100 ? 20 : 18)/24*#IconSize#)*[mBatteryPercentage:%]/100))) | StrokeWidth 0 | Fill Color #Color#

X=r
Y=(#Scale#*(22/24*#IconSize#))r

UpdateDivider=-1
DynamicVariables=1
Container=BatteryIconContainer

[BatteryPercentage]
Meter=String

Text=[mBatteryPercentage:]%

FontFace=#Font#
FontSize=(#Scale#*#TextSize#*0.75)
FontColor=#Color#
AntiAlias=1

X=(#Scale#*#IconSize#*0.5)R
Y=((#Scale#*#IconSize#-[#CurrentSection#:H])/2)r

UpdateDivider=-1
DynamicVariables=1
