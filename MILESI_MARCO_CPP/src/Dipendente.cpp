#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#include "Persona.h"
#include "Dipendente.h"

Dipendente::Dipendente(string n, string c, int an, int annoassunzione, int ore, string sede) : Persona(n, c, an){
	setAnnoAssunzione(annoassunzione);
	setOre(ore);
	setSede(sede);
}

Dipendente::Dipendente(int annoassunzione, int ore, string sede): Persona(){
	setAnnoAssunzione(annoassunzione);
	setOre(ore);
	setSede(sede);
}

Dipendente::~Dipendente(){
	cout<<"Dipendente deallocato"<<endl;
}

void Dipendente::setSalario(int s) {
	salario = s;
}

void Dipendente::setAnnoAssunzione(int m) {
	annoassunzione = m;
}

void Dipendente::setOre(int m) {
	ore = m;
}

void Dipendente::setSede(string c) {
	sede = c;
}

string Dipendente::toString(){
	std::stringstream ss;
	ss << annoassunzione;
	string a = ss.str();
	ss.str(std::string());
	ss << annonascita;
	string b = ss.str();
	ss.str(std::string());
	ss << ore;
	return "[D: " + nome + ", " + cognome + ", " + b + ", " + a + "@" + ss.str() + ", " + sede + "]";
}
