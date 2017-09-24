#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#include "Persona.h"
#include "Studente.h"

Studente::Studente(string n, string c, int an, int m, string corso) : Persona(n, c, an){
	setMatricola(m);
	setCorso(corso);
}

Studente::Studente(int m, string corso): Persona(){
	setMatricola(m);
	setCorso(corso);
}

Studente::~Studente(){
	cout<<"Oggetto deallocato"<<endl;
}

void Studente::setMatricola(int m) {
	matricola = m;
}

void Studente::setCorso(string c) {
	corso = c;
}

string Studente::toString(){
	std::stringstream ss;
	ss << matricola;
	return "[S: " + nome + ", " + cognome + ", " + ss.str() + ", " + corso + "]";
}
