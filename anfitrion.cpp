#include "anfitrion.h"

Anfitrion::Anfitrion(unsigned long _documento, string _nombre, string _correo, unsigned long _telefono, float _puntuacion, unsigned long _codigosAlojamiento) {
    documento = _documento;
    nombre = _nombre;
    correo = _correo;
    telefono = _telefono;
    puntuacion = _puntuacion;
    codigosAlojamiento = _codigosAlojamiento;
}
