[mMusicState]
Measure=NowPlaying

PlayerName=#NowPlayingPlayer#
PlayerType=State

RegExpSubstitute=1
Substitute="^0$":"play_arrow", "^1$":"pause", "^2$":"play_arrow"

OnChangeAction=#Update#
TrackChangeAction=#Update#

[mMusicTitle]
Measure=NowPlaying

PlayerName=[mMusicState]
PlayerType=Title

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

[mMusicArtist]
Measure=NowPlaying

PlayerName=[mMusicState]
PlayerType=Artist

RegExpSubstitute=1
Substitute="^$":"N/A", "^0$":"N/A"

[mMusicCover]
Measure=NowPlaying

PlayerName=[mMusicState]
PlayerType=Cover

[mMusicProgress]
Measure=NowPlaying

PlayerName=[mMusicState]
PlayerType=Progress

OnChangeAction=[!UpdateMeter ProgressBar] [!Redraw]

[mMusicPosition]
Measure=NowPlaying

PlayerName=[mMusicState]
PlayerType=Position

OnChangeAction=#Update#

[mMusicDuration]
Measure=NowPlaying

PlayerName=[mMusicState]
PlayerType=Duration
