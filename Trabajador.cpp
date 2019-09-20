#include "Trabajador.h"

Trabajador::Trabajador()
{
	id = "N/A";
	horas = -1;
	precioHoras = -1;
	annosLaborados = -1;
}

Trabajador::Trabajador(string _id, int _horas, float _precioHoras, int _annosLaborados)
{
	id = _id;
	horas = _horas;
	precioHoras = _precioHoras;
	annosLaborados = _annosLaborados;
}

string Trabajador::getID()
{
	return id;
}

int Trabajador::getHoras()
{
	return horas;
}

float Trabajador::getPrecioHoras()
{
	return precioHoras;
}

int Trabajador::getAnnosLaborados()
{
	return annosLaborados;
}

void Trabajador::setID(string _id)
{
	id = _id;
}

void Trabajador::setHoras(int _horas)
{
	horas = _horas;
}

void Trabajador::setPrecioHoras(float _preciosHoras)
{
	precioHoras = _preciosHoras;
}

void Trabajador::setAnnosLaborados(int _annosLaborados)
{
	annosLaborados = _annosLaborados;
}

string Trabajador::toString()
{
	string reporte;

	reporte = "ID: " + getID() + "\n";

	return reporte;
}
