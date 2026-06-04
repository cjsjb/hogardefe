\version "2.10.0"
#(ly:set-option 'point-and-click #f)
\header {
	title = "Hogar de fe"
	composer = "Steve Green"
	copyright = "Copyright © 1986 Sparrow Records"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 2/4
}
globalTempo = {
	\tempo 4 = 70
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "hogardefe-acordes.inc"
		\new StaffGroup <<
			\include "hogardefe-soprano.inc"
			\include "hogardefe-mezzo.inc"
			\include "hogardefe-tenor.inc"
		>>
		\include "hogardefe-violin.inc"
	>>

	\layout {
		\context {
			\RemoveEmptyStaffContext
		}
	}
}
