/*
 * Persona.c
 *
 */

#include <iostream>
#include <string>
#include <sstream>


#include "Persona.h"

Persona::Persona(string n, string c, int an){
	setNome(n);
	setCognome(c);
	setNascita(an);

}

Persona::Persona() {
	setNascita(0);
}

Persona::~Persona(){
	cout<<"Oggetto deallocato"<<endl;
}

void Persona::setNascita(int n){
	annonascita = n;
}

void Persona::setNome(string n){
	nome = n;
}

void Persona::setCognome(string n){
	cognome = n;
}

int Persona::getNascita() {
	return annonascita;
}

string Persona::toString(){
	std::stringstream ss;
	ss << annonascita;
	return "[P: " + nome + ", " + cognome + ", " + ss.str() + "]";
}

