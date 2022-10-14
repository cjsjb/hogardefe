\context Staff = "Soprano" \with { \consists Ambitus_engraver } <<
    \set Staff.instrumentName = "Soprano"
    \set Staff.shortInstrumentName = "S."
    \set Score.skipBars = ##t
    \set Staff.printKeyCancellation = ##f
    \new Voice \global
    \new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key g \major

		R1*4  |
%% 5
		r2 r4 g' 8 fis' 16 g' ~  |
		g' 4 g' 8 fis' 16 g' ~ g' 4 r8 r16 g'  |
		fis' 8 g' fis' e' 16 e' ~ e' d' 8 d' 16 g' 8. fis' 16  |
		d' 4 a' 8. fis' 16 d' 2 ~  |
		d' 4 g' 8 g' 16 fis' ~ fis' 8 g' fis' g' 16 e' ~  |
%% 10
		e' 4 r8 d' 16 d' d' 8. e' 16 ~ e' 8 fis'  |
		g' 4 r8 g' 16 e' g' g' 8 e' 16 g' a' 8 a' 16 ~  |
		a' 2 r8 g' g' fis'  |
		e' 8 e' 16 c'' ~ c'' 8 b' a' 4 r8 d' 16 d'  |
		d' 8 d' 16 a' ~ a' 8 fis' g' 4 r8 r16 e'  |
%% 15
		g' 8 e' 16 g' ~ g' 8 e' 16 g' ~ g' e' ~ e' 8 g' 16 a' 8 a' 16 ~  |
		a' 2 r4 g' 8 fis'  |
		e' 8. c'' 16 ~ c'' 8 b' a' 4 r8 d''  |
		d'' 8. b' 16 ~ b' 8 a' g' 4 r8 fis'  |
		e' 8 e' c'' b' a' 4. g' 8  |
%% 20
		g' 2 r  |
		r2 r  |
		r2 r  |
		r2 r  |
		r2 r4 g' 8 fis' 16 g' ~  |
%% 25
		g' 8 r16 d' g' 8 fis' 16 g' ~ g' 4 r8 r16 g'  |
		fis' 8 g' fis' e' 16 e' ~ e' d' 8 d' 16 g' 8. fis' 16  |
		d' 8. d' 16 a' 8. fis' 16 d' 2  |
		r8 g' g' g' 16 fis' ~ fis' 8 g' fis' g' 16 e' ~  |
		e' 4 r16 d' d' d' d' 8. e' 16 ~ e' 8 fis'  |
%% 30
		g' 4 r16 g' g' e' g' 8 e' 16 g' 8. a' 16 a' ~  |
		a' 2 r8 g' g' fis'  |
		e' 8 e' 16 c'' ~ c'' 8 b' a' 4 r8 d' 16 d'  |
		d' 8 d' 16 a' ~ a' 8 fis' g' 4 r8 r16 e'  |
		g' 8 e' 16 g' ~ g' 8 e' 16 g' ~ g' e' ~ e' 8 g' 16 a' 8 a' 16 ~  |
%% 35
		a' 2 r4 g' 8 fis'  |
		e' 8. c'' 16 ~ c'' 8 b' a' 4 r8 d''  |
		d'' 8. b' 16 ~ b' 8 a' g' 4 r8 fis'  |
		e' 8 e' c'' b' a' 4. g' 8  |
		g' 1  |
%% 40
		R1  |
		\bar "|."
	} % Voice
	\new Lyrics \lyricsto "voz-soprano" {
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
