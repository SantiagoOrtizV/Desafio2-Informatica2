#ifndef FECHA_H
#define FECHA_H

#include <sstream>
#include <string>
#include <iomanip>
using namespace std;


class Fecha {
private:
    unsigned int dia;
    unsigned int mes;
    unsigned int anio;

public:
    Fecha();
    Fecha(unsigned int _dia, unsigned int _mes, unsigned int _anio);
    unsigned int getDia() const;
    unsigned int getMes() const;
    unsigned int getAnio() const;
    bool operator<(const Fecha& otra) const;
    bool operator==(const Fecha& otra) const;
    bool operator>(const Fecha& otra) const;
    unsigned int diasEnMes(unsigned int mes, unsigned int anio)const;
    void sumarDias(unsigned int diasHospedajes);
    bool esFechaValida() const;
    string toString() const;
    static Fecha desdeString(const string& str);
    Fecha* obtenerRangoFechas(unsigned int duracion);


};

#endif // FECHA_H

