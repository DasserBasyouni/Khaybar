[UserContainer]
Meter=Image
MeterStyle=MeterStyleItem

W=(#Scale#*#IconSize#)

[UserPictureContainer]
Meter=Shape

Shape=Rectangle 0, 0, (#Scale#*#IconSize#), (#Scale#*#IconSize#), (#Scale#*#IconSize#/2) | StrokeWidth 0 | Fill Color FFFFFF

X=r
Y=r

UpdateDivider=-1
DynamicVariables=1

[UserPicture]
Meter=Image
ImageName=#@#User.jpg

PreserveAspectRatio=2

W=(#Scale#*#IconSize#)
H=(#Scale#*#IconSize#)

X=r
Y=r

UpdateDivider=-1
Container=UserPictureContainer