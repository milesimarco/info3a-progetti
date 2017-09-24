/*
 * StudenteDipendente.cpp
 *
 *  Created on: 22 set 2017
 *      Author: miles
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#include "Persona.h"
#include "Studente.h"
#include "Dipendente.h"
#include "StudenteDipendente.h"


StudenteDipendente::StudenteDipendente(string n, string c, int an, int annoassunzione, int ore, string sede, int m, string corso, string scadenza) : Persona(n, c, an), Studente(n, c, an, m, corso), Dipendente(n, c, an, annoassunzione, ore, sede)  {
	setScadenza(scadenza);
}

StudenteDipendente::~StudenteDipendente(){
	cout<<"Dipendente deallocato"<<endl;
}

void StudenteDipendente::setScadenza(string m) {
	scadenza = m;
}

string StudenteDipendente::toString(){
	std::stringstream ss;
	ss << annoassunzione;
	string a = ss.str();
	ss.str(std::string());
	ss << annonascita;
	string b = ss.str();
	ss.str(std::string());
	ss << ore;
	return "[SD: " + nome + ", " + cognome + ", " + b + ", " + a + "@" + ss.str() + ", " + sede + ", SCADE: " + scadenza + "]";
}
