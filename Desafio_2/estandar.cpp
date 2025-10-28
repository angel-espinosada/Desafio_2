#include "estandar.h"
#include <iostream>
#include <cstring>
using namespace std;

Estandar::Estandar() : Usuario() {
    cantidadPublicidad = 0;
    listPublicidad = new char[50];
    strcpy(listPublicidad, "Publicidad no disponible");
    cantidadPublicidad = 0;
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
