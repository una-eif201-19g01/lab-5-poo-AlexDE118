#include "Gerente.h"

Gerente::Gerente() : Trabajador()
{
	bono = -1.00;
}

Gerente::Gerente(string _id, int horas, float precioHoras, int annosLaborados, float _bono): Trabajador(_id, horas, precioHoras, annosLaborados)
{
	bono = _bono;
}

float Gerente::getBono()
{
	return bono;
}

void Gerente::setBono(float _bono) {
	bono = _bono;
}

string Gerente::toStringGerente()
{
	stringstream reporte;
	reporte << "ID: " << getID() << endl
		<< "Bono: " << getBono() << endl;
	return reporte.str();
}



float Trabajador::calcularSalarioBase()
{

}

float Trabajador::calcularSalarioBruto()
{
	//calcular salariobruto = salario base + horas extras + anualidades + bono
}

float Trabajador::calcularHorasExtras()
{

}

float Trabajador::calcularAnualidades()
{

}

float Trabajador::calcularHorasExtras()
{

}