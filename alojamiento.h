#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H

#include <string>
#include <fecha.h>
using namespace std;

class Alojamiento {
private:
    unsigned long codigo;
    string nombre;
    unsigned long documento; // del anfitrión
    string departamento;
    string municipio;
    string tipo;
    string direccion;
    unsigned long precio;
    string amenidades;

public:
    Alojamiento(unsigned long _codigo, string _nombre, unsigned long _documento, string _departamento, string _municipio, string _tipo, string _direccion, unsigned long _precio, string _amenidades);
    bool estaDisponible(Fecha* nuevasFechas, unsigned int cantidadNuevas, Fecha* fechasOcupadas, unsigned int cantidadOcupadas);

};

#endif // ALOJAMIENTO_H
