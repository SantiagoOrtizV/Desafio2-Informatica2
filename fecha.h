#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    unsigned int dia;
    unsigned int mes;
    unsigned int anio;

public:
    Fecha(unsigned int _dia, unsigned int _mes, unsigned int _anio);
    unsigned int diasEnMes(unsigned int mes, unsigned int anio)const;
    void sumarDias(unsigned int diasHospedajes);
    bool esFechaValida() const;
};

#endif // FECHA_H

