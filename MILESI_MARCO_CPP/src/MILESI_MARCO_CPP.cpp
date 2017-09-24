//============================================================================
// Name        : MILESI_MARCO_CPP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>

#include "Persona.h"
#include "Studente.h"
#include "Dipendente.h"
#include "StudenteDipendente.h"
#include "Lista.h"

int main() {

	Lista *l = new Lista();

	l->aggiungi( new Persona( "Marco", "Milesi", 1994 ) );
	l->aggiungi( new Persona( "Luca", "ABC", 1995 ) );

	l->aggiungi( new Studente( "Marco", "Milesi", 1994, 1030184, "Informatica" ) );
	l->aggiungi( new Studente( "Mario", "Rossi", 1995, 1030185, "Informatica" ) );

	l->aggiungi( new Dipendente( "Giovanni", "Rossi", 1965, 2005, 27, "Salvecchio" ) );
	l->aggiungi( new Dipendente( "Ruggero", "Silvani", 1955, 1997, 30, "Dalmine" ) );

	l->aggiungi( new Persona( "Chiara", "Agazzi", 1995 ) );

	// (string n, string c, int an, int annoassunzione, int ore, string sede, int m, string corso, string scadenza)
	l->aggiungi( new StudenteDipendente( "Chiara", "Morenti", 1975, 1995, 30, "Agostino", 1020184, "Gestionale", "ottobre 2017"  ) );

	cout << "# STAMPA generica #" << endl;
	l->stampa();

	cout << "# STAMPA 1994 #" << endl;
	l->stampa(1994);

	cout << "# ETA' MEDIA TEMPLATE GENERICO #" << endl;
	l->etaMedia();

	return 0;
}
