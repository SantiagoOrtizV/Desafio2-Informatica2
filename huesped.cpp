#include "huesped.h"

Huesped::Huesped() {
    documento = "";
    nombre = "";
    correo = "";
    telefono = "";
    antiguedad = 0;
    puntuacion = 0.0;
}

Huesped::Huesped(string _documento, string _nombre, string _correo, string _telefono, unsigned short int _antiguedad, float _puntuacion) {
    documento = _documento;
    nombre = _nombre;
    correo = _correo;
    telefono = _telefono;
    antiguedad = _antiguedad;
    puntuacion = _puntuacion;
}
