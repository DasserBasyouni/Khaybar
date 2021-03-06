[Variables]
FirstDayOfMonthFormatStartWeekOnSunday0=%u
FirstDayOfMonthFormatStartWeekOnSunday1=%w

[mCurrentMonth]
Measure=Time

Format=%#m

[mCurrentYear]
Measure=Time

Format=%Y

[mCurrentDay]
Group=Calendar
Measure=Time

Format=%d-%m-%Y

OnChangeAction=[!UpdateMeasureGroup Calendar] [!UpdateMeter *] [!Redraw]

[mMonth]
Group=Calendar
Measure=Calc

Formula=[mCurrentMonth]+#MonthOffset# <= 0 ? 12+([mCurrentMonth]+#MonthOffset#)%12 : ([mCurrentMonth]+#MonthOffset#)%12

UpdateDivider=-1
DynamicVariables=1

RegExpSubstitute=1
Substitute="^0$":"12"

[mYear]
Group=Calendar
Measure=Calc

Formula=[mCurrentYear]+Ceil(([mCurrentMonth]+#MonthOffset#)/12)-1

UpdateDivider=-1
DynamicVariables=1

[mMonthYear]
Group=Calendar
Measure=Time

TimeStamp=[mMonth]-[mYear]
TimeStampFormat=%#m-%Y
Format=%B %Y
FormatLocale=#Language#

DynamicVariables=1
UpdateDivider=-1

; ================================================

[mFirstDayOfMonthWeekday]
Group=Calendar
Measure=Time

TimeStamp=1-[mMonth]-[mYear] 00:00:00
TimeStampFormat=%#d-%#m-%Y %H:%M:%S
Format=[#FirstDayOfMonthFormatStartWeekOnSunday[#[#StartWeekOnSunday]]]

UpdateDivider=-1
DynamicVariables=1

; ================================================

[mCurrentDayTimestamp]
Group=Calendar
Measure=Time

TimeStamp=[mCurrentDay] 00:00:00
TimeStampFormat=%d-%m-%Y %H:%M:%S

UpdateDivider=1
DynamicVariables=1

; ================================================

[mMonday1CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mFirstDayOfMonthWeekday:Timestamp]-([mFirstDayOfMonthWeekday]+[#[#StartWeekOnSunday]]-1)*(60*60*24))
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mMonday1]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mTuesday1CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mMonday1:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mTuesday1]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mWednesday1CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mTuesday1:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mWednesday1]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mThursday1CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mWednesday1:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mThursday1]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mFriday1CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mThursday1:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mFriday1]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSaturday1CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mFriday1:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSaturday1]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSunday1CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSaturday1:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSunday1]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

; ================================================

[mMonday2CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSunday1:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mMonday2]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mTuesday2CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mMonday2:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mTuesday2]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mWednesday2CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mTuesday2:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mWednesday2]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mThursday2CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mWednesday2:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mThursday2]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mFriday2CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mThursday2:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mFriday2]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSaturday2CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mFriday2:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSaturday2]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSunday2CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSaturday2:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSunday2]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

; ================================================

[mMonday3CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSunday2:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mMonday3]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mTuesday3CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mMonday3:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mTuesday3]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mWednesday3CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mTuesday3:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mWednesday3]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mThursday3CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mWednesday3:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mThursday3]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mFriday3CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mThursday3:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mFriday3]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSaturday3CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mFriday3:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSaturday3]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSunday3CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSaturday3:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSunday3]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

; ================================================

[mMonday4CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSunday3:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mMonday4]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mTuesday4CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mMonday4:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mTuesday4]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mWednesday4CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mTuesday4:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mWednesday4]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mThursday4CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mWednesday4:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mThursday4]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mFriday4CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mThursday4:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mFriday4]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSaturday4CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mFriday4:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSaturday4]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSunday4CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSaturday4:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSunday4]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

; ================================================

[mMonday5CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSunday4:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mMonday5]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mTuesday5CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mMonday5:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mTuesday5]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mWednesday5CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mTuesday5:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mWednesday5]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mThursday5CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mWednesday5:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mThursday5]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mFriday5CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mThursday5:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mFriday5]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSaturday5CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mFriday5:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSaturday5]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSunday5CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSaturday5:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSunday5]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

; ================================================

[mMonday6CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSunday5:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mMonday6]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mTuesday6CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mMonday6:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mTuesday6]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mWednesday6CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mTuesday6:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mWednesday6]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mThursday6CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mWednesday6:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mThursday6]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mFriday6CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mThursday6:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mFriday6]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSaturday6CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mFriday6:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSaturday6]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1

[mSunday6CheckMonth]
Group=Calendar
Measure=Time

TimeStamp=([mSaturday6:Timestamp]+60*60*24)
Format=%#m

UpdateDivider=-1
DynamicVariables=1

[mSunday6]
Group=Calendar
Measure=Time

TimeStamp=[#CurrentSection#CheckMonth:Timestamp]
Format=%#d

UpdateDivider=-1
DynamicVariables=1
