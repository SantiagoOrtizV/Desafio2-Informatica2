#ifndef AUXILIARHISTORICOELIMINARDESPUES_H
#define AUXILIARHISTORICOELIMINARDESPUES_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "fecha.h"
#include "reservacion.h"

using namespace std;

void transferirReservacionesAHistorico() {
    string fechaInput;
    cout << "Ingrese la fecha limite (YYYY-MM-DD): ";
    cin >> fechaInput;

    Fecha fechaLimite = Fecha::desdeString(fechaInput);

    ifstream archivoOriginal("reservaciones.txt");
    ofstream archivoTemporal("reservaciones_temp.txt");
    ofstream archivoHistorico("historico.txt", ios::app); // append al histórico

    string linea;
    while (getline(archivoOriginal, linea)) {
        istringstream ss(linea);
        string token;

        // Leer campos necesarios
        getline(ss, token, ',');
        string codigoReserva = token;

        getline(ss, token, ',');
        string fechaEntradaStr = token;

        getline(ss, token, ',');
        unsigned int duracion = stoi(token);

        // El resto de la línea se guarda como está:
        string restoLinea;
        getline(ss, restoLinea);  // el resto después de duración

        Fecha fechaEntrada = Fecha::desdeString(fechaEntradaStr);
        Fecha fechaSalida = fechaEntrada;
        fechaSalida.sumarDias(duracion);

        // Aquí usamos la sobrecarga del operador <
        if (fechaSalida < fechaLimite) {
            archivoHistorico << linea << endl;
        } else {
            archivoTemporal << linea << endl;
        }
    }

    archivoOriginal.close();
    archivoTemporal.close();
    archivoHistorico.close();

    // Reemplazar el archivo original
    remove("reservaciones.txt");
    rename("reservaciones_temp.txt", "reservaciones.txt");

    cout << "Transferencia completada correctamente.\n";
}

#endif // AUXILIARHISTORICOELIMINARDESPUES_H
