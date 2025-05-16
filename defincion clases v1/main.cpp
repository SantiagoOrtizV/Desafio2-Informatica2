#include <iostream>

using namespace std;

class Huesped {
    private:
        unsigned long documento;//RELACIONADO CON LA CLASE HUESPED EL ALOJAMIENTO BUSCAR RELACION PARA ELIMINAR CLONACION
        string nombre;
        string correo;
        unsigned long telefono;
        float puntacion;
    public :
        Huesped(unsigned long _documento, string _nombre, string _correo, unsigned long _telefono, float _puntacion){
            documento = _documento;
            nombre = _nombre;
            correo = _correo;
            telefono = _telefono;
            puntacion = _puntacion;
        }
};

class Anfitrion {
    private:
        unsigned long documento;
        string nombre ;
        string correo ;
        unsigned long telefono ;
        float puntuacion ;
        unsigned long codigosAlojamiento;//ARRAY DINAMICO RELACIOADO CON ALOJAMIENTOS
    public :
        Anfitrion(unsigned long _documento, string _nombre, string _correo, unsigned long _telefono, float _puntuacion, unsigned long _codigosAlojamiento){
            documento = _documento;
            nombre = _nombre;
            correo = _correo;
            telefono = _telefono;
            puntuacion = _puntuacion;
            codigosAlojamiento = _codigosAlojamiento;//POSIBLE CAMBIO NECESARIO A ARRAY DINAMICO PARA MANEJAR MUCHOS CODIGOS DE ALOJAMIENTOS
        }
};

class Alojamiento {
    private:
        unsigned long codigo;//RELACIONADO CON LA RESERVACION
        string nombre;
        unsigned long documento;//RELACIONADO CON ANFITRION
        string departamento;
        string municipio;
        string tipo;
        string direccion;
        unsigned long precio;
        string amenidades;
      //fecha fechasreservadas
        //clase fecha necesaria para este proceso fechas reservadas
    public :
        Alojamiento(unsigned long _codigo, string _nombre,unsigned long _documento, string _departamento, string _municipio, string _tipo, string _direccion, unsigned long _precio, string _amenidades  ){
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

};

class Reservacion{
    private:
        unsigned long codigoReserva;
        //Fecha fechaEntrada
        unsigned int duracion;
        unsigned long codigo;//RELACIONADO Y DUPLICADO CON ALOJAMIENTO
        unsigned long documentoHuesped;//RELACIONADO CON LA CLASE HUESPED EL ALOJAMIENTO BUSCAR RELACION PARA ELIMINAR CLONACION
        string metodoPago;
        //Fecha fechaPAgo
        float monto;
        string anotaciones; //POSIBLE MODIFICACION PARA SOLO USAR CARACTERES NECESARIOS (VERFICACION PARA CANTIDAD)
    public:
        Reservacion(unsigned long _codigoReserva, unsigned int _duracion, unsigned long _codigo, unsigned long _documentoHuesped , string _metodoPago, float _monto, string _anotaciones){
            codigoReserva = _codigoReserva;
            duracion = _duracion; //RELACIONADO VERIFICACION FECHA
            codigo = _codigo;
            documentoHuesped = _documentoHuesped;
            metodoPago = _metodoPago;
            monto = _monto;
            anotaciones = _anotaciones;
        }
};
//INCLUIR CLASE FECHA EN TODAS LAS DEMAS CLASES PRACTICAMENTE
class Fecha{
    private:
        unsigned int dia;
        unsigned int mes;
        unsigned int anio;
    public:
        Fecha(unsigned int _dia, unsigned int _mes, unsigned int _anio){
            dia = _dia;
            mes = _mes;
            anio = _anio;
        }

};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
