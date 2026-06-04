\context Staff = "voz" \with { \consists Ambitus_engraver } <<
    \set Staff.instrumentName = "Voz"
    \set Staff.shortInstrumentName = "V."
    \set Score.skipBars = ##t
    \set Staff.printKeyCancellation = ##f
    \new Voice \global
    \new Voice \globalTempo

	\context Voice = "voz-voz" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		$(let ((val (ly:parser-lookup 'easy))) (if (null? val) #{ #} val))

		\clef "treble"
		\key g \major
		r4 g'' 8 fis''  |
		e'' 8. c''' 16 ~ c''' 8 b''  |
		a'' 4. d''' 8  |
		d''' 8. b'' 16 ~ b'' 8 a''  |
%% 5
		g'' 4. fis'' 8  |
		e'' 8 e'' c''' b''  |
		a'' 4. g'' 8  |
		g'' 2 ~  |
		g'' 4 g' 8 fis' 16 g' ~  |
%% 10
		g' 4 g' 8 fis' 16 g' ~  |
		g' 4 r8 r16 g'  |
		fis' 8 g' fis' e' 16 e' ~  |
		e' 16 d' 8 d' 16 g' 8. fis' 16  |
		d' 4 a' 8. fis' 16  |
%% 15
		d' 2 ~  |
		d' 4 g' 8 g' 16 fis' ~  |
		fis' 8 g' fis' g' 16 e' ~  |
		e' 4 r8 d' 16 d'  |
		d' 8. e' 16 ~ e' 8 fis'  |
%% 20
		g' 4 r8 g' 16 e'  |
		g' 16 g' 8 e' 16 g' a' 8 a' 16 ~  |
		a' 2  |
		r8 g' g' fis'  |
		e' 8 e' 16 c'' ~ c'' 8 b'  |
%% 25
		a' 4 r8 d' 16 d'  |
		d' 8 d' 16 a' ~ a' 8 fis'  |
		g' 4 r8 r16 e'  |
		g' 8 e' 16 g' ~ g' 8 e' 16 g' ~  |
		g' 16 e' ~ e' 8 g' 16 a' 8 a' 16 ~  |
%% 30
		a' 2  |
		r4 g' 8 fis'  |
		e' 8. c'' 16 ~ c'' 8 b'  |
		a' 4 r8 d''  |
		d'' 8. b' 16 ~ b' 8 a'  |
%% 35
		g' 4 r8 fis'  |
		e' 8 e' c'' b'  |
		a' 4. g' 8  |
		g' 2  |
		r4 g'' 8 fis''  |
%% 40
		e'' 8. c''' 16 ~ c''' 8 b''  |
		a'' 4. d''' 8  |
		d''' 8. b'' 16 ~ b'' 8 a''  |
		g'' 4. fis'' 8  |
		e'' 8 e'' c''' b''  |
%% 45
		a'' 4. g'' 8  |
		g'' 2 ~  |
		g'' 4 g' 8 fis' 16 g' ~  |
		g' 8 r16 d' g' 8 fis' 16 g' ~  |
		g' 4 r8 r16 g'  |
%% 50
		fis' 8 g' fis' e' 16 e' ~  |
		e' 16 d' 8 d' 16 g' 8. fis' 16  |
		d' 8. d' 16 a' 8. fis' 16  |
		d' 2  |
		r8 g' g' g' 16 fis' ~  |
%% 55
		fis' 8 g' fis' g' 16 e' ~  |
		e' 4 r16 d' d' d'  |
		d' 8. e' 16 ~ e' 8 fis'  |
		g' 4 r16 g' g' e'  |
		g' 8 e' 16 g' 8. a' 16 a' ~  |
%% 60
		a' 2  |
		r8 g' g' fis'  |
		e' 8 e' 16 c'' ~ c'' 8 b'  |
		a' 4 r8 d' 16 d'  |
		d' 8 d' 16 a' ~ a' 8 fis'  |
%% 65
		g' 4 r8 r16 e'  |
		g' 8 e' 16 g' ~ g' 8 e' 16 g' ~  |
		g' 16 e' ~ e' 8 g' 16 a' 8 a' 16 ~  |
		a' 2  |
		r4 g' 8 fis'  |
%% 70
		e' 8. c'' 16 ~ c'' 8 b'  |
		a' 4 r8 d''  |
		d'' 8. b' 16 ~ b' 8 a'  |
		g' 4 r8 fis'  |
		e' 8 e' c'' b'  |
%% 75
		a' 4. g' 8  |
		g' 2 ~  |
		g' 2  |
		R2  |
		\bar "|."
	}
	\new Lyrics \lyricsto "voz-voz" {
		_ _ _ _ _ _ _ _ _ _
		_ _ _ _ _ _ _ _ _

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

		_ _ _ _ _ _ _ _ _ _
		_ _ _ _ _ _ _ _ _


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
