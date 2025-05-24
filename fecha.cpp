#include "fecha.h"

Fecha::Fecha() {
    dia = 1;
    mes = 1;
    anio = 2000;
}


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

string Fecha::toString() const {
    ostringstream oss;
    oss << anio << "-" << setw(2) << setfill('0') << mes << "-" << setw(2) << setfill('0') << dia;
    return oss.str();
}

Fecha Fecha::desdeString(const string& str) {
    int dia, mes, anio;
    sscanf(str.c_str(), "%d-%d-%d", &anio, &mes, &dia);
    return Fecha(dia, mes, anio);
}

Fecha* Fecha::obtenerRangoFechas(unsigned int duracion) {
    Fecha* fechas = new Fecha[duracion];
    Fecha copia = *this;
    for (unsigned int i = 0; i < duracion; ++i) {
        fechas[i] = copia;
        copia.sumarDias(1);
    }
    return fechas;
}



