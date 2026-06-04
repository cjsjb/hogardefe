\context Staff = "Tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key g \major
		R2*8  |
		r4 b 8 a 16 b ~  |
%% 10
		b 4 b 8 b 16 c' ~  |
		c' 4 r8 r16 c'  |
		d' 8 e' d' c' 16 c' ~  |
		c' 16 b 8 b 16 b 8. a 16  |
		g 4 c' 8. b 16  |
%% 15
		a 2 ~  |
		a 4 b 8 b 16 a ~  |
		a 8 g a b 16 g ~  |
		g 4 r8 fis 16 fis  |
		fis 8. g 16 ~ g 8 a  |
%% 20
		b 4 r8 b 16 g  |
		b 16 b 8 g 16 b d' 8 d' 16 ~  |
		d' 2  |
		r8 b b a  |
		g 8 g 16 c' ~ c' 8 b  |
%% 25
		d' 4 r8 b 16 b  |
		b 8 b 16 b ~ b 8 a  |
		b 4 r8 r16 b  |
		c' 8 a 16 c' ~ c' 8 a 16 c' ~  |
		c' 16 a ~ a 8 c' 16 d' 8 d' 16 ~  |
%% 30
		d' 2  |
		r4 b 8 a  |
		g 8. c' 16 ~ c' 8 c'  |
		d' 4 r8 d'  |
		d' 8. d' 16 ~ d' 8 d'  |
%% 35
		e' 4 r8 e'  |
		e' 8 e' e' e'  |
		d' 4. d' 8  |
		d' 2  |
		R2*8  |
		r4 b 8 a 16 b ~  |
		b 8 r16 b b 8 b 16 c' ~  |
		c' 4 r8 r16 c'  |
%% 50
		d' 8 e' d' c' 16 c' ~  |
		c' 16 b 8 b 16 b 8. a 16  |
		g 8. g 16 c' 8. b 16  |
		a 2  |
		r8 b b b 16 a ~  |
%% 55
		a 8 g a b 16 g ~  |
		g 4 r16 fis fis fis  |
		fis 8. g 16 ~ g 8 a  |
		b 4 r16 b b g  |
		b 8 g 16 b 8. d' 16 d' ~  |
%% 60
		d' 2  |
		r8 b b a  |
		g 8 g 16 c' ~ c' 8 b  |
		d' 4 r8 b 16 b  |
		b 8 b 16 b ~ b 8 a  |
%% 65
		b 4 r8 r16 b  |
		c' 8 a 16 c' ~ c' 8 a 16 c' ~  |
		c' 16 a ~ a 8 c' 16 d' 8 d' 16 ~  |
		d' 2  |
		r4 b 8 a  |
%% 70
		g 8. c' 16 ~ c' 8 c'  |
		d' 4 r8 d'  |
		d' 8. d' 16 ~ d' 8 d'  |
		e' 4 r8 e'  |
		e' 8 e' e' e'  |
%% 75
		d' 4. d' 8  |
		d' 2 ~  |
		d' 2  |
		R2  |
		\bar "|."
	}
	\new Lyrics \lyricsto "voz-tenor" {
		Tú y yo, __ an -- te Dios __
		ha -- re -- mos nues -- tros vo -- tos
		de co -- ra -- zón, en "su a" -- mor. __

		Y se -- re -- mos pa -- ra Él __
		un ho -- gar fuer -- "te y" fiel,
		que su nom -- bre pro -- cla -- ma -- rá. __

		Ha -- re -- mos un ho -- gar de fe
		pa -- ra jun -- tos com -- par -- tir
		que cuan -- do so -- "ple el" vien -- to
		no cae -- rá. __

		Con -- fia -- re -- mos en Él
		"y el" mun -- do sa -- brá
		que so -- mos un ho -- gar de fe.


		Y a -- sí, en ple -- "na u" -- nión,
		nos a -- ma -- re -- mos siem -- pre
		has -- "ta el" fi -- nal
		sin con -- di -- ción.
		Nues -- tra fa -- mi -- lia cre -- ce -- rá
		lle -- na de gra -- cia "y a" -- mor
		el ros -- tro vi -- vo del Se -- ñor.

		Ha -- re -- mos un ho -- gar de fe
		pa -- ra jun -- tos com -- par -- tir
		que cuan -- do so -- "ple el" vien -- to
		no cae -- rá. __

		Con -- fia -- re -- mos en Él
		"y el" mun -- do sa -- brá
		que so -- mos un ho -- gar de fe.
	}
>>
