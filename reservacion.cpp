#include "reservacion.h"

Reservacion::Reservacion(unsigned long _codigoReserva, unsigned int _duracion, unsigned long _codigo, unsigned long _documentoHuesped, string _metodoPago, float _monto, string _anotaciones) {
    codigoReserva = _codigoReserva;
    duracion = _duracion;
    codigo = _codigo;
    documentoHuesped = _documentoHuesped;
    metodoPago = _metodoPago;
    monto = _monto;
    anotaciones = _anotaciones;
}

Fecha* Reservacion::obtenerFechasReservadas() const {
    Fecha* fechas = new Fecha[duracion];
    Fecha actual = fechaEntrada;

    for (unsigned int i = 0; i < duracion; ++i) {
        fechas[i] = actual;
        actual.sumarDias(1);
    }

    return fechas;
}

bool Reservacion::reservacionEsValida(Fecha* fechas, unsigned int nFechas, Fecha* fechasReservadas, unsigned int nReservadas) {
    for (unsigned int i = 0; i < nFechas; ++i) {
        for (unsigned int j = 0; j < nReservadas; ++j) {
            if (fechas[i] == fechasReservadas[j]) {
                return false;  // Colisión encontrada
            }
        }
    }
    return true;  // No hubo colisiones
}

unsigned long Reservacion::getCodigo() const {
    return codigo; }


