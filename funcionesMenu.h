#ifndef FUNCIONESMENU_H
#define FUNCIONESMENU_H

#include <iostream>
using namespace std;

void menuHuesped() {
    unsigned int opcion;

    do {
        cout << "\n------ MENU HUESPED ------\n";
        cout << "(0) Reservar alojamiento\n";
        cout << "(1) Anular reservacion\n";
        cout << "(2) Salir del sistema\n";
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

    switch (opcion) {
    case 0:
        cout << "\nUsted ha seleccionado: Reservar alojamiento.\n";
        break;
    case 1:
        cout << "\nUsted ha seleccionado: Anular reservacion.\n";
        break;
    case 2:
        cout << "\nSaliendo del sistema...\n";
        break;
    }
}

void menuAnfitrion(){
    unsigned int opcion;

    do {
        cout << "\n------ MENU ANFITRION ------\n";
        cout << "(0) Consultar reservaciones activas\n";
        cout << "(1) Anular reservacion\n";
        cout << "(2) Actualizar historico\n";
        cout << "(3) Salir del sistema\n";
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

    switch (opcion) {
    case 0:
        cout << "\nUsted ha seleccionado: Consultar reservaciones activas.\n";
        break;
    case 1:
        cout << "\nUsted ha seleccionado: Anular reservacion.\n";
        break;
    case 2:
        cout << "\nUsted ha seleccionado: Actualizar historico.\n";
        break;
    case 3:
        cout << "\nSaliendo del sistema...\n";
        break;
    }
}
#endif // FUNCIONESMENU_H
