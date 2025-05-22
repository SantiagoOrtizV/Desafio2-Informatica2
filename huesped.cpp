#include "huesped.h"
#include <iostream>

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

void Huesped::mostrar(){
    cout << "documento: " << documento << endl;
    cout << "nombre: " << nombre << endl;
    cout << "correo: " << correo << endl;
    cout << "telefono: " << telefono << endl;
    cout << "antiguedad: " << antiguedad << endl;
    cout << "puntuacion: " << puntuacion << endl;
}
