#include "Trabajador.h"

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
