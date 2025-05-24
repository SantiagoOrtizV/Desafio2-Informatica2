#include "anfitrion.h"
#include <iostream>

Anfitrion::Anfitrion() {
    documento = "";
    nombre = "";
    correo = "";
    telefono = "";
    antiguedad = 0;
    puntuacion = 0.0;
}

Anfitrion::Anfitrion(string _documento, string _nombre, string _correo, string _telefono, unsigned short int _antiguedad, float _puntuacion) {
    documento = _documento;
    nombre = _nombre;
    correo = _correo;
    telefono = _telefono;
    antiguedad = _antiguedad;
    puntuacion = _puntuacion;
}

void Anfitrion::mostrar(){
    cout << "documento: " << documento << endl;
    cout << "nombre: " << nombre << endl;
    cout << "correo: " << correo << endl;
    cout << "telefono: " << telefono << endl;
    cout << "antiguedad: " << antiguedad << endl;
    cout << "puntuacion: " << puntuacion << endl;
}
void Anfitrion::mostrarReservacionesAnfitrion(const string& documentoAnfitrion) {
    const int MAX_A = 100;
    string codigosAlojamiento[MAX_A];
    int countAloj = 0;

    ifstream fileAloj("alojamientos.txt");
    string linea;
    while (getline(fileAloj, linea)) {
        istringstream ss(linea);
        string codigo, nombre, doc, otros;
        getline(ss, codigo, ',');
        getline(ss, nombre, ',');
        getline(ss, doc, ',');

        if (doc == documentoAnfitrion) {
            codigosAlojamiento[countAloj++] = codigo;
        }
    }
    fileAloj.close();

    ifstream fileRes("reservaciones.txt");
    while (getline(fileRes, linea)) {
        istringstream ss(linea);
        string codRes, fechaStr, durStr, codAloj;

        getline(ss, codRes, ',');
        getline(ss, fechaStr, ',');
        getline(ss, durStr, ',');
        getline(ss, codAloj, ',');

        for (int i = 0; i < countAloj; i++) {
            if (codAloj == codigosAlojamiento[i]) {
                Fecha entrada = Fecha::desdeString(fechaStr);
                unsigned int dur = stoi(durStr);
                Fecha* dias = entrada.obtenerRangoFechas(dur);

                cout << "Alojamiento " << codAloj << " reservado en:\n";
                for (int j = 0; j < dur; j++) {
                    cout << "  - " << dias[j].toString() << endl;
                }
                delete[] dias;
            }
        }
    }
    fileRes.close();
}


