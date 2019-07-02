\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

%		\time 6/8
		\clef "treble"
		\key g \major

		r2 r4 g'' 8 fis''  |
		e'' 8. c''' 16 ~ c''' 8 b'' a'' 4. d''' 8  |
		d''' 8. b'' 16 ~ b'' 8 a'' g'' 4. fis'' 8  |
		e'' 8 e'' c''' b'' a'' 4. g'' 8  |
%% 5
		g'' 2. r4  |
		R1*14  |
%% 20
		r2 r4 g'' 8 fis''  |
		e'' 8. c''' 16 ~ c''' 8 b'' a'' 4. d''' 8  |
		d''' 8. b'' 16 ~ b'' 8 a'' g'' 4. fis'' 8  |
		e'' 8 e'' c''' b'' a'' 4. g'' 8  |
		g'' 2. r4  |
	}

>>
