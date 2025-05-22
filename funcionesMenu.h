#ifndef FUNCIONESMENU_H
#define FUNCIONESMENU_H

#include <iostream>
#include <huesped.h>
#include <anfitrion.h>
#include <fstream>
#include <sstream>
#include <cctype>

using namespace std;

string pedirDocumentoValido() {
    string documento;

    while (true) {
        cout << "Ingrese su numero de documento: ";
        cin >> documento;

        if (documento.length() > 10) {
            cout << "Error: El documento no debe tener más de 10 dígitos.\n";
            continue;
        }

        bool esNumerico = true;
        for (char c : documento) {
            if (!isdigit(c)) {
                esNumerico = false;
                break;
            }
        }

        if (!esNumerico) {
            cout << "Error: El documento debe contener solo números.\n";
            continue;
        }

        break;
    }

    return documento;
}

bool inicioCargaHuesped(Huesped &huesped0){
    string ruta;
    cout << "ruta huespedes: "; //luego quitar y poner ruta fija
    cin >> ruta;
    ifstream archivo(ruta);
    string linea;
    string documentoBuscado = pedirDocumentoValido();

    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string doc, nombre, correo, telefono, antiguedadStr, puntuacionStr;

        getline(ss, doc, ',');

        if (doc == documentoBuscado) {
            getline(ss, nombre, ',');
            getline(ss, correo, ',');
            getline(ss, telefono, ',');
            getline(ss, antiguedadStr, ',');
            getline(ss, puntuacionStr, ',');
            unsigned short int antiguedad = stoi(antiguedadStr);
            float puntuacion = stof(puntuacionStr);
            huesped0 = Huesped(doc,nombre,correo,telefono,antiguedad,puntuacion);
            return true;
        }
    }

    return false; // No se encontró el cliente
}

bool inicioCargaAnfitrion(Anfitrion &Anfitrion0){
    string ruta;
    cout << "ruta anfitriones: "; //luego quitar y poner ruta fija
    cin >> ruta;
    ifstream archivo(ruta);
    string linea;
    string documentoBuscado = pedirDocumentoValido();

    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string doc, nombre, correo, telefono, antiguedadStr, puntuacionStr;

        getline(ss, doc, ',');

        if (doc == documentoBuscado) {
            getline(ss, nombre, ',');
            getline(ss, correo, ',');
            getline(ss, telefono, ',');
            getline(ss, antiguedadStr, ',');
            getline(ss, puntuacionStr, ',');
            int antiguedad = stoi(antiguedadStr);
            float puntuacion = stof(puntuacionStr);
            Anfitrion0 = Anfitrion(doc,nombre,correo,telefono,antiguedad,puntuacion);
            return true;
        }
    }

    return false;
}

void cancelarReservacion(){
    string nRes;
    cout << "Ingrese el numero de reservacion: ";
    cin >> nRes;
    string ruta;
    cout << "ruta anfitriones: "; //luego quitar y poner ruta fija
    cin >> ruta;
    ifstream archivo(ruta);
    string linea;
    string reservaBuscada = nRes;

    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string doc, nombre, correo, telefono, antiguedadStr, puntuacionStr;

        getline(ss, doc, ',');

        if (doc == documentoBuscado) {
            getline(ss, nombre, ',');
            getline(ss, correo, ',');
            getline(ss, telefono, ',');
            getline(ss, antiguedadStr, ',');
            getline(ss, puntuacionStr, ',');
            int antiguedad = stoi(antiguedadStr);
            float puntuacion = stof(puntuacionStr);
            Anfitrion0 = Anfitrion(doc,nombre,correo,telefono,antiguedad,puntuacion);
            return true;
        }
    }

    return false;
}

void menuHuesped() {
    unsigned int opcion;
    Huesped huesped0;

    while (true){
        if (inicioCargaHuesped(huesped0)){
            do {
                huesped0.mostrar(); // quitar despues
                cout << "\n------ MENU HUESPED ------\n\n";
                cout << "(0) Reservar alojamiento\n";
                cout << "(1) Anular reservacion\n";
                cout << "(2) Cerrar sesion\n\n";
                cout << "Ingrese la opcion que desea realizar: ";
                cin >> opcion;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    opcion = 99;
                    cout << "Entrada invalida. Intente de nuevo.\n";
                }
                else if (opcion > 2) {
                    cout << "Opcion invalida. Por favor ingrese 0, 1 o 2.\n";
                }

            } while (opcion > 2);
        }

        else {
            cout << "Inicio de sesion invalido..." << endl;
        }

        switch (opcion) {
        case 0:
            cout << "\nUsted ha seleccionado: Reservar alojamiento.\n";
            break;
        case 1:
            cout << "\nUsted ha seleccionado: Anular reservacion.\n";
            void anularReservacion();
            break;
        case 2:
            cout << "\nCerrando Sesion...\n";
            //destructor huesped
            return;
            break;
        }
    }
}

void menuAnfitrion(){
    unsigned int opcion;
    Anfitrion anfitrion0;

    while (true){
        if (inicioCargaAnfitrion(anfitrion0)){
            do {
                anfitrion0.mostrar(); // quitar despues
                cout << "\n------ MENU ANFITRION ------\n\n";
                cout << "(0) Consultar reservaciones activas\n";
                cout << "(1) Anular reservacion\n";
                cout << "(2) Actualizar historico\n";
                cout << "(3) Cerrar sesion\n\n";
                cout << "Ingrese la opcion que desea realizar: ";
                cin >> opcion;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    opcion = 99;
                    cout << "Entrada invalida. Intente de nuevo.\n";
                }
                else if (opcion > 3) {
                    cout << "Opcion invalida. Por favor ingrese 0, 1 o 2.\n";
                }

            } while (opcion > 3);
        }

        else {
            cout << "Inicio de sesion invalido..." << endl;
        }

        switch (opcion) {
        case 0:
            cout << "\nUsted ha seleccionado: Consultar reservaciones activas.\n";
            break;
        case 1:
            cout << "\nUsted ha seleccionado: Anular reservacion.\n";
            void anularReservacion();
            break;
        case 2:
            cout << "\nUsted ha seleccionado: Actualizar historico.\n";
            break;
        case 3:
            cout << "\nCerrando Sesion...\n";
            //destructor anfitrion
            return;
            break;
        }
    }
}
#endif // FUNCIONESMENU_H
