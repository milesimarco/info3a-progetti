/*
 * Dipendente.h
 *
 *  Created on: 22 set 2017
 *      Author: miles
 */

using namespace std;

#ifndef DIPENDENTE_H_
#define DIPENDENTE_H_

class Dipendente : virtual public Persona {
	private:
		int salario;
	protected:
		int annoassunzione;
		int ore;
		string sede;
	public:
		Dipendente(string n, string c, int an, int annoassunzione, int ore, string sede);
		Dipendente(int annoassunzione, int ore, string sede);
		Dipendente();
		void setAnnoAssunzione(int m);
		void setOre(int m);
		void setSalario(int s);
		void setSede(string c);
		virtual ~Dipendente();
		virtual string toString();
};


#endif /* DIPENDENTE_H_ */
