#ifndef HUESPED_H
#define HUESPED_H

#include <string>
using namespace std;

class Huesped {
private:
    unsigned long documento;
    string nombre;
    string correo;
    unsigned long telefono;
    float puntacion;

public:
    Huesped(unsigned long _documento, string _nombre, string _correo, unsigned long _telefono, float _puntacion);
};

#endif // HUESPED_H
