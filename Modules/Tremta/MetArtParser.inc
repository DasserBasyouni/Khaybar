[Variables]
RegExpGallery=(?siU){"name":"(.*)","publishedAt":"(.*)","type":"(.*)","siteUUID":".*","models":\[{"UUID":".*","name":"(.*)","path":".*","globalUUID":".*"}(?(?=,),{"UUID":".*","name":"(.*)","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":"(.*)","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":"(.*)","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":"(.*)","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":"(.*)","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":"(.*)","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":"(.*)","path":".*","globalUUID":".*"})(?(?=,)(.*))\],"photographers":\[.*\],"UUID":".*","path":"(.*)","coverImagePath":".*","coverCleanImagePath":"(.*)","thumbnailCoverPath":".*","isStaffSelection":.*,"imageCount":(.*),"runtime":(.*),"categories":\[.*\],"hasCover":.*,"favoriteCount":(.*),"ratingAverage":(.*),"ratingCount":.*,"views":(.*)}

[mMetArtParent]
Measure=WebParser

URL=https://www.metart.com/api/updates?tab=stream&page=1&direction=DESC
RegExp=(?siU)"galleries":\[({"name":".*","publishedAt":".*","type":".*","siteUUID":".*","models":\[{"UUID":".*","name":".*","path":".*","globalUUID":".*"}(?(?=,),{"UUID":".*","name":".*","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":".*","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":".*","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":".*","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":".*","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":".*","path":".*","globalUUID":".*"})(?(?=,),{"UUID":".*","name":".*","path":".*","globalUUID":".*"})(?(?=,).*)\],"photographers":\[.*\],"UUID":".*","path":".*","coverImagePath":".*","coverCleanImagePath":".*","thumbnailCoverPath":".*","isStaffSelection":.*,"imageCount":.*,"runtime":.*,"categories":\[.*\],"hasCover":.*,"favoriteCount":.*,"ratingAverage":.*,"ratingCount":.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*}),({"name":".*",.*,"views":.*})\]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/87.0.4280.66 Safari/537.36
UpdateRate=(50*60*15)

FinishAction=[!DisableMeasure mFinish] [!UpdateMeasure mFinish] [!EnableMeasure mFinish] [!UpdateMeasure mFinish] [!EnableMeasureGroup MetArt] [!UpdateMeasureGroup MetArt]
OnConnectErrorAction=[!UpdateMeasure mError]
OnRegExpErrorAction=[!UpdateMeasure mError]

; ================================================

[mGallery1Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery1Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery1Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery1Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery1Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery1Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery1Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery1Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery1Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery1Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery1Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery1Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery1Models]
Group=MetArt
Measure=String

String=[mGallery1Model1][mGallery1Model2][mGallery1Model3][mGallery1Model4][mGallery1Model5][mGallery1Model6][mGallery1Model7][mGallery1Model8][mGallery1Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery1URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery1CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery1Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery1ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery1RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery1Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery1FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery1Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery1Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=1
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery2Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery2Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery2Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery2Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery2Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery2Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery2Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery2Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery2Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery2Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery2Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery2Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery2Models]
Group=MetArt
Measure=String

String=[mGallery2Model1][mGallery2Model2][mGallery2Model3][mGallery2Model4][mGallery2Model5][mGallery2Model6][mGallery2Model7][mGallery2Model8][mGallery2Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery2URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery2CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery2Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery2ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery2RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery2Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery2FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery2Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery2Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=2
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery3Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery3Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery3Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery3Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery3Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery3Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery3Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery3Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery3Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery3Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery3Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery3Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery3Models]
Group=MetArt
Measure=String

String=[mGallery3Model1][mGallery3Model2][mGallery3Model3][mGallery3Model4][mGallery3Model5][mGallery3Model6][mGallery3Model7][mGallery3Model8][mGallery3Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery3URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery3CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery3Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery3ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery3RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery3Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery3FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery3Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery3Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=3
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery4Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery4Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery4Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery4Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery4Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery4Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery4Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery4Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery4Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery4Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery4Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery4Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery4Models]
Group=MetArt
Measure=String

String=[mGallery4Model1][mGallery4Model2][mGallery4Model3][mGallery4Model4][mGallery4Model5][mGallery4Model6][mGallery4Model7][mGallery4Model8][mGallery4Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery4URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery4CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery4Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery4ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery4RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery4Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery4FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery4Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery4Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=4
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery5Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery5Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery5Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery5Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery5Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery5Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery5Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery5Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery5Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery5Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery5Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery5Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery5Models]
Group=MetArt
Measure=String

String=[mGallery5Model1][mGallery5Model2][mGallery5Model3][mGallery5Model4][mGallery5Model5][mGallery5Model6][mGallery5Model7][mGallery5Model8][mGallery5Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery5URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery5CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery5Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery5ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery5RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery5Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery5FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery5Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery5Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=5
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery6Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery6Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery6Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery6Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery6Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery6Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery6Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery6Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery6Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery6Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery6Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery6Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery6Models]
Group=MetArt
Measure=String

String=[mGallery6Model1][mGallery6Model2][mGallery6Model3][mGallery6Model4][mGallery6Model5][mGallery6Model6][mGallery6Model7][mGallery6Model8][mGallery6Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery6URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery6CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery6Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery6ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery6RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery6Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery6FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery6Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery6Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=6
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery7Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery7Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery7Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery7Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery7Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery7Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery7Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery7Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery7Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery7Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery7Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery7Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery7Models]
Group=MetArt
Measure=String

String=[mGallery7Model1][mGallery7Model2][mGallery7Model3][mGallery7Model4][mGallery7Model5][mGallery7Model6][mGallery7Model7][mGallery7Model8][mGallery7Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery7URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery7CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery7Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery7ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery7RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery7Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery7FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery7Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery7Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=7
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery8Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery8Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery8Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery8Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery8Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery8Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery8Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery8Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery8Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery8Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery8Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery8Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery8Models]
Group=MetArt
Measure=String

String=[mGallery8Model1][mGallery8Model2][mGallery8Model3][mGallery8Model4][mGallery8Model5][mGallery8Model6][mGallery8Model7][mGallery8Model8][mGallery8Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery8URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery8CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery8Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery8ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery8RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery8Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery8FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery8Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery8Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=8
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery9Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery9Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery9Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery9Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery9Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery9Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery9Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery9Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery9Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery9Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery9Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery9Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery9Models]
Group=MetArt
Measure=String

String=[mGallery9Model1][mGallery9Model2][mGallery9Model3][mGallery9Model4][mGallery9Model5][mGallery9Model6][mGallery9Model7][mGallery9Model8][mGallery9Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery9URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery9CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery9Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery9ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery9RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery9Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery9FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery9Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery9Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=9
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery10Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery10Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery10Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery10Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery10Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery10Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery10Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery10Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery10Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery10Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery10Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery10Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery10Models]
Group=MetArt
Measure=String

String=[mGallery10Model1][mGallery10Model2][mGallery10Model3][mGallery10Model4][mGallery10Model5][mGallery10Model6][mGallery10Model7][mGallery10Model8][mGallery10Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery10URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery10CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery10Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery10ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery10RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery10Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery10FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery10Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery10Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=10
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery11Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery11Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery11Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery11Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery11Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery11Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery11Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery11Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery11Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery11Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery11Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery11Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery11Models]
Group=MetArt
Measure=String

String=[mGallery11Model1][mGallery11Model2][mGallery11Model3][mGallery11Model4][mGallery11Model5][mGallery11Model6][mGallery11Model7][mGallery11Model8][mGallery11Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery11URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery11CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery11Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery11ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery11RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery11Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery11FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery11Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery11Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=11
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery12Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery12Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery12Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery12Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery12Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery12Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery12Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery12Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery12Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery12Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery12Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery12Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery12Models]
Group=MetArt
Measure=String

String=[mGallery12Model1][mGallery12Model2][mGallery12Model3][mGallery12Model4][mGallery12Model5][mGallery12Model6][mGallery12Model7][mGallery12Model8][mGallery12Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery12URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery12CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery12Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery12ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery12RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery12Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery12FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery12Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery12Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=12
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery13Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery13Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery13Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery13Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery13Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery13Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery13Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery13Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery13Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery13Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery13Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery13Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery13Models]
Group=MetArt
Measure=String

String=[mGallery13Model1][mGallery13Model2][mGallery13Model3][mGallery13Model4][mGallery13Model5][mGallery13Model6][mGallery13Model7][mGallery13Model8][mGallery13Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery13URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery13CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery13Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery13ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery13RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery13Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery13FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery13Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery13Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=13
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery14Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery14Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery14Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery14Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery14Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery14Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery14Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery14Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery14Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery14Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery14Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery14Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery14Models]
Group=MetArt
Measure=String

String=[mGallery14Model1][mGallery14Model2][mGallery14Model3][mGallery14Model4][mGallery14Model5][mGallery14Model6][mGallery14Model7][mGallery14Model8][mGallery14Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery14URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery14CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery14Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery14ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery14RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery14Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery14FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery14Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery14Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=14
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery15Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery15Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery15Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery15Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery15Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery15Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery15Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery15Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery15Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery15Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery15Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery15Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery15Models]
Group=MetArt
Measure=String

String=[mGallery15Model1][mGallery15Model2][mGallery15Model3][mGallery15Model4][mGallery15Model5][mGallery15Model6][mGallery15Model7][mGallery15Model8][mGallery15Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery15URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery15CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery15Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery15ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery15RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery15Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery15FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery15Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery15Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=15
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery16Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery16Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery16Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery16Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery16Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery16Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery16Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery16Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery16Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery16Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery16Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery16Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery16Models]
Group=MetArt
Measure=String

String=[mGallery16Model1][mGallery16Model2][mGallery16Model3][mGallery16Model4][mGallery16Model5][mGallery16Model6][mGallery16Model7][mGallery16Model8][mGallery16Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery16URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery16CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery16Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery16ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery16RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery16Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery16FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery16Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery16Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=16
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery17Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery17Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery17Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery17Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery17Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery17Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery17Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery17Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery17Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery17Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery17Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery17Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery17Models]
Group=MetArt
Measure=String

String=[mGallery17Model1][mGallery17Model2][mGallery17Model3][mGallery17Model4][mGallery17Model5][mGallery17Model6][mGallery17Model7][mGallery17Model8][mGallery17Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery17URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery17CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery17Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery17ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery17RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery17Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery17FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery17Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery17Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=17
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery18Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery18Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery18Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery18Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery18Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery18Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery18Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery18Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery18Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery18Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery18Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery18Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery18Models]
Group=MetArt
Measure=String

String=[mGallery18Model1][mGallery18Model2][mGallery18Model3][mGallery18Model4][mGallery18Model5][mGallery18Model6][mGallery18Model7][mGallery18Model8][mGallery18Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery18URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery18CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery18Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery18ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery18RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery18Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery18FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery18Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery18Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=18
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery19Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery19Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery19Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery19Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery19Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery19Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery19Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery19Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery19Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery19Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery19Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery19Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery19Models]
Group=MetArt
Measure=String

String=[mGallery19Model1][mGallery19Model2][mGallery19Model3][mGallery19Model4][mGallery19Model5][mGallery19Model6][mGallery19Model7][mGallery19Model8][mGallery19Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery19URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery19CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery19Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery19ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery19RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery19Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery19FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery19Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery19Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=19
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery20Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery20Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery20Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery20Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery20Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery20Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery20Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery20Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery20Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery20Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery20Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery20Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery20Models]
Group=MetArt
Measure=String

String=[mGallery20Model1][mGallery20Model2][mGallery20Model3][mGallery20Model4][mGallery20Model5][mGallery20Model6][mGallery20Model7][mGallery20Model8][mGallery20Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery20URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery20CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery20Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery20ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery20RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery20Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery20FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery20Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery20Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=20
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery21Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery21Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery21Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery21Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery21Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery21Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery21Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery21Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery21Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery21Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery21Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery21Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery21Models]
Group=MetArt
Measure=String

String=[mGallery21Model1][mGallery21Model2][mGallery21Model3][mGallery21Model4][mGallery21Model5][mGallery21Model6][mGallery21Model7][mGallery21Model8][mGallery21Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery21URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery21CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery21Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery21ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery21RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery21Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery21FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery21Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery21Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=21
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery22Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery22Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery22Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery22Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery22Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery22Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery22Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery22Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery22Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery22Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery22Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery22Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery22Models]
Group=MetArt
Measure=String

String=[mGallery22Model1][mGallery22Model2][mGallery22Model3][mGallery22Model4][mGallery22Model5][mGallery22Model6][mGallery22Model7][mGallery22Model8][mGallery22Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery22URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery22CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery22Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery22ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery22RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery22Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery22FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery22Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery22Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=22
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery23Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery23Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery23Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery23Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery23Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery23Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery23Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery23Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery23Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery23Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery23Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery23Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery23Models]
Group=MetArt
Measure=String

String=[mGallery23Model1][mGallery23Model2][mGallery23Model3][mGallery23Model4][mGallery23Model5][mGallery23Model6][mGallery23Model7][mGallery23Model8][mGallery23Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery23URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery23CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery23Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery23ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery23RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery23Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery23FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery23Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery23Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=23
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery24Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery24Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery24Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery24Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery24Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery24Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery24Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery24Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery24Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery24Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery24Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery24Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery24Models]
Group=MetArt
Measure=String

String=[mGallery24Model1][mGallery24Model2][mGallery24Model3][mGallery24Model4][mGallery24Model5][mGallery24Model6][mGallery24Model7][mGallery24Model8][mGallery24Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery24URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery24CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery24Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery24ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery24RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery24Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery24FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery24Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery24Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=24
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery25Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery25Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery25Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery25Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery25Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery25Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery25Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery25Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery25Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery25Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery25Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery25Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery25Models]
Group=MetArt
Measure=String

String=[mGallery25Model1][mGallery25Model2][mGallery25Model3][mGallery25Model4][mGallery25Model5][mGallery25Model6][mGallery25Model7][mGallery25Model8][mGallery25Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery25URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery25CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery25Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery25ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery25RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery25Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery25FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery25Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery25Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=25
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery26Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery26Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery26Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery26Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery26Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery26Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery26Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery26Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery26Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery26Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery26Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery26Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery26Models]
Group=MetArt
Measure=String

String=[mGallery26Model1][mGallery26Model2][mGallery26Model3][mGallery26Model4][mGallery26Model5][mGallery26Model6][mGallery26Model7][mGallery26Model8][mGallery26Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery26URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery26CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery26Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery26ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery26RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery26Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery26FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery26Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery26Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=26
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery27Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery27Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery27Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery27Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery27Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery27Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery27Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery27Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery27Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery27Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery27Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery27Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery27Models]
Group=MetArt
Measure=String

String=[mGallery27Model1][mGallery27Model2][mGallery27Model3][mGallery27Model4][mGallery27Model5][mGallery27Model6][mGallery27Model7][mGallery27Model8][mGallery27Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery27URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery27CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery27Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery27ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery27RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery27Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery27FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery27Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery27Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=27
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery28Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery28Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery28Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery28Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery28Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery28Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery28Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery28Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery28Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery28Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery28Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery28Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery28Models]
Group=MetArt
Measure=String

String=[mGallery28Model1][mGallery28Model2][mGallery28Model3][mGallery28Model4][mGallery28Model5][mGallery28Model6][mGallery28Model7][mGallery28Model8][mGallery28Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery28URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery28CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery28Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery28ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery28RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery28Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery28FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery28Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery28Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=28
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery29Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery29Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery29Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery29Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery29Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery29Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery29Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery29Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery29Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery29Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery29Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery29Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery29Models]
Group=MetArt
Measure=String

String=[mGallery29Model1][mGallery29Model2][mGallery29Model3][mGallery29Model4][mGallery29Model5][mGallery29Model6][mGallery29Model7][mGallery29Model8][mGallery29Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery29URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery29CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery29Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery29ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery29RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery29Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery29FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery29Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery29Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=29
RegExp=#RegExpGallery#
StringIndex2=19

; ================================================

[mGallery30Name]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=1

[mGallery30Date]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=2

RegExpSubstitute=1
Substitute="(.*)T.*":"\1"

[mGallery30Type]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=3

RegExpSubstitute=1
Substitute="^GALLERY$":"Gallery", "^MOVIE$":"Movie"

[mGallery30Model1]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=4

[mGallery30Model2]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=5

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery30Model3]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=6

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery30Model4]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=7

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery30Model5]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=8

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery30Model6]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=9

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery30Model7]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=10

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery30Model8]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=11

RegExpSubstitute=1
Substitute="(.+)":", \1"

[mGallery30Model9]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=12

RegExpSubstitute=1
Substitute="(.+)":" and others"

[mGallery30Models]
Group=MetArt
Measure=String

String=[mGallery30Model1][mGallery30Model2][mGallery30Model3][mGallery30Model4][mGallery30Model5][mGallery30Model6][mGallery30Model7][mGallery30Model8][mGallery30Model9]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery30URL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=13

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery30CoverURL]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=14

RegExpSubstitute=1
Substitute="(.+)":"https://www.metart.com\1"

[mGallery30Cover]
Group=MetArt
Measure=WebParser

URL=[&#CurrentSection#URL]
Download=1
UpdateRate=1

FinishAction=[!UpdateMeasure mFinish]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery30ImageCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=15

[mGallery30RuntimeRAW]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=16

[mGallery30Runtime]
Group=MetArt
Measure=Uptime

Format=%2!02i!:%1!02i!
SecondsValue=[#CurrentSection#RAW]

Disabled=1
UpdateDivider=-1
DynamicVariables=1

[mGallery30FavoriteCount]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=17

[mGallery30Rating]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=18

[mGallery30Views]
Group=MetArt
Measure=WebParser

URL=[mMetArtParent]
StringIndex=30
RegExp=#RegExpGallery#
StringIndex2=19
