#include <iostream>
#include "funcionesMenu.h"
#include "huesped.h"
#include "anfitrion.h"
#include "alojamiento.h"
#include "reservacion.h"
#include "fecha.h"

using namespace std;

int main() {
    unsigned int ingresar;

    while (true){
        do {
            cout << "\n\n------DESAFIO II UDEASTAY-----\n\n";
            cout << "(0) Anfitrion.\n(1) Huesped.\n(2) Salir del programa\n" << endl;
            cout << "Ingrese tipo de usuario para iniciar sesion: ";
            cin >> ingresar;

            if (ingresar > 2) {
                cout << "Opción invalida. Por favor ingrese 0, 1 o 2.\n" << endl;
            }

        } while (ingresar > 2);

        if (ingresar == 0) {
            menuAnfitrion();
        }
        else if (ingresar == 1) {
            menuHuesped();
        }
        else {
            cout << "\nSaliendo del programa...." << endl << endl;
            return 0;
        }
    }
}
