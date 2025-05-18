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
