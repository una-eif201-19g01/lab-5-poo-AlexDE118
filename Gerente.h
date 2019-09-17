#ifndef GERENTE_H
#define GERENTE_H

#include "Trabajador.h";

class Gerente {
private:
	float bono;
public:
	float getBono();
	void setBono(float);

	string toString();
};

#endif // !GERENTE_H
