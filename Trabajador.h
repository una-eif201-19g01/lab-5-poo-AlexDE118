#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include <iostream>
#include <string>

using namespace std;

class Trabajador {
private:
	string id;
	int horas;
	float precioHoras;
	int annosLaborados;
public:
	virtual float calcularSalarioBase() = 0;
	virtual float calcularHorasExtras() = 0;
	virtual float calcularAnualidades() = 0;
	virtual float calcularSalarioBruto() = 0;
	virtual float calcularCargas() = 0;
	virtual float calcularSalarioNeto() = 0;

	string getID();
	int getHoras();
	float getPrecioHoras();
	int getAnnosLaborados();
	void setID(string _id);
	void setHoras(int _horas);
	void setPrecioHoras(float _preciosHoras);
	void setAnnosLaborados(int _annosLaborados);

	string toString();
};

#endif