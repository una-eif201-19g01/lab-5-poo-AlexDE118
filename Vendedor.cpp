#include "Vendedor.h"

Vendedor::Vendedor()
{
	comision = -1;
	ventas = -1;
}

Vendedor::Vendedor(string _id, int _horas, float _precioHoras, int _annosLaborados, float _comision, int _ventas) 
	: Trabajador(_id, _horas, _precioHoras, _annosLaborados)
{
	comision = _comision;
	ventas = _ventas;
}

float Vendedor::getComision()
{
	return comision;
}

int Vendedor::getVentas()
{
	return ventas;
}

void Vendedor::setComision(float _comision)
{
	comision = _comision;
}

void Vendedor::setVentas(int _ventas)
{
	ventas = _ventas;
}

string Vendedor::toStringVendedor()
{
	stringstream reporte;
	
	reporte << "ID: " << getID()
		<< "Comision: " << getComision() << endl
		<< "Ventas: " << getVentas() << endl;
	return reporte.str();
}
