#ifndef SECRETARIA_H
#define SECRETARUA_H

#include "Trabajador.h"

class Secretaria : public Trabajador {
private:

public:
	Secretaria();
	Secretaria(string id, int horas, float precioHoras, int annoLaborados);
};

#endif // !SECRETARIA_H