\context Staff = "Mezzo" \with { \consists Ambitus_engraver } <<
    \set Staff.instrumentName = "Mezzo"
    \set Staff.shortInstrumentName = "M."
    \set Score.skipBars = ##t
    \set Staff.printKeyCancellation = ##f
    \new Voice \global
    \new Voice \globalTempo

	\context Voice = "mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key g \major

		r2. g' 8 fis' 16 d' ~  |
		d' 4 g' 8 fis' 16 d' ~ d' 4 r8 c' 16 b  |
		c' 16 d' 8. ~ d' 4 ~ d' 16 ~ d' ~ d' d' g' 8. fis' 16  |
		d' 4 g' 8. fis' 16 fis' 2 ~  |
		%% 5
		fis' 4 d' 8 d' 16 d' ~ d' 8 d' e' d' 16 b ~  |
		b 4 r8 b 16 b d' 8. c' 16 ~ c' 8 d'  |
		b 4 r8 b 16 b e' e' 8 c' 16 e' g' 8 fis' 16 ~  |
		fis' 16 g' fis' 4. r8 g' g' fis'  |
		e' 8 c' 16 e' ~ e' 8 r4 g' 16 fis' 8 e' 16 d' 8  |
		%% 10
		d' 8 d' 16 d' ~ d' 8 e' e' 4 r8. e' 16  |
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
