#include "alojamiento.h"

Alojamiento::Alojamiento(unsigned long _codigo, string _nombre, unsigned long _documento, string _departamento, string _municipio, string _tipo, string _direccion, unsigned long _precio, string _amenidades) {
    codigo = _codigo;
    nombre = _nombre;
    documento = _documento;
    departamento = _departamento;
    municipio = _municipio;
    tipo = _tipo;
    direccion = _direccion;
    precio = _precio;
    amenidades = _amenidades;
}
