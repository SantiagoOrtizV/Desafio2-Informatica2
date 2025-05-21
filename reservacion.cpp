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
    // Crear un arreglo dinámico para guardar todas las fechas
    unsigned int diasHospedaje;
    Fecha* fechas = new Fecha[diasHospedaje];


    Fecha fechaEntrada;// Copiar la fecha de entrada
    Fecha actual = fechaEntrada;

    // Generar cada día uno por uno
    for (unsigned int i = 0; i < duracion; ++i) {
        fechas[i] = actual;
        actual.sumarDias(1); // avanzamos un día
    }

    return fechas;
}
