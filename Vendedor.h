#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Trabajador.h"

class Vendedor : public Trabajador {
private:
	float comision;
	int ventas;
public:
	Vendedor();
	Vendedor(string _id, int _horas, float _precioHoras, int _annosLaborados, float _comision, int _ventas);
	float getComision();
	int getVentas();
	void setComision(float);
	void setVentas(int);
	
	string toStringVendedor();
};

#endif // !VENDEDOR_H