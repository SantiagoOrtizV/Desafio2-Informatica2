#ifndef ANFITRION_H
#define ANFITRION_H

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "alojamiento.h"
#include "reservacion.h"
#include "Fecha.h"


using namespace std;

class Anfitrion {
private:
    string documento;
    string nombre;
    string correo;
    string telefono;
    unsigned short int antiguedad;
    float puntuacion;

public:
    Anfitrion();
    Anfitrion(string _documento, string _nombre, string _correo, string _telefono, unsigned short int _antiguedad, float _puntuacion);
    void mostrar();
    void mostrarReservacionesAnfitrion(const string& documentoAnfitrion);
};

#endif // ANFITRION_H

