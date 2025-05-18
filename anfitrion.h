#ifndef ANFITRION_H
#define ANFITRION_H

#include <string>
using namespace std;

class Anfitrion {
private:
    unsigned long documento;
    string nombre;
    string correo;
    unsigned long telefono;
    float puntuacion;
    unsigned long codigosAlojamiento; // cambiar a array si es necesario

public:
    Anfitrion(unsigned long _documento, string _nombre, string _correo, unsigned long _telefono, float _puntuacion, unsigned long _codigosAlojamiento);
};

#endif // ANFITRION_H

