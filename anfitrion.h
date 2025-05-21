#ifndef ANFITRION_H
#define ANFITRION_H

#include <string>
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
};

#endif // ANFITRION_H

