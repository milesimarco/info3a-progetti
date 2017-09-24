/*
 * Lista.h
 *
 *  Created on: 19 set 2017
 *      Author: miles
 */

#ifndef LISTA_H_
#define LISTA_H_

#include <iostream>
#include <string>
#include <list>

#include "Persona.h"

class Lista{
	protected:
		std::list<Persona*> l;
	public:
		Lista();
		virtual ~Lista();
		void aggiungi(Persona *p);
		void stampa();
		void stampa(int annonascita);
		void etaMedia();
};

#endif
