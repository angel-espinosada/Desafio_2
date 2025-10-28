#include "estandar.h"
#include <iostream>
#include <cstring>
using namespace std;

Estandar::Estandar() : Usuario() {
    cantidadPublicidad = 0;

    // Reserva memoria para el texto de publicidad (100 caracteres)
    listPublicidad = new char[100];
    strcpy(listPublicidad, ""); // empieza vacío
}

Estandar::Estandar(const char* _idUser, const char* _passId, const char* _nombre,
                   const char* _ciudad, const char* _pais,
                   int _anio, int _mes, int _dia, const char* _tipoCuenta, int _cantidadPublicidad)
    : Usuario(_idUser, _passId, _nombre, _ciudad, _pais, _anio, _mes, _dia, _tipoCuenta)
{
    cantidadPublicidad = _cantidadPublicidad;

    listPublicidad = new char[100];
    strcpy(listPublicidad, "Escucha gratis con anuncios de UdeaTunes!");
}

Estandar::~Estandar() {
    delete[] listPublicidad;
}
