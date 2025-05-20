#include "fecha.h"

Fecha::Fecha(unsigned int _dia, unsigned int _mes, unsigned int _anio) {
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

unsigned int Fecha::getDia() const {
    return dia; }

unsigned int Fecha::getMes() const {
    return mes; }

unsigned int Fecha::getAnio() const {
    return anio; }

bool Fecha::operator<(const Fecha& otra) const {
    if (anio < otra.anio)
        return true;
    else if (anio == otra.anio && mes < otra.mes)
        return true;
    else if (anio == otra.anio && mes == otra.mes && dia < otra.dia)
        return true;
    else
        return false;
}

bool Fecha::operator==(const Fecha& otra) const {
    return (dia == otra.dia && mes == otra.mes && anio == otra.anio);
}

bool Fecha::operator>(const Fecha& otra) const {
    return !(*this < otra) && !(*this == otra);
}


unsigned int Fecha::diasEnMes(unsigned int mes, unsigned int anio)const{
    switch (mes) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        // Anio Bisiesto
        if ((anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0))
            return 29;
        else
            return 28;

    default:
        return 30;
    }
}

void Fecha::sumarDias(unsigned int diasHospedaje){
    dia+= diasHospedaje;
    while (dia > diasEnMes(mes, anio)) {
        dia -= diasEnMes(mes, anio);
        mes++;
        if (mes > 12) {
            mes = 1;
            anio++;
        }
    }
}

bool Fecha::esFechaValida() const {
    if (mes < 1 || mes > 12)
        return false;

    unsigned int maxDias = diasEnMes(mes, anio);
    if (dia < 1 || dia > maxDias)
        return false;

    return true;
}


