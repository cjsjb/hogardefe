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
		g'' 4 r  |
%% 10
		R2*29  |
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
		g'' 4 r  |
		R2*31  |
		\bar "|."
	}

>>
