\context Staff = "Soprano" \with { \consists Ambitus_engraver } <<
    \set Staff.instrumentName = "Soprano"
    \set Staff.shortInstrumentName = "S."
    \set Score.skipBars = ##t
    \set Staff.printKeyCancellation = ##f
    \new Voice \global
    \new Voice \globalTempo

	\context Voice = "soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key g \major
		r4 r r g' 8 fis' 16 g' ~  |
		g' 4 g' 8 fis' 16 g' ~ g' 4 r8 r16 g'  |
		fis' 8 g' fis' e' 16 e' ~ e' d' 8 d' 16 g' 8. fis' 16  |
		d' 4 a' 8. fis' 16 d' 2 ~  |
		%% 5
		d' 4 g' 8 g' 16 fis' ~ fis' 8 g' fis' g' 16 e' ~  |
		e' 4 r8 d' 16 d' d' 8. e' 16 ~ e' 8 fis'  |
		g' 4 r8 g' 16 e' g' g' 8 e' 16 g' a' 8 a' 16 ~  |
		a' 2 r8 g' g' fis'  |
		e' 8 e' 16 c'' ~ c'' 8 b' a' 4 r8 d' 16 d'  |
		%% 10
		d' 8 d' 16 a' ~ a' 8 fis' g' 4 r8. e' 16  |
		g' 8 e' 16 g' ~ g' 8 e' 16 g' ~ g' e' ~ e' 8 g' 16 a' 8 a' 16 ~  |
		a' 2 r4 g' 8 fis'  |
		e' 8. c'' 16 ~ c'' 8 b' a' 4 r8 d''  |
		d'' 8. b' 16 ~ b' 8 a' g' 4 r8 fis'  |
		%% 15
		e' 8 e' c'' b' a' 4. g' 8  |
		g' 2 r4 g' 8 fis'  |
		e' 8. c'' 16 ~ c'' 8 b' a' 4 r8 d''  |
		d'' 8. b' 16 ~ b' 8 a' g' 4 r8 fis'  |
		e' 8 e' c'' b' a' 4. g' 8  |
		%% 20
		g' 1  |
		\bar "|."
	} % Voice
>>
