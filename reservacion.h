#ifndef RESERVACION_H
#define RESERVACION_H

#include<fecha.h>
#include <string>
using namespace std;

class Reservacion {
private:
    unsigned long codigoReserva;
    unsigned int duracion;
    unsigned long codigo; // de alojamiento
    unsigned long documentoHuesped;
    string metodoPago;
    float monto;
    string anotaciones;
public:
    Reservacion(unsigned long _codigoReserva, unsigned int _duracion, unsigned long _codigo, unsigned long _documentoHuesped, string _metodoPago, float _monto, string _anotaciones);
    Fecha* obtenerFechasReservadas() const ;

};

#endif // RESERVACION_H
