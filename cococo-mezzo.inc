\context Staff = "mezzo" \with { \consists Ambitus_engraver} <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key d \major

		R1*7  |
		r4 fis' 8 g' 4 fis' 8 e' d' ~  |
		d' 2. d' 8 d'  |
%% 10
		e' 2 fis' 4 g'  |
		fis' 8 fis' 2 ~ fis' 8 fis' fis'  |
		fis' 2. e' 8 d'  |
		e' 4 e' fis' fis'  |
		d' 1  |
%% 15
		R1*2  |
		r4 fis' 8 g' 4 fis' 8 e' d' ~  |
		d' 2. d' 8 d'  |
		e' 2 fis' 4 g'  |
%% 20
		fis' 8 fis' 2 ~ fis' 8 fis' fis'  |
		fis' 2. e' 8 d'  |
		e' 4 e' fis' fis'  |
		d' 1  |
		R1*2  |
		r4 fis' 8 g' 4 fis' 8 e' d' ~  |
		d' 2. d' 8 d'  |
		e' 2 fis' 4 g'  |
		fis' 8 fis' ~ fis' 2.  |
%% 30
		fis' 2. e' 8 d'  |
		e' 2 fis' 4 fis'  |
		d' 1  |
		fis' 2. e' 8 d'  |
		e' 2 fis' 4 fis'  |
%% 35
		d' 1  |
		R1  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-mezzo" {
		%\set ignoreMelismata = ##t
		Cor -- de -- ro de Dios... __
		"...el" pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so -- tros, ten pie -- dad.

		Cor -- de -- ro de Dios... __
		"...el" pe -- ca -- do del mun -- do,
		ten pie -- dad de no -- so -- tros, ten pie -- dad.

		Cor -- de -- ro de Dios... __
		"...el" pe -- ca -- do del mun -- do,
		da -- nos la paz, dá -- nos -- la,
		da -- nos la paz, dá -- nos -- la.
		%\unset ignoreMelismata
	} % Lyrics 1
>> % Staff ends
