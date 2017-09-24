/*
 * Studente.h
 *
 *  Created on: 19 set 2017
 *      Author: miles
 */

using namespace std;

#ifndef STUDENTE_H_
#define STUDENTE_H_

class Studente : virtual public Persona {
	protected:
		int matricola;
		string corso;
	public:
		Studente(string n, string c, int an, int m, string corso);
		Studente(int m, string corso);
		Studente();
		void setMatricola(int m);
		void setCorso(string c);
		virtual ~Studente();
		string toString();
};

#endif /* STUDENTE_H_ */
