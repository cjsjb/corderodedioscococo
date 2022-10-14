\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
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
		\key d \major

		R1*6  |
		fis 2 ~ fis 8 a fis a  |
		d 2. ~ d 8 d  |
		g 8 g 2 ~ g 8 a b  |
%% 10
		e 2 fis 4 g  |
		a 8 a 2 ~ a 8 d' d'  |
		d' 2. b 8 a  |
		b 4 b cis' cis'  |
		d' 1  |
%% 15
		R1  |
		fis 2 ~ fis 8 a fis a  |
		d 2. ~ d 8 d  |
		g 8 g 2 ~ g 8 a b  |
		e 2 fis 4 g  |
%% 20
		a 8 a 2 ~ a 8 d' d'  |
		d' 2. b 8 a  |
		b 4 b cis' cis'  |
		d' 1  |
		R1  |
%% 25
		fis 2 ~ fis 8 a fis a  |
		d 2. ~ d 8 d  |
		g 8 g 2 ~ g 8 a b  |
		e 2 fis 4 g  |
		a 8 a ~ a 2.  |
%% 30
		d' 2. b 8 a  |
		b 2 cis' 4 cis'  |
		d' 1  |
		d' 2. b 8 a  |
		b 2 cis' 4 cis'  |
%% 35
		d' 1  |
		R1  |
		\bar "|."
	} % Voice

	\new Lyrics \lyricsto "voz-tenor" {
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
