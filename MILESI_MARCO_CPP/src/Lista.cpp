#include <iostream>
#include <string>
#include <list>

using namespace std;

#include "Lista.h"

template <typename T>

int media(T value, int &i) {

	if(value == dynamic_cast<Persona*>(value)){
		i+=value->getNascita();
		return 1;
	}
	return 0;
}

Lista::Lista() {

}

void Lista::aggiungi(Persona *p) {
	l.push_back( p );
}


void Lista::etaMedia() {
	Persona *it;
		list<Persona*> :: iterator x;

		int eta=0, i=0;

		for (x = l.begin(); x != l.end();  x++){
			it = *x;
			i += media(it,eta);
		}
		cout<<"Età media: " << eta/i <<endl;
}

void Lista::stampa(int annonascita) {

	Persona *it;
	list<Persona*> :: iterator x;

	for (x = l.begin(); x != l.end();  x++){
		it = *x;
		if ( it->getNascita() == annonascita ) {
			cout<<it->toString()<<endl;
		}
	}
}

void Lista::stampa() {

	Persona *it;
	list<Persona*> :: iterator x;

	for (x = l.begin(); x != l.end();  x++){
		it = *x;
		cout<<it->toString()<<endl;
	}
}

Lista::~Lista(){
	cout<<"Lista deallocata"<<endl;
}
