/*
 * Persona.h
 *
 */

using namespace std;

#ifndef PERSONA_H_
#define PERSONA_H_

class Persona{
	protected:
		int annonascita;
		string nome;
		string cognome;
	public:
		Persona(string n, string c, int an);
		Persona();
		void setNome(string n);
		void setCognome(string n);
		void setNascita(int n);
		int getNascita();
		virtual ~Persona();
		virtual string toString();

};

#endif
