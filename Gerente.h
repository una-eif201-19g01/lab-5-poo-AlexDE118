#ifndef GERENTE_H
#define GERENTE_H

#include "Trabajador.h";

class Gerente : public Trabajador {
private:
	float bono;
public:
	Gerente();
	Gerente(string _id, int horas, float precioHoras, int annosLaborados, float _bono);
	float getBono();
	void setBono(float);

	string toStringGerente();
};

#endif // !GERENTE_H
