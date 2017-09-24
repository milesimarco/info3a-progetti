asm MacchinaBevande

import StandardLibrary

signature:

	// stati
	enum domain Stato = { PRONTO | INSERTED | ERROR | WORK }

	// input
	enum domain Operazione = { INSERT | TAKEC | TAKEA | RITIRA }



// FUNCTIONS

	dynamic controlled stato : Stato
	dynamic monitored operazione : Operazione

definitions:

	rule r_START =
		seq
			stato := PRONTO
			let ( $i = operazione ) in
				switch ( $i )
					case INSERT:
						stato := INSERTED
				endswitch
			endlet
		endseq

	rule r_INSERTED =
			let ( $i = operazione ) in
				switch ( $i )
					case INSERT:
						stato := ERROR
					case TAKEC:
						stato := WORK
					case TAKEA:
						stato := WORK
					case RITIRA:
						stato := INSERTED
				endswitch
			endlet

	rule r_WORK =
		let ( $i = operazione ) in
				switch ( $i )
					case INSERT:
						stato := PRONTO
					case TAKEC:
						stato := ERROR
					case TAKEA:
						stato := ERROR
					case RITIRA:
						stato := PRONTO
				endswitch
		endlet

	rule r_ERROR =
		let ($i = operazione) in
				switch ($i)
					case INSERT:
						stato := INSERTED
					case TAKEC:
						stato := PRONTO
					case TAKEA:
						stato := PRONTO
					case RITIRA:
						stato := PRONTO
				endswitch
		endlet

	// Main
	main rule r_Main =
		if (true) then
			if (stato = PRONTO) then
				r_START[]
			else
				if (stato = INSERTED) then
					r_INSERTED[]
				else
					if (stato = WORK) then
						r_WORK[]
					else
						if (stato = ERROR) then
							r_ERROR[]
						else
							r_START[]
					endif
				endif
			endif
		endif
		endif

default init s0:

function stato = PRONTO
