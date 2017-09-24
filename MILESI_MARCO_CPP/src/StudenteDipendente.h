/*
 * StudenteDipendente.h
 *
 *  Created on: 22 set 2017
 *      Author: miles
 */

#ifndef STUDENTEDIPENDENTE_H_
#define STUDENTEDIPENDENTE_H_

class StudenteDipendente : virtual public Studente, virtual public Dipendente {
	protected:
		string scadenza;
	public:
		StudenteDipendente(string n, string c, int an, int annoassunzione, int ore, string sede, int m, string corso, string scadenza);
		void setScadenza(string c);
		virtual ~StudenteDipendente();
		string toString();
};

#endif /* STUDENTEDIPENDENTE_H_ */
