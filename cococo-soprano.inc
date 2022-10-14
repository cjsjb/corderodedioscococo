\context Staff = "soprano" \with { \consists Ambitus_engraver} <<
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
		\key d \major

		R1*6  |
		fis' 2 ~ fis' 8 a' fis' a'  |
		d' 2. ~ d' 8 d'  |
		g' 8 g' 2 ~ g' 8 a' b'  |
		%% 10
		e' 2 fis' 4 g'  |
		a' 8 a' 2 ~ a' 8 a' a'  |
		a' 2. g' 8 fis'  |
		g' 4 g' a' a'  |
		fis' 1  |
		%% 15
		R1  |
		fis' 2 ~ fis' 8 a' fis' a'  |
		d' 2. ~ d' 8 d'  |
		g' 8 g' 2 ~ g' 8 a' b'  |
		e' 2 fis' 4 g'  |
		%% 20
		a' 8 a' 2 ~ a' 8 a' a'  |
		a' 2. g' 8 fis'  |
		g' 4 g' a' a'  |
		fis' 1  |
		R1  |
		%% 25
		fis' 2 ~ fis' 8 a' fis' a'  |
		d' 2. ~ d' 8 d'  |
		g' 8 g' 2 ~ g' 8 a' b'  |
		e' 2 fis' 4 g'  |
		a' 8 a' ~ a' 2.  |
		%% 30
		a' 2. g' 8 fis'  |
		g' 2 a' 4 a'  |
		fis' 1  |
		a' 2. g' 8 fis'  |
		g' 2 a' 4 a'  |
		%% 35
		fis' 1  |
		R1  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-soprano" {
		%\set ignoreMelismata = ##t
		"Cor" -- "de" -- "ro" "de" "Dios,"
		"que" "qui" -- "tas" "el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros," "ten" "pie" -- "dad."

		"Cor" -- "de" -- "ro" "de" "Dios,"
		"que" "qui" -- "tas" "el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"ten" "pie" -- "dad" "de" "no" -- "so" -- "tros," "ten" "pie" -- "dad."

		"Cor" -- "de" -- "ro" "de" "Dios,"
		"que" "qui" -- "tas" "el" "pe" -- "ca" -- "do" "del" "mun" -- "do,"
		"da" -- "nos" "la" "paz," "dá" -- "nos" -- "la,"
		"da" -- "nos" "la" "paz," "dá" -- "nos" -- "la."
		%\unset ignoreMelismata
	} % Lyrics 1
>> % Staff ends
