#ifndef HUESPED_H
#define HUESPED_H

#include <string>
using namespace std;

class Huesped {
private:
    string documento;
    string nombre;
    string correo;
    string telefono;
    unsigned short int antiguedad;
    float puntuacion;

public:
    Huesped();
    Huesped(string _documento, string _nombre, string _correo, string _telefono, unsigned short int _antiguedad, float _puntuacion);
    void mostrar();
};

#endif // HUESPED_H
