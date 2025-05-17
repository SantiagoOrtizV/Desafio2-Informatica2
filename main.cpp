#include <iostream>
#include "funcionesMenu.h"

using namespace std;

int main() {
    cout << "\n\n------DESAFIO II UDEASTAY-----\n\n" << endl;
    unsigned int ingresar;

    do {
        cout << "(0) Anfitrion.\n(1) Huesped.\n(2) Salir del programa\n";
        cout << "Ingrese tipo de usuario para iniciar sesion: ";
        cin >> ingresar;

        if (ingresar > 2) {
            cout << "Opción invalida. Por favor ingrese 0, 1 o 2.\n" << endl;
        }

    } while (ingresar > 2);

    if (ingresar == 0) {
        menuAnfitrion();
    } else if (ingresar == 1) {
        menuHuesped();
    } else {
        cout << "\nSaliendo del programa...." << endl;
    }

    return 0;
}
