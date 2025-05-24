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

bool Alojamiento::estaDisponible(Fecha* nuevasFechas, unsigned int cantidadNuevas, Fecha* fechasOcupadas, unsigned int cantidadOcupadas) {
    for (unsigned int i = 0; i < cantidadNuevas; ++i) {
        for (unsigned int j = 0; j < cantidadOcupadas; ++j) {
            if (nuevasFechas[i] == fechasOcupadas[j]) {
                return false; // Hay conflicto
            }
        }
    }
    return true; // Todas las fechas están disponibles
}

unsigned long Alojamiento::getDocumento() const {
    return documento; }

