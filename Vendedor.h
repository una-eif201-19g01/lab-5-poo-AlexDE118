#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Trabajador.h"

class Vendedor {
private:
	float comision;
	int ventas;
public:
	float getComision();
	int getventas();
	void setComision(float);
	void setVentas(int);
	
	string toString();
};

#endif // !VENDEDOR_H